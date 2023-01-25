#include "object.h"

object::object() {
    itemNum = 0;
    size = "";
    customerName = "";
}

object::object(int itemNumm, std::string sizee, std::string customerNamee) {
    itemNum = itemNumm;
    size = sizee;
    customerName = customerNamee;
}