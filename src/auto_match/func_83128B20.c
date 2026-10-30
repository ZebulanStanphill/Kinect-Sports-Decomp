extern char lbl_83159E7C[];
extern void fn_831410E0(void);
extern void fn_82230360(void *, const char *, int);
extern int atexit(void (*)(void));
void fn_83128B20(void) { fn_82230360(lbl_83159E7C, "GameType", 0x8); atexit(fn_831410E0); }
