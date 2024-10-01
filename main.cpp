/*
    File: main.cpp
    Author: MarsSquirrel
    Date: 10/1/2024
    Description: This program opens a specified project folder and optionally launches Roblox Studio.
*/
// Essential Libraries
#include <iostream> 
#include <string>
#include <stdio.h>
#include <stdlib.h>

// Standard Library
using namespace std;

// CONFIGURABLE VARIABLES
string PROJECTS_FOLDER_PATH = "~/projects/"; // This is the path to where all of your projects are stored.
string CODE_EDITOR_COMMAND = "code"; // Bash command used by your preferred code editor.
string ROBLOX_STUDIO_COMMAND = "open /Applications/RobloxStudio.app"; // This command was written for macOS operating systems and must be adjusted for other systems.

// Functions
void print(string message) {
    cout << message << endl;
}

string ask(string message) {
    print(message);

    // response
    string response;
    cin >> response;

    return response;
}

int main() {
    // Inital Startup
    print("open-projects | v0.0.1");
    
    string project = PROJECTS_FOLDER_PATH + ask("What project would you like to open?");

    // Additional Questions
    // Feel free to modify them however you want!
    string response = ask("Would you like to open Roblox Studio? (y/n/yes/no)");
    bool openStudio;

    if (response == "y" || response == "yes") {
        openStudio = true;
    } else if (response == "n" || response ==  "no") {
        openStudio = false;
    } else {
        print("Not a valid response. Exiting process.");
        return 1;
    }

    // Opening Project + Studio
    print("Opening Project...");

    string command = CODE_EDITOR_COMMAND + " " + project;
    system(command.c_str());

    // Additional Question Functions
    if (openStudio == true) {
        print("Opening Studio...");
        system(ROBLOX_STUDIO_COMMAND.c_str());
    }

    print("Process completed! Have a fun time programming!");
  
    return 0;
}
