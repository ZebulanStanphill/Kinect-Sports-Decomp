extern char lbl_820EB0E0[]; extern int fn_82A1E658(void *); extern void fn_82BE5230(void *);
void fn_82BEE118(void *p) { void * x=*(void * *)((char *)p+0x14); *(void **)p=lbl_820EB0E0; if (x != 0) fn_82A1E658(x); fn_82BE5230(p); }
