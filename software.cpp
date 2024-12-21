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

