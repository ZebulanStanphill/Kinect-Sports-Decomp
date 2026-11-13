#include "game/Vcall_82940B68.h"

extern "C" {
void fn_82949AB0(void *self, void (Vcall_82940B68::*method)(), const char *name, int arg4, int arg5);
void fn_829603A0(void *self);

void fn_8294A148(void *self)
{
    fn_82949AB0(self, &Vcall_82940B68::f, "lit", 0, 0);
    fn_829603A0(self);
}
}
