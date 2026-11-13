extern int fn_8267BE38();
extern int fn_826824B0();
extern int fn_826AE4E8();


void fn_826D1970(int *param_1)

{
  int iVar1;
  
  fn_826AE4E8(param_1,(__int64)(*param_1 - param_1[1] >> 2) +
                            ((unsigned __int64)(unsigned int)param_1[5] - 1 & 0x7ffffff) * 0x20);
  if (*(int *)*param_1 != 0) {
    fn_826824B0();
  }
  iVar1 = *(int *)(param_1[5] * 4 + param_1[4] + -4);
  *(int *)(iVar1 + 0x80) = param_1[7];
  param_1[7] = iVar1;
  do {
    iVar1 = *(int *)(param_1[7] + 0x80);
    fn_8267BE38();
    param_1[7] = iVar1;
  } while (iVar1 != 0);
  fn_8267BE38(param_1[4]);
  return;
}

