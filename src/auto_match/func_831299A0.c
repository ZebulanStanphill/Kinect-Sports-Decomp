// Kinect Sports retail 4D5308C9, function 0x831299A0 (28 bytes).
// Static initializer: copies the vector constant lbl_820799E0 (words 0x1F1F1F00, 0x1F1F1F00,
// 0x1F1F1F02, 0x1F1F1F02) into lbl_83218990.

typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

extern const __vector4 lbl_820799E0;
extern __vector4 lbl_83218990;

void fn_831299A0(void)
{
    lbl_83218990 = lbl_820799E0;
}
