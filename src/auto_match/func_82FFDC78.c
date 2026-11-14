typedef struct Obj_82FFDC78 {
    unsigned char pad0[0x2c];
    void *handle;          /* 0x2c */
    unsigned char flag;    /* 0x30 */
} Obj_82FFDC78;

extern void *fn_82A1E6A0(int a, int b, int c, int d);
extern void fn_82FF8FB0(void *cb, void *ctx, void *a, void *b, const char *name);
extern void fn_82FFDA50(void);
extern unsigned int lbl_832645A0;
extern int lbl_832643B4[];

int fn_82FFDC78(Obj_82FFDC78 *p)
{
    void *h;

    if (lbl_832645A0 != 0) {
        return 2;
    }
    p->flag = 0;
    h = fn_82A1E6A0(0, 0, 0, 0);
    p->handle = h;
    if (h == 0) {
        return 2;
    }
    fn_82FF8FB0((void *)fn_82FFDA50, p, &lbl_832643B4[3], &lbl_832645A0, "AK::BankManager");
    return (lbl_832645A0 == 0) + 1;
}
