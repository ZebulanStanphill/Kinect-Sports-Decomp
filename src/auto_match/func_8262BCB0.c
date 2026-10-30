extern void fn_822315A0(void *); extern void fn_8265CA20(void *); extern char lbl_821CB8C0[], lbl_821CB794[];
typedef struct { void *p; } Ref; typedef struct { void *v; void *pad[3]; Ref r; } O;

O *fn_8262BCB0(O *p, unsigned flags) { p->v = lbl_821CB8C0; {Ref *inline_destroy_0=(&p->r); if (inline_destroy_0->p) fn_822315A0(inline_destroy_0->p); } p->v = lbl_821CB794; if (flags & 1) fn_8265CA20(p); return p; }
