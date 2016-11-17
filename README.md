# Crypt library

## How to install
1. Clone this repo locally.
2. Copy `src` directory content to your project.
3. Modify your `CMakeLists.txt` file (if you are using it).
4. Require `src/ventaquil/crypt.h` to get access to all functions - or include parts of this library.

You can see example `main.cpp` file in this repo. And don't forget about namespaces!

## Implemented functions

##### Important! I'm not using namespaces in this examples.

* Unsigned Modulo Function [\[Wiki\]](https://en.wikipedia.org/wiki/Modulo_operation)

```c++
    mod(-15, 7); // returns 6
    -15 % 7; // returns -1
```

* Modular Exponentiation [\[Wiki\]](https://en.wikipedia.org/wiki/Modular_exponentiation)

```c++
    pow_mod(8, 5525, 43); // returns 22
```

* Congruences [\[Wiki\]](https://en.wikipedia.org/wiki/Congruence_relation)

```c++
    congruence(22, 8, 7); // returns true
```

* Logarithm Function with the specified base

```c++
    log(22, 16); // return around 1.115
```

* Greatest Common Divisor (GCD) [\[Wiki\]](https://en.wikipedia.org/wiki/Greatest_common_divisor)

```c++
    gcd(164, 88); // returns 4
```

* Least Common Multiple (LCM) [\[Wiki\]](https://en.wikipedia.org/wiki/Least_common_multiple)

```c++
    lcm(36, 1782); // returns 3564
```

* Jacobi Symbol [\[Wiki\]](https://en.wikipedia.org/wiki/Jacobi_symbol)

```c++
    jacobi(851, 567); // returns 1
```
