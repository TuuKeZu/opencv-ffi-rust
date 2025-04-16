#include <iostream>
#include "bar.h"

int main() {
    std::cout << "running test" << std::endl;
    TestStruct s = { true };
    int val = run_image_tool(s);

    std::cout << val << std::endl;
    std::cout << "finished test" << std::endl;
}
