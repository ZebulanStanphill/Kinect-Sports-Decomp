extern char lbl_8315A140[];
extern void fn_83141460(void);
extern void fn_82230360(void *, const char *, int);
extern int atexit(void (*)(void));
void fn_831293A8(void) { fn_82230360(lbl_8315A140, "GamerHostName", 0xd); atexit(fn_83141460); }
