extern int fn_8267BE38();
extern int fn_82683270();
extern int fn_82696330();


void fn_826D18D0(int *param_1)

{
  int iVar1;
  
  fn_82683270(param_1,(__int64)(*param_1 - param_1[1] >> 4) +
                            ((unsigned __int64)(unsigned int)param_1[5] - 1 & 0x7ffffff) * 0x20);
  fn_82696330(*param_1);
  iVar1 = *(int *)(param_1[5] * 4 + param_1[4] + -4);
  *(int *)(iVar1 + 0x200) = param_1[7];
  param_1[7] = iVar1;
  do {
    iVar1 = *(int *)(param_1[7] + 0x200);
    fn_8267BE38();
    param_1[7] = iVar1;
  } while (iVar1 != 0);
  fn_8267BE38(param_1[4]);
  return;
}

