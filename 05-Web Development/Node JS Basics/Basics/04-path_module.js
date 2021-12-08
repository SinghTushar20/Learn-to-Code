// Path modules is created to deal with the paths on different os to make working with files and folders platform independent
const path = require("path");

// Getting the extention
let ext = path.extname(path.join(__dirname, "a.exe"));
console.log(ext);

// NOTE: Use the path.join() to join the paths.

// Getting the basename of a path(Useful with long paths)
let bsname1 = path.basename(__dirname);
let bsname2 = path.basename(path.join(__dirname, "a.exe"));
console.log(bsname1);
console.log(bsname2);
