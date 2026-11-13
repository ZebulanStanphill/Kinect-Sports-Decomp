#include "game/Vcall_82940B48.h"

extern "C" {
void fn_82949AB0(void *self, void (Vcall_82940B48::*method)(), const char *name, int arg4, int arg5);
void fn_82960260(void *self);

void fn_8294A280(void *self)
{
    fn_82949AB0(self, &Vcall_82940B48::f, "dst", 0, 0);
    fn_82960260(self);
}
}
