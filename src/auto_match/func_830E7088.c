// Forwards to the vector worker fn_830E5BC0 with the block size (count + 1) * 8 and the
// 16-byte constant stored at +0x450 of the context.
typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

typedef struct Context_830E7088 {
    char pad0[0x450];
    __vector4 rounding;      // 0x450
} Context_830E7088;

extern void fn_830E5BC0(void *dst, int stride, void *src, int srcStride, int width, int height, __vector4 v);

void fn_830E7088(void *dst, int stride, void *src, Context_830E7088 *ctx, int count)
{
    int size = (count + 1) << 3;
    fn_830E5BC0(dst, stride, src, stride, size, size, ctx->rounding);
}
