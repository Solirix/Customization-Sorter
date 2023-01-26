#include "object.h"

//default constructor
object::object() {
    itemNum = 0;
    size = "";
    customerName = "";
}

//specific constructor
object::object(int itemNum, std::string size, std::string customerName) {
    //set var in class (this) equal to val being passed in
    this -> itemNum = itemNum;
    this -> size = size;
    this -> customerName = customerName;
}