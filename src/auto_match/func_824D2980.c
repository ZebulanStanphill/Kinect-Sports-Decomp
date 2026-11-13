extern unsigned int lbl_83297980;
extern unsigned int lbl_83297984;


unsigned int fn_824D2980(int param_1,int param_2)

{
  if ((lbl_83297984 & 1) == 0) {
    lbl_83297984 = lbl_83297984 | 1;
    lbl_83297980 = *(int *)(*(int *)(param_1 + 0x3a00) + 0x298);
  }
  param_1 = param_2 * 0x1c10 + param_1;
  if (lbl_83297980 == 0) {
    return *(unsigned int *)(param_1 + 0x3b4);
  }
  if ((*(int *)(param_1 + 0x3b4) != 0) && (*(int *)(param_1 + 0x358) != 0)) {
    return 1;
  }
  return 0;
}

