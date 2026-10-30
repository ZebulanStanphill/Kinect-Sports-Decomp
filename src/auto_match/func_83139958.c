extern char lbl_831BC980[];
extern void fn_83141E38(void);
extern void fn_82230360(void *, const char *, int);
extern int atexit(void (*)(void));
void fn_83139958(void) { fn_82230360(lbl_831BC980, "mono_process_results", 0x14); atexit(fn_83141E38); }
