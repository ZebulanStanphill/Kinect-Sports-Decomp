/* Converts count floats from src to unsigned 8-bit samples in dst, clamping each to [-1, 127/128]. */
/* __restrict on both pointers is the original's: it loads the next src element before it
   stores the previous dst element, which the compiler does only when they cannot alias. */
void fn_82A67E20(unsigned char *__restrict dst, const float *__restrict src, unsigned int count)
{
    unsigned int i;

    for (i = 0; i < count; i++) {
        float value = src[i];

        if (value < -1.0f) {
            value = -1.0f;
        } else if (value > 0.9921875f) {
            value = 0.9921875f;
        }
        dst[i] = (unsigned char)((value + 1.0f) * 128.0f);
    }
}
