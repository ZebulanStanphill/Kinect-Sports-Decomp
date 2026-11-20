typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

extern void fn_829FE8F8(int *x, int *y, __vector4 position);
extern unsigned int fn_829F9E30(int context, int x0, int y0, int depth, int x1, int y1, int threshold);

unsigned int fn_829FF3B8(int context, int depth, __vector4 start, int threshold, __vector4 end)
{
    int x0;
    int y0;
    int x1;
    int y1;
    unsigned int best;
    unsigned int result;

    if (start.vector4_f32[2] == 0.0f || end.vector4_f32[2] == 0.0f) {
        return 0xffffffff;
    }
    fn_829FE8F8(&x0, &y0, start);
    fn_829FE8F8(&x1, &y1, end);
    best = fn_829F9E30(context, x0, y0, depth, x1, y1, threshold);
    result = fn_829F9E30(context, x0, y1, depth, x1, y1, threshold);
    if (best >= result) {
        best = result;
    }
    result = fn_829F9E30(context, x1, y0, depth, x1, y1, threshold);
    if (best >= result) {
        best = result;
    }
    return best;
}
