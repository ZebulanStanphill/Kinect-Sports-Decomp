extern int fn_82ABDD90();


int fn_82AD1670(int param_1,unsigned __int64 param_2)

{
  unsigned int uVar1;
  int iVar2;
  
  uVar1 = *(unsigned int *)(param_1 + 8);
  iVar2 = fn_82ABDD90(param_2,uVar1 >> 7 & 0x7f,uVar1 >> 0x13 & 7,uVar1 >> 0xe & 7);
  return iVar2 + param_1 + -8;
}

