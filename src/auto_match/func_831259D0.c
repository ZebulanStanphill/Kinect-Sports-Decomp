// Kinect Sports retail 4D5308C9, function 0x831259D0 (28 bytes).
// Static initializer: copies the vector constant lbl_821CEAA0 (1, 0, 0, 0) into lbl_83297060.

typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

extern const __vector4 lbl_821CEAA0;
extern __vector4 lbl_83297060;

void fn_831259D0(void)
{
    lbl_83297060 = lbl_821CEAA0;
}
