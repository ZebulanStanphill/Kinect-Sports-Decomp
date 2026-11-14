typedef __declspec(passinreg) __declspec(align(16)) union __vector4 {
    float vector4_f32[4];
    unsigned int vector4_u32[4];
} __vector4;

typedef struct {
    __vector4 v;
} Vec;

typedef struct Path_8306DA38 {
    char pad0[0x1a60];
    __vector4 origin;
} Path_8306DA38;

extern Vec fn_83075D30(void *src, int i);
extern __vector4 fn_8306ED30(__vector4 a, __vector4 b);
extern void fn_83075D80(void *dst, int i, __vector4 v);

void fn_8306DA38(Path_8306DA38 *self, void *points)
{
    int i;
    self->origin = fn_83075D30(points, 0).v;
    self->origin.vector4_f32[1] = 0.0f;
    for (i = 0; i < 20; i++) {
        fn_83075D80(points, i, fn_8306ED30(fn_83075D30(points, i).v, self->origin));
    }
}
