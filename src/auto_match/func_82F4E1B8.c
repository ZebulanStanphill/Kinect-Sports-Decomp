typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

typedef struct Global_82F4E1B8 {
    char pad[0xb00];
    __vector4 value;
} Global_82F4E1B8;

extern Global_82F4E1B8 *lbl_8326183C;

unsigned char fn_82F4E1B8(void)
{
    __vector4 v = lbl_8326183C->value;
    return v.vector4_f32[3] != 0.0f;
}
