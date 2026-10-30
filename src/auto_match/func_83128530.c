extern char lbl_831599D4[];
extern void fn_83140680(void);
extern void fn_82230360(void *, const char *, int);
extern int atexit(void (*)(void));
void fn_83128530(void) { fn_82230360(lbl_831599D4, "SessionID", 0x9); atexit(fn_83140680); }
