extern unsigned int lbl_8326B430;
extern unsigned int lbl_8326B434;


unsigned __int64 fn_825444B8(int *param_1)

{
  if (param_1[2] != lbl_8326B430) {
    if (*param_1 == 0) {
      return 0xffffffff8326b0f8;
    }
    return 0xffffffff8326b12c;
  }
  if (param_1[3] == lbl_8326B434) {
    return 0xffffffff8326b090;
  }
  if (param_1[1] == 0) {
    return 0xffffffff8326b160;
  }
  return 0xffffffff8326b194;
}

