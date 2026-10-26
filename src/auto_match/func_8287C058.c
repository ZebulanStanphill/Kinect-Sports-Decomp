/* Flush a denormal (zero-exponent) float to 0. */
void fn_8287C058(float *f)
{
    if ((*(unsigned int *)f & 0x7f800000) == 0)
        *f = 0.0f;
}
