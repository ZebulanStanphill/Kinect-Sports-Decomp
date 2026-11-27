#include "xdk/vectorintrinsics.h"

typedef struct Src_823049E8 {
    char pad00[0x80];
    __vector4 v80;
    __vector4 v90;
} Src_823049E8;

typedef struct Obj_823049E8 {
    char pad00[0xc];
    Src_823049E8 *src;
    char pad10[0x10];
    __vector4 v20;
    __vector4 v30;
} Obj_823049E8;

void fn_823049E8(Obj_823049E8 *self)
{
    self->v20 = self->src->v80;
    self->v30 = self->src->v90;
}
