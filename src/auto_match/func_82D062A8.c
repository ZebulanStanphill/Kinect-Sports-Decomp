static __forceinline void swapf(float *a, float *b)
{
    float t = *a;
    *a = *b;
    *b = t;
}

void fn_82D062A8(float *m)
{
    swapf(&m[4], &m[1]);
    swapf(&m[8], &m[2]);
    swapf(&m[12], &m[3]);
    swapf(&m[9], &m[6]);
    swapf(&m[13], &m[7]);
    swapf(&m[14], &m[11]);
}
