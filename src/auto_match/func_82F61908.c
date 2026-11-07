typedef struct Entry_82F61908 {
    int f0;
    int f4;
    int f8;
    int fc;
    int f10;
} Entry_82F61908;

typedef struct Obj_82F61908 {
    char pad0[0x24];
    int f24;
    char pad28[0x4];
    int f2c;
    int f30;
    char pad34[0xc];
    Entry_82F61908 *entries;
} Obj_82F61908;

extern unsigned int fn_82A1F2F8(void);
extern void fn_82F61358(Obj_82F61908 *p);
extern void fn_82A1E7D8(int a);
extern void fn_82BFE9D8(int a, Entry_82F61908 *e);

int fn_82F61908(Obj_82F61908 *p, int n, int *idx, int *out, unsigned int timeout)
{
    unsigned int start;
    int ret;
    int i;

    start = fn_82A1F2F8();
    while (p->f2c > 0) {
        fn_82F61358(p);
        if (fn_82A1F2F8() - start >= timeout)
            break;
    }
    if (p->f2c > 0) {
        ret = 0x2240401;
    } else {
        ret = 0;
        fn_82A1E7D8(p->f24);
        for (i = 0; i < n; i++) {
            int k = idx[i];
            Entry_82F61908 *e;
            if (out != 0)
                out[i] = p->entries[k].fc;
            e = &p->entries[k];
            e->f0 = 0;
            e->f4 = 0;
            e->f8 = 0;
            e->fc = 0;
            fn_82BFE9D8(p->f30, e);
        }
    }
    return ret;
}
