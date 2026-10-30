extern int fn_82AA66A8(void *,int);
int fn_82ABDEC0(char *p,unsigned int i) { unsigned int *v; if (!i || !*(void **)(p+0x2e8)) return -1; v=*(unsigned int **)(p+0x2f4); if (v && i<*v) return v[i]; return fn_82AA66A8(p,0x12c0); }
