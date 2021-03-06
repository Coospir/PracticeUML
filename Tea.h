//
//
//  Generated by StarUML(tm) C++ Add-In
//
//  @ Project : Untitled
//  @ File Name : Tea.h
//  @ Date : 23.02.2018
//  @ Author : 
//
//


#if !defined(_TEA_H)
#define _TEA_H

#include "Product.h"
#include "TeaTypes.h";

class Tea : public Product {
public:
    Tea(string name, int price, int weight, int type) : Product(name, price, weight) {
        this->type = type;
    }

    void setType(int tea_type) {
        type = tea_type;
    }

	int getType() {
        return type;
    };


private:
	int type;
};

#endif  //_TEA_H
