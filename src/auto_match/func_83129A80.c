// Kinect Sports retail 4D5308C9, function 0x83129A80 (28 bytes).
// Static initializer: copies the vector constant lbl_82079A50 (words 0x1F1F1F0D, 0x1F1F1F0F,
// 0x1F1F1F0D, 0x1F1F1F0F) into lbl_83218A00.

typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

extern const __vector4 lbl_82079A50;
extern __vector4 lbl_83218A00;

void fn_83129A80(void)
{
    lbl_83218A00 = lbl_82079A50;
}
