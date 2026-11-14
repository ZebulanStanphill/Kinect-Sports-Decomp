#include <vector>

struct Pair_8249D128 {
    int data[4];
    unsigned int second;
};

struct Obj_8249D128 {
    char pad0[0x30];
    std::vector<Pair_8249D128> items;
};

extern "C" void fn_8249D128(Obj_8249D128 *o, unsigned int value)
{
    for (std::vector<Pair_8249D128>::iterator it = o->items.begin(); it != o->items.end(); ++it) {
        if (it->second == value) {
            o->items.erase(it);
            return;
        }
    }
}
