extern char lbl_831598A0[];
extern void fn_831402B8(void);
extern void fn_82230360(void *, const char *, int);
extern int atexit(void (*)(void));
void fn_83128270(void) { fn_82230360(lbl_831598A0, "Standard", 0x8); atexit(fn_831402B8); }
