extern char lbl_83159D74[];
extern void fn_83140EF8(void);
extern void fn_82230360(void *, const char *, int);
extern int atexit(void (*)(void));
void fn_831289C0(void) { fn_82230360(lbl_83159D74, "SessionID", 0x9); atexit(fn_83140EF8); }
