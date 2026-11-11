typedef struct {
    unsigned first;
    int pad04[0x15c / 4 - 1 + 1];
    int f160;
    int pad164[(0x174 - 0x164) / 4];
    unsigned **a174;
    unsigned **a178;
} Obj_82C1BFC0;

extern void *fn_82C2B580(int);
extern void fn_82C2B590(void *);
extern int fn_82C1B730(int, int, int, int, unsigned **, unsigned **);
extern double fn_82F655D8(double, double);
extern void *memset(void *, int, unsigned);

int fn_82C1BFC0(Obj_82C1BFC0 *self, int *src, int cols, int a4, int rows, int a6)
{
    int hr = 0;
    int i;
    int j;
    float one;

    if (self == 0 || self->first == 0) {
        hr = 0x80070057;
        goto done;
    }
    if (self->a174 != 0) {
        for (i = 0; i < rows; i++) {
            if (self->a174[i] != 0) {
                fn_82C2B590(self->a174[i]);
                self->a174[i] = 0;
            }
        }
        if (self->a174 != 0) {
            fn_82C2B590(self->a174);
            self->a174 = 0;
        }
    }
    if (self->a178 != 0) {
        for (i = 0; i < rows; i++) {
            if (self->a178[i] != 0) {
                fn_82C2B590(self->a178[i]);
                self->a178[i] = 0;
            }
        }
        if (self->a178 != 0) {
            fn_82C2B590(self->a178);
            self->a178 = 0;
        }
    }
    self->a174 = (unsigned **)fn_82C2B580(rows * 4);
    if (self->a174 == 0) {
        hr = 0x8007000e;
        goto done;
    }
    memset(self->a174, 0, rows * 4);
    for (i = 0; i < rows; i++) {
        self->a174[i] = (unsigned *)fn_82C2B580(cols * 4);
        if (self->a174[i] == 0) {
            hr = 0x8007000e;
            goto done;
        }
        memset(self->a174[i], 0, cols * 4);
    }
    self->a178 = (unsigned **)fn_82C2B580(rows * 4);
    if (self->a178 == 0) {
        hr = 0x8007000e;
        goto done;
    }
    memset(self->a178, 0, rows * 4);
    for (i = 0; i < rows; i++) {
        self->a178[i] = (unsigned *)fn_82C2B580(cols * 4);
        if (self->a178[i] == 0) {
            hr = 0x8007000e;
            goto done;
        }
        memset(self->a178[i], 0, cols * 4);
    }
    if (src != 0) {
        for (i = 0; i < rows; i++) {
            for (j = 0; j < cols; j++) {
                if (src[j * rows + i] == (int)0x80000000) {
                    ((float *)self->a174[i])[j] = 0.0f;
                } else {
                    ((float *)self->a174[i])[j] =
                        (float)fn_82F655D8(10.0, (double)src[j * rows + i] * (0.05 / 65536.0));
                }
            }
        }
        goto done;
    }
    if (self->f160 != 0) {
        hr = fn_82C1B730(cols, a4, rows, a6, self->a174, self->a178);
        goto done;
    }
    if (rows != cols) {
        hr = 0x80040000;
        goto done;
    }
    one = 1.0f;
    for (i = 0; i < rows; i++) {
        ((float *)self->a174[i])[i] = one;
    }
done:
    return hr;
}
