#include <iostream>
#include "object.h"

int main(void) {
    object test(1, "i", "s");

    std::cout << test.itemNum;

    return 0;
}