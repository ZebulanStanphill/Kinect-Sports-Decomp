// Kinect Sports retail 4D5308C9, function 0x83129700 (28 bytes).
// Static initializer: copies the vector constant lbl_82079660 (words 0xFFFFFFFF, 0x00000000,
// 0x00000000, 0x00000000) into lbl_83218840.

typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

extern const __vector4 lbl_82079660;
extern __vector4 lbl_83218840;

void fn_83129700(void)
{
    lbl_83218840 = lbl_82079660;
}
