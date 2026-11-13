// Kinect Sports retail 4D5308C9, function 0x83139B30 (72 bytes).
// Static initializer: lbl_832654C0 = the vector (-1, 1, -1, 0) built by fn_82F534D8
// (XMVectorSet: stores the four floats to the stack and loads them as one vector).

typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

extern __vector4 fn_82F534D8(float x, float y, float z, float w);

extern __vector4 lbl_832654C0;

void fn_83139B30(void)
{
    lbl_832654C0 = fn_82F534D8(-1.0f, 1.0f, -1.0f, 0.0f);
}
