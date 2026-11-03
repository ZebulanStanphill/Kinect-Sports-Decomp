typedef struct { unsigned int a, b; } P_828CD830;
typedef struct {
  unsigned int key;
  P_828CD830 v;
} Val_828CD830;
typedef struct {
  char pad[0xc];
  Val_828CD830 val;
} Node_828CD830;

extern Node_828CD830 *fn_828CCBC0(void *tree);

static __forceinline void Init(P_828CD830 *x, P_828CD830 *y)
{
  x->a = 0;
  x->b = 0;
  if (x != y) {
    unsigned int *xp = &x->b;
    unsigned int t = *xp;
    *xp = y->b;
    y->b = t;
    t = x->a;
    x->a = y->a;
    y->a = t;
  }
}

void fn_828CD830(void *tree, Val_828CD830 *src)
{
  Val_828CD830 *v = &fn_828CCBC0(tree)->val;

  if (v != 0) {
    v->key = src->key;
    Init(&v->v, &src->v);
  }
}
