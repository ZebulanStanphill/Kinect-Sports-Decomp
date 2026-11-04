extern int fn_830184C0(unsigned int, unsigned int);
extern unsigned int lbl_832642FC;

void fn_82FEFB40(int param_1)
{
    int i;
    unsigned int *p;
    unsigned int t;
    p = (unsigned int *)(param_1 + 0xec);
    i = 4;
    do {
        t = *p;
        if (t != 0) {
            fn_830184C0(lbl_832642FC, t);
        }
        i--;
        p += 4;
    } while (i != 0);
    t = *(unsigned int *)(param_1 + 0x12c);
    if (t != 0) {
        fn_830184C0(lbl_832642FC, t);
    }
    if (*(unsigned int *)(param_1 + 0x38) != 0) {
        fn_830184C0(lbl_832642FC, param_1);
    }
}
