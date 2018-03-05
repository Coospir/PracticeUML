#include <iostream>
#include <vector>
#include <string>
#include "Tea.h"
#include "Coffee.h"

using namespace std;

int main() {
    string obj_name;
    int obj_price;
    int obj_weight;
    int obj_type;
    int T = 2; // TEA
    int C = 2; // COFFEE
    Product *arr[T];
    Product *arr2[C];

    for(int i = 0; i < T; i++) {
        cout << "Adding Tea entities\n";
        cout << "Enter name: ";
        cin >> obj_name;
        cout << "\nEnter price: ";
        cin >> obj_price;
        cout << "\nEnter weight: ";
        cin >> obj_weight;
        cout << "\nEnter type: ";
        cin >> obj_type;
        Product *Tea_Product = new Tea(obj_name, obj_price, obj_weight, obj_type);
        arr[i] = Tea_Product;
    }



    for(int i = 0; i < C; i++) {
        cout << "Adding Coffee entities\n";
        cout << "Enter name: ";
        cin >> obj_name;
        cout << "\nEnter price: ";
        cin >> obj_price;
        cout << "\nEnter weight: ";
        cin >> obj_weight;
        cout << "\nEnter type: ";
        cin >> obj_type;
        Product *Coffee_Product= new Coffee(obj_name, obj_price, obj_weight, obj_type);
        arr2[i] = Coffee_Product;
    }

    for(int i = 0; i < T; i++) {
        if(arr[i]->getWeight() <= 150) {
            cout << "\nTea entities with weight <= 150: \n";
            arr[i]->Show();
        }
    }

    for(int i = 0; i < C; i++) {
        if(arr2[i]->getWeight() <= 150) {
            cout << "\nCoffee entities with weight <= 150: \n";
            arr2[i]->Show();
        }
    }

    for(int i = 0; i < T; i++) {
        delete arr[i];
    }

    for(int i = 0; i < C; i++) {
        delete arr[i];
    }


/*
    Product *Tess_Tea = new Tea(obj_name, obj_price, obj_weight, obj_type);
    Tess_Tea->Show();*/


    return 0;







}