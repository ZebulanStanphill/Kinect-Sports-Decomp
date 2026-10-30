extern int lbl_8207968C, lbl_82079680; extern void fn_829E6650(void *,int); extern void fn_829E7DE8(void *);
typedef struct S { int x[5]; void *p; } S; typedef struct O { void *vt; S s; } O;

void fn_829E66C0(O *o) { o->vt=&lbl_8207968C;{void **inline_clean_0=(&o->s.p); if (*inline_clean_0) {fn_829E6650(*inline_clean_0,1); *inline_clean_0=0;} } fn_829E7DE8(&o->s); o->vt=&lbl_82079680; }
