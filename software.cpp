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
