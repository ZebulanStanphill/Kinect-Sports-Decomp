extern void *fn_823D9D60(void *obj, int index);
extern void fn_82368CD8(void *obj, void *out0, void *out1, void *out2, int *out3);
extern void fn_823E7FB8(void *dst, int *t, int flag, int value,
                        void *p0, void *p1);

void fn_823E6910(char *param_1, void *param_2)
{
    void *obj;
    unsigned char buf8[8];
    int t[3];
    unsigned char bufA[16];
    unsigned char bufB[16];
    unsigned int k;
    int f;
    int i;

    obj = fn_823D9D60(param_1, 0);
    obj = fn_823D9D60(obj, 1);
    for (i = 0; i < 3; i++) {
        t[i] = -1;
    }
    fn_82368CD8(obj, bufB, bufA, buf8, t);
    k = *(unsigned int *)(param_1 + 0x54);
    if (k == 9 || k == 10) {
        f = 1;
    } else {
        k = *(unsigned int *)(param_1 + 0x58);
        if (k == 11 || k == 12) {
            f = 1;
        } else {
            f = 0;
        }
    }
    fn_823E7FB8(param_2, t, !f, *(int *)(param_1 + 8), param_1 + 0xc, param_1 + 0x1090);
}
