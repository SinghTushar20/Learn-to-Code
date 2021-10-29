> My first CLI using node.

## Installing the package

To use this CLI download the zip file of the package and then in the package directory run ```npm link```

## Usage

To use this CLI run the following command:

```sh
cli-basics
```

## NOTES

**1. CLI BASICS**

    👉 All one need to know to create a CLI from node is a package.json to make our repo a node package. 
    The bin in package.json will have the commands that our shell can execute when we install the package in our system. 
    When the command is called the file that the command refer to will run.

    👉 Remember to put `#!/usr/bin/env` node at the top of the file that is going to execute when the command run. 
    This tell the shell/terminal to run the file with node.

    👉 `npm link` is to make our package a global binary, which in laymen term mean installing the package in our system. 
    When we publish the package to npm then we can install it using npm install or use it using npx.

    👉 To uninstall we use `npm uninstall <package-name>` or if we have linked it we can use `npm unlink`.

    💥 npm link and unlink will work when we execute them from the package repo.

- It is important to note that the CLI tool is infact a node package, it's just that this package doesn't export anything so we can't import it in any other project of our's but it is a command line tool. Afterall a package is just there to help us like a software or app in our device.

- `#!` is called a shebang or hashbang, it tells to the kernel which interpreter is to be used to run the commands present in the file. If you run a script without specifying the interpreter, the shell will spawn another instance of itself and try to run the commands in the script.

- Whenever we change something in a package we have already published, then we need to update it's version before updating it again.

- **Version synamtics**: **Major.Minor.Patch**, we can update our package version using the command `npm version <patch/minor/major>` in our package directory.

- We can import package.json and if will convert the entire content into a java script object.

- **CLI UX**(User Experience): This include things that make the user's life easy like author's info, readme(for user to know how to use the cli), license, keywords(words from which people can find the package in npm), clearing the console, welcome header while using cli, as cli is little to no UI but we can make it clean with color and info. alerts using module like chalk and log-symbols.