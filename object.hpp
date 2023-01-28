#include <iostream>
#include <map>

class object{
    public:
    //order info
    int itemNum, sizeValue;
    std::string size;
    std::string customerName;

    //constructors
    object();
    object(int itemNum, std::string size, std::string customerName);

    //map size to value
    void setSizeValue(std::string size);
};