extern char lbl_820EB6C4[]; extern int closesocket(int); extern void fn_82BE5230(void *);
void fn_82BF2A00(void *p) { int x=*(int *)((char *)p+0x14); *(void **)p=lbl_820EB6C4; if (x != -1) closesocket(x); fn_82BE5230(p); }
