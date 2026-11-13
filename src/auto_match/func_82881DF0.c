typedef struct Node_82881DF0 { int pad[4]; struct Sub_82881DF0 *sub; } Node_82881DF0;
typedef struct Sub_82881DF0 { char pad[0xb8]; int f; } Sub_82881DF0;
typedef struct Map_82881DF0 { int a; Node_82881DF0 *end; } Map_82881DF0;
extern Map_82881DF0 lbl_83212A00;
extern void fn_8289F160(Node_82881DF0 **it, Map_82881DF0 *m, int *key);
int fn_82881DF0(int key)
{
  struct { int k; Node_82881DF0 *it; } l;
  l.k = key;
  fn_8289F160(&l.it, &lbl_83212A00, &l.k);
  if (l.it != lbl_83212A00.end) {
    Sub_82881DF0 *s = l.it->sub;
    if (s != 0) return s->f;
  }
  return 0;
}
