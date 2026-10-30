extern char lbl_8315A15C[];
extern void fn_831414B8(void);
extern void fn_82230360(void *, const char *, int);
extern int atexit(void (*)(void));
void fn_831293E8(void) { fn_82230360(lbl_8315A15C, "GameMode", 0x8); atexit(fn_831414B8); }
