import glob
import os


def build_cmake_file(cpp_files_list):
    base_path = get_base_path()

    cmake_file_path = os.path.join(base_path, "CMakeLists.txt")

    if os.path.isdir(cmake_file_path):
        print "Sorry, file CMakeLists.txt is a directory"
    elif not os.access(base_path, os.W_OK):
        print "You can't write in this directory"

    file_contents = "cmake_minimum_required(VERSION 3.6)\n"
    file_contents += "project(crypt)\n"
    file_contents += "\n"
    file_contents += "set(CMAKE_CXX_FLAGS \"${CMAKE_CXX_FLAGS} -std=c++11\")\n"
    file_contents += "\n"
    file_contents += "set(SOURCE_FILES " + " ".join(cpp_files_list) + ")\n"
    file_contents += "add_executable(crypt ${SOURCE_FILES})\n"

    cmake_file = open(cmake_file_path, "w+")
    cmake_file.write(file_contents)

    print "Success"


def get_base_path():
    return os.path.abspath(os.path.join(os.path.dirname(os.path.abspath(__file__)), ".."))


def get_src_path():
    return os.path.join(get_base_path(), "src")


def scan_directory(directory):
    base_path_length = len(get_base_path())

    files = []

    for obj_name in glob.glob(os.path.join(directory, "*")):
        absolute_path = os.path.join(directory, obj_name)

        if os.path.isdir(absolute_path):
            files.extend(scan_directory(absolute_path))
        else:
            if (len(obj_name) > 4) and (obj_name[-4:] == ".cpp"):
                files.append(absolute_path[base_path_length:].strip(" /"))

    return files

cpp_files = scan_directory(get_src_path())

build_cmake_file(cpp_files)
