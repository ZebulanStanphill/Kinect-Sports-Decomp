extern void *fn_8265C9E0(unsigned int); extern void fn_82520158(const char *, void *, int); extern int lbl_821C0984;
void **fn_824C12D0(void **out, void **src) { void **p=fn_8265C9E0(0x20); if (p) { void *v=src[1]; p[6]=0; p[0]=&lbl_821C0984; p[1]=v; p[3]=0; p[4]=0; fn_82520158("invite_received",p+2,0); } else p=0; *out=p; return out; }
