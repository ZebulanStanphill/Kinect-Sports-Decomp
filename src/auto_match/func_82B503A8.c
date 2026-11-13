typedef struct N_82B503A8 { int a, b; int count; unsigned cap; char data[1]; } N_82B503A8;
extern N_82B503A8 *fn_82B4B410(unsigned *p, int x);
char *fn_82B503A8(unsigned *p)
{
  N_82B503A8 *n;
  char *e;
  if ((p[1] & 1) == 0) {
    n = (N_82B503A8 *)((*p & 0xfffffffe) - 4);
    if (n != 0 && (unsigned)(n->count + 1) <= n->cap) goto ok;
  }
  n = fn_82B4B410(p, 1);
ok:
  e = n->data + n->count * 12;
  n->count++;
  return e;
}
