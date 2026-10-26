// Kinect Sports retail 4D5308C9, function 0x831297A0 (28 bytes).
// Static initializer: copies the vector constant lbl_820797D0 (0, -1.01, -2.01, -4.01) into
// lbl_83218890.

typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

extern const __vector4 lbl_820797D0;
extern __vector4 lbl_83218890;

void fn_831297A0(void)
{
    lbl_83218890 = lbl_820797D0;
}
