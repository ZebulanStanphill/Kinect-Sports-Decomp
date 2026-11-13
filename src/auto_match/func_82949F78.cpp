#include "game/Vcall_82940B88.h"

extern "C" {
void fn_82949AB0(void *self, void (Vcall_82940B88::*method)(), const char *name, int arg4, int arg5);
void fn_82960220(void *self);

void fn_82949F78(void *self)
{
    fn_82949AB0(self, &Vcall_82940B88::f, "slt", 0, 0);
    fn_82960220(self);
}
}
