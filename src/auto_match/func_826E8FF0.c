extern int fn_826E8488();
extern int fn_826E8610();


void fn_826E8FF0(int param_1,float *param_2)

{
  unsigned int uVar1;
  int iVar2;
  
  *(unsigned char *)(param_1 + 0x15) = 0;
  uVar1 = fn_826E8488(param_1,5);
  iVar2 = fn_826E8610(param_1,uVar1);
  *param_2 = (float)(__int64)iVar2;
  iVar2 = fn_826E8610(param_1,uVar1);
  param_2[2] = (float)(__int64)iVar2;
  iVar2 = fn_826E8610(param_1,uVar1);
  param_2[1] = (float)(__int64)iVar2;
  iVar2 = fn_826E8610(param_1,uVar1);
  param_2[3] = (float)(__int64)iVar2;
  return;
}

