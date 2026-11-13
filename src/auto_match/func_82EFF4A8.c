extern unsigned int lbl_83248E44;
extern unsigned int lbl_83248E48;
extern unsigned int lbl_8325F874;
extern unsigned int lbl_8325F878;
extern unsigned int lbl_8325F880;
extern unsigned int lbl_8325F884;
extern unsigned int lbl_8325F88C;


void fn_82EFF4A8(int param_1)

{
  if ((((*(int *)(param_1 + 0x1f28) != 0) || (*(int *)(param_1 + 0x1fa8) == 0)) ||
      (lbl_83248E44 != 0)) || (lbl_83248E48 != 0)) {
    *(unsigned int *)(param_1 + 0x1f24) = 0;
    return;
  }
  if (*(int *)(param_1 + 0x1f18) <= *(int *)(param_1 + 0x1f10)) {
    *(unsigned int *)(param_1 + 0x1f24) = 0;
    lbl_8325F884 = lbl_8325F88C;
    return;
  }
  *(unsigned int *)(param_1 + 0x1f24) = 1;
  if (*(int *)(param_1 + 0x1f1c) <= *(int *)(param_1 + 0x1f10)) {
    lbl_8325F88C = lbl_8325F880;
    lbl_8325F884 = lbl_8325F880;
    return;
  }
  if (*(int *)(param_1 + 0x2a4) < 0xb) {
    lbl_8325F88C = lbl_8325F880;
    lbl_8325F884 = lbl_8325F880;
    return;
  }
  if (0xe < *(int *)(param_1 + 0x2a4)) {
    lbl_8325F88C = lbl_8325F874;
    lbl_8325F884 = lbl_8325F874;
    return;
  }
  lbl_8325F88C = lbl_8325F878;
  lbl_8325F884 = lbl_8325F878;
  return;
}

