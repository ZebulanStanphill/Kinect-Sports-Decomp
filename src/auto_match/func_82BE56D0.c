extern char lbl_8322B184[];
extern int lbl_8322B180;
extern unsigned int lbl_8322B1BC;
extern unsigned int lbl_8322B1C0;
extern unsigned int lbl_831751CC;
extern unsigned int lbl_831751D0;
extern unsigned int lbl_831751D8;
extern void fn_82BEA1F8(void *lock, const char *name);
extern void fn_82BEA230(void *lock, const char *name);

int fn_82BE56D0(void)
{
    int restored = 0;

    fn_82BEA1F8(lbl_8322B184, "MassiveAdClient3::RestoreMemoryFunctionsIfUnused");
    if (lbl_8322B180 == 0) {
        lbl_831751D0 = lbl_8322B1BC;
        restored = 1;
        lbl_831751CC = lbl_8322B1C0;
        lbl_831751D8 = 1;
    }
    fn_82BEA230(lbl_8322B184, "MassiveAdClient3::RestoreMemoryFunctionsIfUnused");
    return restored;
}
