// Kinect Sports retail 4D5308C9, function 0x83129840 (28 bytes).
// Static initializer: copies the vector constant lbl_82079900 (-0, 0, 0, 0) into lbl_832188E0.

typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

extern const __vector4 lbl_82079900;
extern __vector4 lbl_832188E0;

void fn_83129840(void)
{
    lbl_832188E0 = lbl_82079900;
}
