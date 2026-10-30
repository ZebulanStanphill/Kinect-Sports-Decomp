extern void fn_82A29A38(void);
typedef struct { char *base; int stride; unsigned count; } S;
void *fn_82AACBB8(S *p,unsigned i) { if(!p) fn_82A29A38(); if(i>=p->count) return 0; return p->base + p->stride*i; }
