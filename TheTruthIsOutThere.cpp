#include <iostream>

//
//  Created by Matheu on a random september, 2019 day.
//  May the joy of bitwise guide thy way.
// 

main()
{
    bool boolean;

    std::cout << "OR (x | y): " << "\n";
    std::cout << "0 + 0 = " << (boolean = 0 + 0) << "\n";
    std::cout << "1 + 0 = " << (boolean = 1 + 0) << "\n";
    std::cout << "0 + 1 = " << (boolean = 0 + 1) << "\n";
    std::cout << "1 + 1 = " << (boolean = 1 + 1) << "\n" << std::endl;

    std::cout << "AND (x & y):" << "\n";
    std::cout << "0 and 0 = " << (boolean = 0 && 0) << "\n";
    std::cout << "1 and 0 = " << (boolean = 1 && 0) << "\n";
    std::cout << "0 and 1 = " << (boolean = 0 && 1) << "\n";
    std::cout << "1 and 1 = " << (boolean = 1 && 1) << "\n" << std::endl;

    std::cout << "XOR (x ^ y): " << "\n";
    std::cout << "0 xor 0 = " << (boolean = 0 ^ 0) << "\n";
    std::cout << "1 xor 0 = " << (boolean = 1 ^ 0) << "\n";
    std::cout << "0 xor 1 = " << (boolean = 0 ^ 1) << "\n";
    std::cout << "1 xor 1 = " << (boolean = 1 ^ 1) << "\n" << std::endl;


    std::cout << "False OR False (false | false): " << "\n";
    std::cout << "False or False = " << (boolean = false || false) << "\n";
    std::cout << "False or True  = " << (boolean = false || true) << "\n";
    std::cout << "True  or False = " << (boolean = true || false) << "\n";
    std::cout << "True  or True  = " << (boolean = true || true) << "\n" << std::endl;

    std::cout << "False AND False (false && false): " << "\n";
    std::cout << "False and False = " << (boolean = false && false) << "\n";
    std::cout << "False and True  = "  << (boolean = false && true) << "\n";
    std::cout << "True  and False = " << (boolean = true && false) << "\n";
    std::cout << "True  and True  = " << (boolean = true && true) << "\n" << std::endl;

    std::cout << "NOT False OR True: (~false || true): " << "\n";
    std::cout << "Not False or False = " << (boolean = ~(false) || false) << "\n";
    std::cout << "Not False or True  = "  << (boolean = ~(false) || true) << "\n";
    std::cout << "Not True  or False = " << (boolean = ~(true) || false) << "\n";
    std::cout << "Not True  or True  = " << (boolean = ~(true) || true) << "\n" << std::endl;

    std::cout << "NOT False AND True: (~false && true): " << "\n";
    std::cout << "Not False and False = " << (boolean = ~(false) && false) << "\n";
    std::cout << "Not False and True  = "  << (boolean = ~(false) && true) << "\n";
    std::cout << "Not True  and False = " << (boolean = ~(true) && false) << "\n";
    std::cout << "Not True  and True  = " << (boolean = ~(true) && true) << "\n" << std::endl;

    return 0;
}
