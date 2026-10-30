extern char lbl_832121C8[], lbl_831599FC[];
extern void fn_83140728(void);
extern void fn_828E9D28(void *, void *, int);
extern int atexit(void (*)(void));
void fn_83128570(void) { fn_828E9D28(lbl_831599FC, lbl_832121C8, 0x800); atexit(fn_83140728); }
