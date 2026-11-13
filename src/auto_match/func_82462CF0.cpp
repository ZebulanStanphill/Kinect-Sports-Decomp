#include "game/Vcall_82463790.h"

struct Context_82462CF0 {
    void **handle;
};

struct Pair_82462CF0 {
    Vcall_82463790 *obj;
    int extra;
};

struct Owner_82462CF0 {
    char pad[0x28];
    Pair_82462CF0 *first;
    Pair_82462CF0 *last;
};

extern "C" {
void fn_8263CBB0(void *handle, int a, int b, unsigned __int64 flags);

void fn_82462CF0(Owner_82462CF0 *owner, Context_82462CF0 *context)
{
    Pair_82462CF0 *it = owner->first;
    Pair_82462CF0 *end = owner->last;
    for (; it != end; it++) {
        (it->obj->*&Vcall_82463790::f)(context);
    }
    fn_8263CBB0(*context->handle, 0, 0, 0x80000000);
}
}
