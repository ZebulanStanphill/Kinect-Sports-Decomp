extern char lbl_821ADA94[]; extern void fn_822315A0(void *); extern void fn_82230300(void *,int,int); extern void fn_822C71C8(void *);
typedef struct { void *ptr,*count; } Shared; typedef struct { void *v; char pad[124]; Shared shared; } Obj;

void fn_822D8970(Obj *p) { p->v=lbl_821ADA94; {Shared *inline_release_0=(&p->shared); if(inline_release_0->count) fn_822315A0(inline_release_0->count); } fn_82230300((char *)p+96,1,0); fn_822C71C8(p); }
