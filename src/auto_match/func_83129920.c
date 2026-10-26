// Kinect Sports retail 4D5308C9, function 0x83129920 (28 bytes).
// Static initializer: copies the vector constant lbl_820799A0 (-0, 0, 0, -0) into lbl_83218950.

typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

extern const __vector4 lbl_820799A0;
extern __vector4 lbl_83218950;

void fn_83129920(void)
{
    lbl_83218950 = lbl_820799A0;
}
