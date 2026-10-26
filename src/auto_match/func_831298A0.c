// Kinect Sports retail 4D5308C9, function 0x831298A0 (28 bytes).
// Static initializer: copies the vector constant lbl_82079930 (words 0x1F1F1F08, 0x1F1F1F09,
// 0x1F1F1F0A, 0x1F1F1F0B) into lbl_83218910.

typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

extern const __vector4 lbl_82079930;
extern __vector4 lbl_83218910;

void fn_831298A0(void)
{
    lbl_83218910 = lbl_82079930;
}
