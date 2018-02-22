//
//
//  Generated by StarUML(tm) C++ Add-In
//
//  @ Project : Untitled
//  @ File Name : Coffee.h
//  @ Date : 23.02.2018
//  @ Author : 
//
//


#if !defined(_COFFEE_H)
#define _COFFEE_H

#include "Product.h"
#include "CoffeeTypes.h";
class Coffee : public Product {
public:
    Coffee(string name, int price, int weight, int type) : Product(name, price, weight, type) {
        this->type = type;
    }

	void GetType() {
		return type;
	};
private:
	int type;
};

#endif  //_COFFEE_H