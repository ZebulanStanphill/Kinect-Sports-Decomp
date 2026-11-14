#include <vector>

struct Pair_8249DA08 {
    int first;
    unsigned int second;
};

struct Obj_8249DA08 {
    char pad0[0x10];
    std::vector<Pair_8249DA08> items;
};

extern "C" void fn_8249DA08(Obj_8249DA08 *o, unsigned int value)
{
    for (std::vector<Pair_8249DA08>::iterator it = o->items.begin(); it != o->items.end(); ++it) {
        if (it->second == value) {
            o->items.erase(it);
            return;
        }
    }
}
