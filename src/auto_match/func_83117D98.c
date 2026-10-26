// Kinect Sports retail 4D5308C9, function 0x83117D98 (28 bytes).
// Static initializer: copies the vector constant lbl_821CEA80 (0.707107, 0, 0, -0.707107) into
// lbl_8328B770.

typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

extern const __vector4 lbl_821CEA80;
extern __vector4 lbl_8328B770;

void fn_83117D98(void)
{
    lbl_8328B770 = lbl_821CEA80;
}
