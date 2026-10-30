extern void fn_822315A0(void *); extern void fn_8265CA20(void *); extern char lbl_821ADF5C[], lbl_821AF1C8[];
typedef struct { void *p; } Ref; typedef struct { void *v; void *pad[6]; Ref r; } O;

O *fn_822E3F90(O *p, unsigned flags) { p->v = lbl_821ADF5C; {Ref *inline_destroy_0=(&p->r); if (inline_destroy_0->p) fn_822315A0(inline_destroy_0->p); } p->v = lbl_821AF1C8; if (flags & 1) fn_8265CA20(p); return p; }
