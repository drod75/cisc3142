#include <string>
#include <iomanip>
#include <iostream>
using namespace std;

class productType                                             // Line 1
{                                                             // Line 2
public:                                                       // Line 3
    // constructors
    productType();                                            // Line 4
    productType(int, double, double);                         // Line 5
    productType(string, int, double, double);                 // Line 6
    productType(string, string, string, int, double, double); // Line 7
    
    // methods
    void set(string n, string i, string m, int s, double p, double d){
        productName = n;
        id = i;
        manufacturer = m;

        if ((s < 0) | (p < 0) | (d < 0)) {
            cout << "Error: One of the values is negative!" << endl;
        }else {
            quantitiesInStock = s;
            price = p;
            discount = d;
        }
    }
    void print() const{ 
        cout << "\nThe current variables are: " << endl;
        cout << "The product name is : " << productName << endl;
        cout << "The id name is : " << id << endl;
        cout << "The manufacturer name is : " << manufacturer << endl;
        cout << "The quantities in stock is : " << quantitiesInStock << endl;
        cout << "The price name is : " << price << endl;
        cout << "The discount name is : " << discount << endl;
    }

    // mutator because it updates the value based on what the new value in the parameter is
    void setQuantitiesInStock(int x) {
        if (x < 0) {
            cout << "You cannot do this, x is less than 0!" << endl;
        }
        else {
            quantitiesInStock = x;
        }
    }

    // mutator because it updates the value based on what the new value in the parameter is
    void updateQuantitiesInStock(int x) {
        quantitiesInStock += x;
    }

    // accessor because it returns the value
    int getQuantitiesInStock() const{
        return quantitiesInStock;
    }

    // mutator because it updates the value based on what the new value in the parameter is
    void setPrice(double x){
        if (x < 0) {
            cout << "You cannot do this, x is less than 0!" << endl;
        }
        else {
            price = x;
        }
    }

    // accessor because it returns the value
    double getPrice() const{
        return price;
    }

    // mutator because it updates the value based on what the new value in the parameter is
    void setDiscount(double d){
        if (d < 0) {
            cout << "You cannot do this, d is less than 0!" << endl;
        }
        else {
            discount = d;
        }
    }

    // accessor because it returns the value
    double getDiscount() const{
        return discount;
    }

private:                   // Line 17
    string productName;    // Line 18
    string id;             // Line 19
    string manufacturer;   // Line 20
    int quantitiesInStock; // Line 21
    double price;          // Line 22
    double discount;       // Line 23
};

int main() { 
    productType prod1;
    productType prod2("Apple", "123", "Family Farm", 100, 5.99, 12);

    prod2.print();

    prod1.set("Pear", "124" , "Big Farm" , 120, 3.99, 0);
    prod1.print();

    prod1.updateQuantitiesInStock(10);
    prod1.print();

    prod1.setPrice(15.5);
    prod1.print();

    prod1.print();

    /*
    output:

    var 2 done for testing purposes only
    The current variables are: 
    The product name is : Apple
    The id name is : 123
    The manufacturer name is : Family Farm
    The quantities in stock is : 100
    The price name is : 5.99
    The discount name is : 12

    The current variables are: 
    The product name is : Pear
    The id name is : 124
    The manufacturer name is : Big Farm
    The quantities in stock is : 120
    The price name is : 3.99
    The discount name is : 0

    The current variables are: 
    The product name is : Pear
    The id name is : 124
    The manufacturer name is : Big Farm
    The quantities in stock is : 130
    The price name is : 3.99
    The discount name is : 0

    The current variables are:
    The product name is : Pear
    The id name is : 124
    The manufacturer name is : Big Farm
    The quantities in stock is : 130
    The price name is : 15.5
    The discount name is : 0

    The current variables are:
    The product name is : Pear
    The id name is : 124
    The manufacturer name is : Big Farm
    The quantities in stock is : 130
    The price name is : 15.5
    The discount name is : 0
    */
}

productType::productType() {
    productName = "";
    id = "";
    manufacturer = "";
    quantitiesInStock = 0;
    price = 0.0;
    discount = 0.0;
}

productType::productType(int stock, double priceOf, double discountOf) {
    productName = "";
    id = "";
    manufacturer = "";

    if ((stock < 0) | (priceOf < 0) | (discountOf < 0)) {
        cout << "Error: One of the values is negative!" << endl;
    }else {
        quantitiesInStock = stock;
        price = priceOf;
        discount = discountOf;
    }
}

productType::productType(string manufac, int stock, double priceOf, double discountOf) {
    productName = "";
    id = "";
    manufacturer = manufac;

    if ((stock < 0) | (priceOf < 0) | (discountOf < 0)) {
        cout << "Error: One of the values is negative!" << endl;
    }else {
        quantitiesInStock = stock;
        price = priceOf;
        discount = discountOf;
    }
}

productType::productType(string name, string identification, string manufac, int stock, double priceOf, double discountOf) {
    productName = name;
    id = identification;
    manufacturer = manufac;

    if ((stock < 0) | (priceOf < 0) | (discountOf < 0)) {
        cout << "Error: One of the values is negative!" << endl;
    }else {
        quantitiesInStock = stock;
        price = priceOf;
        discount = discountOf;
    }
}
