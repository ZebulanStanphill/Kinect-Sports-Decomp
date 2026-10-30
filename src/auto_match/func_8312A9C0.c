extern char lbl_8322B184[];
extern void fn_83141AA0(void);
extern void fn_82BEA180(void *, const char *, int);
extern int atexit(void (*)(void));
void fn_8312A9C0(void) { fn_82BEA180(lbl_8322B184, "MassiveMemoryManagerRefCount", 0x1); atexit(fn_83141AA0); }
