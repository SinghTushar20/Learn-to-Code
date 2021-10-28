#!/usr/bin/env node
import header from "cli-welcome";
import chalk from "chalk";
import sym from "log-symbols";

import { createRequire } from "module"; // Bring in the ability to create the 'require' method
const require = createRequire(import.meta.url); // construct the require method
const pkgJSON = require("./package.json");

// Chalk Colors
const dim = chalk.dim;
const italic = chalk.italic;
const githubClr = chalk.hex(`#6cc644`).bold.inverse;

// Log Symbols
const success = chalk.green.bold;
const info = chalk.blue.bold;
const warning = chalk.keyword(`orange`).bold;
const error = chalk.red.bold;

header({
  title: `Dheeraj Bisht`,
  tagLine: `Hello guyz, waddup!`,
  description: pkgJSON.description,
  version: pkgJSON.version,
  bgColor: `#e1daf8`,
  color: `#000000`,
  bold: true,
  clear: true,
});

console.log(`${italic(
  `Hey there it is me Dheeraj and this is my first cli, i have created the notes of the cli as well and to read them you can refer the readme of this package on github links of which is provided below.`
)}

${githubClr(` GitHub `)}  ${dim(`https://github.com/dheeraj120501`)}
`);

console.log(`
${sym.success} ${success(` SUCCESS `)} Thanks for checking out my CLI.

${sym.info} ${info(
  ` INFO `
)} For more notes you can check my repo Learn to Code on my github page.

${sym.warning} ${warning(` WARNING `)} Stay at home during covid.

${sym.error} ${error(` ERROR `)} I won't be updating this package anymore.
`);
