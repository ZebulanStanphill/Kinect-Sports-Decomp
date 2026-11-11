// Decodes a 4x4 texel block into 16 vectors (shared decoder, mode 3), then replicates each
// texel's w component into all four components.
typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

__vector4 __vspltw(__vector4 v, unsigned int i);

void fn_82A97250(const unsigned char *block, __vector4 *texels, int mode);

void fn_82A974C0(const unsigned char *block, __vector4 *texels)
{
    int i;

    fn_82A97250(block, texels, 3);
    for (i = 0; i < 16; i++) {
        texels[i] = __vspltw(texels[i], 3);
    }
}
