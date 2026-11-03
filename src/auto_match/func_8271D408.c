typedef struct Obj_8271D408 { unsigned base; unsigned char kind; } Obj_8271D408;
extern unsigned char fn_826A18A8(unsigned, int, int);
extern int fn_826C1FF8(int, Obj_8271D408 *, int, int, int);

int fn_8271D408(int param_1, Obj_8271D408 *param_2, int param_3, int param_4, int param_5)
{
  int r;

  if (fn_826A18A8(param_2->base + 0x1e0, param_3, 6 < param_2->kind) == 0 &&
      fn_826A18A8(param_2->base + 0x1e4, param_3, 6 < param_2->kind) == 0) {
    r = fn_826C1FF8(param_1, param_2, param_3, param_4, param_5);
  } else {
    r = 1;
  }
  return r;
}
