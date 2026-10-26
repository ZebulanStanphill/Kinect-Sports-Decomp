// Kinect Sports retail 4D5308C9, function 0x83129A60 (28 bytes).
// Static initializer: copies the vector constant lbl_82079A40 (words 0x1F1F1F0C, 0x1F1F1F0C,
// 0x1F1F1F0E, 0x1F1F1F0E) into lbl_832189F0.

typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

extern const __vector4 lbl_82079A40;
extern __vector4 lbl_832189F0;

void fn_83129A60(void)
{
    lbl_832189F0 = lbl_82079A40;
}
