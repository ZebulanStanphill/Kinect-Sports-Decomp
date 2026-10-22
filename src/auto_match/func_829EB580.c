typedef struct { int a, b, c, d; } Quad;
typedef struct { int v[5]; int one; Quad q; } Ten;
typedef struct { int h; Quad q; int e; } Six;
typedef struct { int pad0; int f4; int pad8; Ten t; Six a; int pad4c[2]; Six b; Six c; } Obj;
static void Quad_init(Quad *q) { q->a = 0; q->b = 0; q->c = 0; q->d = 0; }
static void Ten_init(Ten *t) { int i; for (i = 0; i < 5; i++) t->v[i] = 0; t->one = 1; Quad_init(&t->q); }
static void Six_init(Six *s) { Quad_init(&s->q); s->e = 0; }
void fn_829EB580(Obj *p) { Ten_init(&p->t); Six_init(&p->a); Six_init(&p->b); Six_init(&p->c); p->f4 = 0; }
