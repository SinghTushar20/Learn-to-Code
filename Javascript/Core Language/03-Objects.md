## 0
- Object is the collection of properties `key-value pairs`.
- An object can be created with figure brackets `{}` with an optional list of properties.
- To remove a property, we can use `delete` operator.
- We can also use multiword property names, but then they must be quoted.
  ```javascript
  let user = new Object(); // "object constructor" syntax
  let user = {};  // "object literal" syntax
  let user = {
    name: "John",
    age: 30,  
    "likes birds": true,  // multiword property name must be quoted
  }
  ```
- All keys type is string if they are not then they are automatically converted to string.
- A “trailing” or “hanging” comma makes it easier to add/remove/move around properties, because all lines become alike.
- We can access elements using either `dot notation` or `bracket notation`.
  - dot notation only take statements.
  - bracket notation can have statements or expressions, the variable key may be calculated at run-time or depend on the user input. And then we use it to access the property. That gives us a great deal of flexibility.
  - Square brackets are much more powerful than the dot notation. They allow any property names and variables. But they are also more cumbersome to write.
- We can use square brackets in an `object literal`, when creating an object. That’s called `computed properties`.
  - The meaning of a computed property is simple: [key] means that the property name should be taken from key.
- If properties have the same names as variables, then we can just use the var name. The use-case of making a property from a variable is so common, that there’s a special property value shorthand to make it shorter.
- There are no limitations on property names(key). They can be any strings or symbols, other types are automatically converted to strings.
  - __proto__ can’t be set to a non-object value.
    ```javascript
    let obj = {};
    obj.__proto__ = 5; // assign a number
    alert(obj.__proto__); // [object Object] - the value is an object, didn't work as intended
    ```
- A notable feature of objects in JavaScript, compared to many other languages, is that it’s `possible to access any property`. There will be no error if the property doesn’t exist, it will just return `undefined`.
- `in` operator return a boolean value and can be used with objects.
  - To walk over all keys of an object, there exists a special form of the loop: `for..in`.
- Objects are ordered in a special fashion, integer (strings with integers) properties are **sorted**, others appear in **creation order**.
  - The `integer property` term here means a string that can be converted to-and-from an integer without a change. So, “49” is an integer property name, because when it’s transformed to an integer number and back, it’s still the same. But “+49” and “1.2” are not.
- Any type that is not primitive is Object.
  - There are many other kinds of objects in JavaScript:
    - `Array` to store ordered data collections,
    - `Date` to store the information about the date and time,
    - `Error` to store the information about an error etc.
    - These are objects not data types.
- `typeof` is used to check the type of data type.


## 1
- Objects are `pass the reference` and other primitive data types are `pass by value`.
- A variable assigned to an object stores not the object itself, but its `address in memory` – in other words **a reference** to it.
  - When an object variable is copied, the reference is copied, but the object itself is not duplicated.
- Two objects are equal only if they are the same object.
  - For comparisons like obj1 > obj2 or for a comparison against a primitive obj == 5, `objects are converted to primitives`.
- Creating a real copy (independent copy)
  - Loop through the object and start copying it's prop in a new empty object.
  - Using `Object.assign(dest, src1, src2, src3...)`
    - The first argument dest is a target object.
    - Rest arguments src1, ..., srcN (can be as many as needed) are source objects.
    - It copies the properties of all source objects src1, ..., srcN into the target dest. In other words, properties of all arguments starting from the second are copied into the first object.
    - The call returns dest.
  - We can also use spread operator.
    - ```javascript
      clone = {...user}
      ```
- If we have Object inside object then things get little different then, we should use a cloning loop that examines each value of user[key] and, if it’s an object, then replicate its structure as well. That is called a `deep cloning`.
- Const objects can be modified. As constant make the path constant so we can't reassign a new object be we can modify the prop of the object.
- To make a `real copy` (a clone):
  - we can use `Object.assign()` for the so-called `shallow copy`, but here nested objects are copied by reference.
  - or a `deep cloning` function, such as `_.cloneDeep(obj)` from loadash library.


## 2
- Memory management in JavaScript is performed automatically and invisibly to us.
- The main concept of memory management in JavaScript is reachability.
  - `reachable` values are those that are accessible or usable somehow. They are guaranteed to be stored in memory.
    - There’s a base set of inherently reachable values  called `roots`, that cannot be deleted for obvious reasons.
    - Any other value is considered reachable if it’s reachable from a root by a reference or by a chain of references.
  - There’s a background process in the JavaScript engine that is called `garbage collector`. It monitors all objects and removes those that have become unreachable.
  - If there’s no way to access a reachable, no references to it(reference count become 0). Garbage collector will junk the data and free the memory.
- The basic garbage collection algorithm is called `mark-and-sweep`.
  - The garbage collector takes roots and “marks” (remembers) them.
  - Then it visits them and “marks” all references from them.
  - Then it visits marked objects and marks their references. All visited objects are remembered, so as not to visit the same object twice in the future, and repeat so on until every reachable (from the roots) references are visited.
  - All objects except marked ones are removed.
  - That’s the concept of how garbage collection works. JavaScript engines apply many optimizations to make it run faster and not affect the execution, different engines implement different tweaks and techniques.
- Being referenced is not the same as being reachable (from a root): a pack of interlinked objects can become unreachable as a whole, `unreahable island`.


## 3
- A function that is a property of an object is called its method.
- When we write our code using objects to represent entities, that’s called `object-oriented programming`.
- To access the object, a method can use the `this` keyword.
- In JavaScript, keyword this behaves unlike most other programming languages. It can be used in any function, even if it’s not a method of an object.
  - The value of `this` is **evaluated during the run-time**, depending on the context.
  - Calling without an object: `this == undefined`, In non-strict mode the value of this in such case will be the `global object(windows in browser)`.
  - We can also bound `this` of a function to something using `bind()`, `call()`, `apply()` functions.
- Arrow functions are special: they don’t have their “own” this. If we reference this from such a function, it’s taken from the outer “normal” function.

