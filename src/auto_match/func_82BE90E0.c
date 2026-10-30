typedef struct O O; typedef struct V { void (*f)(O *, int); } V; struct O { V *v; }; extern O *lbl_8322B22C;
int fn_82BE90E0(void) { if (lbl_8322B22C) { lbl_8322B22C->v->f(lbl_8322B22C, 1); lbl_8322B22C = 0; return 0; } return 0x578; }
