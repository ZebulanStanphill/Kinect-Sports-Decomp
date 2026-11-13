extern int fn_82BEA1F8();
extern int fn_82BEA230();
extern void fn_82BE56D0(void);
extern int lbl_8322B180;
extern int lbl_831751D8;
extern char lbl_8322B184[];

void fn_82BE57C0(void)
{
    int n;
    fn_82BEA1F8(lbl_8322B184, "MassiveAdClient3::ReleaseMemoryManager");
    n = lbl_8322B180 - 1;
    lbl_8322B180 = n >= 0 ? n : 0;
    if (lbl_831751D8 != 0)
        fn_82BE56D0();
    fn_82BEA230(lbl_8322B184, "MassiveAdClient3::ReleaseMemoryManager");
}
