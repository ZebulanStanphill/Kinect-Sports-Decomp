extern char lbl_83159F0C[];
extern void fn_83141260(void);
extern void fn_82230360(void *, const char *, int);
extern int atexit(void (*)(void));
void fn_83128BE0(void) { fn_82230360(lbl_83159F0C, "GamerHostName", 0xd); atexit(fn_83141260); }
