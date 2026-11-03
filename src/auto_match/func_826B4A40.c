typedef struct { unsigned int **tbl; unsigned int idx; } Iter_826B4A40;
typedef struct { int *key; int val; } Pair_826B4A40;
typedef struct { Iter_826B4A40 it; Pair_826B4A40 pr; } Locals_826B4A40;
extern int fn_826B0BC8(Iter_826B4A40 *, int, int *);
extern unsigned char fn_826A8E58(Iter_826B4A40 *, Pair_826B4A40 *);
extern int fn_826B1FD0(int, int, Pair_826B4A40 *, int);
extern int fn_826C3768(unsigned int, int);

void fn_826B4A40(int param_1, int *param_2, int param_3)
{
  Locals_826B4A40 L;

  fn_826B0BC8(&L.it, param_1, param_2);
  L.pr.key = 0;
  L.pr.val = 0;
  if (fn_826A8E58(&L.it, &L.pr) == 0) {
    fn_826C3768(L.it.idx * 0x14 + (unsigned int)*L.it.tbl + 0x10, param_3);
  }
  else {
    L.pr.key = param_2;
    L.pr.val = param_3;
    fn_826B1FD0(param_1, param_1, &L.pr, *(int *)(*param_2 + 0xc));
  }
}
