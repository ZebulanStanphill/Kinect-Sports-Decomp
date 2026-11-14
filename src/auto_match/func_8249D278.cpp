#include <vector>

struct Pair_8249D278 {
    int data[4];
    unsigned int second;
};

struct Obj_8249D278 {
    char pad0[0x40];
    std::vector<Pair_8249D278> items;
};

extern "C" void fn_8249D278(Obj_8249D278 *o, unsigned int value)
{
    for (std::vector<Pair_8249D278>::iterator it = o->items.begin(); it != o->items.end(); ++it) {
        if (it->second == value) {
            o->items.erase(it);
            return;
        }
    }
}
