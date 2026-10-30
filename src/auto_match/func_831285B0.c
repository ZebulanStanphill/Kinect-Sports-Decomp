extern char lbl_832119C8[], lbl_83159A24[];
extern void fn_83140780(void);
extern void fn_828E9D28(void *, void *, int);
extern int atexit(void (*)(void));
void fn_831285B0(void) { fn_828E9D28(lbl_83159A24, lbl_832119C8, 0x800); atexit(fn_83140780); }
