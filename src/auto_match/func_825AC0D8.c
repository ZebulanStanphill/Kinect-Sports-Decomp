#include "xdk/vectorintrinsics.h"

typedef struct Source_825AC0D8 {
    char pad0[0x50];
    __vector4 value;
} Source_825AC0D8;

typedef struct Owner_825AC0D8 {
    char pad0[0x80];
    Source_825AC0D8 *source;
} Owner_825AC0D8;

typedef struct Out_825AC0D8 {
    char pad0[0x10];
    __vector4 value;
} Out_825AC0D8;

void fn_825AC0D8(Owner_825AC0D8 *self, Out_825AC0D8 *out)
{
    out->value = __VMXGetReg(77);
    if (self->source != 0) {
        out->value = self->source->value;
    }
}
