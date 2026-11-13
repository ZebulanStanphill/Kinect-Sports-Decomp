#include "game/Vcall_82940BD8.h"

extern "C" {
void fn_82949AB0(void *self, void (Vcall_82940BD8::*method)(), const char *name, int arg4, int arg5);
void fn_8295F3A0(void *self);

void fn_8294A1E8(void *self)
{
    fn_82949AB0(self, &Vcall_82940BD8::f, "nrm", 0, 0);
    fn_8295F3A0(self);
}
}
