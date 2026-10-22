extern int *fn_82B7BD28(int, int);
extern int *fn_82BC33B0(int *, int, int);
extern int lbl_820E42E8;

int *fn_82BC47B8(int param_1, int param_2)
{
  int heap;
  int *mem;
  int *o;

  heap = *(int *)(param_2 + 0x5ac);
  mem = fn_82B7BD28(heap, 0x3c4);
  *mem = heap;
  o = mem + 1;
  if (o != 0) {
    o = fn_82BC33B0(o, 0x7e, param_2);
    o[4] = 1;
    *o = (int)&lbl_820E42E8;
    o[5] = 1;
    return o;
  }
  return 0;
}
