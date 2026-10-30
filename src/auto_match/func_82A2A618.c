extern int NtReleaseSemaphore(void *); extern void fn_82A31F28(int);
int fn_82A2A618(void *p) { int hr=NtReleaseSemaphore(p); if (hr>=0) return 1; fn_82A31F28(hr); return 0; }
