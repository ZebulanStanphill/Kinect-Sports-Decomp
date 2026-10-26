// Kinect Sports retail 4D5308C9, function 0x83129A40 (28 bytes).
// Static initializer: copies the vector constant lbl_82079A30 (words 0x1F1F1F09, 0x1F1F1F0B,
// 0x1F1F1F09, 0x1F1F1F0B) into lbl_832189E0.

typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

extern const __vector4 lbl_82079A30;
extern __vector4 lbl_832189E0;

void fn_83129A40(void)
{
    lbl_832189E0 = lbl_82079A30;
}
