typedef struct Iter_82762F38 {
    int field0;
    unsigned char *cur;
    int pad[4];
    unsigned int pos;
    unsigned int end;
} Iter_82762F38;

extern void fn_826EB5F0(void *ctx, void *key, float f);
extern void fn_826EDCB0(void *ctx, void *p);
extern void fn_8270D8E0(void *p);
extern void fn_8270DE48(void *p);
extern void *fn_8270E1B8(void *out, void *p, void *key);
extern void fn_8275EB28(Iter_82762F38 *it, unsigned char *a);
extern void fn_827603C0(Iter_82762F38 *it);
extern void fn_82762BE0(Iter_82762F38 *it, void *sub);
extern void fn_82762700(unsigned char *a, void *ctx, void *sub, unsigned char *obj, unsigned char *p7);
extern void fn_82783F98(void *sub, float f);
extern void fn_827842B8(void *sub);

void fn_82762F38(unsigned char *a, void *ctx, float f1, unsigned char *obj,
                 unsigned char *p7, float f2)
{
    unsigned char *base;
    void *sub;
    unsigned char tmp[16];
    Iter_82762F38 it;

    base = *(unsigned char **)(*(unsigned char **)(obj + 0x18) + 0x10);
    sub = base + 8;
    fn_827842B8(sub);
    fn_82783F98(sub, f1);
    base[0x4c] = (a[0x24] >> 3) & 1;
    if ((a[0x24] & 0x10) != 0) {
        fn_826EB5F0(ctx, a + 4, f2);
    }
    if (p7 != 0) {
        fn_8270D8E0(p7);
        if ((a[0x24] & 0x10) != 0) {
            fn_826EB5F0(ctx, fn_8270E1B8(tmp, p7, a + 4), f2);
        }
    }
    fn_8275EB28(&it, a);
    while (it.pos < it.end) {
        if ((*it.cur & 7) == 0) {
            fn_82762700(a, ctx, sub, obj, p7);
            fn_827842B8(sub);
            fn_827603C0(&it);
        } else {
            fn_82762BE0(&it, sub);
        }
    }
    fn_82762700(a, ctx, sub, obj, p7);
    fn_827842B8(sub);
    if (p7 != 0 && *(void **)(p7 + 0x164) != 0) {
        fn_8270DE48(p7);
        fn_826EDCB0(ctx, p7 + 0x160);
    }
}
