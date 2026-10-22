extern int *fn_82B7BD28(int, int);
extern void fn_82BA03B8(int *, int);
extern int *lbl_83223EC4;

int *fn_82BD0A18(int *param_1, int param_2, int param_3, int param_4)
{
  int heap;
  int *mem;
  int *o;

  param_1[0] = param_2;
  param_1[1] = param_3;
  param_1[2] = 0;
  param_1[3] = 0;
  lbl_83223EC4[param_2] = param_2;
  heap = *(int *)(param_4 + 0x5b0);
  mem = fn_82B7BD28(heap, 0x14);
  *mem = heap;
  o = mem + 1;
  if (o != 0) {
    fn_82BA03B8(o, *(int *)(param_4 + 0x5b0));
  } else {
    o = 0;
  }
  param_1[4] = (int)o;
  return param_1;
}
