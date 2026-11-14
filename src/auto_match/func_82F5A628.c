typedef __declspec(passinreg) __declspec(align(16)) union __vector4 {
    float vector4_f32[4];
    unsigned int vector4_u32[4];
} __vector4;

typedef struct Self_82F5A628 {
    char pad0[0xf0];
    __vector4 prev[4];
    __vector4 cur[2];
} Self_82F5A628;

extern __vector4 fn_8306ED30(__vector4 a, __vector4 b);
extern float fn_82F535C8(__vector4 v);

int fn_82F5A628(Self_82F5A628 *self, float threshold)
{
    unsigned int count = 0;
    int i;
    for (i = 0; i < 2; i++) {
        __vector4 *cur = &self->cur[i];
        if (fn_82F535C8(fn_8306ED30(cur[-4], *cur)) < threshold) {
            count++;
        }
    }
    return count >= 2;
}
