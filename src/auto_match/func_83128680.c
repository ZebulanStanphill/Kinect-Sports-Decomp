extern char lbl_83159C08[];
extern void fn_83140A80(void);
extern void fn_82230360(void *, const char *, int);
extern int atexit(void (*)(void));
void fn_83128680(void) { fn_82230360(lbl_83159C08, "GameType", 0x8); atexit(fn_83140A80); }
