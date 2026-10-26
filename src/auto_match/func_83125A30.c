// Kinect Sports retail 4D5308C9, function 0x83125A30 (28 bytes).
// Static initializer: copies the vector constant lbl_821CEAB0 (-1, 0, 0, 0) into lbl_83297090.

typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

extern const __vector4 lbl_821CEAB0;
extern __vector4 lbl_83297090;

void fn_83125A30(void)
{
    lbl_83297090 = lbl_821CEAB0;
}
