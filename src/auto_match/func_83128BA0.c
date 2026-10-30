extern char lbl_83159EB4[];
extern void fn_83141190(void);
extern void fn_82230360(void *, const char *, int);
extern int atexit(void (*)(void));
void fn_83128BA0(void) { fn_82230360(lbl_83159EB4, "Standard", 0x8); atexit(fn_83141190); }
