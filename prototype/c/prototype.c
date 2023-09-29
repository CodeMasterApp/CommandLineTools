#include <stdio.h>
#include <stdlib.h>

int main() {
    char option;

    printf("***********************************************************\n");
    printf("               CM-CommandLineTools-Installer               \n");
    printf("***********************************************************\n");

    printf("Welcome to the CM-CommandLineTools Installation program. Please select an option to install:\n");
    printf("q: Quit installer\n");
    printf("i: Install the CM-CommandLineTools\n");
    printf("x: Install the Xcode Command Line Tools\n");
    printf("c: Install CodeMaster\n");
    printf("\nOption: ");
    scanf(" %c", &option);

    switch(option) {
        case 'q':
            exit(0);
        case 'i':
            // Install the CM Command Line Tools
            system("xcode-select --install");
            system("xcode-select --version");
            return 0;
        case 'x':
            // Install the Xcode Command Line Tools
            system("xcode-select --install");
            system("xcode-select --version");
            return 0;
        case 'c':
            // Install CodeMaster (command not available yet)
            return 0;
        default:
            printf("An error occurred: Unknown option\n");
            exit(1);
    }

    return 0;
}
