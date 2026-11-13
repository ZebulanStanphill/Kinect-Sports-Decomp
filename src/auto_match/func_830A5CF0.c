typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

typedef struct Schema_830A5CF0 {
    unsigned char pad[3];
    unsigned char type;
    int pad4[3];
    int value;
    int pad14[3];
} Schema_830A5CF0;

void fn_830A5CF0(const __vector4 *v, int value, Schema_830A5CF0 **cursor)
{
    Schema_830A5CF0 *s = *cursor;
    *(__vector4 *)s = *v;
    s->value = value;
    s->type = 0x1a;
    *cursor = s + 1;
}
