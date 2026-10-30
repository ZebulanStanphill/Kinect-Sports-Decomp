extern char lbl_8322B13C[];
extern void fn_83141A90(void);
extern void fn_82BEA180(void *, const char *, int);
extern int atexit(void (*)(void));
void fn_8312A980(void) { fn_82BEA180(lbl_8322B13C, "XMassiveAdClient Core", 0x1); atexit(fn_83141A90); }
