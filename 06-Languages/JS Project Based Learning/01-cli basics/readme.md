> My first CLI using node.

## Installing the package

To use this CLI download the zip file of the package and then in the package directory run `npm link`

## Usage

To use this CLI run the following command:

```sh
cli-basics
```

# NOTES

## **1. CLI BASICS**

    👉 All one need to know to create a CLI from node is a package.json to make our repo a node package.
    The bin in package.json will have the commands that our shell can execute when we install the package in our system.
    When the command is called the file that the command refer to will run.

    👉 Remember to put `#!/usr/bin/env` node at the top of the file that is going to execute when the command run.
    This tell the shell/terminal to run the file with node.

    👉 `npm link` is to make our package a global binary, which in laymen term mean installing the package in our system.
    When we publish the package to npm then we can install it using npm install or use it using npx.

    👉 To uninstall we use `npm uninstall <package-name>` or if we have linked it we can use `npm unlink`.

    💥 npm link and unlink will work when we execute them from the package repo.

- It is important to note that the CLI tool is infact a node package, it's just that this package doesn't export anything so we can't import it in any other project of our's but it is a command line tool.

  - Afterall a package is just there to help us like a software or app in our device.

- `#!` is called a shebang or hashbang, it tells to the kernel which interpreter is to be used to run the commands present in the file.

  - If you run a script without specifying the interpreter, the shell will spawn another instance of itself and try to run the commands in the script.

- Whenever we change something in a package we have already published, we need to update it's version before updating it again.

- **Version synamtics**: **Major.Minor.Patch**, we can update our package version using the command `npm version <patch/minor/major>` in our package directory.

- We can _import package.json_ and it will convert the entire content into a javascript object.

- **CLI UX**(User Experience): This include things that make the user's life easy like author's info, readme(for user to know how to use the cli), license, keywords(words from which people can find the package in npm), clearing the console, welcome header while using cli, as cli is little to no UI but we can make it clean with color and info. alerts using module like chalk and log-symbols.

## **2. Node Package**

- We can create a node package/project using `npm init` command.

- **package.json**: The package.json file is kind of a manifest for your Node project/package. It's a central repository of configuration for tools..

  - It is the most powerfull thing one can have using this we can customize the entire package. This is basically a JSON like object which have key-value pair that defines the package.
  - Some important properties are:
    - **version**: Indicates the current version of the package.
    - **license**: Indicates the license of the package.
    - **keywords**: This property contains an array of keywords that associate with what your package does. This makes the package easy to be searched.
    - **main**: Sets the entry point for the package. When you import the package in an application, main's where the application will search for the module exports.
    - **bin**: It will have an object where key is the commands that our shell can execute when we install the package in our system and it's value is the module/file/script it will execute when that command is run.
      - We can also have just 1 command in the bin and pass different arguments with them later we can catch those arguments in the file/module the command execute and use a switch case to handle different flags.
      - One reason why using the above method is better than using multiple commands in bin is because the bin add new commands we can use but it might be the case that 2 package might use the 2 same command which will cause collision but in the case above the collision can't happen as the command is actually defined by the argument it have generally of the type `package-name -command`.
    - **private**: if set to true prevents the app/package to be accidentally published on npm.
    - **scripts**: Defines a set of node scripts you can run like task runners.
    - **dependencies**: Sets a list of npm packages installed as dependencies.
    - **devDependencies**: Sets a list of npm packages installed as development dependencies(with --dev flag).
    - **engines**: Sets which versions of Node.js and other commands this package/app work on.
    - **browserslist**: Is used to tell which browsers (and their versions) you want to support. It's referenced by Babel, Autoprefixer, and other tools, to only add the polyfills and fallbacks needed to the browsers you target.
  - The package.json file can also host command-specific configuration, for example for Babel, ESLint, and more. Each has a specific property, like eslintConfig , babel and others.
    - Those are command specific, and you can find how to use those in the respective command/project documentation.

- **package-lock.json**: The goal of the file is to keep track of the exact version of every package that is installed so that a product is 100% reproducible in the same way even if packages are updated by their maintainers.

  - When we add the dependencies in our package/project they are added with their version number.
    - The version number can be exact or can be prefixed with ~, ^, \*, >, >=, <, <=
    - no symbol: you accept only that specific version you specify.
    - `~` : you accept only update patch releases
    - `^` : you accept update patch and minor releases
    - `*` : you accept all updates, major-minor-patch any.
    - `>` : you accept any version higher than the one you specify
    - `>=` : you accept any version equal to or higher than the one you specify
    - `<` : you accept any version lower to the one you specify
    - `<=` : you accept any version equal or lower to the one you specify
    - `=` : you accept that exact version
    - `-` : you accept a range of versions
    - `||` : you combine sets
    - `latest` : you want to use the latest version available
  - This is when we call npm i in the repo.
  - When we don't need these updates we can either not prefix with any symbol at all or freeze the dependecies.
  - The package-lock.json sets your currently installed version of each package in stone, and npm will use those exact versions when running npm install .

- A good package don't just have the project in the src or any other folder like it but also a code-of-conduct.md (for new developers), a license file and a readme.md (as a manual for the users).

- Testing the module is also important so that bugs and glitches are minimized.

- **Exiting a node Process**: Whenever a node program runs a process is created now every node program has a global object called process which gives us the info and control over that node process.

  - With the process object we can also exit the program using `process.exit()` and can handle the exiting using `process.on('exit', _)` listener.
  - Node docs says we shouldn't exit the process this way instead we set the exit code whenever we wanna exit and let the program exit itself properly later by examining the exit code we can determine the situation.
  - exit code 0 mean the exit happen properly while 1 mean it was a fatal error there are more which we can see in the docs.

- Doing everything from zero is great for learning but for a large project things might go out of hand real quick so we should use frameworks.
  - Some good packages for creating a node cli tool are chalk, log-symbol, commander, sade or framework like meow, oclif etc.
