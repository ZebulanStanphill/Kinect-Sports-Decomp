// Kinect Sports retail 4D5308C9, function 0x83129A00 (28 bytes).
// Static initializer: copies the vector constant lbl_82079A10 (words 0x1F1F1F05, 0x1F1F1F07,
// 0x1F1F1F05, 0x1F1F1F07) into lbl_832189C0.

typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

extern const __vector4 lbl_82079A10;
extern __vector4 lbl_832189C0;

void fn_83129A00(void)
{
    lbl_832189C0 = lbl_82079A10;
}
