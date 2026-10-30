extern void fn_8267B7E0(void *, unsigned int);
void fn_826854E8(char *p, char *q, unsigned int n) { unsigned int size = *(unsigned int *)(q+0x2c); if (size <= n) return; size -= n; if (size < *(unsigned int *)(*(char **)(p+4)+12)) return; fn_8267B7E0(q,size); }
