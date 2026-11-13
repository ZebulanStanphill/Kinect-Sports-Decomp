extern char lbl_8322B184[];
extern int lbl_8322B180;
extern void *lbl_8322B1BC;
extern void *lbl_8322B1C0;
extern void *lbl_831751CC;
extern void *lbl_831751D0;
extern int lbl_831751D8;
extern void fn_82BEA1F8(void *lock, const char *name);
extern void fn_82BEA230(void *lock, const char *name);

int fn_82BE5848(void *allocFn, void *freeFn, int enable)
{
    int result = 0;

    fn_82BEA1F8(lbl_8322B184, "MassiveAdClient3::SetMemoryFunctions");
    if (lbl_8322B180 == 0 && lbl_831751D8 != 0) {
        lbl_831751D8 = enable;
        if (allocFn != 0) {
            lbl_831751D0 = allocFn;
        } else {
            lbl_831751D0 = lbl_8322B1BC;
        }
        if (freeFn != 0) {
            lbl_831751CC = freeFn;
        } else {
            lbl_831751CC = lbl_8322B1C0;
        }
        result = 1;
    }
    fn_82BEA230(lbl_8322B184, "MassiveAdClient3::SetMemoryFunctions");
    return result;
}
