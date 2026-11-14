typedef struct Sample24_82C40D20 {
    unsigned short hi;
    unsigned char lo;
} Sample24_82C40D20;

typedef union Word_82C40D20 {
    int i;
    Sample24_82C40D20 s;
} Word_82C40D20;

void fn_82C40D20(void *param_1, int *pos, int end, short **pcount,
                 unsigned char **pout, int **pin, int stride)
{
    int i = *pos;
    short *cnt = *pcount;
    unsigned char *out = *pout;
    int *src = *pin;

    for (; i < end; i++) {
        int v = src[i];
        Word_82C40D20 w;
        if (v < -0x80000) {
            v = -0x80000;
        } else if (v > 0x7ffff) {
            v = 0x7ffff;
        }
        w.i = v << 4;
        *(unsigned short *)out = w.s.hi;
        out[2] = w.s.lo;
        out += stride * 3;
        (*cnt)++;
    }
    *pos = i;
    *pcount = cnt;
    *pout = out;
}
