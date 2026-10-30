extern char lbl_831BC9C4[];
extern void fn_83141EE8(void);
extern void fn_82230360(void *, const char *, int);
extern int atexit(void (*)(void));
void fn_831399D8(void) { fn_82230360(lbl_831BC9C4, "mono_process_results", 0x14); atexit(fn_83141EE8); }
