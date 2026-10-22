extern void *fn_829E6480(void *p);
extern int fn_829E65C0(void *p, int x);
extern void fn_829E7640(void);
extern void *fn_82A28568(int h, int f, int size);
extern char *lbl_832179FC;

int fn_829E6208(void **out)
{
    void *mem;
    void *o;
    fn_829E7640();
    mem = fn_82A28568(*(int *)(lbl_832179FC + 0x8f4cc), 0, 0x1c);
    o = mem ? fn_829E6480(mem) : 0;
    *out = o;
    if (o == 0)
        return 0x8007000e;
    return fn_829E65C0(o, 0);
}
