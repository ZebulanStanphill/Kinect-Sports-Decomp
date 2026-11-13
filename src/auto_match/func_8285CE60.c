void fn_8285CE60(float a, float b, float c, float *lo, float *hi)
{
    lo[0] = a;
    lo[1] = -a;
    lo[2] = -a;
    lo[4] = b;
    lo[5] = c + 0.00001f;
    lo[3] = a;
    hi[0] = 0.0f;
    hi[1] = 0.0f;
    hi[2] = 1.0f;
    hi[3] = 1.0f;
    hi[4] = 0.0f;
    hi[5] = 1.0f;
}
