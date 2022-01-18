## Remember

- Preprocessor directives, namespace, main(), output and input, cascading, return statement.
- `\n` and `\t` in printing.
- Taking strings as input through `cin` or `getline()`.
- Behaviour of `cin`, `cin.get()`, `cin.getline()`, `getline()`, `gets()` and `cout`.
- A `variable` is a reserved block in memory (RAM) .
  - It is identified by a unique name .
  - It allows storage and retrieval of data .
  - It can store one value at a time .
  - Its value can change .

## Data Types

- Data in a program is kept in variables which are capable of storing a certain kind of data formats called data types.

- **Data Types can be categorised into 3 types :**
  1. Built-in Data Types (Primitives)
  2. Derived Data Types
  3. User-defined Data Types

![](https://i.imgur.com/2Ghc7Ky.png)

|   DATA TYPE   |      MEANING      |    SIZE     |
| :-----------: | :---------------: | :---------: |
|     bool      |      boolean      |  undefined  |
|     char      |     character     |   8-bits    |
|    wchar_t    |     wide char     |   16-bits   |
|   char16_t    |   unicode char    |   16-bits   |
|   char32_t    |   unicode char    |   32-bits   |
|     short     |   short integer   |   16-bits   |
|      int      |      integer      |   16-bits   |
|     long      |   long-integer    |   32-bits   |
|   long long   | very-long integer |   64-bits   |
| unsigned char | single-precision  |   32-bits   |
|     float     | double-precision  |   64-bits   |
|    double     | double-precision  | 10/16 bytes |

- Size of different data types.
  - Number of bits each data type takes also depends on compiler and can change based on a system being 32-bit or 64-bit.
  - Nowadays, we have 64-bits machines, before that there were 32-bits and 16-bits machines before that. Mostly, in languages like C/C++ the size of integer depends upon the bit size of the machine.
  - If machine is 16-bits then the integer by default takes 2 bytes (1 Byte = 8 bits), if machine is 64 bits then integer takes 8 bytes and so on.
  - It is only applicable for integers, float always takes 4 bytes and char always takes 1 byte only, it is only the size of integer that depeneds on the bit-size of the machine.
  - To check the size of a data type use the `sizeof` operator.
- The real difference between different data types is how much memory will be allocated when you create a variable with that data type.

  - At the most ground level even alphabets and characters are just numbers, and these numeric values to alphabets were assigned by **American Standard Code for Information Interchange ASCII**. Under this system A = 65, B = 66.....Z = 90. a = 97, b = 98... z = 122, Numeric 0 = 48 and 9 = 57.

- We can also turn these data types to pointers(_) and references(&) by appending the required symbol to the type. eg. `int_`, `int&`.

## Storing Data types

- Sign bit is used to store the negative number. Say we want to store 10. Then 4 bits from right in order of writing from left to right would be 1010 in 16 bits it changes to 0000000000001010 for negative 10 first the binary form is complemented that is inversion of 0's and 1's with respect to positive version of the number so we get 1111111111110101 and this is called **1's complement**. Then 1 is added at the rightmost bit giving us 1111111111110110 and this is called **2's complement** of number. In any language the negative number is stored in the 2's complement form.
  - Binary number is complemented called 1's complement and then added +1 to get 2's complement to get negative of original number we complemented, leading to MSB or leading bit becoming 1 for negative.

## Declaration VS Defination

- Declaration mean informing to the compiler the following information: name of the variable, type of value it holds. i.e., declaration gives details about the properties of a variable for symbol table entry.
- Definition of a variable says where the variable gets stored. i.e., memory for the variable is allocated during the definition of the variable.
  - It mean allocating the memory and assigning the value.
- They are mostly done together.
- A variable or a function can be declared any number of times but, it can be defined only once.

- A declaration introduces an identifier and describes its type, be it a type, object, or function. **A declaration is what the compiler needs to accept references to that identifier.**
  - These are declarations:
  ```cpp
  extern int bar;
  extern int g(int, int);
  double f(int, double); // extern can be omitted for function declarations
  class foo; // no extern allowed for type declarations
  ```
- A definition actually instantiates/implements the identifier. **It's what the linker needs in order to link references to those entities.**
  - These are definitions corresponding to the above declarations:
  ```cpp
  int bar;
  int g(int lhs, int rhs) {return lhs*rhs;}
  double f(int i, double d) {return i+d;}
  class foo {};
  ```
- A definition can be used in the place of a declaration.

- An identifier can be declared as often as you want. Thus, the following is legal in C and C++:

  ```cpp
  double f(int, double);
  double f(int, double);
  extern double f(int, double); // the same as the two above
  extern double f(int, double);
  ```

  - However, it must be defined exactly once. If you forget to define something that's been declared and referenced somewhere, then the linker doesn't know what to link references to and complains about a missing symbols. If you define something more than once, then the linker doesn't know which of the definitions to link references to and complains about duplicated symbols.

- Literal is a direct value. eg. "Hello" is a String literal, 23 is a int literal etc.
- For integer type of variables we can assign a literal in decimal number system, octal or hexa and these type of ints, can be used in short, long, long long and even for char data type.
  - By default it's a base 10 integer, if prefixed with 0 it's Octal, if prefixed with 0x with Hexdecimal
  - In cout all the system are converted to decimal and printed.
  - In character all are converted to decimal and their ASCII values are printed.
- To write float as 12.98 then by default the value is double. Better to have F or f at the end for float literals.
- Similarly with integar it's int if you wanna assign long then use L suffix, and LL for long long.
- NOTE: If we assign a float value to a char then float value is converted into character and this is done implicitly that's why it is called `type coercion`.
- To use the number in scientific notation use e followed by the raised power. eg. 12e2 will be depicted as 1200, 12e-1 as 1.2 etc.

## Overflow

- Say we have a char x and as we know the range of char is from -128 to 127 so we might get an error or warning upon storing 130 depending on compiler. So from char x = 127 if we do x++ in next line since the capacity of char is only till 127 max so it will come back to -128. Think of it as a round pattern with numbers from -128 to 127. If you do next or increment after last number 127 or 360 degree you come back to -128 or 0th degree. Similarly if we are at x = -128 and we do x-- then we come back to 127.

- Cycling is done when the we try to exceed any data type's limit (overflow).

## NOTE

- % works only on int and char type data and not for float.
- Arithematic Operators follow PEMDAS.
- There are 4 kinds of pre/post increment and decrement operators.

  1. Pre Increment (++x) Unary operator, much faster than x = x+1 a binary operator.
  2. Post Increment (x++)
  3. Pre Decrement (--x)
  4. Post Decrement (x--)

- Bitwise operations occur on the bits of data and not on the entire data as single unit. Bit-Wise Operators which are available :

  - & (bitwise AND) Takes two numbers as operands and does AND on every bit of two numbers. The result of AND is 1 only if both bits are 1.

  - | (bitwise OR) Takes two numbers as operands and does OR on every bit of two numbers. The result of OR is 1 any of the two bits is 1.

  - ^ (bitwise XOR) Takes two numbers as operands and does XOR on every bit of two numbers. The result of XOR is 1 if the two bits are different.

  - << (left shift) Takes two numbers, left shifts the bits of the first operand, the second operand decides the number of places to shift. If a number x is left shift by i positions then result is x \* 2^i.Sign bit is not affected and stays same.

  - > > (right shift) Takes two numbers, right shifts the bits of the first operand, > > the second operand decides the number of places to shift. > > If a number x is right shift by i then x will get divided by 2^i. Sign bit is not affected and stays same.

  - ~ (bitwise NOT) Takes one number and inverts all bits of it

- `typedef` used to define our own data type or giving alias to some other data type. So it is easier for us to keep track, prevent errors and make code more readable.
  eg. typedef int i; //Now we can use i instead of int
  Above example gives alias to data type int used as i. Because we might not know what's the use of 2 int variables declared out of nowhere so it is better to have 2 int variables which are declared as i m1,m2 to give us an idea these something to do with marks.

- Most of the time typedef is used in competetive programming to make things fast. eg. typedef long long l.

- Explicit type conversion => (newtype)var OR newtype(var)

  - This doesn't change type of original variable but it creates a soft copy with new type which we can either store somewhere or use to print.
    eg. int x = 65;
    cout<< char(x); //A
    cout<< (char)x; //A

- **Operators are just functions that are already overloaded in standard cpp library.**

## Declaring Constants

- `Enum` is used to define a group of related constants under one name. -` #define` mon 0 //This is a preprocessor. As it is starting with # so no need of ; at the end.
- int const mon = 0; //`const` keyword is used to make the path constant i.e. only read access. _NOTE path not storage._

## Header Files

- Header files are traditionally used to declare certain types of functions so they can be used throughout your program.
- We include header files using #include pre-processor directive in our cpp file which basically copy and paste that header file in that cpp file. Providing the cpp files with declarations.
- Header gaurds are basically the checks on our header files so that they won't get included in our cpp files twice as the header files gets copied meaning we can't afford to copy the header files twice in our program.
  - `#pragma once` a pre-processor directive that basically help us define our header file only once
  - `#ifndef - #endif` same as pragma once used long ago.
    ```cpp
    #ifndef _FILE_H
    #define _FILE_H
    // codes
    #endif
    ```
- The header files are sometimes included using `""` and other times using `<>` basically <> are used if the files are in our include directory and "" for anything else but mostly used for relative paths.
- Some files are .h and others not(iostream) basically this is just one other way you can differentiate between what is in the C standard library and a C++ standard library.
