extern unsigned int lbl_82002AE0;
extern unsigned int lbl_8217E33C;


unsigned __int64 fn_83057C28(unsigned int *param_1,unsigned int *param_2,unsigned int param_3)

{
  int iVar1;
  
  *param_1 = param_3;
  param_1[1] = 2;
  iVar1 = (**(int (***)())*param_2)(param_2,0x1e10);
  param_1[2] = iVar1;
  if (iVar1 == 0) {
    return 0x34;
  }
  *(unsigned int *)(iVar1 + 0x14) = lbl_82002AE0;
  *(unsigned int *)(param_1[2] + 0x10) = lbl_8217E33C;
  return 1;
}

