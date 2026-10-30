extern int fn_82877030(void *, const char *);
int fn_82866648(char *p, char *s) { if (*(unsigned *)(s+0x14) >= 16) s = *(char **)s; return fn_82877030(p+0x6c,s) != 1 ? 0xa00a0000 : 0x200a0000; }