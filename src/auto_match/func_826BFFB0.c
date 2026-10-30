extern unsigned char *fn_826AB298(void *, void *); extern void fn_82695FA0(void *, void *);
unsigned char fn_826BFFB0(void *a, void *b, unsigned char *out) { unsigned char *p=fn_826AB298(a,b); if (p) { if (out) { fn_82695FA0(out,p+8); out[1]=p[9]; } return 1; } return 0; }
