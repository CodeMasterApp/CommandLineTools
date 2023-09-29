#include<iostream>

int main() {
    char option;
    std::cout << "***********************************************************" << '\n'
              << "               CM-CommandLineTools-Installer               " << '\n'
              << "***********************************************************" << '\n';

    std::cout << "Welcome to the CM-CommandLineTools Installation program. Please select an option to install:" << '\n';
    std::cout << "q: Quit installer" << '\n'
              << "i: Install the CM-CommandLineTools" << '\n'
              << "x: Install the Xcode Command Line Tools" << '\n'
              << "c: Install CodeMaster" << '\n';
    std::cout << '\n' << "Option: ";
    std::cin >> option;

    switch(option) {
        case 'q':
            exit(0);
        case 'i':
            // Install the Xcode Command Line Tools:
            // xcode-select --install
            /// use std::system to execute shell commands
            std::system("xcode-select --install");
            std::system("xcode-select --version");

            // Install the CM Command Line Tools:


            return 0;
        case 'x':
            // Install the Xcode Command Line Tools:
            // xcode-select --install
            std::system("xcode-select --install");
            std::system("xcode-select --version");
            
            return 0;
        case 'c':
            // brew install CodeMaster (command nor available yet!)
            return 0;
        default:
            std::cout << "An error occurred: Unknown option";
            exit(1);
    }

    return 0;
}