// import * as cp from "module";
// Node Js can be understood with an analogy assume it to be a smartphones and the various modules are like apps in it, now to interact with apps we touch in smartphones here in node js the way of interaction is through js. In case if you ever want some extra apps you can install them from the play store called npm.

// Just like browser API provide some extra stuffs for js like window object to interact with the browser, Node also have some globals object like process, global etc.

// In node js before ES modules, in order to open and use an app we have to use require. and store it in a variable in order to use it. Now we can also use import, but for that change your package.json and add "type": "module" and also imports should always be on the top of files unlike require.
// Generally we keep the name of variable same as module name.
let cp = require("child_process");

// the first basic module is child_process it's execSync function help us to just use cmd terminal anything inside it is just the cmd in terminal performed syncrounously.
// cp.execSync("touch a.txt");
// cp.execSync("calc");
// cp.execSync("start chrome https://nodejs.dev/learn");

// Because it is just like typing in cmd terminal we can also run and compile files of other language as well.
cp.execSync("g++ ./01-child_process_example.cpp");
let result = cp.execSync("a.exe");
// NOTE that the result will be in buffer and then we can convert it to anything we want.
console.log(result);
// We here use string concatination as it will automatically convert the buffer to string.
console.log("" + result);
