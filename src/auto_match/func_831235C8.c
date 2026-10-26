// Kinect Sports retail 4D5308C9, function 0x831235C8 (28 bytes).
// Static initializer: copies the vector constant lbl_821CEA80 (0.707107, 0, 0, -0.707107) into
// lbl_83295280.

typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

extern const __vector4 lbl_821CEA80;
extern __vector4 lbl_83295280;

void fn_831235C8(void)
{
    lbl_83295280 = lbl_821CEA80;
}
