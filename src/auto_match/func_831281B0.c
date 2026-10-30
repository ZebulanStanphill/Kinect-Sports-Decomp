extern char lbl_8315984C[];
extern void fn_831401B0(void);
extern void fn_82230360(void *, const char *, int);
extern int atexit(void (*)(void));
void fn_831281B0(void) { fn_82230360(lbl_8315984C, "GameMode", 0x8); atexit(fn_831401B0); }
