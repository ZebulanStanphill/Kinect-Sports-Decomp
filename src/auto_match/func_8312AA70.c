extern char lbl_8322B234[];
extern void fn_83141AC0(void);
extern void fn_82BEA180(void *, const char *, int);
extern int atexit(void (*)(void));
void fn_8312AA70(void) { fn_82BEA180(lbl_8322B234, "MassiveMemoryManager lock", 0x1); atexit(fn_83141AC0); }
