extern char lbl_83159BEC[];
extern void fn_83140A28(void);
extern void fn_82230360(void *, const char *, int);
extern int atexit(void (*)(void));
void fn_83128640(void) { fn_82230360(lbl_83159BEC, "GameMode", 0x8); atexit(fn_83140A28); }
