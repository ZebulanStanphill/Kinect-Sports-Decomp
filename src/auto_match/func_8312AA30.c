extern char lbl_8322B1EC[];
extern void fn_83141AB0(void);
extern void fn_82BEA180(void *, const char *, int);
extern int atexit(void (*)(void));
void fn_8312AA30(void) { fn_82BEA180(lbl_8322B1EC, "ServerAddressArray", 0x1); atexit(fn_83141AB0); }
