#include "xdk/vectorintrinsics.h"

typedef struct {
    __vector4 v;
} Vec_824B4730;

typedef struct Src_824B4730 Src_824B4730;

extern Vec_824B4730 fn_824B46C0(Src_824B4730 *src, int index);

Vec_824B4730 fn_824B4730(Src_824B4730 *src, int to, int from)
{
    Vec_824B4730 r;
    __vector4 b = fn_824B46C0(src, from).v;
    r.v = __vsubfp(fn_824B46C0(src, to).v, b);
    return r;
}
