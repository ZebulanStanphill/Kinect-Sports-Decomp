extern float lbl_8208E08C;
extern float lbl_8208E090;

/* Converts count floats from src to 16-bit samples in dst, clamping each to [-1, 32767/32768]. */
/* __restrict on both pointers is the original's: it loads the next src element before it
   stores the previous dst element, which the compiler does only when they cannot alias. */
void fn_82A67CA8(short *__restrict dst, const float *__restrict src, unsigned int count)
{
    float scale = lbl_8208E090;
    float max = lbl_8208E08C;
    unsigned int i;

    for (i = 0; i < count; i++) {
        float value = src[i];

        if (value < -1.0f) {
            value = -1.0f;
        } else if (value > max) {
            value = max;
        }
        dst[i] = (short)(value * scale);
    }
}
