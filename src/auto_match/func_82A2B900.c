void fn_82A2B900(int param_1,unsigned int param_2,int param_3)

{
  unsigned char bVar1;
  unsigned char bVar2;
  unsigned char bVar3;
  int iVar4;
  unsigned char uVar5;
  int iVar6;
  int iVar7;
  
  bVar1 = *(unsigned char *)(param_1 + 0xc9);
  iVar4 = *(int *)(param_1 + 0x30);
  iVar6 = (unsigned int)bVar1 * 8 + iVar4;
  if (param_2 == bVar1) {
    if (param_3 == 0) {
      *(unsigned char *)(param_1 + 0xc9) = *(unsigned char *)(iVar6 + 5);
    }
  }
  else {
    uVar5 = (unsigned char)param_2;
    if (param_2 != *(unsigned char *)(iVar6 + 6)) {
      iVar7 = param_2 * 8 + iVar4;
      bVar2 = *(unsigned char *)(iVar7 + 6);
      bVar3 = *(unsigned char *)(iVar7 + 5);
      *(unsigned char *)((unsigned int)bVar2 * 8 + iVar4 + 5) = bVar3;
      *(unsigned char *)((unsigned int)bVar3 * 8 + iVar4 + 6) = bVar2;
      *(unsigned char *)(iVar7 + 5) = bVar1;
      *(unsigned char *)(iVar7 + 6) = *(unsigned char *)(iVar6 + 6);
      *(unsigned char *)((unsigned int)*(unsigned char *)(iVar6 + 6) * 8 + iVar4 + 5) = uVar5;
      *(unsigned char *)(iVar6 + 6) = uVar5;
    }
    if (param_3 != 0) {
      *(unsigned char *)(param_1 + 0xc9) = uVar5;
    }
  }
  return;
}

