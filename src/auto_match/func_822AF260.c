extern char lbl_821AC578[], lbl_821AC508[];
extern void fn_822AEE20(void *);
extern void fn_8265CA20(void *);
typedef struct Inner { void *v; } Inner;
typedef struct Obj { void *v; Inner inner; } Obj;

Obj *fn_822AF260(Obj *p, unsigned int flags) { p->v=lbl_821AC578; {Inner *inline_destroy_0=(&p->inner); inline_destroy_0->v=lbl_821AC508; fn_822AEE20(inline_destroy_0); } if (flags & 1) fn_8265CA20(p); return p; }
