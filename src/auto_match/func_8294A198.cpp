#include "game/Vcall_82940B78.h"

extern "C" {
extern const char lbl_8200EF94[];
void fn_82949AB0(void *self, void (Vcall_82940B78::*method)(), const char *name, int arg4, int arg5);
void fn_829603D0(void *self);

void fn_8294A198(void *self)
{
    fn_82949AB0(self, &Vcall_82940B78::f, lbl_8200EF94, 0, 0);
    fn_829603D0(self);
}
}
