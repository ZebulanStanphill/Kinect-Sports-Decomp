// Kinect Sports retail 4D5308C9, function 0x831203D8 (28 bytes).
// Static initializer: copies the vector constant lbl_821CEA80 (0.707107, 0, 0, -0.707107) into
// lbl_83293890.

typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

extern const __vector4 lbl_821CEA80;
extern __vector4 lbl_83293890;

void fn_831203D8(void)
{
    lbl_83293890 = lbl_821CEA80;
}
