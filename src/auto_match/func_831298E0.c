// Kinect Sports retail 4D5308C9, function 0x831298E0 (28 bytes).
// Static initializer: copies the vector constant lbl_82079960 (words 0xFFFFFFFF, 0x00000000,
// 0x00000000, 0x00000000) into lbl_83218930.

typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

extern const __vector4 lbl_82079960;
extern __vector4 lbl_83218930;

void fn_831298E0(void)
{
    lbl_83218930 = lbl_82079960;
}
