typedef unsigned char bool;


unsigned char fn_82788788(int param_1,unsigned int param_2,unsigned int param_3)

{
  int iVar1;
  unsigned int uVar2;
  unsigned int uVar3;
  unsigned int *puVar4;
  unsigned int *puVar5;
  bool bVar6;
  
  iVar1 = *(int *)(*(int *)(param_1 + 4) + 0xc);
  puVar5 = (unsigned int *)(*(int *)((param_2 >> 8 & 0xfffffc) + iVar1) + (param_2 & 0x3ff) * 0xc);
  puVar4 = (unsigned int *)(*(int *)((param_3 >> 8 & 0xfffffc) + iVar1) + (param_3 & 0x3ff) * 0xc);
  uVar2 = *puVar5;
  uVar3 = *puVar4;
  if (uVar2 == uVar3) {
    bVar6 = puVar4[1] <= puVar5[1];
  }
  else {
    bVar6 = uVar3 <= uVar2;
  }
  return -!bVar6 & 1;
}

