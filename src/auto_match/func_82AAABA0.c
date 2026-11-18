extern void fn_82B68FC8(float *a, float *b, float *c, float *d);
extern void fn_82B68FC0(float *a, float *b, float *c, float *d);
extern void fn_82AA8FD0(float *a, float *b, float *c, float *d);
extern void fn_82B68CF0(float *a, float *b);
extern void fn_82B68CA8(float *a, float *b);

void fn_82AAABA0(int n, int offset, float **table, int filter, int prepare)
{
    int count = n / 16;
    float *a = table[16] + offset;
    float *b = table[20] + offset;
    float *c = table[24] + offset;
    float *d = table[28] + offset;
    int i;

    fn_82B68FC8(a, b, c, d);
    a += 16;
    b += 16;
    c += 16;
    d += 16;
    for (i = 0; i < count - 1; i++) {
        fn_82B68FC8(a, b, c, d);
        if (filter != 0) {
            fn_82B68CF0(a - 8, b - 8);
        }
        a += 16;
        b += 16;
        c += 16;
        d += 16;
    }
    a = table[16] + offset;
    b = table[17] + offset;
    c = table[18] + offset;
    d = table[19] + offset;
    if (prepare != 0) {
        fn_82AA8FD0(a, b, c, d);
    }
    fn_82B68FC0(a, b, c, d);
    a += 4;
    b += 4;
    c += 4;
    d += 4;
    for (i = 0; i < n - 4; i += 4) {
        if (prepare != 0) {
            fn_82AA8FD0(a, b, c, d);
        }
        fn_82B68FC0(a, b, c, d);
        if (filter != 0) {
            fn_82B68CA8(a - 2, b - 2);
        }
        a += 4;
        b += 4;
        c += 4;
        d += 4;
    }
}
