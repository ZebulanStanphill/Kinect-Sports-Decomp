#include "game/Vcall_82940BB8.h"

extern "C" {
void fn_82949AB0(void *self, void (Vcall_82940BB8::*method)(), const char *name, int arg4, int arg5);
void fn_82960230(void *self);

void fn_8294A560(void *self)
{
    fn_82949AB0(self, &Vcall_82940BB8::f, "sge", 0, 0);
    fn_82960230(self);
}
}
