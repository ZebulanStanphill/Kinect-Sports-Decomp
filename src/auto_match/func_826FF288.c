extern char lbl_8200DDE0[]; extern void fn_8267C4F0(void *); extern void fn_826FEC90(void *);
typedef struct { void *a,*b; } Sub; typedef struct { void *v; char pad[16]; Sub sub; } Obj;

void fn_826FF288(Obj *p) { p->v=lbl_8200DDE0; {Sub *inline_cleanup_0=(&p->sub); if(inline_cleanup_0->b) fn_8267C4F0(inline_cleanup_0->b); if(inline_cleanup_0->a) fn_8267C4F0(inline_cleanup_0->a); } fn_826FEC90(p); }
