void fn_82D7C3D8(int *param_1,int *param_2,int *param_3,unsigned int *param_4,unsigned int *param_5)

{
  unsigned char bVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  unsigned int uVar6;
  int iVar7;
  
  iVar7 = *param_3;
  iVar3 = *(int *)(*param_1 + 0xc);
  iVar4 = *(int *)(*param_2 + 0xc);
  iVar5 = iVar3 * 0x20 + iVar4 + iVar7;
  if (param_3[5] == 0) {
    bVar1 = *(unsigned char *)(iVar5 + 0xeb0);
  }
  else {
    bVar1 = *(unsigned char *)(iVar5 + 0x12b0);
  }
  uVar6 = (unsigned int)LZCOUNT(*(int *)((unsigned int)bVar1 * 0x50 + iVar7 + 0x16f0) + -2) >> 5;
  if (bVar1 == 1) {
    cVar2 = *(char *)((*(unsigned char *)((iVar3 + 0xd) * 0x20 + iVar4 + iVar7) + 0x7c) * 0x14 + iVar7);
    uVar6 = (int)cVar2 + ((1 - cVar2) - (unsigned int)(cVar2 == '\0'));
  }
  *param_5 = uVar6;
  if (uVar6 != 0) {
    iVar7 = iVar4 * 0x20 + iVar3 + iVar7;
    if (param_3[5] != 0) {
      *param_4 = (unsigned int)*(unsigned char *)(iVar7 + 0x12b0);
      return;
    }
    *param_4 = (unsigned int)*(unsigned char *)(iVar7 + 0xeb0);
    return;
  }
  *param_4 = (unsigned int)bVar1;
  return;
}

