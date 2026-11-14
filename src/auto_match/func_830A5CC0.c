typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

typedef struct Schema_830A5CC0 {
    __vector4 a;
    __vector4 b;
} Schema_830A5CC0;

void fn_830A5CC0(const __vector4 *a, const __vector4 *b, Schema_830A5CC0 **cursor)
{
    Schema_830A5CC0 *s = *cursor;
    __vector4 *d;

    s->a = *a;
    d = &s->b;
    *d = *b;
    ((unsigned char *)s)[3] = 0x19;
    *cursor = s + 1;
}
