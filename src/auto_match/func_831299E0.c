// Kinect Sports retail 4D5308C9, function 0x831299E0 (28 bytes).
// Static initializer: copies the vector constant lbl_82079A00 (words 0x1F1F1F04, 0x1F1F1F04,
// 0x1F1F1F06, 0x1F1F1F06) into lbl_832189B0.

typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

extern const __vector4 lbl_82079A00;
extern __vector4 lbl_832189B0;

void fn_831299E0(void)
{
    lbl_832189B0 = lbl_82079A00;
}
