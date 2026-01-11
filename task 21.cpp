#include <iostream>
using namespace std;

int main() {
    int category, item, quantity;
    float price = 0, total, discount = 0, finalAmount;

    cout << "===== SHOPPING SYSTEM =====" << endl;
    cout << "1. Electronics" << endl;
    cout << "2. Clothing" << endl;
    cout << "3. Groceries" << endl;
    cout << "Select Category: ";
    cin >> category;

    switch (category) {
    case 1: 
        cout << "\nElectronics Items:" << endl;
        cout << "1. Laptop ($1000)" << endl;
        cout << "2. Smartphone ($700)" << endl;
        cout << "3. Headphones ($150)" << endl;
        cout << "Select Item: ";
        cin >> item;

        if (item == 1) price = 1000;
        else if (item == 2) price = 700;
        else if (item == 3) price = 150;
        else {
            cout << "Invalid Item!";
            return 0;
        }
        break;

    case 2: 
        cout << "\nClothing Items:" << endl;
        cout << "1. Jacket ($120)" << endl;
        cout << "2. T-shirt ($40)" << endl;
        cout << "3. Jeans ($60)" << endl;
        cout << "Select Item: ";
        cin >> item;

        if (item == 1) price = 120;
        else if (item == 2) price = 40;
        else if (item == 3) price = 60;
        else {
            cout << "Invalid Item!";
            return 0;
        }
        break;

    case 3: 
        cout << "\nGrocery Items:" << endl;
        cout << "1. Milk ($2)" << endl;
        cout << "2. Bread ($3)" << endl;
        cout << "3. Eggs ($5)" << endl;
        cout << "Select Item: ";
        cin >> item;

        if (item == 1) price = 2;
        else if (item == 2) price = 3;
        else if (item == 3) price = 5;
        else {
            cout << "Invalid Item!";
            return 0;
        }
        break;

    default:
        cout << "Invalid Category!";
        return 0;
    }

    cout << "Enter Quantity: ";
    cin >> quantity;

    total = price * quantity;

 
    if (total >= 100 && total <= 500)
        discount = total * 0.10;
    else if (total > 500)
        discount = total * 0.20;

    finalAmount = total - discount;


    cout << "\n===== INVOICE =====" << endl;
    cout << "Price per item: $" << price << endl;
    cout << "Quantity: " << quantity << endl;
    cout << "Total Amount: $" << total << endl;
    cout << "Discount: $" << discount << endl;
    cout << "Final Payable Amount: $" << finalAmount << endl;

    return 0;
}