// fs module is used to interact with files and directory
let fs = require("fs");

//NOTE: files-> CRUD: create read update delete for files.

// Read
// let readBuffer = fs.readFileSync("example.txt");
// console.log("Buffer binary data: ", readBuffer);
// console.log("Buffer data converted to string: " + readBuffer);

// Create
// fs.openSync("example1.txt", "w");    // To create or open existing file

// Update
// fs.writeFileSync("example1.txt", "The new content"); // If file present then rewrite it or else create new file and write on it.
// fs.appendFileSync("example1.txt", "\nThis is appended"); // Append on file

// Working with directories
// fs.mkdirSync("New Directory");   // Creating new directory

// Adding files in a directory
// fs.writeFileSync("New Directory/a.txt", "hello");

// Reading the folder, this return a list of items in that directory
// let content = fs.readdirSync("New Directory");
// console.log(content);

// for (let i = 0; i < content.length; i++) {
//   console.log(content[i] + " is removed");
// To delete a file
//   fs.unlinkSync("New Directory/" + content[i]);
// }

// To delete the directory
// fs.rmdirSync("New Directory");

/* 
NOTES: 
CRUD operations with files and folders/directory:
Files-> openSync, readFileSync, writeFileSync/appendFileSync, unlinkSync
Directories-> mkdirSync, readDirSync, _, rmdirSync
Updating is directories doesn't make any sense.
Some other handy methods are :
fs.existSync return true if the file/folder of given path exist else false
fs.lstatSync tell us weather the path we provided is of a file or folder
__dirname is a global keyword that give us the current directory name
*/
