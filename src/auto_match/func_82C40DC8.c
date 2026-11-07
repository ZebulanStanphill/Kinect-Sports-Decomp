void fn_82C40DC8(void *param_1, int *pos, int end, short **pcount,
                 short **pout, int **pin, int stride)
{
    int i = *pos;
    short *cnt = *pcount;
    short *out = *pout;
    int *src = *pin;

    for (; i < end; i++) {
        int v = src[i];
        if (v < -0x8000) {
            v = -0x8000;
        } else if (v > 0x7fff) {
            v = 0x7fff;
        }
        *out = (short)v;
        out += stride;
        (*cnt)++;
    }
    *pos = i;
    *pcount = cnt;
    *pout = out;
}
