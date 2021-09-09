## 0
- We can use a <script> tag to add JavaScript code to a page.
- The type and language attributes are not required.
- A script in an external file can be inserted with `<script src="path/to/script.js"></script>`.
  
- As a rule, only the simplest scripts are put into HTML. More complex ones reside in separate files.
- The benefit of a separate file is that the browser will download it and **store it in its cache**, other pages that reference the same script will take it from the cache instead of downloading it, so the file is actually downloaded only once, this reduces traffic and makes pages faster.
  
- If src is set, the script content (content inside the script tag) is ignored.


## 1
- Statements are syntax constructs and commands that perform actions.
  ```javascript
  alert('Hello');
  alert('World');
  ```
- Statements can be separated with a semicolon (optional).
- A semicolon may be omitted in most cases when a line break exists, JavaScript interprets the line break as an “implicit” semicolon. This is called an `automatic semicolon insertion`.
- In most cases, a newline implies a semicolon. But “in most cases” does not mean “always”! Thus it's recommend putting semicolons between statements even if they are separated by newlines. This rule is widely adopted by the community.

- One-line comments start with two forward slash characters //.
- Multiline comments start with a forward slash and an asterisk /* and end with an asterisk and a forward slash */.
- Nested comments are not supported!
  - There may not be /*...*/ inside another /*...*/. Such code will die with an error:
 
  
## 2
- `use strict` or `use strict`, when used in any Execution context (function) of a script, that Execution context (function) of script works the “modern” way. If used in the top Global Execution context, the whole script work modern way.
- Scoping in JS is done using {}, except in case of objects.
- Modern JavaScript supports “classes” and “modules” – advanced language structures (we’ll surely get to them), that enable use strict automatically. 

  
## 3
- A variable is a “named storage” for data.
- Variable declaration and assignment.
- Declaration is done using `let`, `const`, `var` and assignment is done using `=`.
- A variable should be declared only once. A repeated declaration of the same variable is an error (in strict mode or with modern declaration tool let,const not with var).
- Naming a variable: 
  - The name must contain only letters, digits, or the symbols $ and _.
  - The first character must not be a digit.
- `Case matters and Non-Latin letters are allowed, but not recommended`
- There is a widespread practice to use constants as aliases for difficult-to-remember values that are known prior to execution. Such constants are named using capital letters and underscores. Capital-named constants are only used as aliases for “hard-coded” values.
- Don't use keywords to name variables it's not allowed.
  
  
## 4
- JavaScript, are called “dynamically typed”, meaning that there exist data types, but variables are not bound to any of them. Any var can store any type of value at any time.
  - `Value has type not variable`
- There are eight basic data types in JavaScript:
  - Number
  - BigInt
  - String
  - Boolean
  - Null
  - Undefined
  - Object
  - Symbol
- `typeof` operator returns the type of the argument.
  - As an operator: `typeof x`.
  - As a function: `typeof(x)`.
  - The result of typeof null is "object". That’s an officially recognized error in typeof behavior, coming from the early days of JavaScript and kept for compatibility. Definitely, null is not an object. It is a special value with a separate type of its own.
  - There’s no special “function” type in JavaScript. Functions belong to the object type. But typeof treats them differently, returning "function". 
- Special numeric values
  - `Infinity` represents the mathematical Infinity ∞. It is a special value that’s greater than any number.
  - `NaN` represents a computational error. It is a result of an incorrect or an undefined mathematical operation. NaN is sticky. Any further operation on NaN returns NaN.
  - `-Infinity` is a special value that’s smaller than any number.
- Doing maths is “safe” in JavaScript. We can do anything: divide by zero, treat non-numeric strings as numbers, etc. The script will never stop with a fatal error (“die”). At worst, we’ll get NaN as the result.
- JS don't have characters.
  
  
## 5
- Tools to interact with user through browser:
  - `alert(mgs)` It shows a message and waits for the user to press “OK”.
  - `prompt(title, default)` It shows a modal window with a text message, an input field for the visitor, and the buttons OK(return input)/Cancel(return null).
    - prompt accept 2 arguments: The text to show the visitor, and an optional second parameter, the initial value for the input field.
  - `confirm()` The function confirm shows a modal window with a question and two buttons: OK(return true) and Cancel(return false).
- Limitations with these interaction:
  - The exact location of the modal window is determined by the browser. Usually, it’s in the center.
  - The exact look of the window also depends on the browser. We can’t modify it.
- `alert` is for output, `prompt` is for input and `confirm` is for confirmation.
