extern unsigned int lbl_82002AE0;
extern unsigned int lbl_8217E56C;


unsigned __int64 fn_8305A548(unsigned int *param_1,unsigned int *param_2,unsigned int param_3)

{
  int iVar1;
  
  *param_1 = param_3;
  param_1[1] = 6;
  iVar1 = (**(int (***)())*param_2)(param_2,0x27c0);
  param_1[2] = iVar1;
  if (iVar1 == 0) {
    return 0x34;
  }
  *(unsigned int *)(iVar1 + 0x24) = lbl_82002AE0;
  *(unsigned int *)(param_1[2] + 0x20) = lbl_8217E56C;
  return 1;
}

