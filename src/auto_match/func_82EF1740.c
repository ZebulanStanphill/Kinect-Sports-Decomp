extern void fn_82EF16C8(void *p);
extern char lbl_821603D4[];
extern char lbl_821603DC[];
extern char lbl_821603F8[];

void fn_82EF1740(void **p)
{
    void **sub = p + 1;

    p[0] = lbl_821603F8;
    sub[0] = lbl_821603DC;
    p[0x49] = lbl_821603D4;
    fn_82EF16C8(sub + 0x25);
    fn_82EF16C8(sub + 2);
}
