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
