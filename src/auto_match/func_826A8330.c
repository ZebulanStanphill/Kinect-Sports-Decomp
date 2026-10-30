extern void fn_826C0910(void *, void *); extern int lbl_820071D8, lbl_8200722C;
void **fn_826A8330(void **o, char *p) { char *v=*(char **)(p+0x284); void *q; if (v) q=v+0x18; else q=0; fn_826C0910(o,q); o[12]=p; o[0]=&lbl_8200722C; o[4]=&lbl_820071D8; return o; }
