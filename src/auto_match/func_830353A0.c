typedef struct S {
    char pad0[0x1c];
    unsigned int flags;
} S;
extern void fn_830182F0(int mgr, S *p, int bit, int c, unsigned char *out);
extern void fn_83034FA0(S *p);
extern int lbl_832642FC;

void fn_830353A0(S *p, int bit, int c)
{
    unsigned char r = 0;
    fn_830182F0(lbl_832642FC, p, bit, c, &r);
    if (r == 0) {
        p->flags &= ~(1 << bit);
    }
    fn_83034FA0(p);
}
