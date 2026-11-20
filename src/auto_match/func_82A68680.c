/* Converts count floats from src to 32-bit samples in dst, clamping each to [-1, 1 - 2^-23]. */
/* __restrict on both pointers is the original's: it loads the next src element before it
   stores the previous dst element, which the compiler does only when they cannot alias. */
void fn_82A68680(int *__restrict dst, const float *__restrict src, unsigned int count)
{
    unsigned int i;

    for (i = 0; i < count; i++) {
        float value = src[i];

        if (value < -1.0f) {
            value = -1.0f;
        } else if (value > 0.99999988079071) {
            value = (float)0.99999988079071;
        }
        dst[i] = (int)(value * 2147483648.0);
    }
}
