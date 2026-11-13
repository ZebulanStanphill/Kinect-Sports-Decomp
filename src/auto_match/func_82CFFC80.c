extern int fn_82CEAFA8();


int * fn_82CFFC80(int *param_1,int *param_2,unsigned __int64 param_3)

{
  int iVar1;
  unsigned int iVar2;
  
  iVar2 = param_2[1];
  iVar1 = *param_2;
  *param_1 = 0;
  iVar2 = fn_82CEAFA8(iVar2,param_3);
  param_1[1] = iVar2;
  if (iVar2 != 0) {
    *param_1 = (unsigned int)*(unsigned short *)(iVar2 + 0x12) + iVar1;
  }
  return param_1;
}

