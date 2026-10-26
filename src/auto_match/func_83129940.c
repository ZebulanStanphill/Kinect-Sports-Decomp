// Kinect Sports retail 4D5308C9, function 0x83129940 (28 bytes).
// Static initializer: copies the vector constant lbl_820799B0 (0, -0, -0, 0) into lbl_83218960.

typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

extern const __vector4 lbl_820799B0;
extern __vector4 lbl_83218960;

void fn_83129940(void)
{
    lbl_83218960 = lbl_820799B0;
}
