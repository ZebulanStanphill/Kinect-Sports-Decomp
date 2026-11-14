typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

typedef struct Buffer_82D9D820 {
    char pad0[0x28];
    __vector4 *data;
} Buffer_82D9D820;

void fn_82D9D820(Buffer_82D9D820 *self, int start, int count, const __vector4 *src)
{
    int i;
    for (i = start; i < start + count; i++)
        self->data[i] = *src++;
}
