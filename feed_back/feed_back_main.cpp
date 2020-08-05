# include "dawn/common.hpp"

# include "Shader_hard_code_Triangle.hpp"

# define Xt_test_item(X__) \
X__(Shader_hard_code_Triangle) \
X__(Buffer_Triangle) \

DEC_T(test_item);
DEF_T(test_item);

# define X_DEF_void_func(name__) void test_##name__();
Xt_test_item(X_DEF_void_func);

# define X_func_name_comma(name__) test_##name__,

static void(*test_item_funcs[])() = { Xt_test_item(X_func_name_comma) };

int main() {
    dbg_show << "Hello! Configurator!!!";
    dawn::vk::init();
    while (true) {
        int user_selected;
        size_t i = 0;
        for (auto n : T_test_item::test_item_names) {
            info_show << i++ << ": " << n;
        }
        info_show << T_test_item::count << ": quit\n" << "select execute item:";
        std::cin >> user_selected;
        if (T_test_item::is_legal(user_selected)) {
            test_item_funcs[user_selected]();
        }
        else if(user_selected == T_test_item::count){
            break;
        }
        else {
            wrn_show << "Wrong choice";
        }
    }
    return 0;
}

