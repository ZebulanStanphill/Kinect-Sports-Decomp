typedef __declspec(passinreg) __declspec(align(16)) union __vector4 {
    float vector4_f32[4];
    unsigned int vector4_u32[4];
} __vector4;

extern const float lbl_82165968[25][3];

extern unsigned char fn_82F538F8(void *src);
extern __vector4 fn_82F534D8(float x, float y, float z, float w);
extern void fn_82F53900(void *p, int i, __vector4 v);

void fn_82F4FBE8(void *self, void *src)
{
    int i;
    if (fn_82F538F8(src) == 0) {
        for (i = 0; i < 25; i++) {
            fn_82F53900(src, i, fn_82F534D8(lbl_82165968[i][0], lbl_82165968[i][1], lbl_82165968[i][2], 0.0f));
        }
    }
}
