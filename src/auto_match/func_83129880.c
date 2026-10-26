// Kinect Sports retail 4D5308C9, function 0x83129880 (28 bytes).
// Static initializer: copies the vector constant lbl_82079920 (words 0x1F1F1F04, 0x1F1F1F05,
// 0x1F1F1F06, 0x1F1F1F07) into lbl_83218900.

typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

extern const __vector4 lbl_82079920;
extern __vector4 lbl_83218900;

void fn_83129880(void)
{
    lbl_83218900 = lbl_82079920;
}
