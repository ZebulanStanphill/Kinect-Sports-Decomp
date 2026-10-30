extern char lbl_83159868[];
extern void fn_83140208(void);
extern void fn_82230360(void *, const char *, int);
extern int atexit(void (*)(void));
void fn_831281F0(void) { fn_82230360(lbl_83159868, "GameType", 0x8); atexit(fn_83140208); }
