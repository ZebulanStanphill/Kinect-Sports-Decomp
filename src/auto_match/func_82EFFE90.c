extern unsigned int lbl_83248E44;
extern unsigned int lbl_83248E48;
extern unsigned int lbl_8325F874;
extern unsigned int lbl_8325F878;
extern unsigned int lbl_8325F880;
extern unsigned int lbl_8325F884;
extern unsigned int lbl_8325F88C;


void fn_82EFFE90(int param_1)

{
  int iVar1;
  
  if ((((lbl_83248E44 != 0) || (lbl_83248E48 != 0)) || (*(int *)(param_1 + 0x1f28) != 0)) ||
     (*(int *)(param_1 + 0x1fa8) == 0)) {
    *(unsigned int *)(param_1 + 0x1f24) = 0;
    return;
  }
  iVar1 = *(int *)(param_1 + 0x1ee0);
  *(unsigned int *)(param_1 + 0x1f24) = 1;
  if (0x59 < iVar1) {
    *(unsigned int *)(param_1 + 0x1f24) = 0;
    lbl_8325F884 = lbl_8325F88C;
    return;
  }
  if (0x3b < iVar1) {
    lbl_8325F88C = lbl_8325F880;
    lbl_8325F884 = lbl_8325F880;
    return;
  }
  if (0x1d < iVar1) {
    lbl_8325F88C = lbl_8325F878;
    lbl_8325F884 = lbl_8325F878;
    return;
  }
  lbl_8325F88C = lbl_8325F874;
  lbl_8325F884 = lbl_8325F874;
  return;
}

