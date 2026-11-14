typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

__vector4 __vspltisw(int value);
__vector4 __vupkd3d(__vector4 v, int type);
__vector4 __vpermwi(__vector4 v, int control);

__vector4 fn_83075E30(void)
{
    return __vpermwi(__vupkd3d(__vspltisw(0), 1), 171);
}
