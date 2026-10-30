typedef struct Rc { int a; int cnt; } Rc;
typedef struct Pair { Rc *p; int b; } Pair;
typedef struct Vec { Pair *data; int size; } Vec;
extern void fn_82756360(Vec *v, Vec *v2, unsigned int n);

void fn_82756E30(Vec *v, Pair *src)
{
  Pair *e;
  fn_82756360(v, v, v->size + 1);
  e = v->data + v->size - 1;
  if (e != 0) {
    Rc *r = src->p;
    if (r != 0) {
      r->cnt = r->cnt + 1;
    }
    e->p = src->p;
    e->b = src->b;
  }
}
