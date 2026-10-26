extern char lbl_8200D980[];
typedef struct { int v10; int v14; } P;
typedef struct { void *vt; int v4; unsigned char b8; char pad[3]; unsigned char f7 : 1; unsigned char f6 : 1; unsigned char rest : 6; char pad2[3]; P p; } S;
static void P_init(P *p) { p->v10 = 0; p->v14 = 0; }
void fn_826EFA68(S *s, int a, unsigned char c) { s->v4 = a; s->b8 = 0; s->vt = lbl_8200D980; s->f7 = c; s->f6 = 0; P_init(&s->p); }
