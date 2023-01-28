#include "object.h"

//default constructor
object::object() {
    itemNum = 0;
    size = "";
    customerName = "";
    sizeValue = 0;
}

//specific constructor
object::object(int itemNum, std::string size, std::string customerName) {
    //set var in class (this) equal to val being passed in
    this -> itemNum = itemNum;
    this -> size = size;
    this -> customerName = customerName;
}

void object::setSizeValue(std::string size) {
    std::map <std::string, int> sizeMap; //map size to value

    sizeMap["YXS"] = 1;
    sizeMap["YS"] = 2;
    sizeMap["YM"] = 3;
    sizeMap["YL"] = 4;
    sizeMap["XS"] = 5;
    sizeMap["S"] = 6;
    sizeMap["M"] = 7;
    sizeMap["L"] = 8;
    sizeMap["XL"] = 9;
    sizeMap["XXL"] = 10;
    sizeMap["XXXL"] = 11;
    sizeMap["XXXXL"] = 12;

    sizeValue = sizeMap[size]; //this is the magic line that sets the sizeValue to the value of the size in the map
}