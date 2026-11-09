#include <vector>
struct Element_8243E5C8 { unsigned char bytes[0x5c]; };
extern "C" void fn_8243E5C8(char *self) {
    std::vector<Element_8243E5C8> *v = (std::vector<Element_8243E5C8> *)(self + 4);
    v->erase(v->begin(), v->end());
}
