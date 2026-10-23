typedef unsigned int uint;
extern int fn_826FE988();
void *memmove(void *d, const void *s, uint n);

typedef struct { int a; int *rc; } Elem;
typedef struct { Elem *data; uint size; } Vec;

void fn_82702AF8(Vec *v, uint idx, Elem *src)
{
  Elem *e;
  int *rc;

  fn_826FE988(v, v->size + 1);
  if (idx < v->size - 1) {
    e = v->data + idx;
    memmove(e + 1, e, ((v->size - idx) - 1) * sizeof(Elem));
  }
  e = v->data + idx;
  if (e != 0) {
    e->a = src->a;
    rc = src->rc;
    if (rc != 0) {
      rc[1]++;
    }
    e->rc = src->rc;
  }
}
