// Kinect Sports retail 4D5308C9, function 0x83129720 (28 bytes).
// Static initializer: copies the vector constant lbl_82079670 (-0, 0, 0, 0) into lbl_83218850.

typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

extern const __vector4 lbl_82079670;
extern __vector4 lbl_83218850;

void fn_83129720(void)
{
    lbl_83218850 = lbl_82079670;
}
