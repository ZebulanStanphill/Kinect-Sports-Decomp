/* Zeroes count floats in blocks of 8 (count / 8 iterations; a remainder is left alone). */
void fn_82BDDC20(float *p, unsigned int count)
{
    int n;

    for (n = count >> 3; n > 0; n--) {
        p[0] = 0.0f;
        p[1] = 0.0f;
        p[2] = 0.0f;
        p[3] = 0.0f;
        p[4] = 0.0f;
        p[5] = 0.0f;
        p[6] = 0.0f;
        p[7] = 0.0f;
        p += 8;
    }
}
