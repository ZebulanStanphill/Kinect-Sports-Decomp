extern unsigned fn_82832E40();
extern void fn_82833330(void *, void *, unsigned, unsigned);
extern unsigned fn_828335D0(void *, void *);
typedef struct { unsigned a; unsigned b; unsigned c; unsigned d; } Key_82833628;
typedef struct { int p0; unsigned head; } Self_82833628;
typedef struct { char pad[0xc]; unsigned a; unsigned b; unsigned c; } Node_82833628;
static unsigned char Less_82833628(Key_82833628 *k, Node_82833628 *n)
{
  if (k->b == n->b) {
    if (k->c == n->c) return k->a < n->a;
    return k->c < n->c;
  }
  return k->b < n->b;
}
int fn_82833628(Self_82833628 *self, Key_82833628 *key)
{
  Node_82833628 *n = (Node_82833628 *)fn_82832E40();
  struct { unsigned out[4]; Key_82833628 k; } L;
  if ((unsigned)n != self->head) {
    if (!Less_82833628(key, n)) goto done;
  }
  L.k.a = key->a; L.k.b = key->b; L.k.c = key->c; L.k.d = 0;
  fn_82833330(L.out, self, (unsigned)n, fn_828335D0(self, &L.k));
  n = (Node_82833628 *)L.out[0];
done:
  return (int)n + 0x18;
}