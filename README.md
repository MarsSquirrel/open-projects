# open-projects 💻
Extremely simple and easy way to open projects + studio for quick development.
##
WARNING: This program has only been tested on macOS and requires a few modifications to run on other operating systems. Please take this into account when compiling the program!
##
### Information
open-projects allows developers to easily open both their code and game to quickly begin working. This is helpful for multiple projects in which you need to quickly move been source code but I also use it to very easily and quickly start working on projects.
### Compilation
The program was built for macOS and other Unix-based architectures (although it has not been tested on them). If you would like to use it for other operating systems then modify configurable variables to fit your system.
#### Current Supported OS
✅ = Supported | ❌ = Not Supported | ❔ = Unknown/Not Tested
* macOS ✅
* Windows ❌
* Debian ❔
* Ubuntu ❔

To compile, use a simple C++ compiler such as the GNU C++ Compiler (g++):
```
g++ main.cpp -o project
```
For this demonstration, I'm naming the file 'project,' but you can use any name you prefer.
#### Installation
You can run the executable and use the program immediately however I like to install it as a bash command to use it even easier.
##### macOS Installation
```
mv project /usr/local/bin
```
### Conclusion
And you are all set! You should now be able to run the command `project` and easily select and open a project. I hope you enjoy using this simple program as much as I do! If you encounter any issue, please open an issue and I'll respond to it as quickly as possible.
