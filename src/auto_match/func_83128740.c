extern char lbl_83159C5C[];
extern void fn_83140B88(void);
extern void fn_82230360(void *, const char *, int);
extern int atexit(void (*)(void));
void fn_83128740(void) { fn_82230360(lbl_83159C5C, "GamerHostName", 0xd); atexit(fn_83140B88); }
