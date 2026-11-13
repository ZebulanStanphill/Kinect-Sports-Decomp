extern unsigned int lbl_82002AE0;
extern unsigned int lbl_82015BD4;


unsigned __int64 fn_82C045A0(int param_1,unsigned int *param_2,int *param_3)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x138);
  *param_3 = iVar1;
  if (((-5000 < iVar1) || (*(float *)(param_1 + 0x154) <= lbl_82002AE0)) &&
     (*(float *)(param_1 + 0x154) < lbl_82015BD4)) {
    *param_2 = 1;
    return 0;
  }
  *param_2 = 5;
  return 0;
}

