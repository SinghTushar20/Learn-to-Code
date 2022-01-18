# Why C++ ?

1. It is widely used even today due to its large applications, as well as lots and lots of legacy code is also written on C++ already, so it is an integral part of many crucial systems we see today.
2. C++ follows Object Oriented Paradigm, lots of new languages are Object Oriented and it it provides lots of features in Object Oriented which are not available in newer languages and syntactically it is much better, even if that means you have to learn a lots of things due to sometimes exhaustive syntax. Which plays a crucial role in giving programmers more power and freedom over writing code in the way they want.
3. C++ is compatible with hardware due to it's nature of being a low level language which is easier for computers to understand. Proving to be a great choice for making Apps which run directly over the OS. So here is a layer of Hardware >> OS >> Application.
4. Looking at applications such as .Net, C#, Java or Python, these languages do not run directly over the OS but instead they need an interpreter that is a `run time environment` like java runs inside JVM and .NET programs run inside Common Language Run-time environment CLR.
   So, interpreter is used to establish interaction between OS and Hardware which makes it as follows (Hardware >> OS >> Environment >> App) due to this intermediate interference of environment layer these languages aren't that powerful compared to C++ which directly interacts with OS or hardware.
5. C++ is still pretty much the most used language when you need to write fast code that performs well or if you're writing for a weird architecture or a platform and you need the code to run natively, if you want direct control over Hardware C++ is for you.

## List of applications of C++

1. System Softwares/Tools
2. Embedded Systems (Microprocessors & Controllers viz. Arduino,Rasp)
3. Operating Systems, Interpreters
4. Platforms and Engines
5. Games & Graphics

- We write our C++ code as text(just text) and then we need some way to transform that text into an actual application that our computer can run. In going from that text form to an actual executable binary we basically have two main operations that need to happen one of them is called compiling and other is called linking.

## How C++ works

- We have a series of source files where we write actual code in and then it is passed through a compiler which compiles it into some kind of binary, now that binary can be some sort of library or it can be an actual executable program.
- Once our preprocessor statements have been evaluated our file gets compiled, this is a stage where our compiler transforms all of the C++ code into actual machine code. There are several important settings that determine how this actually happens so let's take a brief look at them.
- Each CPP file in our project gets compiled except header files, the header files get included via a preprocessor statement called `include` into a CPP file and that's when they get compiled. Every CPP file will get compiled into something called an object file(the extension for that using visual studios compiler is obj). Once we have all of the individual obj files which are the result of compiling the CPP files we need some way to stitch them together into one exe file and that's where linker comes in, it takes all the obj files and it glues them together, so the linker's job is to take all of our obj files and stitch them together into one exe file.
- Every kind of symbol in C++ needs some kind of declaration, a declaration is exactly what it sounds like we're declaring that the thing declared exists now this is almost like a promise because we can just say "compiler there's a function called hogs" however the compiler will just believe us.
  - The compiler doesn't care about resolving where that declared function actually is defined.
  - When we build our entire project not just one file, once all our project files have been compiled the linker will actually find the definition of the declared function and wire it up to the declared function that we call here in main.cpp.
  - If unable to find that definition it throws a linker error.

## How a C++ Compiler works

- A C++ compiler actually needs to take our text files and convert them into an intermediate format called an object file.
- Firstly it needs to pre-process our code which means that any preprocessor statements get evaluated then and there, once done it move on to tokenizing and pausing and basically sorting out the c++ language into a format that the compiler can actually understand, basically something called an **abstract syntax tree**.
  - AST is a tree representation of the abstract syntactic structure of text (often source code) written in a formal language, the compilers job is to convert all of our code into either constant data or instructions. Once the compiler has created this abstract syntax tree it can begin actually generating code now this code is going to be the actual machine code that our CPU will execute.
  - The AST is used intensively during semantic analysis, where the compiler checks for correct usage of the elements of the program and the language. The compiler also generates **symbol tables** based on the AST during semantic analysis. A complete traversal of the tree allows verification of the correctness of the program (check for syntax error).
- Basic Preprocessor statements are #include, #define, #if-#endif.
  - #include will go to the file copy it's entire content and paste it in the place where it is written.
    - #include <iostream> will copy the entire iostream file code in it's place.
  - #define will search the entire file for the defined word and replace it with the word asked.
    - #define i int will find all the i in the file and replace them with int.
  - #if-#endif will allow the function in it to work only if the condition is met.

## How a C++ Linker work

- The primary focus of linking is to find where each symbol and function is and link them together.
- The linker take all of our objects files that were generated during compilation and link them all together, it will also pull in any other libraries that we may be using like the C runtime library, the C++ standard library, our platform api if necessary etc.
- There's also different types of linking like static linking and dynamic linking.

- Putting `static` in front of a function means that the function is only declared for the translation unit in which it is written.
- A **translation unit** is the basic unit of compilation in C++. It consists of the contents of a single source file, plus the contents of any header files directly or indirectly included by it, minus those lines that were ignored using conditional preprocessing statements.
  - A single translation unit can be compiled into an object file, library, or executable program.
  - The notion of a translation unit is most often mentioned in the contexts of the One Definition Rule, and templates.
- C and C++ programs consist of one or more source files, each of which contains some of the text of the program. A source file, together with its include files (files that are included using the #include preprocessor directive) but not including sections of code removed by conditional-compilation directives such as #if, is called a **translation unit**.
  - It is basically a file (.c/.cpp), after it's finished including all of the header files.
