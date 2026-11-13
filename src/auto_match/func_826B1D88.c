typedef struct Iter_826B1D88 { unsigned *tab; unsigned idx; } Iter_826B1D88;
typedef struct Pair_826B1D88 { int *obj; int val; } Pair_826B1D88;
extern void fn_82695FA0(char *, int);
extern unsigned char fn_826A8E58(Iter_826B1D88 *, Pair_826B1D88 *);
extern void fn_826AE718(void *, void *, Pair_826B1D88 *, int);
extern void fn_826B0A78(Iter_826B1D88 *, void *, int *);

void fn_826B1D88(void *a, int *b, int c)
{
  struct { Iter_826B1D88 it; Pair_826B1D88 pr; } L;
  fn_826B0A78(&L.it, a, b);
  L.pr.obj = 0;
  L.pr.val = 0;
  if (fn_826A8E58(&L.it, &L.pr) == 0) {
    fn_82695FA0((char *)(L.it.idx * 0x20 + *L.it.tab + 0x18), c);
  } else {
    L.pr.obj = b;
    L.pr.val = c;
    fn_826AE718(a, a, &L.pr, *(int *)(*b + 0xc));
  }
}
