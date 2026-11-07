extern void fn_82AA8FD0(float *a, float *b, float *c, float *d);
extern void fn_82B68FC0(float *a, float *b, float *c, float *d);
extern void fn_82B68D38(float *a, float *b, float *c, float *d);
extern void fn_82B69288(float *a, float *b, float *c, float *d);
extern void fn_82B68CA8(float *a, float *b);

void fn_82AAB000(int n, int w, int count, float *base, int flag)
{
    int stride;
    int off;
    int y;
    int i;
    int j;
    float *p0;
    float *p1;
    float *p2;
    float *p3;
    float *prev;
    float *prev2;

    stride = w * count;
    if (count > 0) {
        off = 0;
        for (y = 0; y < count; y++) {
            prev = 0;
            prev2 = 0;
            for (i = 0; i < n; i += 4) {
                p0 = base + (i * stride + off);
                p1 = p0 + stride;
                p2 = p1 + stride;
                p3 = p2 + stride;
                if (i != 0) {
                    prev = p0 - stride * 2;
                    prev2 = prev + stride;
                }
                if (flag != 0) {
                    fn_82AA8FD0(p0, p1, p2, p3);
                }
                fn_82B68FC0(p0, p1, p2, p3);
                if (i != 0) {
                    fn_82B68D38(prev, prev2, p0, p1);
                }
                prev += 2;
                prev2 += 2;
                p0 += 4;
                p1 += 4;
                p2 += 4;
                p3 += 4;
                for (j = 0; j < w - 4; j += 4) {
                    if (flag != 0) {
                        fn_82AA8FD0(p0, p1, p2, p3);
                    }
                    fn_82B68FC0(p0, p1, p2, p3);
                    if (i == 0) {
                        fn_82B68CA8(p0 - 2, p1 - 2);
                    } else {
                        fn_82B69288(prev, prev2, p0 - 2, p1 - 2);
                        if (i == n - 4) {
                            fn_82B68CA8(p2 - 2, p3 - 2);
                        }
                    }
                    p0 += 4;
                    p1 += 4;
                    p2 += 4;
                    p3 += 4;
                    prev += 4;
                    prev2 += 4;
                }
                if (i != 0) {
                    fn_82B68D38(prev, prev2, p0 - 2, p1 - 2);
                }
            }
            off += w;
        }
    }
}
