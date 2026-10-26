// Kinect Sports retail 4D5308C9, function 0x83125A70 (28 bytes).
// Static initializer: copies the vector constant lbl_821CEAD0 (0, 0, -1, 0) into lbl_832970B0.

typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

extern const __vector4 lbl_821CEAD0;
extern __vector4 lbl_832970B0;

void fn_83125A70(void)
{
    lbl_832970B0 = lbl_821CEAD0;
}
