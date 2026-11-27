#include "xdk/vectorintrinsics.h"

typedef struct { float x0, y0, x1, y1; } Rect;

int fn_8249F490(Rect *r, __vector4 v)
{
    if (r->x0 <= v.vector4_f32[0] && r->y0 <= v.vector4_f32[2] && r->x1 >= v.vector4_f32[0] && r->y1 >= v.vector4_f32[2])
        return 1;
    return 0;
}
