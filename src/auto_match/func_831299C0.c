// Kinect Sports retail 4D5308C9, function 0x831299C0 (28 bytes).
// Static initializer: copies the vector constant lbl_820799F0 (words 0x1F1F1F01, 0x1F1F1F03,
// 0x1F1F1F01, 0x1F1F1F03) into lbl_832189A0.

typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

extern const __vector4 lbl_820799F0;
extern __vector4 lbl_832189A0;

void fn_831299C0(void)
{
    lbl_832189A0 = lbl_820799F0;
}
