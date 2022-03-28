## Modules:

- Modules are of 2 types built-in modules and external modules.
- We can directly import a built in module as it is already installed.
- External modules can be of further 2 types the one which we create local one or the one which someone else created(from the internet).
- The local external modules can also be directly imported.
- The internet external modules first need to be installed through pip.
- PIP is like play store of python just like npm is playstore of js.
- To install an external module we use pip install module_name.
- Once installed the external modules can also be imported easily.
- To import any module to your project we can use import module_name.
- File name of our python file shouldn't match any module name, use unique names.

- We can import a module in lots of ways
  - standard import: `import os`
  - importing a module with different name: `import math as m`
  - importing specific things from a module: `from tkinter import messagebox`
  - importing my custom module : `import functions as func`

## Working of import

    - when we import a module then it import all it's variable and functions as well as execute the entire py file/module.

- When working with a custom module sometimes we don't want specific things to get imported:
  `if __name__ == "__main__"`
  - `__name__` is a built-in variable that returns us the name of the module being used, if the module being used if the same module/py file then it return main otherwise(if used in other file as import) it's file name
    So anything under this if block will not be executed in case of import as it will return the py file name, generally we keep the executable code of a py file/module in this block if in case we have to import it in some other py file.