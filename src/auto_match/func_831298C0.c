// Kinect Sports retail 4D5308C9, function 0x831298C0 (28 bytes).
// Static initializer: copies the vector constant lbl_82079940 (words 0x1F1F1F0C, 0x1F1F1F0D,
// 0x1F1F1F0E, 0x1F1F1F0F) into lbl_83218920.

typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

extern const __vector4 lbl_82079940;
extern __vector4 lbl_83218920;

void fn_831298C0(void)
{
    lbl_83218920 = lbl_82079940;
}
