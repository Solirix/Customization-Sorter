
//Aiden Buterbaugh - T-shirt customization sorter and file generator

#include <iostream>
#include <string>
#include <cmath>
#include <fstream>
#include <vector>

int main(void) {

    std::vector<std::string> youthxs1;
    std::vector<std::string> youthxs2;
    std::vector<std::string> youthxs3;
    std::vector<std::string> youthxs4;
    std::vector<std::string> youthxs5;
    std::vector<std::string> youthxs6;
    std::vector<std::string> youthxs7;
    std::vector<std::string> youthxs8;
    std::vector<std::string> youthxs9;
    std::vector<std::string> youthxs10;
    std::vector<std::string> youthxs11;
    std::vector<std::string> youthxs12;
    std::vector<std::string> youthxs13;
    std::vector<std::string> youthxs14;
    std::vector<std::string> youthxs15;

    std::vector<std::string> youths1;
    std::vector<std::string> youths2;
    std::vector<std::string> youths3;
    std::vector<std::string> youths4;
    std::vector<std::string> youths5;
    std::vector<std::string> youths6;
    std::vector<std::string> youths7;
    std::vector<std::string> youths8;
    std::vector<std::string> youths9;
    std::vector<std::string> youths10;
    std::vector<std::string> youths11;
    std::vector<std::string> youths12;
    std::vector<std::string> youths13;
    std::vector<std::string> youths14;
    std::vector<std::string> youths15;

    std::vector<std::string> youthm1;
    std::vector<std::string> youthm2;
    std::vector<std::string> youthm3;
    std::vector<std::string> youthm4;
    std::vector<std::string> youthm5;
    std::vector<std::string> youthm6;
    std::vector<std::string> youthm7;
    std::vector<std::string> youthm8;
    std::vector<std::string> youthm9;
    std::vector<std::string> youthm10;
    std::vector<std::string> youthm11;
    std::vector<std::string> youthm12;
    std::vector<std::string> youthm13;
    std::vector<std::string> youthm14;
    std::vector<std::string> youthm15;

    std::vector<std::string> youthl1;
    std::vector<std::string> youthl2;
    std::vector<std::string> youthl3;
    std::vector<std::string> youthl4;
    std::vector<std::string> youthl5;
    std::vector<std::string> youthl6;
    std::vector<std::string> youthl7;
    std::vector<std::string> youthl8;
    std::vector<std::string> youthl9;
    std::vector<std::string> youthl10;
    std::vector<std::string> youthl11;
    std::vector<std::string> youthl12;
    std::vector<std::string> youthl13;
    std::vector<std::string> youthl14;
    std::vector<std::string> youthl15;

    std::vector<std::string> youthxl1;
    std::vector<std::string> youthxl2;
    std::vector<std::string> youthxl3;
    std::vector<std::string> youthxl4;
    std::vector<std::string> youthxl5;
    std::vector<std::string> youthxl6;
    std::vector<std::string> youthxl7;
    std::vector<std::string> youthxl8;
    std::vector<std::string> youthxl9;
    std::vector<std::string> youthxl10;
    std::vector<std::string> youthxl11;
    std::vector<std::string> youthxl12;
    std::vector<std::string> youthxl13;
    std::vector<std::string> youthxl14;
    std::vector<std::string> youthxl15;

    std::vector<std::string> xs1;
    std::vector<std::string> xs2;
    std::vector<std::string> xs3;
    std::vector<std::string> xs4;
    std::vector<std::string> xs5;
    std::vector<std::string> xs6;
    std::vector<std::string> xs7;
    std::vector<std::string> xs8;
    std::vector<std::string> xs9;
    std::vector<std::string> xs10;
    std::vector<std::string> xs11;
    std::vector<std::string> xs12;
    std::vector<std::string> xs13;
    std::vector<std::string> xs14;
    std::vector<std::string> xs15;

    std::vector<std::string> s1;
    std::vector<std::string> s2;
    std::vector<std::string> s3;
    std::vector<std::string> s4;
    std::vector<std::string> s5;
    std::vector<std::string> s6;
    std::vector<std::string> s7;
    std::vector<std::string> s8;
    std::vector<std::string> s9;
    std::vector<std::string> s10;
    std::vector<std::string> s11;
    std::vector<std::string> s12;
    std::vector<std::string> s13;
    std::vector<std::string> s14;
    std::vector<std::string> s15;

    std::vector<std::string> m1;
    std::vector<std::string> m2;
    std::vector<std::string> m3;
    std::vector<std::string> m4;
    std::vector<std::string> m5;
    std::vector<std::string> m6;
    std::vector<std::string> m7;
    std::vector<std::string> m8;
    std::vector<std::string> m9;
    std::vector<std::string> m10;
    std::vector<std::string> m11;
    std::vector<std::string> m12;
    std::vector<std::string> m13;
    std::vector<std::string> m14;
    std::vector<std::string> m15;

    std::vector<std::string> l1;
    std::vector<std::string> l2;
    std::vector<std::string> l3;
    std::vector<std::string> l4;
    std::vector<std::string> l5;
    std::vector<std::string> l6;
    std::vector<std::string> l7;
    std::vector<std::string> l8;
    std::vector<std::string> l9;
    std::vector<std::string> l10;
    std::vector<std::string> l11;
    std::vector<std::string> l12;
    std::vector<std::string> l13;
    std::vector<std::string> l14;
    std::vector<std::string> l15;

    std::vector<std::string> xl1;
    std::vector<std::string> xl2;
    std::vector<std::string> xl3;
    std::vector<std::string> xl4;
    std::vector<std::string> xl5;
    std::vector<std::string> xl6;
    std::vector<std::string> xl7;
    std::vector<std::string> xl8;
    std::vector<std::string> xl9;
    std::vector<std::string> xl10;
    std::vector<std::string> xl11;
    std::vector<std::string> xl12;
    std::vector<std::string> xl13;
    std::vector<std::string> xl14;
    std::vector<std::string> xl15;

    std::vector<std::string> xxl1;
    std::vector<std::string> xxl2;
    std::vector<std::string> xxl3;
    std::vector<std::string> xxl4;
    std::vector<std::string> xxl5;
    std::vector<std::string> xxl6;
    std::vector<std::string> xxl7;
    std::vector<std::string> xxl8;
    std::vector<std::string> xxl9;
    std::vector<std::string> xxl10;
    std::vector<std::string> xxl11;
    std::vector<std::string> xxl12;
    std::vector<std::string> xxl13;
    std::vector<std::string> xxl14;
    std::vector<std::string> xxl15;

    std::vector<std::string> xxxl1;
    std::vector<std::string> xxxl2;
    std::vector<std::string> xxxl3;
    std::vector<std::string> xxxl4;
    std::vector<std::string> xxxl5;
    std::vector<std::string> xxxl6;
    std::vector<std::string> xxxl7;
    std::vector<std::string> xxxl8;
    std::vector<std::string> xxxl9;
    std::vector<std::string> xxxl10;
    std::vector<std::string> xxxl11;
    std::vector<std::string> xxxl12;
    std::vector<std::string> xxxl13;
    std::vector<std::string> xxxl14;
    std::vector<std::string> xxxl15;

    std::vector<std::string> xxxxl1;
    std::vector<std::string> xxxxl2;
    std::vector<std::string> xxxxl3;
    std::vector<std::string> xxxxl4;
    std::vector<std::string> xxxxl5;
    std::vector<std::string> xxxxl6;
    std::vector<std::string> xxxxl7;
    std::vector<std::string> xxxxl8;
    std::vector<std::string> xxxxl9;
    std::vector<std::string> xxxxl10;
    std::vector<std::string> xxxxl11;
    std::vector<std::string> xxxxl12;
    std::vector<std::string> xxxxl13;
    std::vector<std::string> xxxxl14;
    std::vector<std::string> xxxxl15;

    std::string currSize;
    std::string currName;
    int currItem;
    char runOpt = 'c';

    unsigned int i = 0;

    while (runOpt == 'c') {
        std::cout << "Hello! to get started, simply input a size exactly as shown:\n";
        std::cout << "(Yxs, Ys, Ym, Yl, Yxl, xs, s, m, l, xl, 2xl, 3xl, 4xl)\n";
        std::cin >> currSize;

        if (currSize == "Yxs") {
            std::cout << "You've selected the size youth extra small\n";
            std::cout << "Now input the item #\n";
            std::cin >> currItem;
            if (currItem == 1) {
                std::cout << "You've selected Item #1\n";
                std::cout << "Now input the name of the person who wants item #1 in youth extra small\n";
                std::cin >> currName;
                youthxs1.push_back(currName);
            }
            else if (currItem == 2) {
                std::cout << "You've selected Item #2\n";
                std::cout << "Now input the name of the person who wants item #2 in youth extra small\n";
                std::cin >> currName;
                youthxs2.push_back(currName);
            }
            else if (currItem == 3) {
                std::cout << "You've selected Item #3\n";
                std::cout << "Now input the name of the person who wants item #3 in youth extra small\n";
                std::cin >> currName;
                youthxs3.push_back(currName);
            }
            else if (currItem == 4) {
                std::cout << "You've selected Item #4\n";
                std::cout << "Now input the name of the person who wants item #4 in youth extra small\n";
                std::cin >> currName;
                youthxs4.push_back(currName);
            }
            else if (currItem == 5) {
                std::cout << "You've selected Item #5\n";
                std::cout << "Now input the name of the person who wants item #5 in youth extra small\n";
                std::cin >> currName;
                youthxs5.push_back(currName);
            }
            else if (currItem == 6) {
                std::cout << "You've selected Item #6\n";
                std::cout << "Now input the name of the person who wants item #6 in youth extra small\n";
                std::cin >> currName;
                youthxs6.push_back(currName);
            }
            else if (currItem == 7) {
                std::cout << "You've selected Item #7\n";
                std::cout << "Now input the name of the person who wants item #7 in youth extra small\n";
                std::cin >> currName;
                youthxs7.push_back(currName);
            }
            else if (currItem == 8) {
                std::cout << "You've selected Item #8\n";
                std::cout << "Now input the name of the person who wants item #8 in youth extra small\n";
                std::cin >> currName;
                youthxs8.push_back(currName);
            }
            else if (currItem == 9) {
                std::cout << "You've selected Item #9\n";
                std::cout << "Now input the name of the person who wants item #9 in youth extra small\n";
                std::cin >> currName;
                youthxs9.push_back(currName);
            }
            else if (currItem == 10) {
                std::cout << "You've selected Item #10\n";
                std::cout << "Now input the name of the person who wants item #10 in youth extra small\n";
                std::cin >> currName;
                youthxs10.push_back(currName);
            }
            else if (currItem == 11) {
                std::cout << "You've selected Item #11\n";
                std::cout << "Now input the name of the person who wants item #11 in youth extra small\n";
                std::cin >> currName;
                youthxs11.push_back(currName);
            }
            else if (currItem == 12) {
                std::cout << "You've selected Item #12\n";
                std::cout << "Now input the name of the person who wants item #12 in youth extra small\n";
                std::cin >> currName;
                youthxs12.push_back(currName);
            }
            else if (currItem == 13) {
                std::cout << "You've selected Item #13\n";
                std::cout << "Now input the name of the person who wants item #13 in youth extra small\n";
                std::cin >> currName;
                youthxs13.push_back(currName);
            }
            else if (currItem == 14) {
                std::cout << "You've selected Item #14\n";
                std::cout << "Now input the name of the person who wants item #14 in youth extra small\n";
                std::cin >> currName;
                youthxs14.push_back(currName);
            }
            else if (currItem == 15) {
                std::cout << "You've selected Item #15\n";
                std::cout << "Now input the name of the person who wants item #15 in youth extra small\n";
                std::cin >> currName;
                youthxs15.push_back(currName);
            }
            else {
                std::cout << "Sorry, but Item #" << currItem << " is out of scope. please only choose an item # between 1 and 15\n";
            }
        }





        else if (currSize == "Ys") {
            std::cout << "You've selected the size youth small\n";
            std::cout << "Now input the item #\n";
            std::cin >> currItem;
            if (currItem == 1) {
                std::cout << "You've selected Item #1\n";
                std::cout << "Now input the name of the person who wants item #1 in youth small\n";
                std::cin >> currName;
                youths1.push_back(currName);
            }
            else if (currItem == 2) {
                std::cout << "You've selected Item #2\n";
                std::cout << "Now input the name of the person who wants item #2 in youth small\n";
                std::cin >> currName;
                youths2.push_back(currName);
            }
            else if (currItem == 3) {
                std::cout << "You've selected Item #3\n";
                std::cout << "Now input the name of the person who wants item #3 in youth small\n";
                std::cin >> currName;
                youths3.push_back(currName);
            }
            else if (currItem == 4) {
                std::cout << "You've selected Item #4\n";
                std::cout << "Now input the name of the person who wants item #4 in youth small\n";
                std::cin >> currName;
                youths4.push_back(currName);
            }
            else if (currItem == 5) {
                std::cout << "You've selected Item #5\n";
                std::cout << "Now input the name of the person who wants item #5 in youth small\n";
                std::cin >> currName;
                youths5.push_back(currName);
            }
            else if (currItem == 6) {
                std::cout << "You've selected Item #6\n";
                std::cout << "Now input the name of the person who wants item #6 in youth small\n";
                std::cin >> currName;
                youths6.push_back(currName);
            }
            else if (currItem == 7) {
                std::cout << "You've selected Item #7\n";
                std::cout << "Now input the name of the person who wants item #7 in youth small\n";
                std::cin >> currName;
                youths7.push_back(currName);
            }
            else if (currItem == 8) {
                std::cout << "You've selected Item #8\n";
                std::cout << "Now input the name of the person who wants item #8 in youth small\n";
                std::cin >> currName;
                youths8.push_back(currName);
            }
            else if (currItem == 9) {
                std::cout << "You've selected Item #9\n";
                std::cout << "Now input the name of the person who wants item #9 in youth small\n";
                std::cin >> currName;
                youths9.push_back(currName);
            }
            else if (currItem == 10) {
                std::cout << "You've selected Item #10\n";
                std::cout << "Now input the name of the person who wants item #10 in youth small\n";
                std::cin >> currName;
                youths10.push_back(currName);
            }
            else if (currItem == 11) {
                std::cout << "You've selected Item #11\n";
                std::cout << "Now input the name of the person who wants item #11 in youth small\n";
                std::cin >> currName;
                youths11.push_back(currName);
            }
            else if (currItem == 12) {
                std::cout << "You've selected Item #12\n";
                std::cout << "Now input the name of the person who wants item #12 in youth small\n";
                std::cin >> currName;
                youths12.push_back(currName);
            }
            else if (currItem == 13) {
                std::cout << "You've selected Item #13\n";
                std::cout << "Now input the name of the person who wants item #13 in youth small\n";
                std::cin >> currName;
                youths13.push_back(currName);
            }
            else if (currItem == 14) {
                std::cout << "You've selected Item #14\n";
                std::cout << "Now input the name of the person who wants item #14 in youth small\n";
                std::cin >> currName;
                youths14.push_back(currName);
            }
            else if (currItem == 15) {
                std::cout << "You've selected Item #15\n";
                std::cout << "Now input the name of the person who wants item #15 in youth small\n";
                std::cin >> currName;
                youths15.push_back(currName);
            }
            else {
                std::cout << "Sorry, but Item #" << currItem << " is out of scope. please only choose an item # between 1 and 15\n";
            }
        }









        else if (currSize == "Ym") {
            std::cout << "You've selected the size youth medium\n";
            std::cout << "Now input the item #\n";
            std::cin >> currItem;
            if (currItem == 1) {
                std::cout << "You've selected Item #1\n";
                std::cout << "Now input the name of the person who wants item #1 in youth medium\n";
                std::cin >> currName;
                youthm1.push_back(currName);
            }
            else if (currItem == 2) {
                std::cout << "You've selected Item #2\n";
                std::cout << "Now input the name of the person who wants item #2 in youth medium\n";
                std::cin >> currName;
                youthm2.push_back(currName);
            }
            else if (currItem == 3) {
                std::cout << "You've selected Item #3\n";
                std::cout << "Now input the name of the person who wants item #3 in youth medium\n";
                std::cin >> currName;
                youthm3.push_back(currName);
            }
            else if (currItem == 4) {
                std::cout << "You've selected Item #4\n";
                std::cout << "Now input the name of the person who wants item #4 in youth medium\n";
                std::cin >> currName;
                youthm4.push_back(currName);
            }
            else if (currItem == 5) {
                std::cout << "You've selected Item #5\n";
                std::cout << "Now input the name of the person who wants item #5 in youth medium\n";
                std::cin >> currName;
                youthm5.push_back(currName);
            }
            else if (currItem == 6) {
                std::cout << "You've selected Item #6\n";
                std::cout << "Now input the name of the person who wants item #6 in youth medium\n";
                std::cin >> currName;
                youthm6.push_back(currName);
            }
            else if (currItem == 7) {
                std::cout << "You've selected Item #7\n";
                std::cout << "Now input the name of the person who wants item #7 in youth medium\n";
                std::cin >> currName;
                youthm7.push_back(currName);
            }
            else if (currItem == 8) {
                std::cout << "You've selected Item #8\n";
                std::cout << "Now input the name of the person who wants item #8 in youth medium\n";
                std::cin >> currName;
                youthm8.push_back(currName);
            }
            else if (currItem == 9) {
                std::cout << "You've selected Item #9\n";
                std::cout << "Now input the name of the person who wants item #9 in youth medium\n";
                std::cin >> currName;
                youthm9.push_back(currName);
            }
            else if (currItem == 10) {
                std::cout << "You've selected Item #10\n";
                std::cout << "Now input the name of the person who wants item #10 in youth medium\n";
                std::cin >> currName;
                youthm10.push_back(currName);
            }
            else if (currItem == 11) {
                std::cout << "You've selected Item #11\n";
                std::cout << "Now input the name of the person who wants item #11 in youth medium\n";
                std::cin >> currName;
                youthm11.push_back(currName);
            }
            else if (currItem == 12) {
                std::cout << "You've selected Item #12\n";
                std::cout << "Now input the name of the person who wants item #12 in youth medium\n";
                std::cin >> currName;
                youthm12.push_back(currName);
            }
            else if (currItem == 13) {
                std::cout << "You've selected Item #13\n";
                std::cout << "Now input the name of the person who wants item #13 in youth medium\n";
                std::cin >> currName;
                youthm13.push_back(currName);
            }
            else if (currItem == 14) {
                std::cout << "You've selected Item #14\n";
                std::cout << "Now input the name of the person who wants item #14 in youth medium\n";
                std::cin >> currName;
                youthm14.push_back(currName);
            }
            else if (currItem == 15) {
                std::cout << "You've selected Item #15\n";
                std::cout << "Now input the name of the person who wants item #15 in youth medium\n";
                std::cin >> currName;
                youthm15.push_back(currName);
            }
            else {
                std::cout << "Sorry, but Item #" << currItem << " is out of scope. please only choose an item # between 1 and 15\n";
            }
        }








        else if (currSize == "Yl") {
            std::cout << "You've selected the size youth large\n";
            std::cout << "Now input the item #\n";
            std::cin >> currItem;
            if (currItem == 1) {
                std::cout << "You've selected Item #1\n";
                std::cout << "Now input the name of the person who wants item #1 in youth large\n";
                std::cin >> currName;
                youthl1.push_back(currName);
            }
            else if (currItem == 2) {
                std::cout << "You've selected Item #2\n";
                std::cout << "Now input the name of the person who wants item #2 in youth large\n";
                std::cin >> currName;
                youthl2.push_back(currName);
            }
            else if (currItem == 3) {
                std::cout << "You've selected Item #3\n";
                std::cout << "Now input the name of the person who wants item #3 in youth large\n";
                std::cin >> currName;
                youthl3.push_back(currName);
            }
            else if (currItem == 4) {
                std::cout << "You've selected Item #4\n";
                std::cout << "Now input the name of the person who wants item #4 in youth large\n";
                std::cin >> currName;
                youthl4.push_back(currName);
            }
            else if (currItem == 5) {
                std::cout << "You've selected Item #5\n";
                std::cout << "Now input the name of the person who wants item #5 in youth large\n";
                std::cin >> currName;
                youthl5.push_back(currName);
            }
            else if (currItem == 6) {
                std::cout << "You've selected Item #6\n";
                std::cout << "Now input the name of the person who wants item #6 in youth large\n";
                std::cin >> currName;
                youthl6.push_back(currName);
            }
            else if (currItem == 7) {
                std::cout << "You've selected Item #7\n";
                std::cout << "Now input the name of the person who wants item #7 in youth large\n";
                std::cin >> currName;
                youthl7.push_back(currName);
            }
            else if (currItem == 8) {
                std::cout << "You've selected Item #8\n";
                std::cout << "Now input the name of the person who wants item #8 in youth large\n";
                std::cin >> currName;
                youthl8.push_back(currName);
            }
            else if (currItem == 9) {
                std::cout << "You've selected Item #9\n";
                std::cout << "Now input the name of the person who wants item #9 in youth large\n";
                std::cin >> currName;
                youthl9.push_back(currName);
            }
            else if (currItem == 10) {
                std::cout << "You've selected Item #10\n";
                std::cout << "Now input the name of the person who wants item #10 in youth large\n";
                std::cin >> currName;
                youthl10.push_back(currName);
            }
            else if (currItem == 11) {
                std::cout << "You've selected Item #11\n";
                std::cout << "Now input the name of the person who wants item #11 in youth large\n";
                std::cin >> currName;
                youthl11.push_back(currName);
            }
            else if (currItem == 12) {
                std::cout << "You've selected Item #12\n";
                std::cout << "Now input the name of the person who wants item #12 in youth large\n";
                std::cin >> currName;
                youthl12.push_back(currName);
            }
            else if (currItem == 13) {
                std::cout << "You've selected Item #13\n";
                std::cout << "Now input the name of the person who wants item #13 in youth large\n";
                std::cin >> currName;
                youthl13.push_back(currName);
            }
            else if (currItem == 14) {
                std::cout << "You've selected Item #14\n";
                std::cout << "Now input the name of the person who wants item #14 in youth large\n";
                std::cin >> currName;
                youthl14.push_back(currName);
            }
            else if (currItem == 15) {
                std::cout << "You've selected Item #15\n";
                std::cout << "Now input the name of the person who wants item #15 in youth large\n";
                std::cin >> currName;
                youthl15.push_back(currName);
            }
            else {
                std::cout << "Sorry, but Item #" << currItem << " is out of scope. please only choose an item # between 1 and 15\n";
            }
        }




        else if (currSize == "Yxl") {
            std::cout << "You've selected the size youth extra large\n";
            std::cout << "Now input the item #\n";
            std::cin >> currItem;
            if (currItem == 1) {
                std::cout << "You've selected Item #1\n";
                std::cout << "Now input the name of the person who wants item #1 in youth extra large\n";
                std::cin >> currName;
                youthxl1.push_back(currName);
            }
            else if (currItem == 2) {
                std::cout << "You've selected Item #2\n";
                std::cout << "Now input the name of the person who wants item #2 in youth extra large\n";
                std::cin >> currName;
                youthxl2.push_back(currName);
            }
            else if (currItem == 3) {
                std::cout << "You've selected Item #3\n";
                std::cout << "Now input the name of the person who wants item #3 in youth extra large\n";
                std::cin >> currName;
                youthxl3.push_back(currName);
            }
            else if (currItem == 4) {
                std::cout << "You've selected Item #4\n";
                std::cout << "Now input the name of the person who wants item #4 in youth extra large\n";
                std::cin >> currName;
                youthxl4.push_back(currName);
            }
            else if (currItem == 5) {
                std::cout << "You've selected Item #5\n";
                std::cout << "Now input the name of the person who wants item #5 in youth extra large\n";
                std::cin >> currName;
                youthxl5.push_back(currName);
            }
            else if (currItem == 6) {
                std::cout << "You've selected Item #6\n";
                std::cout << "Now input the name of the person who wants item #6 in youth extra large\n";
                std::cin >> currName;
                youthxl6.push_back(currName);
            }
            else if (currItem == 7) {
                std::cout << "You've selected Item #7\n";
                std::cout << "Now input the name of the person who wants item #7 in youth extra large\n";
                std::cin >> currName;
                youthxl7.push_back(currName);
            }
            else if (currItem == 8) {
                std::cout << "You've selected Item #8\n";
                std::cout << "Now input the name of the person who wants item #8 in youth extra large\n";
                std::cin >> currName;
                youthxl8.push_back(currName);
            }
            else if (currItem == 9) {
                std::cout << "You've selected Item #9\n";
                std::cout << "Now input the name of the person who wants item #9 in youth extra large\n";
                std::cin >> currName;
                youthxl9.push_back(currName);
            }
            else if (currItem == 10) {
                std::cout << "You've selected Item #10\n";
                std::cout << "Now input the name of the person who wants item #10 in youth extra large\n";
                std::cin >> currName;
                youthxl10.push_back(currName);
            }
            else if (currItem == 11) {
                std::cout << "You've selected Item #11\n";
                std::cout << "Now input the name of the person who wants item #11 in youth extra large\n";
                std::cin >> currName;
                youthxl11.push_back(currName);
            }
            else if (currItem == 12) {
                std::cout << "You've selected Item #12\n";
                std::cout << "Now input the name of the person who wants item #12 in youth extra large\n";
                std::cin >> currName;
                youthxl12.push_back(currName);
            }
            else if (currItem == 13) {
                std::cout << "You've selected Item #13\n";
                std::cout << "Now input the name of the person who wants item #13 in youth extra large\n";
                std::cin >> currName;
                youthxl13.push_back(currName);
            }
            else if (currItem == 14) {
                std::cout << "You've selected Item #14\n";
                std::cout << "Now input the name of the person who wants item #14 in youth extra large\n";
                std::cin >> currName;
                youthxl14.push_back(currName);
            }
            else if (currItem == 15) {
                std::cout << "You've selected Item #15\n";
                std::cout << "Now input the name of the person who wants item #15 in youth extra large\n";
                std::cin >> currName;
                youthxl15.push_back(currName);
            }
            else {
                std::cout << "Sorry, but Item #" << currItem << " is out of scope. please only choose an item # between 1 and 15\n";
            }
        }




        else if (currSize == "xs") {
            std::cout << "You've selected the size extra small\n";
            std::cout << "Now input the item #\n";
            std::cin >> currItem;
            if (currItem == 1) {
                std::cout << "You've selected Item #1\n";
                std::cout << "Now input the name of the person who wants item #1 in extra small\n";
                std::cin >> currName;
                xs1.push_back(currName);
            }
            else if (currItem == 2) {
                std::cout << "You've selected Item #2\n";
                std::cout << "Now input the name of the person who wants item #2 in extra small\n";
                std::cin >> currName;
                xs2.push_back(currName);
            }
            else if (currItem == 3) {
                std::cout << "You've selected Item #3\n";
                std::cout << "Now input the name of the person who wants item #3 in extra small\n";
                std::cin >> currName;
                xs3.push_back(currName);
            }
            else if (currItem == 4) {
                std::cout << "You've selected Item #4\n";
                std::cout << "Now input the name of the person who wants item #4 in extra small\n";
                std::cin >> currName;
                xs4.push_back(currName);
            }
            else if (currItem == 5) {
                std::cout << "You've selected Item #5\n";
                std::cout << "Now input the name of the person who wants item #5 in extra small\n";
                std::cin >> currName;
                xs5.push_back(currName);
            }
            else if (currItem == 6) {
                std::cout << "You've selected Item #6\n";
                std::cout << "Now input the name of the person who wants item #6 in extra small\n";
                std::cin >> currName;
                xs6.push_back(currName);
            }
            else if (currItem == 7) {
                std::cout << "You've selected Item #7\n";
                std::cout << "Now input the name of the person who wants item #7 in extra small\n";
                std::cin >> currName;
                xs7.push_back(currName);
            }
            else if (currItem == 8) {
                std::cout << "You've selected Item #8\n";
                std::cout << "Now input the name of the person who wants item #8 in extra small\n";
                std::cin >> currName;
                xs8.push_back(currName);
            }
            else if (currItem == 9) {
                std::cout << "You've selected Item #9\n";
                std::cout << "Now input the name of the person who wants item #9 in extra small\n";
                std::cin >> currName;
                xs9.push_back(currName);
            }
            else if (currItem == 10) {
                std::cout << "You've selected Item #10\n";
                std::cout << "Now input the name of the person who wants item #10 in extra small\n";
                std::cin >> currName;
                xs10.push_back(currName);
            }
            else if (currItem == 11) {
                std::cout << "You've selected Item #11\n";
                std::cout << "Now input the name of the person who wants item #11 in extra small\n";
                std::cin >> currName;
                xs11.push_back(currName);
            }
            else if (currItem == 12) {
                std::cout << "You've selected Item #12\n";
                std::cout << "Now input the name of the person who wants item #12 in extra small\n";
                std::cin >> currName;
                xs12.push_back(currName);
            }
            else if (currItem == 13) {
                std::cout << "You've selected Item #13\n";
                std::cout << "Now input the name of the person who wants item #13 in extra small\n";
                std::cin >> currName;
                xs13.push_back(currName);
            }
            else if (currItem == 14) {
                std::cout << "You've selected Item #14\n";
                std::cout << "Now input the name of the person who wants item #14 in extra small\n";
                std::cin >> currName;
                xs14.push_back(currName);
            }
            else if (currItem == 15) {
                std::cout << "You've selected Item #15\n";
                std::cout << "Now input the name of the person who wants item #15 in extra small\n";
                std::cin >> currName;
                xs15.push_back(currName);
            }
            else {
                std::cout << "Sorry, but Item #" << currItem << " is out of scope. please only choose an item # between 1 and 15\n";
            }
        }




        else if (currSize == "s") {
            std::cout << "You've selected the size small\n";
            std::cout << "Now input the item #\n";
            std::cin >> currItem;
            if (currItem == 1) {
                std::cout << "You've selected Item #1\n";
                std::cout << "Now input the name of the person who wants item #1 in small\n";
                std::cin >> currName;
                s1.push_back(currName);
            }
            else if (currItem == 2) {
                std::cout << "You've selected Item #2\n";
                std::cout << "Now input the name of the person who wants item #2 in small\n";
                std::cin >> currName;
                s2.push_back(currName);
            }
            else if (currItem == 3) {
                std::cout << "You've selected Item #3\n";
                std::cout << "Now input the name of the person who wants item #3 in small\n";
                std::cin >> currName;
                s3.push_back(currName);
            }
            else if (currItem == 4) {
                std::cout << "You've selected Item #4\n";
                std::cout << "Now input the name of the person who wants item #4 in small\n";
                std::cin >> currName;
                s4.push_back(currName);
            }
            else if (currItem == 5) {
                std::cout << "You've selected Item #5\n";
                std::cout << "Now input the name of the person who wants item #5 in small\n";
                std::cin >> currName;
                s5.push_back(currName);
            }
            else if (currItem == 6) {
                std::cout << "You've selected Item #6\n";
                std::cout << "Now input the name of the person who wants item #6 in small\n";
                std::cin >> currName;
                s6.push_back(currName);
            }
            else if (currItem == 7) {
                std::cout << "You've selected Item #7\n";
                std::cout << "Now input the name of the person who wants item #7 in small\n";
                std::cin >> currName;
                s7.push_back(currName);
            }
            else if (currItem == 8) {
                std::cout << "You've selected Item #8\n";
                std::cout << "Now input the name of the person who wants item #8 in small\n";
                std::cin >> currName;
                s8.push_back(currName);
            }
            else if (currItem == 9) {
                std::cout << "You've selected Item #9\n";
                std::cout << "Now input the name of the person who wants item #9 in small\n";
                std::cin >> currName;
                s9.push_back(currName);
            }
            else if (currItem == 10) {
                std::cout << "You've selected Item #10\n";
                std::cout << "Now input the name of the person who wants item #10 in small\n";
                std::cin >> currName;
                s10.push_back(currName);
            }
            else if (currItem == 11) {
                std::cout << "You've selected Item #11\n";
                std::cout << "Now input the name of the person who wants item #11 in small\n";
                std::cin >> currName;
                s11.push_back(currName);
            }
            else if (currItem == 12) {
                std::cout << "You've selected Item #12\n";
                std::cout << "Now input the name of the person who wants item #12 in small\n";
                std::cin >> currName;
                s12.push_back(currName);
            }
            else if (currItem == 13) {
                std::cout << "You've selected Item #13\n";
                std::cout << "Now input the name of the person who wants item #13 in small\n";
                std::cin >> currName;
                s13.push_back(currName);
            }
            else if (currItem == 14) {
                std::cout << "You've selected Item #14\n";
                std::cout << "Now input the name of the person who wants item #14 in small\n";
                std::cin >> currName;
                s14.push_back(currName);
            }
            else if (currItem == 15) {
                std::cout << "You've selected Item #15\n";
                std::cout << "Now input the name of the person who wants item #15 in small\n";
                std::cin >> currName;
                s15.push_back(currName);
            }
            else {
                std::cout << "Sorry, but Item #" << currItem << " is out of scope. please only choose an item # between 1 and 15\n";
            }
        }




        else if (currSize == "m") {
            std::cout << "You've selected the size medium\n";
            std::cout << "Now input the item #\n";
            std::cin >> currItem;
            if (currItem == 1) {
                std::cout << "You've selected Item #1\n";
                std::cout << "Now input the name of the person who wants item #1 in medium\n";
                std::cin >> currName;
                m1.push_back(currName);
            }
            else if (currItem == 2) {
                std::cout << "You've selected Item #2\n";
                std::cout << "Now input the name of the person who wants item #2 in medium\n";
                std::cin >> currName;
                m2.push_back(currName);
            }
            else if (currItem == 3) {
                std::cout << "You've selected Item #3\n";
                std::cout << "Now input the name of the person who wants item #3 in medium\n";
                std::cin >> currName;
                m3.push_back(currName);
            }
            else if (currItem == 4) {
                std::cout << "You've selected Item #4\n";
                std::cout << "Now input the name of the person who wants item #4 in medium\n";
                std::cin >> currName;
                m4.push_back(currName);
            }
            else if (currItem == 5) {
                std::cout << "You've selected Item #5\n";
                std::cout << "Now input the name of the person who wants item #5 in medium\n";
                std::cin >> currName;
                m5.push_back(currName);
            }
            else if (currItem == 6) {
                std::cout << "You've selected Item #6\n";
                std::cout << "Now input the name of the person who wants item #6 in medium\n";
                std::cin >> currName;
                m6.push_back(currName);
            }
            else if (currItem == 7) {
                std::cout << "You've selected Item #7\n";
                std::cout << "Now input the name of the person who wants item #7 in medium\n";
                std::cin >> currName;
                m7.push_back(currName);
            }
            else if (currItem == 8) {
                std::cout << "You've selected Item #8\n";
                std::cout << "Now input the name of the person who wants item #8 in medium\n";
                std::cin >> currName;
                m8.push_back(currName);
            }
            else if (currItem == 9) {
                std::cout << "You've selected Item #9\n";
                std::cout << "Now input the name of the person who wants item #9 in medium\n";
                std::cin >> currName;
                m9.push_back(currName);
            }
            else if (currItem == 10) {
                std::cout << "You've selected Item #10\n";
                std::cout << "Now input the name of the person who wants item #10 in medium\n";
                std::cin >> currName;
                m10.push_back(currName);
            }
            else if (currItem == 11) {
                std::cout << "You've selected Item #11\n";
                std::cout << "Now input the name of the person who wants item #11 in medium\n";
                std::cin >> currName;
                m11.push_back(currName);
            }
            else if (currItem == 12) {
                std::cout << "You've selected Item #12\n";
                std::cout << "Now input the name of the person who wants item #12 in medium\n";
                std::cin >> currName;
                m12.push_back(currName);
            }
            else if (currItem == 13) {
                std::cout << "You've selected Item #13\n";
                std::cout << "Now input the name of the person who wants item #13 in medium\n";
                std::cin >> currName;
                m13.push_back(currName);
            }
            else if (currItem == 14) {
                std::cout << "You've selected Item #14\n";
                std::cout << "Now input the name of the person who wants item #14 in medium\n";
                std::cin >> currName;
                m14.push_back(currName);
            }
            else if (currItem == 15) {
                std::cout << "You've selected Item #15\n";
                std::cout << "Now input the name of the person who wants item #15 in medium\n";
                std::cin >> currName;
                m15.push_back(currName);
            }
            else {
                std::cout << "Sorry, but Item #" << currItem << " is out of scope. please only choose an item # between 1 and 15\n";
            }
        }




        else if (currSize == "l") {
            std::cout << "You've selected the size large\n";
            std::cout << "Now input the item #\n";
            std::cin >> currItem;
            if (currItem == 1) {
                std::cout << "You've selected Item #1\n";
                std::cout << "Now input the name of the person who wants item #1 in large\n";
                std::cin >> currName;
                l1.push_back(currName);
            }
            else if (currItem == 2) {
                std::cout << "You've selected Item #2\n";
                std::cout << "Now input the name of the person who wants item #2 in large\n";
                std::cin >> currName;
                l2.push_back(currName);
            }
            else if (currItem == 3) {
                std::cout << "You've selected Item #3\n";
                std::cout << "Now input the name of the person who wants item #3 in large\n";
                std::cin >> currName;
                l3.push_back(currName);
            }
            else if (currItem == 4) {
                std::cout << "You've selected Item #4\n";
                std::cout << "Now input the name of the person who wants item #4 in large\n";
                std::cin >> currName;
                l4.push_back(currName);
            }
            else if (currItem == 5) {
                std::cout << "You've selected Item #5\n";
                std::cout << "Now input the name of the person who wants item #5 in large\n";
                std::cin >> currName;
                l5.push_back(currName);
            }
            else if (currItem == 6) {
                std::cout << "You've selected Item #6\n";
                std::cout << "Now input the name of the person who wants item #6 in large\n";
                std::cin >> currName;
                l6.push_back(currName);
            }
            else if (currItem == 7) {
                std::cout << "You've selected Item #7\n";
                std::cout << "Now input the name of the person who wants item #7 in large\n";
                std::cin >> currName;
                l7.push_back(currName);
            }
            else if (currItem == 8) {
                std::cout << "You've selected Item #8\n";
                std::cout << "Now input the name of the person who wants item #8 in large\n";
                std::cin >> currName;
                l8.push_back(currName);
            }
            else if (currItem == 9) {
                std::cout << "You've selected Item #9\n";
                std::cout << "Now input the name of the person who wants item #9 in large\n";
                std::cin >> currName;
                l9.push_back(currName);
            }
            else if (currItem == 10) {
                std::cout << "You've selected Item #10\n";
                std::cout << "Now input the name of the person who wants item #10 in large\n";
                std::cin >> currName;
                l10.push_back(currName);
            }
            else if (currItem == 11) {
                std::cout << "You've selected Item #11\n";
                std::cout << "Now input the name of the person who wants item #11 in large\n";
                std::cin >> currName;
                l11.push_back(currName);
            }
            else if (currItem == 12) {
                std::cout << "You've selected Item #12\n";
                std::cout << "Now input the name of the person who wants item #12 in large\n";
                std::cin >> currName;
                l12.push_back(currName);
            }
            else if (currItem == 13) {
                std::cout << "You've selected Item #13\n";
                std::cout << "Now input the name of the person who wants item #13 in large\n";
                std::cin >> currName;
                l13.push_back(currName);
            }
            else if (currItem == 14) {
                std::cout << "You've selected Item #14\n";
                std::cout << "Now input the name of the person who wants item #14 in large\n";
                std::cin >> currName;
                l14.push_back(currName);
            }
            else if (currItem == 15) {
                std::cout << "You've selected Item #15\n";
                std::cout << "Now input the name of the person who wants item #15 in large\n";
                std::cin >> currName;
                l15.push_back(currName);
            }
            else {
                std::cout << "Sorry, but Item #" << currItem << " is out of scope. please only choose an item # between 1 and 15\n";
            }
        }




        else if (currSize == "xl") {
            std::cout << "You've selected the size extra large\n";
            std::cout << "Now input the item #\n";
            std::cin >> currItem;
            if (currItem == 1) {
                std::cout << "You've selected Item #1\n";
                std::cout << "Now input the name of the person who wants item #1 in extra large\n";
                std::cin >> currName;
                xl1.push_back(currName);
            }
            else if (currItem == 2) {
                std::cout << "You've selected Item #2\n";
                std::cout << "Now input the name of the person who wants item #2 in extra large\n";
                std::cin >> currName;
                xl2.push_back(currName);
            }
            else if (currItem == 3) {
                std::cout << "You've selected Item #3\n";
                std::cout << "Now input the name of the person who wants item #3 in extra large\n";
                std::cin >> currName;
                xl3.push_back(currName);
            }
            else if (currItem == 4) {
                std::cout << "You've selected Item #4\n";
                std::cout << "Now input the name of the person who wants item #4 in extra large\n";
                std::cin >> currName;
                xl4.push_back(currName);
            }
            else if (currItem == 5) {
                std::cout << "You've selected Item #5\n";
                std::cout << "Now input the name of the person who wants item #5 in extra large\n";
                std::cin >> currName;
                xl5.push_back(currName);
            }
            else if (currItem == 6) {
                std::cout << "You've selected Item #6\n";
                std::cout << "Now input the name of the person who wants item #6 in extra large\n";
                std::cin >> currName;
                xl6.push_back(currName);
            }
            else if (currItem == 7) {
                std::cout << "You've selected Item #7\n";
                std::cout << "Now input the name of the person who wants item #7 in extra large\n";
                std::cin >> currName;
                xl7.push_back(currName);
            }
            else if (currItem == 8) {
                std::cout << "You've selected Item #8\n";
                std::cout << "Now input the name of the person who wants item #8 in extra large\n";
                std::cin >> currName;
                xl8.push_back(currName);
            }
            else if (currItem == 9) {
                std::cout << "You've selected Item #9\n";
                std::cout << "Now input the name of the person who wants item #9 in extra large\n";
                std::cin >> currName;
                xl9.push_back(currName);
            }
            else if (currItem == 10) {
                std::cout << "You've selected Item #10\n";
                std::cout << "Now input the name of the person who wants item #10 in extra large\n";
                std::cin >> currName;
                xl10.push_back(currName);
            }
            else if (currItem == 11) {
                std::cout << "You've selected Item #11\n";
                std::cout << "Now input the name of the person who wants item #11 in extra large\n";
                std::cin >> currName;
                xl11.push_back(currName);
            }
            else if (currItem == 12) {
                std::cout << "You've selected Item #12\n";
                std::cout << "Now input the name of the person who wants item #12 in extra large\n";
                std::cin >> currName;
                xl12.push_back(currName);
            }
            else if (currItem == 13) {
                std::cout << "You've selected Item #13\n";
                std::cout << "Now input the name of the person who wants item #13 in extra large\n";
                std::cin >> currName;
                xl13.push_back(currName);
            }
            else if (currItem == 14) {
                std::cout << "You've selected Item #14\n";
                std::cout << "Now input the name of the person who wants item #14 in extra large\n";
                std::cin >> currName;
                xl14.push_back(currName);
            }
            else if (currItem == 15) {
                std::cout << "You've selected Item #15\n";
                std::cout << "Now input the name of the person who wants item #15 in extra large\n";
                std::cin >> currName;
                xl15.push_back(currName);
            }
            else {
                std::cout << "Sorry, but Item #" << currItem << " is out of scope. please only choose an item # between 1 and 15\n";
            }
        }




        else if (currSize == "2xl") {
            std::cout << "You've selected the size DOUBLE extra large\n";
            std::cout << "Now input the item #\n";
            std::cin >> currItem;
            if (currItem == 1) {
                std::cout << "You've selected Item #1\n";
                std::cout << "Now input the name of the person who wants item #1 in DOUBLE extra large\n";
                std::cin >> currName;
                xxl1.push_back(currName);
            }
            else if (currItem == 2) {
                std::cout << "You've selected Item #2\n";
                std::cout << "Now input the name of the person who wants item #2 in DOUBLE extra large\n";
                std::cin >> currName;
                xxl2.push_back(currName);
            }
            else if (currItem == 3) {
                std::cout << "You've selected Item #3\n";
                std::cout << "Now input the name of the person who wants item #3 in DOUBLE extra large\n";
                std::cin >> currName;
                xxl3.push_back(currName);
            }
            else if (currItem == 4) {
                std::cout << "You've selected Item #4\n";
                std::cout << "Now input the name of the person who wants item #4 in DOUBLE extra large\n";
                std::cin >> currName;
                xxl4.push_back(currName);
            }
            else if (currItem == 5) {
                std::cout << "You've selected Item #5\n";
                std::cout << "Now input the name of the person who wants item #5 in DOUBLE extra large\n";
                std::cin >> currName;
                xxl5.push_back(currName);
            }
            else if (currItem == 6) {
                std::cout << "You've selected Item #6\n";
                std::cout << "Now input the name of the person who wants item #6 in DOUBLE extra large\n";
                std::cin >> currName;
                xxl6.push_back(currName);
            }
            else if (currItem == 7) {
                std::cout << "You've selected Item #7\n";
                std::cout << "Now input the name of the person who wants item #7 in DOUBLE extra large\n";
                std::cin >> currName;
                xxl7.push_back(currName);
            }
            else if (currItem == 8) {
                std::cout << "You've selected Item #8\n";
                std::cout << "Now input the name of the person who wants item #8 in DOUBLE extra large\n";
                std::cin >> currName;
                xxl8.push_back(currName);
            }
            else if (currItem == 9) {
                std::cout << "You've selected Item #9\n";
                std::cout << "Now input the name of the person who wants item #9 in DOUBLE extra large\n";
                std::cin >> currName;
                xxl9.push_back(currName);
            }
            else if (currItem == 10) {
                std::cout << "You've selected Item #10\n";
                std::cout << "Now input the name of the person who wants item #10 in DOUBLE extra large\n";
                std::cin >> currName;
                xxl10.push_back(currName);
            }
            else if (currItem == 11) {
                std::cout << "You've selected Item #11\n";
                std::cout << "Now input the name of the person who wants item #11 in DOUBLE extra large\n";
                std::cin >> currName;
                xxl11.push_back(currName);
            }
            else if (currItem == 12) {
                std::cout << "You've selected Item #12\n";
                std::cout << "Now input the name of the person who wants item #12 in DOUBLE extra large\n";
                std::cin >> currName;
                xxl12.push_back(currName);
            }
            else if (currItem == 13) {
                std::cout << "You've selected Item #13\n";
                std::cout << "Now input the name of the person who wants item #13 in DOUBLE extra large\n";
                std::cin >> currName;
                xxl13.push_back(currName);
            }
            else if (currItem == 14) {
                std::cout << "You've selected Item #14\n";
                std::cout << "Now input the name of the person who wants item #14 in DOUBLE extra large\n";
                std::cin >> currName;
                xxl14.push_back(currName);
            }
            else if (currItem == 15) {
                std::cout << "You've selected Item #15\n";
                std::cout << "Now input the name of the person who wants item #15 in DOUBLE extra large\n";
                std::cin >> currName;
                xxl15.push_back(currName);
            }
            else {
                std::cout << "Sorry, but Item #" << currItem << " is out of scope. please only choose an item # between 1 and 15\n";
            }
        }





        else if (currSize == "3xl") {
            std::cout << "You've selected the size TRIPLE extra large\n";
            std::cout << "Now input the item #\n";
            std::cin >> currItem;
            if (currItem == 1) {
                std::cout << "You've selected Item #1\n";
                std::cout << "Now input the name of the person who wants item #1 in TRIPLE extra large\n";
                std::cin >> currName;
                xxxl1.push_back(currName);
            }
            else if (currItem == 2) {
                std::cout << "You've selected Item #2\n";
                std::cout << "Now input the name of the person who wants item #2 in TRIPLE extra large\n";
                std::cin >> currName;
                xxxl2.push_back(currName);
            }
            else if (currItem == 3) {
                std::cout << "You've selected Item #3\n";
                std::cout << "Now input the name of the person who wants item #3 in TRIPLE extra large\n";
                std::cin >> currName;
                xxxl3.push_back(currName);
            }
            else if (currItem == 4) {
                std::cout << "You've selected Item #4\n";
                std::cout << "Now input the name of the person who wants item #4 in TRIPLE extra large\n";
                std::cin >> currName;
                xxxl4.push_back(currName);
            }
            else if (currItem == 5) {
                std::cout << "You've selected Item #5\n";
                std::cout << "Now input the name of the person who wants item #5 in TRIPLE extra large\n";
                std::cin >> currName;
                xxxl5.push_back(currName);
            }
            else if (currItem == 6) {
                std::cout << "You've selected Item #6\n";
                std::cout << "Now input the name of the person who wants item #6 in TRIPLE extra large\n";
                std::cin >> currName;
                xxxl6.push_back(currName);
            }
            else if (currItem == 7) {
                std::cout << "You've selected Item #7\n";
                std::cout << "Now input the name of the person who wants item #7 in TRIPLE extra large\n";
                std::cin >> currName;
                xxxl7.push_back(currName);
            }
            else if (currItem == 8) {
                std::cout << "You've selected Item #8\n";
                std::cout << "Now input the name of the person who wants item #8 in TRIPLE extra large\n";
                std::cin >> currName;
                xxxl8.push_back(currName);
            }
            else if (currItem == 9) {
                std::cout << "You've selected Item #9\n";
                std::cout << "Now input the name of the person who wants item #9 in TRIPLE extra large\n";
                std::cin >> currName;
                xxxl9.push_back(currName);
            }
            else if (currItem == 10) {
                std::cout << "You've selected Item #10\n";
                std::cout << "Now input the name of the person who wants item #10 in TRIPLE extra large\n";
                std::cin >> currName;
                xxxl10.push_back(currName);
            }
            else if (currItem == 11) {
                std::cout << "You've selected Item #11\n";
                std::cout << "Now input the name of the person who wants item #11 in TRIPLE extra large\n";
                std::cin >> currName;
                xxxl11.push_back(currName);
            }
            else if (currItem == 12) {
                std::cout << "You've selected Item #12\n";
                std::cout << "Now input the name of the person who wants item #12 in TRIPLE extra large\n";
                std::cin >> currName;
                xxxl12.push_back(currName);
            }
            else if (currItem == 13) {
                std::cout << "You've selected Item #13\n";
                std::cout << "Now input the name of the person who wants item #13 in TRIPLE extra large\n";
                std::cin >> currName;
                xxxl13.push_back(currName);
            }
            else if (currItem == 14) {
                std::cout << "You've selected Item #14\n";
                std::cout << "Now input the name of the person who wants item #14 in TRIPLE extra large\n";
                std::cin >> currName;
                xxxl14.push_back(currName);
            }
            else if (currItem == 15) {
                std::cout << "You've selected Item #15\n";
                std::cout << "Now input the name of the person who wants item #15 in TRIPLE extra large\n";
                std::cin >> currName;
                xxxl15.push_back(currName);
            }
            else {
                std::cout << "Sorry, but Item #" << currItem << " is out of scope. please only choose an item # between 1 and 15\n";
            }
        }





        else if (currSize == "4xl") {
            std::cout << "You've selected the size QUADRUPLE extra large\n";
            std::cout << "Now input the item #\n";
            std::cin >> currItem;
            if (currItem == 1) {
                std::cout << "You've selected Item #1\n";
                std::cout << "Now input the name of the person who wants item #1 in QUADRUPLE extra large\n";
                std::cin >> currName;
                xxxxl1.push_back(currName);
            }
            else if (currItem == 2) {
                std::cout << "You've selected Item #2\n";
                std::cout << "Now input the name of the person who wants item #2 in QUADRUPLE extra large\n";
                std::cin >> currName;
                xxxxl2.push_back(currName);
            }
            else if (currItem == 3) {
                std::cout << "You've selected Item #3\n";
                std::cout << "Now input the name of the person who wants item #3 in QUADRUPLE extra large\n";
                std::cin >> currName;
                xxxxl3.push_back(currName);
            }
            else if (currItem == 4) {
                std::cout << "You've selected Item #4\n";
                std::cout << "Now input the name of the person who wants item #4 in QUADRUPLE extra large\n";
                std::cin >> currName;
                xxxxl4.push_back(currName);
            }
            else if (currItem == 5) {
                std::cout << "You've selected Item #5\n";
                std::cout << "Now input the name of the person who wants item #5 in QUADRUPLE extra large\n";
                std::cin >> currName;
                xxxxl5.push_back(currName);
            }
            else if (currItem == 6) {
                std::cout << "You've selected Item #6\n";
                std::cout << "Now input the name of the person who wants item #6 in QUADRUPLE extra large\n";
                std::cin >> currName;
                xxxxl6.push_back(currName);
            }
            else if (currItem == 7) {
                std::cout << "You've selected Item #7\n";
                std::cout << "Now input the name of the person who wants item #7 in QUADRUPLE extra large\n";
                std::cin >> currName;
                xxxxl7.push_back(currName);
            }
            else if (currItem == 8) {
                std::cout << "You've selected Item #8\n";
                std::cout << "Now input the name of the person who wants item #8 in QUADRUPLE extra large\n";
                std::cin >> currName;
                xxxxl8.push_back(currName);
            }
            else if (currItem == 9) {
                std::cout << "You've selected Item #9\n";
                std::cout << "Now input the name of the person who wants item #9 in QUADRUPLE extra large\n";
                std::cin >> currName;
                xxxxl9.push_back(currName);
            }
            else if (currItem == 10) {
                std::cout << "You've selected Item #10\n";
                std::cout << "Now input the name of the person who wants item #10 in QUADRUPLE extra large\n";
                std::cin >> currName;
                xxxxl10.push_back(currName);
            }
            else if (currItem == 11) {
                std::cout << "You've selected Item #11\n";
                std::cout << "Now input the name of the person who wants item #11 in QUADRUPLE extra large\n";
                std::cin >> currName;
                xxxxl11.push_back(currName);
            }
            else if (currItem == 12) {
                std::cout << "You've selected Item #12\n";
                std::cout << "Now input the name of the person who wants item #12 in QUADRUPLE extra large\n";
                std::cin >> currName;
                xxxxl12.push_back(currName);
            }
            else if (currItem == 13) {
                std::cout << "You've selected Item #13\n";
                std::cout << "Now input the name of the person who wants item #13 in QUADRUPLE extra large\n";
                std::cin >> currName;
                xxxxl13.push_back(currName);
            }
            else if (currItem == 14) {
                std::cout << "You've selected Item #14\n";
                std::cout << "Now input the name of the person who wants item #14 in QUADRUPLE extra large\n";
                std::cin >> currName;
                xxxxl14.push_back(currName);
            }
            else if (currItem == 15) {
                std::cout << "You've selected Item #15\n";
                std::cout << "Now input the name of the person who wants item #15 in QUADRUPLE extra large\n";
                std::cin >> currName;
                xxxxl15.push_back(currName);
            }
            else {
                std::cout << "Sorry, but Item #" << currItem << " is out of scope. please only choose an item # between 1 and 15\n";
            }
        }



        else {
            std::cout << "Sorry, that isn't a valid size. to try again, please input 'c'. to quit, please input 'q'.\n";
        }

        std::cout << "if you'd like to add another, please input 'c' to continue. if you'd like to exit and generate the file, please input 'q'\n";
        std::cin >> runOpt;
    }



    //define and open the file to be written
    std::ofstream myFile;
    myFile.open("Customizations.txt");




    //notify user of activity
    for (int k = 0; k < 5; ++k) {
        std::cout << "Writing to file... Please wait...\n";
    }



    //determine if item 1 is needed
    if (youthxs1.size() > 0 || youths1.size() > 0 || youthm1.size() > 0 || youthl1.size() > 0 || xs1.size() > 0 || s1.size() > 0 || m1.size() > 0 || l1.size() > 0 || xl1.size() > 0 || xxl1.size() > 0 || xxxl1.size() > 0 || xxxxl1.size() > 0) {
        myFile << "Item #1\n";
    }
    

    //sizes functions for item 1
    if (youthxs1.size() > 0) {
        myFile << "Youth Extra Small\n";
        myFile << "--------------------------------------\n";
        for (i = 0; i < youthxs1.size(); ++i) {
            myFile << youthxs1.at(i) << std::endl;
        }
        myFile << std::endl << std::endl;
    }

    if (youths1.size() > 0) {
        myFile << "Youth Small\n";
        myFile << "--------------------------------------\n";
        for (i = 0; i < youths1.size(); ++i) {
            myFile << youths1.at(i) << std::endl;
        }
        myFile << std::endl << std::endl;
    }

    if (youthm1.size() > 0) {
        myFile << "Youth Medium\n";
        myFile << "--------------------------------------\n";
        for (i = 0; i < youthm1.size(); ++i) {
            myFile << youthm1.at(i) << std::endl;
        }
        myFile << std::endl << std::endl;
    }

    if (youthl1.size() > 0) {
        myFile << "Youth Large\n";
        myFile << "--------------------------------------\n";
        for (i = 0; i < youthl1.size(); ++i) {
            myFile << youthl1.at(i) << std::endl;
        }
        myFile << std::endl << std::endl;
    }

    if (youthxl1.size() > 0) {
        myFile << "Youth Extra Large\n";
        myFile << "--------------------------------------\n";
        for (i = 0; i < youthxl1.size(); ++i) {
            myFile << youthxl1.at(i) << std::endl;
        }
        myFile << std::endl << std::endl;
    }

    if (xs1.size() > 0) {
        myFile << "Extra Small\n";
        myFile << "--------------------------------------\n";
        for (i = 0; i < xs1.size(); ++i) {
            myFile << xs1.at(i) << std::endl;
        }
        myFile << std::endl << std::endl;
    }

    if (s1.size() > 0) {
        myFile << "Small\n";
        myFile << "--------------------------------------\n";
        for (i = 0; i < s1.size(); ++i) {
            myFile << s1.at(i) << std::endl;
        }
        myFile << std::endl << std::endl;
    }

    if (m1.size() > 0) {
        myFile << "Medium\n";
        myFile << "--------------------------------------\n";
        for (i = 0; i < m1.size(); ++i) {
            myFile << m1.at(i) << std::endl;
        }
        myFile << std::endl << std::endl;
    }

    if (l1.size() > 0) {
        myFile << "Large\n";
        myFile << "--------------------------------------\n";
        for (i = 0; i < l1.size(); ++i) {
            myFile << l1.at(i) << std::endl;
        }
        myFile << std::endl << std::endl;
    }

    if (xl1.size() > 0) {
        myFile << "Extra Large\n";
        myFile << "--------------------------------------\n";
        for (i = 0; i < xl1.size(); ++i) {
            myFile << xl1.at(i) << std::endl;
        }
        myFile << std::endl << std::endl;
    }

    if (xxl1.size() > 0) {
        myFile << "Double XL\n";
        myFile << "--------------------------------------\n";
        for (i = 0; i < xxl1.size(); ++i) {
            myFile << xxl1.at(i) << std::endl;
        }
        myFile << std::endl << std::endl;
    }

    if (xxxl1.size() > 0) {
        myFile << "Triple XL\n";
        myFile << "--------------------------------------\n";
        for (i = 0; i < xxxl1.size(); ++i) {
            myFile << xxxl1.at(i) << std::endl;
        }
        myFile << std::endl << std::endl;
    }

    if (xxxxl1.size() > 0) {
        myFile << "Quadruple XL\n";
        myFile << "--------------------------------------\n";
        for (i = 0; i < xxxxl1.size(); ++i) {
            myFile << xxxxl1.at(i) << std::endl;
        }
        myFile << std::endl << std::endl;
    }



    //determine if item 2 is needed
    if (youthxs2.size() > 0 || youths2.size() > 0 || youthm2.size() > 0 || youthl2.size() > 0 || xs2.size() > 0 || s2.size() > 0 || m2.size() > 0 || l2.size() > 0 || xl2.size() > 0 || xxl2.size() > 0 || xxxl2.size() > 0 || xxxxl2.size() > 0) {
        myFile << "Item #2\n";
    }
    

    //sizes functions for item 2
    if (youthxs2.size() > 0) {
        myFile << "Youth Extra Small\n";
        myFile << "--------------------------------------\n";
        for (i = 0; i < youthxs2.size(); ++i) {
            myFile << youthxs2.at(i) << std::endl;
        }
        myFile << std::endl << std::endl;
    }

    if (youths2.size() > 0) {
        myFile << "Youth Small\n";
        myFile << "--------------------------------------\n";
        for (i = 0; i < youths2.size(); ++i) {
            myFile << youths2.at(i) << std::endl;
        }
        myFile << std::endl << std::endl;
    }

    if (youthm2.size() > 0) {
        myFile << "Youth Medium\n";
        myFile << "--------------------------------------\n";
        for (i = 0; i < youthm2.size(); ++i) {
            myFile << youthm2.at(i) << std::endl;
        }
        myFile << std::endl << std::endl;
    }

    if (youthl2.size() > 0) {
        myFile << "Youth Large\n";
        myFile << "--------------------------------------\n";
        for (i = 0; i < youthl2.size(); ++i) {
            myFile << youthl2.at(i) << std::endl;
        }
        myFile << std::endl << std::endl;
    }

    if (youthxl2.size() > 0) {
        myFile << "Youth Extra Large\n";
        myFile << "--------------------------------------\n";
        for (i = 0; i < youthxl2.size(); ++i) {
            myFile << youthxl2.at(i) << std::endl;
        }
        myFile << std::endl << std::endl;
    }

    if (xs2.size() > 0) {
        myFile << "Extra Small\n";
        myFile << "--------------------------------------\n";
        for (i = 0; i < xs2.size(); ++i) {
            myFile << xs2.at(i) << std::endl;
        }
        myFile << std::endl << std::endl;
    }

    if (s2.size() > 0) {
        myFile << "Small\n";
        myFile << "--------------------------------------\n";
        for (i = 0; i < s2.size(); ++i) {
            myFile << s2.at(i) << std::endl;
        }
        myFile << std::endl << std::endl;
    }

    if (m2.size() > 0) {
        myFile << "Medium\n";
        myFile << "--------------------------------------\n";
        for (i = 0; i < m2.size(); ++i) {
            myFile << m2.at(i) << std::endl;
        }
        myFile << std::endl << std::endl;
    }

    if (l2.size() > 0) {
        myFile << "Large\n";
        myFile << "--------------------------------------\n";
        for (i = 0; i < l2.size(); ++i) {
            myFile << l2.at(i) << std::endl;
        }
        myFile << std::endl << std::endl;
    }

    if (xl2.size() > 0) {
        myFile << "Extra Large\n";
        myFile << "--------------------------------------\n";
        for (i = 0; i < xl2.size(); ++i) {
            myFile << xl2.at(i) << std::endl;
        }
        myFile << std::endl << std::endl;
    }

    if (xxl2.size() > 0) {
        myFile << "Double XL\n";
        myFile << "--------------------------------------\n";
        for (i = 0; i < xxl2.size(); ++i) {
            myFile << xxl2.at(i) << std::endl;
        }
        myFile << std::endl << std::endl;
    }

    if (xxxl2.size() > 0) {
        myFile << "Triple XL\n";
        myFile << "--------------------------------------\n";
        for (i = 0; i < xxxl2.size(); ++i) {
            myFile << xxxl2.at(i) << std::endl;
        }
        myFile << std::endl << std::endl;
    }

    if (xxxxl2.size() > 0) {
        myFile << "Quadruple XL\n";
        myFile << "--------------------------------------\n";
        for (i = 0; i < xxxxl2.size(); ++i) {
            myFile << xxxxl2.at(i) << std::endl;
        }
        myFile << std::endl << std::endl;
    }




     //determine if item 3 is needed
    if (youthxs3.size() > 0 || youths3.size() > 0 || youthm3.size() > 0 || youthl3.size() > 0 || xs3.size() > 0 || s3.size() > 0 || m3.size() > 0 || l3.size() > 0 || xl3.size() > 0 || xxl3.size() > 0 || xxxl3.size() > 0 || xxxxl3.size() > 0) {
        myFile << "Item #3\n";
    }
    

    //sizes functions for item 3
    if (youthxs3.size() > 0) {
        myFile << "Youth Extra Small\n";
        myFile << "--------------------------------------\n";
        for (i = 0; i < youthxs3.size(); ++i) {
            myFile << youthxs3.at(i) << std::endl;
        }
        myFile << std::endl << std::endl;
    }

    if (youths3.size() > 0) {
        myFile << "Youth Small\n";
        myFile << "--------------------------------------\n";
        for (i = 0; i < youths3.size(); ++i) {
            myFile << youths3.at(i) << std::endl;
        }
        myFile << std::endl << std::endl;
    }

    if (youthm3.size() > 0) {
        myFile << "Youth Medium\n";
        myFile << "--------------------------------------\n";
        for (i = 0; i < youthm3.size(); ++i) {
            myFile << youthm3.at(i) << std::endl;
        }
        myFile << std::endl << std::endl;
    }

    if (youthl3.size() > 0) {
        myFile << "Youth Large\n";
        myFile << "--------------------------------------\n";
        for (i = 0; i < youthl3.size(); ++i) {
            myFile << youthl3.at(i) << std::endl;
        }
        myFile << std::endl << std::endl;
    }

    if (youthxl3.size() > 0) {
        myFile << "Youth Extra Large\n";
        myFile << "--------------------------------------\n";
        for (i = 0; i < youthxl3.size(); ++i) {
            myFile << youthxl3.at(i) << std::endl;
        }
        myFile << std::endl << std::endl;
    }

    if (xs3.size() > 0) {
        myFile << "Extra Small\n";
        myFile << "--------------------------------------\n";
        for (i = 0; i < xs3.size(); ++i) {
            myFile << xs3.at(i) << std::endl;
        }
        myFile << std::endl << std::endl;
    }

    if (s3.size() > 0) {
        myFile << "Small\n";
        myFile << "--------------------------------------\n";
        for (i = 0; i < s3.size(); ++i) {
            myFile << s3.at(i) << std::endl;
        }
        myFile << std::endl << std::endl;
    }

    if (m3.size() > 0) {
        myFile << "Medium\n";
        myFile << "--------------------------------------\n";
        for (i = 0; i < m3.size(); ++i) {
            myFile << m3.at(i) << std::endl;
        }
        myFile << std::endl << std::endl;
    }

    if (l3.size() > 0) {
        myFile << "Large\n";
        myFile << "--------------------------------------\n";
        for (i = 0; i < l3.size(); ++i) {
            myFile << l3.at(i) << std::endl;
        }
        myFile << std::endl << std::endl;
    }

    if (xl3.size() > 0) {
        myFile << "Extra Large\n";
        myFile << "--------------------------------------\n";
        for (i = 0; i < xl3.size(); ++i) {
            myFile << xl3.at(i) << std::endl;
        }
        myFile << std::endl << std::endl;
    }

    if (xxl3.size() > 0) {
        myFile << "Double XL\n";
        myFile << "--------------------------------------\n";
        for (i = 0; i < xxl3.size(); ++i) {
            myFile << xxl3.at(i) << std::endl;
        }
        myFile << std::endl << std::endl;
    }

    if (xxxl3.size() > 0) {
        myFile << "Triple XL\n";
        myFile << "--------------------------------------\n";
        for (i = 0; i < xxxl3.size(); ++i) {
            myFile << xxxl3.at(i) << std::endl;
        }
        myFile << std::endl << std::endl;
    }

    if (xxxxl3.size() > 0) {
        myFile << "Quadruple XL\n";
        myFile << "--------------------------------------\n";
        for (i = 0; i < xxxxl3.size(); ++i) {
            myFile << xxxxl3.at(i) << std::endl;
        }
        myFile << std::endl << std::endl;
    }




     //determine if item 4 is needed
    if (youthxs4.size() > 0 || youths4.size() > 0 || youthm4.size() > 0 || youthl4.size() > 0 || xs4.size() > 0 || s4.size() > 0 || m4.size() > 0 || l4.size() > 0 || xl4.size() > 0 || xxl4.size() > 0 || xxxl4.size() > 0 || xxxxl4.size() > 0) {
        myFile << "Item #4\n";
    }
    

    //sizes functions for item 4
    if (youthxs4.size() > 0) {
        myFile << "Youth Extra Small\n";
        myFile << "--------------------------------------\n";
        for (i = 0; i < youthxs4.size(); ++i) {
            myFile << youthxs4.at(i) << std::endl;
        }
        myFile << std::endl << std::endl;
    }

    if (youths4.size() > 0) {
        myFile << "Youth Small\n";
        myFile << "--------------------------------------\n";
        for (i = 0; i < youths4.size(); ++i) {
            myFile << youths4.at(i) << std::endl;
        }
        myFile << std::endl << std::endl;
    }

    if (youthm4.size() > 0) {
        myFile << "Youth Medium\n";
        myFile << "--------------------------------------\n";
        for (i = 0; i < youthm4.size(); ++i) {
            myFile << youthm4.at(i) << std::endl;
        }
        myFile << std::endl << std::endl;
    }

    if (youthl4.size() > 0) {
        myFile << "Youth Large\n";
        myFile << "--------------------------------------\n";
        for (i = 0; i < youthl4.size(); ++i) {
            myFile << youthl4.at(i) << std::endl;
        }
        myFile << std::endl << std::endl;
    }

    if (youthxl4.size() > 0) {
        myFile << "Youth Extra Large\n";
        myFile << "--------------------------------------\n";
        for (i = 0; i < youthxl4.size(); ++i) {
            myFile << youthxl4.at(i) << std::endl;
        }
        myFile << std::endl << std::endl;
    }

    if (xs4.size() > 0) {
        myFile << "Extra Small\n";
        myFile << "--------------------------------------\n";
        for (i = 0; i < xs4.size(); ++i) {
            myFile << xs4.at(i) << std::endl;
        }
        myFile << std::endl << std::endl;
    }

    if (s4.size() > 0) {
        myFile << "Small\n";
        myFile << "--------------------------------------\n";
        for (i = 0; i < s4.size(); ++i) {
            myFile << s4.at(i) << std::endl;
        }
        myFile << std::endl << std::endl;
    }

    if (m4.size() > 0) {
        myFile << "Medium\n";
        myFile << "--------------------------------------\n";
        for (i = 0; i < m4.size(); ++i) {
            myFile << m4.at(i) << std::endl;
        }
        myFile << std::endl << std::endl;
    }

    if (l4.size() > 0) {
        myFile << "Large\n";
        myFile << "--------------------------------------\n";
        for (i = 0; i < l4.size(); ++i) {
            myFile << l4.at(i) << std::endl;
        }
        myFile << std::endl << std::endl;
    }

    if (xl4.size() > 0) {
        myFile << "Extra Large\n";
        myFile << "--------------------------------------\n";
        for (i = 0; i < xl4.size(); ++i) {
            myFile << xl4.at(i) << std::endl;
        }
        myFile << std::endl << std::endl;
    }

    if (xxl4.size() > 0) {
        myFile << "Double XL\n";
        myFile << "--------------------------------------\n";
        for (i = 0; i < xxl4.size(); ++i) {
            myFile << xxl4.at(i) << std::endl;
        }
        myFile << std::endl << std::endl;
    }

    if (xxxl4.size() > 0) {
        myFile << "Triple XL\n";
        myFile << "--------------------------------------\n";
        for (i = 0; i < xxxl4.size(); ++i) {
            myFile << xxxl4.at(i) << std::endl;
        }
        myFile << std::endl << std::endl;
    }

    if (xxxxl4.size() > 0) {
        myFile << "Quadruple XL\n";
        myFile << "--------------------------------------\n";
        for (i = 0; i < xxxxl4.size(); ++i) {
            myFile << xxxxl4.at(i) << std::endl;
        }
        myFile << std::endl << std::endl;
    }




    //determine if item 5 is needed
    if (youthxs5.size() > 0 || youths5.size() > 0 || youthm5.size() > 0 || youthl5.size() > 0 || xs5.size() > 0 || s5.size() > 0 || m5.size() > 0 || l5.size() > 0 || xl5.size() > 0 || xxl5.size() > 0 || xxxl5.size() > 0 || xxxxl5.size() > 0) {
        myFile << "Item #5\n";
    }
    

    //sizes functions for item 5
    if (youthxs5.size() > 0) {
        myFile << "Youth Extra Small\n";
        myFile << "--------------------------------------\n";
        for (i = 0; i < youthxs5.size(); ++i) {
            myFile << youthxs5.at(i) << std::endl;
        }
        myFile << std::endl << std::endl;
    }

    if (youths5.size() > 0) {
        myFile << "Youth Small\n";
        myFile << "--------------------------------------\n";
        for (i = 0; i < youths5.size(); ++i) {
            myFile << youths5.at(i) << std::endl;
        }
        myFile << std::endl << std::endl;
    }

    if (youthm5.size() > 0) {
        myFile << "Youth Medium\n";
        myFile << "--------------------------------------\n";
        for (i = 0; i < youthm5.size(); ++i) {
            myFile << youthm5.at(i) << std::endl;
        }
        myFile << std::endl << std::endl;
    }

    if (youthl5.size() > 0) {
        myFile << "Youth Large\n";
        myFile << "--------------------------------------\n";
        for (i = 0; i < youthl5.size(); ++i) {
            myFile << youthl5.at(i) << std::endl;
        }
        myFile << std::endl << std::endl;
    }

    if (youthxl5.size() > 0) {
        myFile << "Youth Extra Large\n";
        myFile << "--------------------------------------\n";
        for (i = 0; i < youthxl5.size(); ++i) {
            myFile << youthxl5.at(i) << std::endl;
        }
        myFile << std::endl << std::endl;
    }

    if (xs5.size() > 0) {
        myFile << "Extra Small\n";
        myFile << "--------------------------------------\n";
        for (i = 0; i < xs5.size(); ++i) {
            myFile << xs5.at(i) << std::endl;
        }
        myFile << std::endl << std::endl;
    }

    if (s5.size() > 0) {
        myFile << "Small\n";
        myFile << "--------------------------------------\n";
        for (i = 0; i < s5.size(); ++i) {
            myFile << s5.at(i) << std::endl;
        }
        myFile << std::endl << std::endl;
    }

    if (m5.size() > 0) {
        myFile << "Medium\n";
        myFile << "--------------------------------------\n";
        for (i = 0; i < m5.size(); ++i) {
            myFile << m5.at(i) << std::endl;
        }
        myFile << std::endl << std::endl;
    }

    if (l5.size() > 0) {
        myFile << "Large\n";
        myFile << "--------------------------------------\n";
        for (i = 0; i < l5.size(); ++i) {
            myFile << l5.at(i) << std::endl;
        }
        myFile << std::endl << std::endl;
    }

    if (xl5.size() > 0) {
        myFile << "Extra Large\n";
        myFile << "--------------------------------------\n";
        for (i = 0; i < xl5.size(); ++i) {
            myFile << xl5.at(i) << std::endl;
        }
        myFile << std::endl << std::endl;
    }

    if (xxl5.size() > 0) {
        myFile << "Double XL\n";
        myFile << "--------------------------------------\n";
        for (i = 0; i < xxl5.size(); ++i) {
            myFile << xxl5.at(i) << std::endl;
        }
        myFile << std::endl << std::endl;
    }

    if (xxxl5.size() > 0) {
        myFile << "Triple XL\n";
        myFile << "--------------------------------------\n";
        for (i = 0; i < xxxl5.size(); ++i) {
            myFile << xxxl5.at(i) << std::endl;
        }
        myFile << std::endl << std::endl;
    }

    if (xxxxl5.size() > 0) {
        myFile << "Quadruple XL\n";
        myFile << "--------------------------------------\n";
        for (i = 0; i < xxxxl5.size(); ++i) {
            myFile << xxxxl5.at(i) << std::endl;
        }
        myFile << std::endl << std::endl;
    }




    //determine if item 6 is needed
    if (youthxs6.size() > 0 || youths6.size() > 0 || youthm6.size() > 0 || youthl6.size() > 0 || xs6.size() > 0 || s6.size() > 0 || m6.size() > 0 || l6.size() > 0 || xl6.size() > 0 || xxl6.size() > 0 || xxxl6.size() > 0 || xxxxl6.size() > 0) {
        myFile << "Item #6\n";
    }
    

    //sizes functions for item 6
    if (youthxs6.size() > 0) {
        myFile << "Youth Extra Small\n";
        myFile << "--------------------------------------\n";
        for (i = 0; i < youthxs6.size(); ++i) {
            myFile << youthxs6.at(i) << std::endl;
        }
        myFile << std::endl << std::endl;
    }

    if (youths6.size() > 0) {
        myFile << "Youth Small\n";
        myFile << "--------------------------------------\n";
        for (i = 0; i < youths6.size(); ++i) {
            myFile << youths6.at(i) << std::endl;
        }
        myFile << std::endl << std::endl;
    }

    if (youthm6.size() > 0) {
        myFile << "Youth Medium\n";
        myFile << "--------------------------------------\n";
        for (i = 0; i < youthm6.size(); ++i) {
            myFile << youthm6.at(i) << std::endl;
        }
        myFile << std::endl << std::endl;
    }

    if (youthl6.size() > 0) {
        myFile << "Youth Large\n";
        myFile << "--------------------------------------\n";
        for (i = 0; i < youthl6.size(); ++i) {
            myFile << youthl6.at(i) << std::endl;
        }
        myFile << std::endl << std::endl;
    }

    if (youthxl6.size() > 0) {
        myFile << "Youth Extra Large\n";
        myFile << "--------------------------------------\n";
        for (i = 0; i < youthxl6.size(); ++i) {
            myFile << youthxl6.at(i) << std::endl;
        }
        myFile << std::endl << std::endl;
    }

    if (xs6.size() > 0) {
        myFile << "Extra Small\n";
        myFile << "--------------------------------------\n";
        for (i = 0; i < xs6.size(); ++i) {
            myFile << xs6.at(i) << std::endl;
        }
        myFile << std::endl << std::endl;
    }

    if (s6.size() > 0) {
        myFile << "Small\n";
        myFile << "--------------------------------------\n";
        for (i = 0; i < s6.size(); ++i) {
            myFile << s6.at(i) << std::endl;
        }
        myFile << std::endl << std::endl;
    }

    if (m6.size() > 0) {
        myFile << "Medium\n";
        myFile << "--------------------------------------\n";
        for (i = 0; i < m6.size(); ++i) {
            myFile << m6.at(i) << std::endl;
        }
        myFile << std::endl << std::endl;
    }

    if (l6.size() > 0) {
        myFile << "Large\n";
        myFile << "--------------------------------------\n";
        for (i = 0; i < l6.size(); ++i) {
            myFile << l6.at(i) << std::endl;
        }
        myFile << std::endl << std::endl;
    }

    if (xl6.size() > 0) {
        myFile << "Extra Large\n";
        myFile << "--------------------------------------\n";
        for (i = 0; i < xl6.size(); ++i) {
            myFile << xl6.at(i) << std::endl;
        }
        myFile << std::endl << std::endl;
    }

    if (xxl6.size() > 0) {
        myFile << "Double XL\n";
        myFile << "--------------------------------------\n";
        for (i = 0; i < xxl6.size(); ++i) {
            myFile << xxl6.at(i) << std::endl;
        }
        myFile << std::endl << std::endl;
    }

    if (xxxl6.size() > 0) {
        myFile << "Triple XL\n";
        myFile << "--------------------------------------\n";
        for (i = 0; i < xxxl6.size(); ++i) {
            myFile << xxxl6.at(i) << std::endl;
        }
        myFile << std::endl << std::endl;
    }

    if (xxxxl6.size() > 0) {
        myFile << "Quadruple XL\n";
        myFile << "--------------------------------------\n";
        for (i = 0; i < xxxxl6.size(); ++i) {
            myFile << xxxxl6.at(i) << std::endl;
        }
        myFile << std::endl << std::endl;
    }



    //determine if item 7 is needed
    if (youthxs7.size() > 0 || youths7.size() > 0 || youthm7.size() > 0 || youthl7.size() > 0 || xs7.size() > 0 || s7.size() > 0 || m7.size() > 0 || l7.size() > 0 || xl7.size() > 0 || xxl7.size() > 0 || xxxl7.size() > 0 || xxxxl7.size() > 0) {
        myFile << "Item #7\n";
    }
    

    //sizes functions for item 7
    if (youthxs7.size() > 0) {
        myFile << "Youth Extra Small\n";
        myFile << "--------------------------------------\n";
        for (i = 0; i < youthxs7.size(); ++i) {
            myFile << youthxs7.at(i) << std::endl;
        }
        myFile << std::endl << std::endl;
    }

    if (youths7.size() > 0) {
        myFile << "Youth Small\n";
        myFile << "--------------------------------------\n";
        for (i = 0; i < youths7.size(); ++i) {
            myFile << youths7.at(i) << std::endl;
        }
        myFile << std::endl << std::endl;
    }

    if (youthm7.size() > 0) {
        myFile << "Youth Medium\n";
        myFile << "--------------------------------------\n";
        for (i = 0; i < youthm7.size(); ++i) {
            myFile << youthm7.at(i) << std::endl;
        }
        myFile << std::endl << std::endl;
    }

    if (youthl7.size() > 0) {
        myFile << "Youth Large\n";
        myFile << "--------------------------------------\n";
        for (i = 0; i < youthl7.size(); ++i) {
            myFile << youthl7.at(i) << std::endl;
        }
        myFile << std::endl << std::endl;
    }

    if (youthxl7.size() > 0) {
        myFile << "Youth Extra Large\n";
        myFile << "--------------------------------------\n";
        for (i = 0; i < youthxl7.size(); ++i) {
            myFile << youthxl7.at(i) << std::endl;
        }
        myFile << std::endl << std::endl;
    }

    if (xs7.size() > 0) {
        myFile << "Extra Small\n";
        myFile << "--------------------------------------\n";
        for (i = 0; i < xs7.size(); ++i) {
            myFile << xs7.at(i) << std::endl;
        }
        myFile << std::endl << std::endl;
    }

    if (s7.size() > 0) {
        myFile << "Small\n";
        myFile << "--------------------------------------\n";
        for (i = 0; i < s7.size(); ++i) {
            myFile << s7.at(i) << std::endl;
        }
        myFile << std::endl << std::endl;
    }

    if (m7.size() > 0) {
        myFile << "Medium\n";
        myFile << "--------------------------------------\n";
        for (i = 0; i < m7.size(); ++i) {
            myFile << m7.at(i) << std::endl;
        }
        myFile << std::endl << std::endl;
    }

    if (l7.size() > 0) {
        myFile << "Large\n";
        myFile << "--------------------------------------\n";
        for (i = 0; i < l7.size(); ++i) {
            myFile << l7.at(i) << std::endl;
        }
        myFile << std::endl << std::endl;
    }

    if (xl7.size() > 0) {
        myFile << "Extra Large\n";
        myFile << "--------------------------------------\n";
        for (i = 0; i < xl7.size(); ++i) {
            myFile << xl7.at(i) << std::endl;
        }
        myFile << std::endl << std::endl;
    }

    if (xxl7.size() > 0) {
        myFile << "Double XL\n";
        myFile << "--------------------------------------\n";
        for (i = 0; i < xxl7.size(); ++i) {
            myFile << xxl7.at(i) << std::endl;
        }
        myFile << std::endl << std::endl;
    }

    if (xxxl7.size() > 0) {
        myFile << "Triple XL\n";
        myFile << "--------------------------------------\n";
        for (i = 0; i < xxxl7.size(); ++i) {
            myFile << xxxl7.at(i) << std::endl;
        }
        myFile << std::endl << std::endl;
    }

    if (xxxxl7.size() > 0) {
        myFile << "Quadruple XL\n";
        myFile << "--------------------------------------\n";
        for (i = 0; i < xxxxl7.size(); ++i) {
            myFile << xxxxl7.at(i) << std::endl;
        }
        myFile << std::endl << std::endl;
    }



    //determine if item 8 is needed
    if (youthxs8.size() > 0 || youths8.size() > 0 || youthm8.size() > 0 || youthl8.size() > 0 || xs8.size() > 0 || s8.size() > 0 || m8.size() > 0 || l8.size() > 0 || xl8.size() > 0 || xxl8.size() > 0 || xxxl8.size() > 0 || xxxxl8.size() > 0) {
        myFile << "Item #8\n";
    }
    

    //sizes functions for item 8
    if (youthxs8.size() > 0) {
        myFile << "Youth Extra Small\n";
        myFile << "--------------------------------------\n";
        for (i = 0; i < youthxs8.size(); ++i) {
            myFile << youthxs8.at(i) << std::endl;
        }
        myFile << std::endl << std::endl;
    }

    if (youths8.size() > 0) {
        myFile << "Youth Small\n";
        myFile << "--------------------------------------\n";
        for (i = 0; i < youths8.size(); ++i) {
            myFile << youths8.at(i) << std::endl;
        }
        myFile << std::endl << std::endl;
    }

    if (youthm8.size() > 0) {
        myFile << "Youth Medium\n";
        myFile << "--------------------------------------\n";
        for (i = 0; i < youthm8.size(); ++i) {
            myFile << youthm8.at(i) << std::endl;
        }
        myFile << std::endl << std::endl;
    }

    if (youthl8.size() > 0) {
        myFile << "Youth Large\n";
        myFile << "--------------------------------------\n";
        for (i = 0; i < youthl8.size(); ++i) {
            myFile << youthl8.at(i) << std::endl;
        }
        myFile << std::endl << std::endl;
    }

    if (youthxl8.size() > 0) {
        myFile << "Youth Extra Large\n";
        myFile << "--------------------------------------\n";
        for (i = 0; i < youthxl8.size(); ++i) {
            myFile << youthxl8.at(i) << std::endl;
        }
        myFile << std::endl << std::endl;
    }

    if (xs8.size() > 0) {
        myFile << "Extra Small\n";
        myFile << "--------------------------------------\n";
        for (i = 0; i < xs8.size(); ++i) {
            myFile << xs8.at(i) << std::endl;
        }
        myFile << std::endl << std::endl;
    }

    if (s8.size() > 0) {
        myFile << "Small\n";
        myFile << "--------------------------------------\n";
        for (i = 0; i < s8.size(); ++i) {
            myFile << s8.at(i) << std::endl;
        }
        myFile << std::endl << std::endl;
    }

    if (m8.size() > 0) {
        myFile << "Medium\n";
        myFile << "--------------------------------------\n";
        for (i = 0; i < m8.size(); ++i) {
            myFile << m8.at(i) << std::endl;
        }
        myFile << std::endl << std::endl;
    }

    if (l8.size() > 0) {
        myFile << "Large\n";
        myFile << "--------------------------------------\n";
        for (i = 0; i < l8.size(); ++i) {
            myFile << l8.at(i) << std::endl;
        }
        myFile << std::endl << std::endl;
    }

    if (xl8.size() > 0) {
        myFile << "Extra Large\n";
        myFile << "--------------------------------------\n";
        for (i = 0; i < xl8.size(); ++i) {
            myFile << xl8.at(i) << std::endl;
        }
        myFile << std::endl << std::endl;
    }

    if (xxl8.size() > 0) {
        myFile << "Double XL\n";
        myFile << "--------------------------------------\n";
        for (i = 0; i < xxl8.size(); ++i) {
            myFile << xxl8.at(i) << std::endl;
        }
        myFile << std::endl << std::endl;
    }

    if (xxxl8.size() > 0) {
        myFile << "Triple XL\n";
        myFile << "--------------------------------------\n";
        for (i = 0; i < xxxl8.size(); ++i) {
            myFile << xxxl8.at(i) << std::endl;
        }
        myFile << std::endl << std::endl;
    }

    if (xxxxl8.size() > 0) {
        myFile << "Quadruple XL\n";
        myFile << "--------------------------------------\n";
        for (i = 0; i < xxxxl8.size(); ++i) {
            myFile << xxxxl8.at(i) << std::endl;
        }
        myFile << std::endl << std::endl;
    }




    //determine if item 9 is needed
    if (youthxs9.size() > 0 || youths9.size() > 0 || youthm9.size() > 0 || youthl9.size() > 0 || xs9.size() > 0 || s9.size() > 0 || m9.size() > 0 || l9.size() > 0 || xl9.size() > 0 || xxl9.size() > 0 || xxxl9.size() > 0 || xxxxl9.size() > 0) {
        myFile << "Item #9\n";
    }
    

    //sizes functions for item 9
    if (youthxs9.size() > 0) {
        myFile << "Youth Extra Small\n";
        myFile << "--------------------------------------\n";
        for (i = 0; i < youthxs9.size(); ++i) {
            myFile << youthxs9.at(i) << std::endl;
        }
        myFile << std::endl << std::endl;
    }

    if (youths9.size() > 0) {
        myFile << "Youth Small\n";
        myFile << "--------------------------------------\n";
        for (i = 0; i < youths9.size(); ++i) {
            myFile << youths9.at(i) << std::endl;
        }
        myFile << std::endl << std::endl;
    }

    if (youthm9.size() > 0) {
        myFile << "Youth Medium\n";
        myFile << "--------------------------------------\n";
        for (i = 0; i < youthm9.size(); ++i) {
            myFile << youthm9.at(i) << std::endl;
        }
        myFile << std::endl << std::endl;
    }

    if (youthl9.size() > 0) {
        myFile << "Youth Large\n";
        myFile << "--------------------------------------\n";
        for (i = 0; i < youthl9.size(); ++i) {
            myFile << youthl9.at(i) << std::endl;
        }
        myFile << std::endl << std::endl;
    }

    if (youthxl9.size() > 0) {
        myFile << "Youth Extra Large\n";
        myFile << "--------------------------------------\n";
        for (i = 0; i < youthxl9.size(); ++i) {
            myFile << youthxl9.at(i) << std::endl;
        }
        myFile << std::endl << std::endl;
    }

    if (xs9.size() > 0) {
        myFile << "Extra Small\n";
        myFile << "--------------------------------------\n";
        for (i = 0; i < xs9.size(); ++i) {
            myFile << xs9.at(i) << std::endl;
        }
        myFile << std::endl << std::endl;
    }

    if (s9.size() > 0) {
        myFile << "Small\n";
        myFile << "--------------------------------------\n";
        for (i = 0; i < s9.size(); ++i) {
            myFile << s9.at(i) << std::endl;
        }
        myFile << std::endl << std::endl;
    }

    if (m9.size() > 0) {
        myFile << "Medium\n";
        myFile << "--------------------------------------\n";
        for (i = 0; i < m9.size(); ++i) {
            myFile << m9.at(i) << std::endl;
        }
        myFile << std::endl << std::endl;
    }

    if (l9.size() > 0) {
        myFile << "Large\n";
        myFile << "--------------------------------------\n";
        for (i = 0; i < l9.size(); ++i) {
            myFile << l9.at(i) << std::endl;
        }
        myFile << std::endl << std::endl;
    }

    if (xl9.size() > 0) {
        myFile << "Extra Large\n";
        myFile << "--------------------------------------\n";
        for (i = 0; i < xl9.size(); ++i) {
            myFile << xl9.at(i) << std::endl;
        }
        myFile << std::endl << std::endl;
    }

    if (xxl9.size() > 0) {
        myFile << "Double XL\n";
        myFile << "--------------------------------------\n";
        for (i = 0; i < xxl9.size(); ++i) {
            myFile << xxl9.at(i) << std::endl;
        }
        myFile << std::endl << std::endl;
    }

    if (xxxl9.size() > 0) {
        myFile << "Triple XL\n";
        myFile << "--------------------------------------\n";
        for (i = 0; i < xxxl9.size(); ++i) {
            myFile << xxxl9.at(i) << std::endl;
        }
        myFile << std::endl << std::endl;
    }

    if (xxxxl9.size() > 0) {
        myFile << "Quadruple XL\n";
        myFile << "--------------------------------------\n";
        for (i = 0; i < xxxxl9.size(); ++i) {
            myFile << xxxxl9.at(i) << std::endl;
        }
        myFile << std::endl << std::endl;
    }



    //determine if item 10 is needed
    if (youthxs10.size() > 0 || youths10.size() > 0 || youthm10.size() > 0 || youthl10.size() > 0 || xs10.size() > 0 || s10.size() > 0 || m10.size() > 0 || l10.size() > 0 || xl10.size() > 0 || xxl10.size() > 0 || xxxl10.size() > 0 || xxxxl10.size() > 0) {
        myFile << "Item #10\n";
    }
    

    //sizes functions for item 10
    if (youthxs10.size() > 0) {
        myFile << "Youth Extra Small\n";
        myFile << "--------------------------------------\n";
        for (i = 0; i < youthxs10.size(); ++i) {
            myFile << youthxs10.at(i) << std::endl;
        }
        myFile << std::endl << std::endl;
    }

    if (youths10.size() > 0) {
        myFile << "Youth Small\n";
        myFile << "--------------------------------------\n";
        for (i = 0; i < youths10.size(); ++i) {
            myFile << youths10.at(i) << std::endl;
        }
        myFile << std::endl << std::endl;
    }

    if (youthm10.size() > 0) {
        myFile << "Youth Medium\n";
        myFile << "--------------------------------------\n";
        for (i = 0; i < youthm10.size(); ++i) {
            myFile << youthm10.at(i) << std::endl;
        }
        myFile << std::endl << std::endl;
    }

    if (youthl10.size() > 0) {
        myFile << "Youth Large\n";
        myFile << "--------------------------------------\n";
        for (i = 0; i < youthl10.size(); ++i) {
            myFile << youthl10.at(i) << std::endl;
        }
        myFile << std::endl << std::endl;
    }

    if (youthxl10.size() > 0) {
        myFile << "Youth Extra Large\n";
        myFile << "--------------------------------------\n";
        for (i = 0; i < youthxl10.size(); ++i) {
            myFile << youthxl10.at(i) << std::endl;
        }
        myFile << std::endl << std::endl;
    }

    if (xs10.size() > 0) {
        myFile << "Extra Small\n";
        myFile << "--------------------------------------\n";
        for (i = 0; i < xs10.size(); ++i) {
            myFile << xs10.at(i) << std::endl;
        }
        myFile << std::endl << std::endl;
    }

    if (s10.size() > 0) {
        myFile << "Small\n";
        myFile << "--------------------------------------\n";
        for (i = 0; i < s10.size(); ++i) {
            myFile << s10.at(i) << std::endl;
        }
        myFile << std::endl << std::endl;
    }

    if (m10.size() > 0) {
        myFile << "Medium\n";
        myFile << "--------------------------------------\n";
        for (i = 0; i < m10.size(); ++i) {
            myFile << m10.at(i) << std::endl;
        }
        myFile << std::endl << std::endl;
    }

    if (l10.size() > 0) {
        myFile << "Large\n";
        myFile << "--------------------------------------\n";
        for (i = 0; i < l10.size(); ++i) {
            myFile << l10.at(i) << std::endl;
        }
        myFile << std::endl << std::endl;
    }

    if (xl10.size() > 0) {
        myFile << "Extra Large\n";
        myFile << "--------------------------------------\n";
        for (i = 0; i < xl10.size(); ++i) {
            myFile << xl10.at(i) << std::endl;
        }
        myFile << std::endl << std::endl;
    }

    if (xxl10.size() > 0) {
        myFile << "Double XL\n";
        myFile << "--------------------------------------\n";
        for (i = 0; i < xxl10.size(); ++i) {
            myFile << xxl10.at(i) << std::endl;
        }
        myFile << std::endl << std::endl;
    }

    if (xxxl10.size() > 0) {
        myFile << "Triple XL\n";
        myFile << "--------------------------------------\n";
        for (i = 0; i < xxxl10.size(); ++i) {
            myFile << xxxl10.at(i) << std::endl;
        }
        myFile << std::endl << std::endl;
    }

    if (xxxxl10.size() > 0) {
        myFile << "Quadruple XL\n";
        myFile << "--------------------------------------\n";
        for (i = 0; i < xxxxl10.size(); ++i) {
            myFile << xxxxl10.at(i) << std::endl;
        }
        myFile << std::endl << std::endl;
    }



    //determine if item 11 is needed
    if (youthxs11.size() > 0 || youths11.size() > 0 || youthm11.size() > 0 || youthl11.size() > 0 || xs11.size() > 0 || s11.size() > 0 || m11.size() > 0 || l11.size() > 0 || xl11.size() > 0 || xxl11.size() > 0 || xxxl11.size() > 0 || xxxxl11.size() > 0) {
        myFile << "Item #11\n";
    }
    

    //sizes functions for item 11
    if (youthxs11.size() > 0) {
        myFile << "Youth Extra Small\n";
        myFile << "--------------------------------------\n";
        for (i = 0; i < youthxs11.size(); ++i) {
            myFile << youthxs11.at(i) << std::endl;
        }
        myFile << std::endl << std::endl;
    }

    if (youths11.size() > 0) {
        myFile << "Youth Small\n";
        myFile << "--------------------------------------\n";
        for (i = 0; i < youths11.size(); ++i) {
            myFile << youths11.at(i) << std::endl;
        }
        myFile << std::endl << std::endl;
    }

    if (youthm11.size() > 0) {
        myFile << "Youth Medium\n";
        myFile << "--------------------------------------\n";
        for (i = 0; i < youthm11.size(); ++i) {
            myFile << youthm11.at(i) << std::endl;
        }
        myFile << std::endl << std::endl;
    }

    if (youthl11.size() > 0) {
        myFile << "Youth Large\n";
        myFile << "--------------------------------------\n";
        for (i = 0; i < youthl11.size(); ++i) {
            myFile << youthl11.at(i) << std::endl;
        }
        myFile << std::endl << std::endl;
    }

    if (youthxl11.size() > 0) {
        myFile << "Youth Extra Large\n";
        myFile << "--------------------------------------\n";
        for (i = 0; i < youthxl11.size(); ++i) {
            myFile << youthxl11.at(i) << std::endl;
        }
        myFile << std::endl << std::endl;
    }

    if (xs11.size() > 0) {
        myFile << "Extra Small\n";
        myFile << "--------------------------------------\n";
        for (i = 0; i < xs11.size(); ++i) {
            myFile << xs11.at(i) << std::endl;
        }
        myFile << std::endl << std::endl;
    }

    if (s11.size() > 0) {
        myFile << "Small\n";
        myFile << "--------------------------------------\n";
        for (i = 0; i < s11.size(); ++i) {
            myFile << s11.at(i) << std::endl;
        }
        myFile << std::endl << std::endl;
    }

    if (m11.size() > 0) {
        myFile << "Medium\n";
        myFile << "--------------------------------------\n";
        for (i = 0; i < m11.size(); ++i) {
            myFile << m11.at(i) << std::endl;
        }
        myFile << std::endl << std::endl;
    }

    if (l11.size() > 0) {
        myFile << "Large\n";
        myFile << "--------------------------------------\n";
        for (i = 0; i < l11.size(); ++i) {
            myFile << l11.at(i) << std::endl;
        }
        myFile << std::endl << std::endl;
    }

    if (xl11.size() > 0) {
        myFile << "Extra Large\n";
        myFile << "--------------------------------------\n";
        for (i = 0; i < xl11.size(); ++i) {
            myFile << xl11.at(i) << std::endl;
        }
        myFile << std::endl << std::endl;
    }

    if (xxl11.size() > 0) {
        myFile << "Double XL\n";
        myFile << "--------------------------------------\n";
        for (i = 0; i < xxl11.size(); ++i) {
            myFile << xxl11.at(i) << std::endl;
        }
        myFile << std::endl << std::endl;
    }

    if (xxxl11.size() > 0) {
        myFile << "Triple XL\n";
        myFile << "--------------------------------------\n";
        for (i = 0; i < xxxl11.size(); ++i) {
            myFile << xxxl11.at(i) << std::endl;
        }
        myFile << std::endl << std::endl;
    }

    if (xxxxl11.size() > 0) {
        myFile << "Quadruple XL\n";
        myFile << "--------------------------------------\n";
        for (i = 0; i < xxxxl11.size(); ++i) {
            myFile << xxxxl11.at(i) << std::endl;
        }
        myFile << std::endl << std::endl;
    }


    //determine if item 12 is needed
    if (youthxs12.size() > 0 || youths12.size() > 0 || youthm12.size() > 0 || youthl12.size() > 0 || xs12.size() > 0 || s12.size() > 0 || m12.size() > 0 || l12.size() > 0 || xl12.size() > 0 || xxl12.size() > 0 || xxxl12.size() > 0 || xxxxl12.size() > 0) {
        myFile << "Item #12\n";
    }
    

    //sizes functions for item 12
    if (youthxs12.size() > 0) {
        myFile << "Youth Extra Small\n";
        myFile << "--------------------------------------\n";
        for (i = 0; i < youthxs12.size(); ++i) {
            myFile << youthxs12.at(i) << std::endl;
        }
        myFile << std::endl << std::endl;
    }

    if (youths12.size() > 0) {
        myFile << "Youth Small\n";
        myFile << "--------------------------------------\n";
        for (i = 0; i < youths12.size(); ++i) {
            myFile << youths12.at(i) << std::endl;
        }
        myFile << std::endl << std::endl;
    }

    if (youthm12.size() > 0) {
        myFile << "Youth Medium\n";
        myFile << "--------------------------------------\n";
        for (i = 0; i < youthm12.size(); ++i) {
            myFile << youthm12.at(i) << std::endl;
        }
        myFile << std::endl << std::endl;
    }

    if (youthl12.size() > 0) {
        myFile << "Youth Large\n";
        myFile << "--------------------------------------\n";
        for (i = 0; i < youthl12.size(); ++i) {
            myFile << youthl12.at(i) << std::endl;
        }
        myFile << std::endl << std::endl;
    }

    if (youthxl12.size() > 0) {
        myFile << "Youth Extra Large\n";
        myFile << "--------------------------------------\n";
        for (i = 0; i < youthxl12.size(); ++i) {
            myFile << youthxl12.at(i) << std::endl;
        }
        myFile << std::endl << std::endl;
    }

    if (xs12.size() > 0) {
        myFile << "Extra Small\n";
        myFile << "--------------------------------------\n";
        for (i = 0; i < xs12.size(); ++i) {
            myFile << xs12.at(i) << std::endl;
        }
        myFile << std::endl << std::endl;
    }

    if (s12.size() > 0) {
        myFile << "Small\n";
        myFile << "--------------------------------------\n";
        for (i = 0; i < s12.size(); ++i) {
            myFile << s12.at(i) << std::endl;
        }
        myFile << std::endl << std::endl;
    }

    if (m12.size() > 0) {
        myFile << "Medium\n";
        myFile << "--------------------------------------\n";
        for (i = 0; i < m12.size(); ++i) {
            myFile << m12.at(i) << std::endl;
        }
        myFile << std::endl << std::endl;
    }

    if (l12.size() > 0) {
        myFile << "Large\n";
        myFile << "--------------------------------------\n";
        for (i = 0; i < l12.size(); ++i) {
            myFile << l12.at(i) << std::endl;
        }
        myFile << std::endl << std::endl;
    }

    if (xl12.size() > 0) {
        myFile << "Extra Large\n";
        myFile << "--------------------------------------\n";
        for (i = 0; i < xl12.size(); ++i) {
            myFile << xl12.at(i) << std::endl;
        }
        myFile << std::endl << std::endl;
    }

    if (xxl12.size() > 0) {
        myFile << "Double XL\n";
        myFile << "--------------------------------------\n";
        for (i = 0; i < xxl12.size(); ++i) {
            myFile << xxl12.at(i) << std::endl;
        }
        myFile << std::endl << std::endl;
    }

    if (xxxl12.size() > 0) {
        myFile << "Triple XL\n";
        myFile << "--------------------------------------\n";
        for (i = 0; i < xxxl12.size(); ++i) {
            myFile << xxxl12.at(i) << std::endl;
        }
        myFile << std::endl << std::endl;
    }

    if (xxxxl12.size() > 0) {
        myFile << "Quadruple XL\n";
        myFile << "--------------------------------------\n";
        for (i = 0; i < xxxxl12.size(); ++i) {
            myFile << xxxxl12.at(i) << std::endl;
        }
        myFile << std::endl << std::endl;
    }


    //determine if item 13 is needed
    if (youthxs13.size() > 0 || youths13.size() > 0 || youthm13.size() > 0 || youthl13.size() > 0 || xs13.size() > 0 || s13.size() > 0 || m13.size() > 0 || l13.size() > 0 || xl13.size() > 0 || xxl13.size() > 0 || xxxl13.size() > 0 || xxxxl13.size() > 0) {
        myFile << "Item #13\n";
    }
    

    //sizes functions for item 13
    if (youthxs13.size() > 0) {
        myFile << "Youth Extra Small\n";
        myFile << "--------------------------------------\n";
        for (i = 0; i < youthxs13.size(); ++i) {
            myFile << youthxs13.at(i) << std::endl;
        }
        myFile << std::endl << std::endl;
    }

    if (youths13.size() > 0) {
        myFile << "Youth Small\n";
        myFile << "--------------------------------------\n";
        for (i = 0; i < youths13.size(); ++i) {
            myFile << youths13.at(i) << std::endl;
        }
        myFile << std::endl << std::endl;
    }

    if (youthm13.size() > 0) {
        myFile << "Youth Medium\n";
        myFile << "--------------------------------------\n";
        for (i = 0; i < youthm13.size(); ++i) {
            myFile << youthm13.at(i) << std::endl;
        }
        myFile << std::endl << std::endl;
    }

    if (youthl13.size() > 0) {
        myFile << "Youth Large\n";
        myFile << "--------------------------------------\n";
        for (i = 0; i < youthl13.size(); ++i) {
            myFile << youthl13.at(i) << std::endl;
        }
        myFile << std::endl << std::endl;
    }

    if (youthxl13.size() > 0) {
        myFile << "Youth Extra Large\n";
        myFile << "--------------------------------------\n";
        for (i = 0; i < youthxl13.size(); ++i) {
            myFile << youthxl13.at(i) << std::endl;
        }
        myFile << std::endl << std::endl;
    }

    if (xs13.size() > 0) {
        myFile << "Extra Small\n";
        myFile << "--------------------------------------\n";
        for (i = 0; i < xs13.size(); ++i) {
            myFile << xs13.at(i) << std::endl;
        }
        myFile << std::endl << std::endl;
    }

    if (s13.size() > 0) {
        myFile << "Small\n";
        myFile << "--------------------------------------\n";
        for (i = 0; i < s13.size(); ++i) {
            myFile << s13.at(i) << std::endl;
        }
        myFile << std::endl << std::endl;
    }

    if (m13.size() > 0) {
        myFile << "Medium\n";
        myFile << "--------------------------------------\n";
        for (i = 0; i < m13.size(); ++i) {
            myFile << m13.at(i) << std::endl;
        }
        myFile << std::endl << std::endl;
    }

    if (l13.size() > 0) {
        myFile << "Large\n";
        myFile << "--------------------------------------\n";
        for (i = 0; i < l13.size(); ++i) {
            myFile << l13.at(i) << std::endl;
        }
        myFile << std::endl << std::endl;
    }

    if (xl13.size() > 0) {
        myFile << "Extra Large\n";
        myFile << "--------------------------------------\n";
        for (i = 0; i < xl13.size(); ++i) {
            myFile << xl13.at(i) << std::endl;
        }
        myFile << std::endl << std::endl;
    }

    if (xxl13.size() > 0) {
        myFile << "Double XL\n";
        myFile << "--------------------------------------\n";
        for (i = 0; i < xxl13.size(); ++i) {
            myFile << xxl13.at(i) << std::endl;
        }
        myFile << std::endl << std::endl;
    }

    if (xxxl13.size() > 0) {
        myFile << "Triple XL\n";
        myFile << "--------------------------------------\n";
        for (i = 0; i < xxxl13.size(); ++i) {
            myFile << xxxl13.at(i) << std::endl;
        }
        myFile << std::endl << std::endl;
    }

    if (xxxxl13.size() > 0) {
        myFile << "Quadruple XL\n";
        myFile << "--------------------------------------\n";
        for (i = 0; i < xxxxl13.size(); ++i) {
            myFile << xxxxl13.at(i) << std::endl;
        }
        myFile << std::endl << std::endl;
    }



    //determine if item 14 is needed
    if (youthxs14.size() > 0 || youths14.size() > 0 || youthm14.size() > 0 || youthl14.size() > 0 || xs14.size() > 0 || s14.size() > 0 || m14.size() > 0 || l14.size() > 0 || xl14.size() > 0 || xxl14.size() > 0 || xxxl14.size() > 0 || xxxxl14.size() > 0) {
        myFile << "Item #14\n";
    }
    

    //sizes functions for item 14
    if (youthxs14.size() > 0) {
        myFile << "Youth Extra Small\n";
        myFile << "--------------------------------------\n";
        for (i = 0; i < youthxs14.size(); ++i) {
            myFile << youthxs14.at(i) << std::endl;
        }
        myFile << std::endl << std::endl;
    }

    if (youths14.size() > 0) {
        myFile << "Youth Small\n";
        myFile << "--------------------------------------\n";
        for (i = 0; i < youths14.size(); ++i) {
            myFile << youths14.at(i) << std::endl;
        }
        myFile << std::endl << std::endl;
    }

    if (youthm14.size() > 0) {
        myFile << "Youth Medium\n";
        myFile << "--------------------------------------\n";
        for (i = 0; i < youthm14.size(); ++i) {
            myFile << youthm14.at(i) << std::endl;
        }
        myFile << std::endl << std::endl;
    }

    if (youthl14.size() > 0) {
        myFile << "Youth Large\n";
        myFile << "--------------------------------------\n";
        for (i = 0; i < youthl14.size(); ++i) {
            myFile << youthl14.at(i) << std::endl;
        }
        myFile << std::endl << std::endl;
    }

    if (youthxl14.size() > 0) {
        myFile << "Youth Extra Large\n";
        myFile << "--------------------------------------\n";
        for (i = 0; i < youthxl14.size(); ++i) {
            myFile << youthxl14.at(i) << std::endl;
        }
        myFile << std::endl << std::endl;
    }

    if (xs14.size() > 0) {
        myFile << "Extra Small\n";
        myFile << "--------------------------------------\n";
        for (i = 0; i < xs14.size(); ++i) {
            myFile << xs14.at(i) << std::endl;
        }
        myFile << std::endl << std::endl;
    }

    if (s14.size() > 0) {
        myFile << "Small\n";
        myFile << "--------------------------------------\n";
        for (i = 0; i < s14.size(); ++i) {
            myFile << s14.at(i) << std::endl;
        }
        myFile << std::endl << std::endl;
    }

    if (m14.size() > 0) {
        myFile << "Medium\n";
        myFile << "--------------------------------------\n";
        for (i = 0; i < m14.size(); ++i) {
            myFile << m14.at(i) << std::endl;
        }
        myFile << std::endl << std::endl;
    }

    if (l14.size() > 0) {
        myFile << "Large\n";
        myFile << "--------------------------------------\n";
        for (i = 0; i < l14.size(); ++i) {
            myFile << l14.at(i) << std::endl;
        }
        myFile << std::endl << std::endl;
    }

    if (xl14.size() > 0) {
        myFile << "Extra Large\n";
        myFile << "--------------------------------------\n";
        for (i = 0; i < xl14.size(); ++i) {
            myFile << xl14.at(i) << std::endl;
        }
        myFile << std::endl << std::endl;
    }

    if (xxl14.size() > 0) {
        myFile << "Double XL\n";
        myFile << "--------------------------------------\n";
        for (i = 0; i < xxl14.size(); ++i) {
            myFile << xxl14.at(i) << std::endl;
        }
        myFile << std::endl << std::endl;
    }

    if (xxxl14.size() > 0) {
        myFile << "Triple XL\n";
        myFile << "--------------------------------------\n";
        for (i = 0; i < xxxl14.size(); ++i) {
            myFile << xxxl14.at(i) << std::endl;
        }
        myFile << std::endl << std::endl;
    }

    if (xxxxl14.size() > 0) {
        myFile << "Quadruple XL\n";
        myFile << "--------------------------------------\n";
        for (i = 0; i < xxxxl14.size(); ++i) {
            myFile << xxxxl14.at(i) << std::endl;
        }
        myFile << std::endl << std::endl;
    }



    //determine if item 15 is needed
    if (youthxs15.size() > 0 || youths15.size() > 0 || youthm15.size() > 0 || youthl15.size() > 0 || xs15.size() > 0 || s15.size() > 0 || m15.size() > 0 || l15.size() > 0 || xl15.size() > 0 || xxl15.size() > 0 || xxxl15.size() > 0 || xxxxl15.size() > 0) {
        myFile << "Item #15\n";
    }
    

    //sizes functions for item 15
    if (youthxs15.size() > 0) {
        myFile << "Youth Extra Small\n";
        myFile << "--------------------------------------\n";
        for (i = 0; i < youthxs15.size(); ++i) {
            myFile << youthxs15.at(i) << std::endl;
        }
        myFile << std::endl << std::endl;
    }

    if (youths15.size() > 0) {
        myFile << "Youth Small\n";
        myFile << "--------------------------------------\n";
        for (i = 0; i < youths15.size(); ++i) {
            myFile << youths15.at(i) << std::endl;
        }
        myFile << std::endl << std::endl;
    }

    if (youthm15.size() > 0) {
        myFile << "Youth Medium\n";
        myFile << "--------------------------------------\n";
        for (i = 0; i < youthm15.size(); ++i) {
            myFile << youthm15.at(i) << std::endl;
        }
        myFile << std::endl << std::endl;
    }

    if (youthl15.size() > 0) {
        myFile << "Youth Large\n";
        myFile << "--------------------------------------\n";
        for (i = 0; i < youthl15.size(); ++i) {
            myFile << youthl15.at(i) << std::endl;
        }
        myFile << std::endl << std::endl;
    }

    if (youthxl15.size() > 0) {
        myFile << "Youth Extra Large\n";
        myFile << "--------------------------------------\n";
        for (i = 0; i < youthxl15.size(); ++i) {
            myFile << youthxl15.at(i) << std::endl;
        }
        myFile << std::endl << std::endl;
    }

    if (xs15.size() > 0) {
        myFile << "Extra Small\n";
        myFile << "--------------------------------------\n";
        for (i = 0; i < xs15.size(); ++i) {
            myFile << xs15.at(i) << std::endl;
        }
        myFile << std::endl << std::endl;
    }

    if (s15.size() > 0) {
        myFile << "Small\n";
        myFile << "--------------------------------------\n";
        for (i = 0; i < s15.size(); ++i) {
            myFile << s15.at(i) << std::endl;
        }
        myFile << std::endl << std::endl;
    }

    if (m15.size() > 0) {
        myFile << "Medium\n";
        myFile << "--------------------------------------\n";
        for (i = 0; i < m15.size(); ++i) {
            myFile << m15.at(i) << std::endl;
        }
        myFile << std::endl << std::endl;
    }

    if (l15.size() > 0) {
        myFile << "Large\n";
        myFile << "--------------------------------------\n";
        for (i = 0; i < l15.size(); ++i) {
            myFile << l15.at(i) << std::endl;
        }
        myFile << std::endl << std::endl;
    }

    if (xl15.size() > 0) {
        myFile << "Extra Large\n";
        myFile << "--------------------------------------\n";
        for (i = 0; i < xl15.size(); ++i) {
            myFile << xl15.at(i) << std::endl;
        }
        myFile << std::endl << std::endl;
    }

    if (xxl15.size() > 0) {
        myFile << "Double XL\n";
        myFile << "--------------------------------------\n";
        for (i = 0; i < xxl15.size(); ++i) {
            myFile << xxl15.at(i) << std::endl;
        }
        myFile << std::endl << std::endl;
    }

    if (xxxl15.size() > 0) {
        myFile << "Triple XL\n";
        myFile << "--------------------------------------\n";
        for (i = 0; i < xxxl15.size(); ++i) {
            myFile << xxxl15.at(i) << std::endl;
        }
        myFile << std::endl << std::endl;
    }

    if (xxxxl15.size() > 0) {
        myFile << "Quadruple XL\n";
        myFile << "--------------------------------------\n";
        for (i = 0; i < xxxxl15.size(); ++i) {
            myFile << xxxxl15.at(i) << std::endl;
        }
        myFile << std::endl << std::endl;
    }




    myFile.close();

    std::cout << "Data written to file successfully!\n";

    return 0;
}