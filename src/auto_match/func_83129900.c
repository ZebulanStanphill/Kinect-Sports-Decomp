// Kinect Sports retail 4D5308C9, function 0x83129900 (28 bytes).
// Static initializer: copies the vector constant lbl_82079970 (-0, 0, 0, 0) into lbl_83218940.

typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

extern const __vector4 lbl_82079970;
extern __vector4 lbl_83218940;

void fn_83129900(void)
{
    lbl_83218940 = lbl_82079970;
}
