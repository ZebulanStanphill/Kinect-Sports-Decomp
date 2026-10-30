extern int NtClearEvent(void *); extern void fn_82A2B760(int);
int fn_82A1E7D8(void *p) { int hr=NtClearEvent(p); if (hr>=0) return 1; fn_82A2B760(hr); return 0; }
