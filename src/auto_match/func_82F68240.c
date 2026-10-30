extern void *_getptd_noexit(void);
extern int lbl_831BB648;
int *_errno(void) { char *p = (char *)_getptd_noexit(); int *r; if (!p) r = &lbl_831BB648; else r = (int *)(p + 8); return r; }
