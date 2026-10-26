// Kinect Sports retail 4D5308C9, function 0x831259B0 (28 bytes).
// Static initializer: copies the vector constant lbl_821CE890 (0, 0, 0, 0) into lbl_83297050.

typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

extern const __vector4 lbl_821CE890;
extern __vector4 lbl_83297050;

void fn_831259B0(void)
{
    lbl_83297050 = lbl_821CE890;
}
