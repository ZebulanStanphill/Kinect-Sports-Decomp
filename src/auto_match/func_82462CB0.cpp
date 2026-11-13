#include "game/Vcall_82463780.h"

struct Pair_82462CB0 {
    Vcall_82463780 *obj;
    int extra;
};

struct Owner_82462CB0 {
    char pad[0x28];
    Pair_82462CB0 *first;
    Pair_82462CB0 *last;
};

extern "C" void fn_82462CB0(Owner_82462CB0 *owner, int arg)
{
    Pair_82462CB0 *it = owner->first;
    Pair_82462CB0 *end = owner->last;
    for (; it != end; it++) {
        (it->obj->*&Vcall_82463780::f)(arg);
    }
}
