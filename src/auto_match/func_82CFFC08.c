extern int fn_82CEAFA8();


void fn_82CFFC08(int *param_1,int param_2,unsigned __int64 param_3,unsigned __int64 param_4)

{
  unsigned int iVar1;
  
  *param_1 = 0;
  iVar1 = fn_82CEAFA8(param_3,param_4);
  param_1[1] = iVar1;
  if (iVar1 != 0) {
    *param_1 = (unsigned int)*(unsigned short *)(iVar1 + 0x12) + param_2;
  }
  return;
}

