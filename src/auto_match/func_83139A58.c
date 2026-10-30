extern char lbl_831BCA08[];
extern void fn_83141F98(void);
extern void fn_82230360(void *, const char *, int);
extern int atexit(void (*)(void));
void fn_83139A58(void) { fn_82230360(lbl_831BCA08, "mono_process_results", 0x14); atexit(fn_83141F98); }
