// Kinect Sports retail 4D5308C9, function 0x83129960 (28 bytes).
// Static initializer: copies the vector constant lbl_820799C0 (words 0x00010203, 0x00010203,
// 0x08090A0B, 0x08090A0B) into lbl_83218970.

typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

extern const __vector4 lbl_820799C0;
extern __vector4 lbl_83218970;

void fn_83129960(void)
{
    lbl_83218970 = lbl_820799C0;
}
