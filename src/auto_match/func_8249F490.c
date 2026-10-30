typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 { float f[4]; } __vector4;
typedef struct { float x0, y0, x1, y1; } Rect;

int fn_8249F490(Rect *r, __vector4 v)
{
    if (r->x0 <= v.f[0] && r->y0 <= v.f[2] && r->x1 >= v.f[0] && r->y1 >= v.f[2])
        return 1;
    return 0;
}
