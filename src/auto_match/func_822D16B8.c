extern char lbl_821AD578[], lbl_821AC980[];
extern void fn_822B4CE0(void *);
extern void fn_8265CA20(void *);
typedef struct Inner { void *v; } Inner;
typedef struct Obj { void *v; Inner inner; } Obj;

Obj *fn_822D16B8(Obj *p, unsigned int flags) { p->v=lbl_821AD578; {Inner *inline_destroy_0=(&p->inner); inline_destroy_0->v=lbl_821AC980; fn_822B4CE0(inline_destroy_0); } if (flags & 1) fn_8265CA20(p); return p; }
