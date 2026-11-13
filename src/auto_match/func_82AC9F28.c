extern int fn_82ABDD90();


void fn_82AC9F28(int param_1,unsigned int param_2,unsigned __int64 param_3)

{
  unsigned int uVar1;
  int iVar2;
  
  uVar1 = *(unsigned int *)(param_1 + 8);
  iVar2 = fn_82ABDD90(param_3,uVar1 >> 7 & 0x7f,uVar1 >> 0x13 & 7,uVar1 >> 0xe & 7);
  *(unsigned int *)(iVar2 + param_1 + -0x10) = param_2;
  return;
}

