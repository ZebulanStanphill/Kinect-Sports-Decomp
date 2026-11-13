extern int fn_82FA5060();
extern unsigned int lbl_831BC770;


unsigned __int64 fn_8304E960(int param_1,unsigned int param_2)

{
  unsigned int iVar1;
  
  *(int *)(param_1 + 4) = (int)param_2;
  iVar1 = fn_82FA5060(lbl_831BC770,(param_2 + (param_2 & 0x7fffffff) * 2 & 0x3fffffff) << 2);
  *(int *)(param_1 + 8) = iVar1;
  if (iVar1 == 0) {
    *(unsigned int *)(param_1 + 4) = 0;
    return 0x34;
  }
  return 1;
}

