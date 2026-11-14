typedef union Word_82C40C70 {
    int i;
    unsigned char b[4];
} Word_82C40C70;

void fn_82C40C70(void *param_1, int *pos, int end, short **pcount,
                 unsigned char **pout, int **pin, int stride)
{
    int i = *pos;
    short *cnt = *pcount;
    unsigned char *out = *pout;
    int *src = *pin;

    for (; i < end; i++) {
        Word_82C40C70 w;
        w.i = src[i];
        if (w.i < -0x800000) {
            w.i = -0x800000;
        } else if (w.i > 0x7fffff) {
            w.i = 0x7fffff;
        }
        out[0] = w.b[1];
        out[1] = w.b[2];
        out[2] = w.b[3];
        out += stride * 3;
        (*cnt)++;
    }
    *pos = i;
    *pcount = cnt;
    *pout = out;
}
