typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

typedef struct Rotation_830A5D18 {
    __vector4 col0;
    __vector4 col1;
    __vector4 col2;
} Rotation_830A5D18;

typedef struct Schema_830A5D18 {
    Rotation_830A5D18 a;
    Rotation_830A5D18 b;
} Schema_830A5D18;

void fn_830A5D18(const Rotation_830A5D18 *a, const Rotation_830A5D18 *b, Schema_830A5D18 **cursor)
{
    Schema_830A5D18 *s = *cursor;
    Rotation_830A5D18 *d;

    s->a.col0 = a->col0;
    s->a.col1 = a->col1;
    s->a.col2 = a->col2;
    d = &s->b;
    d->col0 = b->col0;
    d->col1 = b->col1;
    d->col2 = b->col2;
    ((unsigned char *)s)[3] = 0x1b;
    *cursor = s + 1;
}
