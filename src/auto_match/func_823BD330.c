extern char lbl_82197010[],lbl_821C7FB8[]; extern void fn_8265CA20(void *);
typedef struct { void *v; } Part; typedef struct { void *v; char pad[12]; Part sub; } Obj;
Obj *fn_823BD330(Obj *p,unsigned int flags) { Part *s=&p->sub; s->v=lbl_821C7FB8; p->v=lbl_82197010; if(flags & 1) fn_8265CA20(p); return p; }
