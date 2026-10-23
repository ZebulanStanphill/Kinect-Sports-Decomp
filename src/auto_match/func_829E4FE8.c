extern void *fn_82A28568(int heap, int a, int size);
extern int lbl_82057B74;
extern char *lbl_832179FC;

typedef struct {
    void *vtbl;
    int a;
    unsigned char b;
} Obj;

Obj *fn_829E4FE8(void)
{
    Obj *p;

    p = (Obj *)fn_82A28568(*(int *)(lbl_832179FC + 0x8f4cc), 0, 0xc);
    if (p != 0) {
        p->a = 0;
        p->vtbl = &lbl_82057B74;
        p->b = 0;
        return p;
    }
    return 0;
}
