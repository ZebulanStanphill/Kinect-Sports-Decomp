#include "game/Vcall_82940BC8.h"

extern "C" {
void fn_82949AB0(void *self, void (Vcall_82940BC8::*method)(), const char *name, int arg4, int arg5);
void fn_82960150(void *self);

void fn_82949D20(void *self)
{
    fn_82949AB0(self, &Vcall_82940BC8::f, "neg", 0, 0);
    fn_82960150(self);
}
}
