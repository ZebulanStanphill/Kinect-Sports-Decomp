typedef struct E_82834608 { unsigned int a; unsigned int key; unsigned int c; } E_82834608;
static void sw(E_82834608 *x, E_82834608 *y) { E_82834608 t = *y; *y = *x; *x = t; }
void fn_82834608(E_82834608 *p, E_82834608 *q, E_82834608 *r)
{
  if (q->key < p->key) sw(p, q);
  if (r->key < q->key) sw(q, r);
  if (q->key < p->key) sw(p, q);
}
