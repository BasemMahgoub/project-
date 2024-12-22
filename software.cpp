#include <iostream>
#include <string>
using namespace std;

struct Product {
    int id;
    string name;
    float price;
    int quantity;
    Product* next;
};

void addProduct(Product*& head, int id, string name, float price,float amount);
void removeProduct(Product*& head, int id);
void searchProduct(Product* head, int id);
void displayCart(Product* head);
void calculateCheck(Product* head);

//Main




//Add function
void addProduct(Product*& head, int id, string name, float price ,float amount) {

    Product* newProduct = new Product{ id, name, price, amount, nullptr };

    if (head == nullptr) {
        head = newProduct;
        cout << "Product added : " << name << endl;
        return;
    }

    Product* current = head;
    while (current->next != nullptr) {
        current = current->next; 
    }

    current->next = newProduct;
    cout << "Product added : " << name << endl;
}

//remove function
void removeProduct(Product*& head, int id) {
    if (head == nullptr) {
        cout << "Cart is empty. No product to remove.\n";
        return;
    }

    Product* current = head;
    Product* prev = nullptr;

    if (current->id == id) {
        head = current->next;
        delete current;
        cout << "Product with ID " << id << " removed successfully.\n";
        return;
    }

    while (current != nullptr && current->id != id) {
        prev = current;
        current = current->next;
    }

    if (current == nullptr) {
        cout << "Product with ID " << id << " not found in the cart.\n";
        return;
    }

    prev->next = current->next;
    delete current;
    cout << "Product with ID " << id << " removed successfully.\n";
}
//search product
void searchProduct(Product* head, int id) {
    Product* current = head;

    while (current != nullptr) {
        if (current->id == id) {
            cout << "Product found: " << current->name << ", Price: " << current->price << endl;
            return;
        }
        current = current->next;
    }
    cout << "Product not found!" << endl;
}

//calculate
void calculateCheck(Product* head) {
    float totalCheck = 0.0; 
    Product* current = head; 

    while (current != nullptr) {
        totalCheck += current->price * current->amount;
        current = current->next; 
    }
    cout <<"Totalcheck:" << totalCheck <<endl;
} 
