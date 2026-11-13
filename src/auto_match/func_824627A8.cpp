#include "game/Vcall_82282330.h"

struct Pair_824627A8 {
    Vcall_82282330 *obj;
    int extra;
};

struct Owner_824627A8 {
    char pad[0x28];
    Pair_824627A8 *first;
    Pair_824627A8 *last;
    char pad2[8];
    unsigned char flag;
};

extern "C" void fn_824627A8(Owner_824627A8 *owner)
{
    Pair_824627A8 *it = owner->first;
    Pair_824627A8 *end = owner->last;
    for (; it != end; it++) {
        (it->obj->*&Vcall_82282330::f)();
    }
    owner->flag = 0;
}
