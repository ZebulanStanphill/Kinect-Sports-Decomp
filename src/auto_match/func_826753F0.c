typedef struct { union { char *p; char buf[16]; } u; unsigned size; unsigned cap; int alloc; } Str_826753F0;
typedef struct { int pad[3]; Str_826753F0 key; } Node_826753F0;
typedef struct { int pad[1]; Node_826753F0 *head; } Tree_826753F0;
typedef struct { Str_826753F0 s; int z; } Tmp_826753F0;

extern Node_826753F0 *fn_82674828();
extern int fn_8223B688(Str_826753F0 *, Str_826753F0 *);
extern int fn_82230300(Str_826753F0 *, int, int);
extern int fn_8260D428(Str_826753F0 *, int, unsigned, const char *, unsigned);
extern int **fn_826752B0(void *, Tree_826753F0 *, Node_826753F0 *, Str_826753F0 *);

static __forceinline const char *cstr(Str_826753F0 *b)
{
  if (b->cap >= 0x10) return b->u.p;
  return b->u.buf;
}
static __forceinline int cmp(Str_826753F0 *a, Str_826753F0 *b)
{
  unsigned len = b->size;
  const char *p = cstr(b);
  return fn_8260D428(a, 0, a->size, p, len);
}

Node_826753F0 *fn_826753F0(Tree_826753F0 *t, Str_826753F0 *key)
{
  Node_826753F0 *n;
  Tmp_826753F0 tmp;
  char out[16];
  int **r;

  n = fn_82674828();
  if (n != t->head) {
    if (cmp(key, &n->key) >= 0)
      return (Node_826753F0 *)((char *)n + 0x28);
  }
  fn_8223B688(&tmp.s, key);
  tmp.z = 0;
  r = fn_826752B0(out, t, n, &tmp.s);
  n = (Node_826753F0 *)*r;
  fn_82230300(&tmp.s, 1, 0);
  return (Node_826753F0 *)((char *)n + 0x28);
}
