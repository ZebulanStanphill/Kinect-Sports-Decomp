void fn_82547C80(int param_1,unsigned int param_2,unsigned int param_3)

{
  int iVar1;
  unsigned int uVar2;
  unsigned int *puVar3;
  int iVar4;
  int iVar5;
  __int64 lVar6;
  
  iVar4 = (param_2 & 0xff) * 4;
  iVar1 = iVar4 >> 3;
  uVar2 = iVar4 + iVar1 * -8;
  puVar3 = (unsigned int *)(param_1 + 0x40);
  iVar4 = 0;
  lVar6 = 2;
  do {
    iVar5 = iVar4 + iVar1;
    iVar4 = iVar4 + 0x20;
    iVar5 = iVar5 + param_1;
    *(unsigned char *)(iVar5 + 4) =
         *(unsigned char *)(iVar5 + 4) & ~(unsigned char)(0xf << (uVar2 & 0x3f)) |
         (unsigned char)((param_3 & 0xff) << (uVar2 & 0x3f));
    puVar3 = puVar3 + 1;
    *puVar3 = 1;
    lVar6 = lVar6 + -1;
  } while (lVar6 != 0);
  return;
}

