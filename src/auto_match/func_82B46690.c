extern int fn_82ABDD90();


void fn_82B46690(int param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4,unsigned __int64 param_5)

{
  unsigned int uVar1;
  unsigned int *puVar2;
  int iVar3;
  
  uVar1 = *(unsigned int *)(param_1 + 8);
  *(unsigned int *)(param_1 + 8) = (param_2 & 1) << 0x12 | uVar1 & 0xfffbffff | 0x20000;
  iVar3 = fn_82ABDD90(param_5,((unsigned __int64)uVar1 & 0x3f80) >> 7,uVar1 >> 0x13 & 7,
                       ((unsigned __int64)uVar1 & 0x1c000) >> 0xe);
  puVar2 = (unsigned int *)(iVar3 + param_1 + -0x10);
  *puVar2 = param_3;
  puVar2[3] = (param_4 & 1) << 2 | puVar2[3] & 0xfffffffb;
  return;
}

