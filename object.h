#include <iostream>

class object{
    public:
    //order info
    int itemNum;
    std::string size;
    std::string customerName;

    //constructors
    object();
    object(int itemNum, std::string size, std::string customerName);
};