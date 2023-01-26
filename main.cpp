#include <iostream>
#include <vector>
#include <algorithm>
#include "object.h"

void getUserInput(int &itemType, std::string &size, std::string &customerName);

int main(void) {
    std::vector<object> ordersList; //store orders (objects) WE NEED TO SORT THIS BY ITEM NUM TO GET THE DUB (this is 100% doable)

    //declare necessary variables
    int itemType;
    std::string size, customerName;

    char runOption = 'c';

    while (runOption == 'c') {
        getUserInput(itemType, size, customerName); //get user input
        
        object order(itemType, size, customerName); //create order with users input

        ordersList.push_back(order); //add order to list

        std::cout << "Continue? (c/n)? \n";
        std::cin >> runOption;
    }

    std::sort(ordersList.begin(), ordersList.end(), [](object a, object b) { return a.itemNum < b.itemNum; }); //sort the orders by item number ascending
                                                                                                              //(called a lambda function)
    //make sure the orders are being sorted properly (which they are on my end at least)
    //my thought is we just write the vector to the file in a for loop since its already sorted 
    for (int i = 0; i < ordersList.size(); i++) {
        std::cout << "Item Number: " << ordersList[i].itemNum << std::endl;
        std::cout << "Size: " << ordersList[i].size << std::endl;
        std::cout << "Customer Name: " << ordersList[i].customerName << std::endl;
    }


    // TESTING PURPOSES ONLY
    std::vector<std::string> tshirtSizes = {"M", "S", "L", "XL", "XXL", "XS", "YXS", "XXXXL", "YS", "YM", "YL", "XXXL"};
    sort(tshirtSizes.begin(), tshirtSizes.end(), tshirtSizeCompare);


    return 0; 
}

//get users input
void getUserInput(int &itemType, std::string &size, std::string &customerName) {
    //get item type
    std::cout << "Hello! to get started, Input an ItemType (1-15)" << std::endl;
    std::cin >> itemType;

    //get item size
    std::cout << "What is the size for the item? \n";
    std::cin >> size;

    //get customer name   
    std::cout << "What is the customers name? \n";
    std::cin >> customerName;
}

// compare sizes
bool tshirtSizeCompare(std::string a, std::string b) {
    // define an array of size strings in the desired sort order
    std::string sizes[] = {"YXS", "YS", "YM", "YL", "XS", "S", "M", "L", "XL", "XXL", "XXXL", "XXXXL"};
    // find the index of the first string in the array
    int indexA = find(sizes, sizes + 6, a) - sizes;
    // find the index of the second string in the array
    int indexB = find(sizes, sizes + 6, b) - sizes;
    // compare the indices and return the result
    return indexA < indexB;
}
