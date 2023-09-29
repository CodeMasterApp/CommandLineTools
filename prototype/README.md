# How to test this prototype?
1. Start cloning this repo
```sh
git clone https://github.com/CodeMasterApp/CommandLineTools
```
2. Navigate to this folder
```sh
cd CommandLineTools
```

## Compile the C++ file
3. Navigate to the `cpp`` folder
```sh
cd cpp
```
4. Compile the `test.cpp` file (optional)
```sh
g++ -o ./test ./test.cpp
```
5. Run the dylib/exec, exe
```sh
./test
```

## Compile the C file
3. Navigate to the `c` foler
```sh
cd c
```
4. Compile the `prototype.c` file (optional)
```sh
g++ -o ./prototype ./prototype.c
```
5. Run the dylib/exec, exe
```sh
./prototype
```

## Run the Shell script
3. Navigate to the `sh` folder
```sh
cd sh
```
4. Give the script the premission to execute
```sh
chmod +x prototype.sh
```
5. Run the shell script
```sh
./prototype.sh
```

>Note: \
> We already compiled the test.cpp so you don't have to do it. But if you want to do it yourself please delete the test.dylib file and follow the command in step 3
