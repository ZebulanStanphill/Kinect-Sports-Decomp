extern char lbl_83159C40[];
extern void fn_83140B30(void);
extern void fn_82230360(void *, const char *, int);
extern int atexit(void (*)(void));
void fn_83128700(void) { fn_82230360(lbl_83159C40, "Standard", 0x8); atexit(fn_83140B30); }
