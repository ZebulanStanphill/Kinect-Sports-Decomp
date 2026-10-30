extern void fn_82A20BD8(void);
extern int lbl_83219B90[];

void fn_82A222B0(void *p)
{
    if (p == 0) {
        fn_82A20BD8();
        lbl_83219B90[0xf8 / 4] = 0;
    }
}
