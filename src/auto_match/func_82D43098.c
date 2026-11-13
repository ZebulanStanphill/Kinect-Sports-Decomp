extern int fn_82CE5410();
extern int fn_82CE6310();


__int64 fn_82D43098(int param_1)

{
  unsigned int uVar1;
  __int64 lVar2;
  int iVar3;
  __int64 lVar4;
  int iVar5;
  unsigned char *puVar6;
  unsigned int *puVar7;
  
  puVar7 = (unsigned int *)(param_1 + 0xc0);
  iVar3 = fn_82CE5410();
  uVar1 = *(unsigned int *)(param_1 + 0xc4);
  lVar4 = (unsigned __int64)uVar1 + 1;
  iVar5 = (int)lVar4;
  if ((int)(*(unsigned int *)(param_1 + 200) & 0x3fffffff) < iVar5) {
    lVar2 = ((unsigned __int64)*(unsigned int *)(param_1 + 200) & 0x3fffffff) << 1;
    if (iVar5 < (int)lVar2) {
      lVar4 = lVar2;
    }
    fn_82CE6310(*(unsigned int *)(iVar3 + 0x10),puVar7,lVar4,0x40);
  }
  puVar6 = (unsigned char *)(*(int *)(param_1 + 0xc4) * 0x40 + *puVar7);
  if (puVar6 != (unsigned char *)0x0) {
    *(unsigned short *)(puVar6 + 8) = 0;
    *puVar6 = 1;
    puVar6[1] = 1;
    *(unsigned short *)(puVar6 + 2) = 0;
    *(unsigned short *)(puVar6 + 10) = 1;
    *(unsigned int *)(puVar6 + 0xc) = 0;
    *(unsigned int *)(puVar6 + 4) = 0;
    *(unsigned int *)(puVar6 + 0x10) = 0;
    *(unsigned int *)(puVar6 + 0x14) = 0;
    *(unsigned int *)(puVar6 + 0x18) = 0;
    *(unsigned int *)(puVar6 + 0x1c) = 0x80000000;
  }
  *(int *)(param_1 + 0xc4) = *(int *)(param_1 + 0xc4) + 1;
  return ((unsigned __int64)uVar1 & 0x3ffffff) * 0x40 + (unsigned __int64)*puVar7;
}

