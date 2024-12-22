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