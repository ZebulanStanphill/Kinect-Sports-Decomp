typedef struct { float x, y, z; } V;
typedef struct { V a, b, c; unsigned char k; } S;
typedef struct { int pad[3]; S s; } P;

void fn_827AF0A0(S *d, P *p)
{
  S *s = &p->s;
  d->a = s->a;
  d->b = s->b;
  d->c = s->c;
  d->k = s->k;
}
