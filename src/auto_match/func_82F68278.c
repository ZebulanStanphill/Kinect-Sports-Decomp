extern void *_getptd_noexit(void);
extern int lbl_831BB64C;
int *fn_82F68278(void) { char *p = (char *)_getptd_noexit(); int *r; if (!p) r = &lbl_831BB64C; else r = (int *)(p + 12); return r; }
