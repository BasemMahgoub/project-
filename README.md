# Names
### Basem mahgoub
### Momen Elmohder
### Abdelrahman Gad
### Ahmed Maher
### Zeyad Helal
### Amr Abdelsatar
### Yousef Emad

# Shopping Cart Project

## Description
This project implements a **Shopping Cart** using fundamental data structures in C++. The shopping cart allows users to manage their purchases through various functionalities like adding items, removing items, displaying the cart contents, and checking out. The project demonstrates how data structures can be applied to solve real-world problems efficiently.

---

## Features
The project provides the following functionalities:
- **Add Items:** Add a product with its details (ID, name, price, and quantity) to the cart.
- **Remove Items:** Remove a specific product from the cart using its unique ID.
- **Display Cart:** Display all products in the cart along with their details (ID, name, price, and quantity).
- **Checkout:** Calculate the total cost of all items in the cart and display the bill.

---

## Data Structure Used
The shopping cart is implemented using a **linked list**:
- Each node in the list represents a product in the cart.
- The list is dynamically updated as products are added or removed.

---

## Table of Contents
- [Installation](#installation)
- [Usage](#usage)
- [Code Overview](#code-overview)
- [Future Enhancements](#future-enhancements)
- [License](#license)

---

### Usage
1.Run the program to display the main menu.
2.Select from the available options:
  . Add an item by entering its ID, name, price, and quantity.
  . Remove an item by entering its unique ID.
  . View the cart to see all items and their details.
  . Checkout to calculate and display the total cost.
3.Follow the on-screen prompts to perform actions.


### Code Overview
Functions
1.Add Product
  . Adds a new product to the end of the shopping cart (linked list).
2.Remove Product
  . Removes a product using its unique ID by traversing the linked list.
3.Display Cart
  . Traverses the linked list and displays the details of all products.
4.Checkout
  . Traverses the cart, calculates the total cost of all items, and prints the bill.


### Future Enhancements
In the future, we plan to add:
. Discounts: Support for applying discounts during checkout.
. Save Cart: Save the cart to a file for persistence.
. Load Cart: Load a previously saved cart from a file.
. Sorting: Sort items in the cart based on price, name, or quantity.


### License
This project is licensed under the Infinity Stones Team. See the LICENSE file for more details.

