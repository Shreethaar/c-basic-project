# Warehouse Materials Recorder

This project is a simple warehouse materials recorder implemented in C. It allows users to add, remove, and display items in a warehouse inventory.

## Description

The Warehouse Materials Recorder is designed to manage inventory in a warehouse setting. It provides basic functionality to add items, remove items, and display the current inventory.

## How to Compile

To compile the project, you need a C compiler such as GCC. Follow these steps:

1. Open a terminal or command prompt.
2. Navigate to the directory containing the project files.
3. Compile each source file separately:
   ```bash
   gcc -c main.c -o main.o
   gcc -c warehouse.c -o warehouse.o
4. Linking the object files to executable
    ```bash
    gcc main.o warehouse.o -o warehouse-material-recorder
    or 
    ```
    gcc main.c warehouse.c -o warehouse-material-recorder
5. Run the program
    ```bash
    ./warehouse-material-recorder


