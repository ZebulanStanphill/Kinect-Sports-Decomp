#include "game/Vcall_82940B98.h"

extern "C" {
void fn_82949AB0(void *self, void (Vcall_82940B98::*method)(), const char *name, int arg4, int arg5);
void fn_8295EF88(void *self);

void fn_82949CD0(void *self)
{
    fn_82949AB0(self, &Vcall_82940B98::f, "neg", 0, 0);
    fn_8295EF88(self);
}
}
