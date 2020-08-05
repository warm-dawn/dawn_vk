# include <iostream>
# include "dawn/vk/vk.hpp"

# include <map>

using namespace std;
using namespace dawn;
using namespace dawn::vk;

int main() try {
    vk::init();

    //system("pause");
    return 0;
}
catch (std::exception& e_) {
    wrn_show << e_.what();
}