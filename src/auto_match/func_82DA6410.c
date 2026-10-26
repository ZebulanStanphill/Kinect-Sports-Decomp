typedef struct { int a; int b; unsigned int c; } R;
typedef struct { R r0; int d; R r1; R r2; } S;

static void R_init(R *r) { r->a = 0; r->b = 0; r->c = 0x80000000; }

void fn_82DA6410(S *p, int v)
{
  R_init(&p->r0);
  R_init(&p->r1);
  R_init(&p->r2);
  p->d = v;
}
