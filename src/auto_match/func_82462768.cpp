#include "game/Vcall_82282350.h"

struct Pair_82462768 {
    Vcall_82282350 *obj;
    int extra;
};

struct Owner_82462768 {
    char pad[0x28];
    Pair_82462768 *first;
    Pair_82462768 *last;
    char pad2[8];
    unsigned char flag;
};

extern "C" void fn_82462768(Owner_82462768 *owner)
{
    Pair_82462768 *it = owner->first;
    Pair_82462768 *end = owner->last;
    for (; it != end; it++) {
        (it->obj->*&Vcall_82282350::f)();
    }
    owner->flag = 1;
}
