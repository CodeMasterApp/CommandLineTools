#!/bin/bash

echo "***********************************************************"
echo "               CM-CommandLineTools-Installer               "
echo "***********************************************************"

echo "Welcome to the CM-CommandLineTools Installation program. Please select an option to install:"
echo "q: Quit installer"
echo "i: Install the CM-CommandLineTools"
echo "x: Install the Xcode Command Line Tools"
echo "c: Install CodeMaster"
echo
echo -n "Option: "
read option

case "$option" in
    q)
        exit 0
        ;;
    i)
        # Install the CM Command Line Tools
        echo "Installation started ..."
        xcode-select --install && xcode-select --version && exit 0 ;;
    x)
        # Install the Xcode Command Line Tools
        echo "Installation started ..." && xcode-select --install && xcode-select --version && exit 0 ;;
    c)
        # Install CodeMaster (command not available yet)
        exit 0
        ;;
    *)
        echo "An error occurred: Unknown option"
        exit 1
        ;;
esac

exit 0
