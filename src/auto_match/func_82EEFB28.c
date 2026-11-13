extern int fn_82EEF878();


unsigned int fn_82EEFB28(int param_1,unsigned __int64 param_2,unsigned __int64 param_3,unsigned int *param_4)

{
  unsigned int uVar1;
  
  if (param_4 != (unsigned int *)0x0) {
    *param_4 = *(unsigned int *)(param_1 + 0x164);
  }
  uVar1 = fn_82EEF878(param_1,*(unsigned int *)(param_1 + 0x164),param_2,param_3);
  if (-1 < (int)uVar1) {
    *(int *)(param_1 + 0x164) = *(int *)(param_1 + 0x164) + 1;
  }
  return uVar1 >> 0x1f ^ 1;
}

