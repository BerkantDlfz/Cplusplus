#include <iostream>
namespace F {
    float x = 9;
}
namespace G {
    using namespace F;
    float y = 2.0;
    namespace INNER_G {
        float z = 10.01;
    }
}
int main(void) {
    float x = 19.1;
    using namespace G;
    using namespace G::INNER_G;
    std::cout << "x = " << x << std::endl;
    std::cout << "y = " << y << std::endl;
    std::cout << "z = " << z << std::endl;
    return 0;
}
