// Forwards to the block routine fn_830DF040 with a size of (sizeIndex + 1) * 8 and the
// context's vector at +0x450.
typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

typedef struct Context_830E0198 {
    char pad0[0x450];
    __vector4 vec450;   /* +0x450 */
} Context_830E0198;

void fn_830DF040(void *dst, int stride, void *block, int size, __vector4 v);

void fn_830E0198(void *dst, int stride, void *block, Context_830E0198 *ctx, int sizeIndex)
{
    fn_830DF040(dst, stride, block, (sizeIndex + 1) << 3, ctx->vec450);
}
