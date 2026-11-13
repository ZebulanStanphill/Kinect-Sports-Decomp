extern int fn_82CEAFA8();
extern int fn_82CFD5A8();


int * fn_82CFFEF8(int *param_1,int *param_2,unsigned __int64 param_3)

{
  int iVar1;
  unsigned int uVar2;
  unsigned int iVar3;
  
  uVar2 = fn_82CFD5A8(param_2[1]);
  iVar1 = *param_2;
  *param_1 = 0;
  iVar3 = fn_82CEAFA8(uVar2,param_3);
  param_1[1] = iVar3;
  if (iVar3 != 0) {
    *param_1 = (unsigned int)*(unsigned short *)(iVar3 + 0x12) + iVar1;
  }
  return param_1;
}

