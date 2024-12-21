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