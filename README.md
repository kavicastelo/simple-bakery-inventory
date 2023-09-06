# Panaderia Bakery House Management System

## Overview

This is the documentation for the Panaderia Bakery House Management System. This system is designed to manage bakery items and special packages, allowing customers to place orders for items and packages, view orders, and perform administrative tasks. The system provides a user-friendly command-line interface.

## Table of Contents

1. [Introduction](#introduction)
2. [Features](#features)
3. [Code Structure](#code-structure)
4. [Login Credentials](#login-credentials)
5. [Functions](#functions)
   - [Bakery Item Management Functions](#bakery-item-management-functions)
   - [Special Package Management Functions](#special-package-management-functions)
   - [Order and View Functions](#order-and-view-functions)
   - [Utility Functions](#utility-functions)
6. [Usage](#usage)
7. [Contributors](#contributors)
8. [License](#license)

## Introduction

The Panaderia Bakery House Management System is a command-line application designed for managing a bakery's inventory and orders. It includes features for adding, updating, and deleting bakery items and special packages. Customers can place orders and view their orders, while administrators have access to additional functions like data backup.

## Features

- User-friendly command-line interface.
- Bakery item management:
  - Add new bakery items.
  - Update bakery item details.
  - Delete bakery items.
- Special package management:
  - Add new special packages.
  - Update package details.
  - Delete special packages.
- Order placement and viewing:
  - Customers can place orders for bakery items and packages.
  - View order details.
- Administrative functions:
  - User authentication.
  - Data backup.
- Help and documentation for users.

## Code Structure

The code is structured into multiple parts for ease of understanding and maintenance:

1. `main()` function: The main entry point of the program.
2. Data structures:
   - `node`: Represents a bakery item.
   - `node2`: Represents a special package.
3. User interface functions:
   - `ccolor(int clr)`: Function to change console text color.
   - `pwellcome()`: Function to display a welcome message with animation.
   - `loadingbar()`: Function to display a loading bar animation.
   - `backuploader()`: Function to display a backup data animation.
   - `login()`: Function for user authentication.
   - `welcomescreen()`: Function to display a welcome screen.
   - `dtime()`: Function to display the last update time.
   - `middle1()`: Function to add vertical space to the console output.
   - `middtab1()`: Function to add horizontal space (tabs) to the console output.
4. Inventory management functions:
   - Bakery item management:
     - `insertend()`: Function to insert a bakery item at the end of the list.
     - `insertfirst()`: Function to insert a bakery item at the beginning of the list.
     - `insertmid()`: Function to insert a bakery item at a specified position.
     - `deletefood()`: Function to delete a bakery item.
     - `updatefood()`: Function to update bakery item details.
   - Special package management:
     - `insertend2()`: Function to insert a special package at the end of the list.
     - `insertfirst2()`: Function to insert a special package at the beginning of the list.
5. Order and view functions:
   - `order_view()`: Function to view order details for bakery items.
   - `order_view2()`: Function to view order details for special packages.
6. Utility functions:
   - `cls()`: Function to clear the console screen.
   - `echo(char print[])`: Function to print text to the console.
   - `br(int line)`: Function to add line breaks to the console output.
   - `pre(int tab)`: Function to add tabs to the console output.
   - `span(int space)`: Function to add spaces to the console output.
   - `countitem()`: Function to count the number of bakery items in the inventory.
   - `countitem2()`: Function to count the number of special packages in the inventory.
7. Help functions:
   - `Help()`: Function to display a help and usage guide.

## Login Credentials
### Launch
- username : `panaderia`
- password : `1234`

### Admin
- password : `123456`

## Functions

### Bakery Item Management Functions

#### `insertend(int data, char foodname[25], int quantity, float price)`
- Inserts a new bakery item at the end of the list.
- Parameters:
  - `data`: Serial number of the item.
  - `foodname`: Name of the bakery item.
  - `quantity`: Quantity available.
  - `price`: Price of the item.

#### `insertfirst(int data, char foodname[25], int quantity, float price)`
- Inserts a new bakery item at the beginning of the list.
- Parameters:
  - `data`: Serial number of the item.
  - `foodname`: Name of the bakery item.
  - `quantity`: Quantity available.
  - `price`: Price of the item.

#### `insertmid(int pos, int data, char foodname[25], int quantity, float price)`
- Inserts a new bakery item at a specified position in the list.
- Parameters:
  - `pos`: Serial number of the item after which the new item is inserted.
  - `data`: Serial number of the item to be inserted.
  - `foodname`: Name of the bakery item.
  - `quantity`: Quantity available.
  - `price`: Price of the item.

#### `deletefood(int serial)`
- Deletes a bakery item with the given serial number.
- Parameters:
  - `serial`: Serial number of the item to be deleted.

#### `updatefood(int udata, int uquantity)`
- Updates the quantity of a bakery item.
- Parameters:
  - `udata`: Serial number of the item to be updated.
  - `uquantity`: New quantity value.

### Special Package Management Functions

#### `insertend2(int data2, char packagename[25], int quantity2, float price2)`
- Inserts a new special package at the end of the list.
- Parameters:
  - `data2`: Serial number of the package.
  - `packagename`: Name of the special package.
  - `quantity2`: Quantity available.
  - `price2`: Price of the package.

#### `insertfirst2(int data2, char packagename[25], int quantity2, float price2)`
- Inserts a new special package at the beginning of the list.
- Parameters:
  - `data2`: Serial number of the package.
  - `packagename`: Name of the special package.
  - `quantity2`: Quantity available.
  - `price2`: Price of the package.

#### `insertmid2(int pos2, int data2, char packagename[25], int quantity2, float price2)`
- Inserts a new special package at a specified position in the list.
- Parameters:
  - `pos2`: Serial number of the package after which the new package is inserted.
  - `data2`: Serial number of the package to be inserted.
  - `packagename`: Name of the special package.
  - `quantity2`: Quantity available.
  - `price2`: Price of the package.

#### `deletepackage(int serial2)`
- Deletes a special package with the given serial number.
- Parameters:
  - `serial2`: Serial number of the package to be deleted.

#### `updatepackage(int udata2, int uquantity2)`
- Updates the quantity of a special package.
- Parameters:
  - `udata2`: Serial number of the package to be updated.
  - `uquantity2`: New quantity value.

### Order and View Functions

#### `order_view(int order, int quantity, int or_no)`
- Displays order details for a bakery item.
- Parameters:
  - `order`: Serial number of the ordered item.
  - `quantity`: Quantity ordered.
  - `or_no`: Order number.

#### `order_view2(int order2, int quantity2, int or_no2)`
- Displays order details for a special package.
- Parameters:
  - `order2`: Serial number of the ordered package.
  - `quantity2`: Quantity ordered.
  - `or_no2`: Order number.

### Utility Functions

#### `cls()`
- Clears the console screen.

#### `echo(char print[])`
- Prints text to the console.
- Parameters:
  - `print`: Text to be printed.

#### `br(int line)`
- Adds line breaks to the console output.
- Parameters:
  - `line`: Number of line breaks to be added.

#### `pre(int tab)`
- Adds tabs to the console output.
- Parameters:
  - `tab`: Number of tabs to be added.

#### `span(int space)`
- Adds spaces to the console output.
- Parameters:
  - `space`: Number of spaces to be added.

#### `countitem()`
- Counts the number of bakery items in the inventory.
- Returns:
  - `countitem`: The count of bakery items.

#### `countitem2()`
- Counts the number of special packages in the inventory.
- Returns:
  - `countitem2`: The count of special packages.

## Usage

1. Compile the code.
2. Run the compiled executable.
3. Follow the on-screen instructions to navigate the menu and perform various actions, such as placing orders, managing inventory, and accessing administrative functions.

## Contributors

- Developed by: Kavindu Kokila
- Email: kkavindu221@gmail.com
- Phone: +94 773431660

## License

All rights reserved by as open sourse project under the MIT License. This software is for educational and demonstration purposes only.
