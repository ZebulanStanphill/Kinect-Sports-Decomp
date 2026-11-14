typedef __declspec(passinreg) __declspec(align(16)) union __vector4 {
    float vector4_f32[4];
    unsigned int vector4_u32[4];
} __vector4;

typedef struct {
    __vector4 v;
} Vec;

extern Vec fn_82F538A0(void *src, int i);
extern __vector4 fn_8306ED30(__vector4 a, __vector4 b);
extern void fn_82F53900(void *p, int i, __vector4 v);

void fn_82F4FD20(__vector4 *origin, void *src)
{
    int i;
    origin[1] = origin[0];
    origin[0] = fn_82F538A0(src, 0).v;
    for (i = 0; i < 25; i++) {
        fn_82F53900(src, i, fn_8306ED30(fn_82F538A0(src, i).v, origin[0]));
    }
}
