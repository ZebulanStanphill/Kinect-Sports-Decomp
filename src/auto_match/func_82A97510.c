// Fills a 16-vector buffer from the two halves of the object (fn_82A97250), then duplicates
// the low pair of words of every vector into its high pair.
typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

__vector4 __vpermwi(__vector4 v, int control);

extern void fn_82A97250(void *half, __vector4 *out, int index);

void fn_82A97510(char *self, __vector4 *out)
{
    int i;

    fn_82A97250(self, out, 0);
    fn_82A97250(self + 8, out, 1);
    for (i = 0; i < 16; i++) {
        out[i] = __vpermwi(out[i], 17);
    }
}
