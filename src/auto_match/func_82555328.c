extern int fn_82549808();


void fn_82555328(int param_1,int param_2,unsigned __int64 param_3)

{
  unsigned int uVar1;
  int iVar2;
  unsigned int uVar3;
  int iVar4;
  int iVar5;
  unsigned int *puVar;
  
  iVar4 = *(int *)(param_1 + 8) * 0x40;
  iVar5 = 0;
  iVar2 = (*(int *)(param_2 + 0x20) - (iVar4 - 1U & 0xf)) + iVar4 + 0xf;
  *(int *)(param_2 + 0x20) = iVar2;
  iVar4 = *(int *)(param_1 + 8) * 0x40;
  iVar2 = (iVar2 - (iVar4 - 1U & 0xf)) + iVar4 + 0xf;
  *(int *)(param_2 + 0x20) = iVar2;
  iVar4 = *(int *)(param_1 + 0xc) * 0x10;
  iVar2 = (iVar2 - (iVar4 - 1U & 0xf)) + iVar4 + 0xf;
  *(int *)(param_2 + 0x20) = iVar2;
  iVar4 = *(int *)(param_1 + 4) * 0x1a0;
  iVar2 = (iVar2 - (iVar4 - 1U & 0xf)) + iVar4 + 0xf;
  *(int *)(param_2 + 0x20) = iVar2;
  iVar4 = *(int *)(param_1 + 0x14) * 4;
  iVar2 = (iVar2 - (iVar4 - 1U & 0xf)) + iVar4 + 0xf;
  *(int *)(param_2 + 0x20) = iVar2;
  iVar4 = *(int *)(param_1 + 0x10) * 4;
  *(unsigned int *)(param_2 + 0x20) = (iVar2 - (iVar4 - 1U & 0xf)) + iVar4 + 0xf;
  for (iVar5 = 0; iVar5 < *(int *)(param_1 + 4); iVar5++) {
    puVar = (unsigned int *)(*(int *)(param_1 + 0x18) + *(int *)(*(int *)(param_1 + 0x1c) + iVar5 * 0x144) * 4);
    iVar2 = *puVar != 0 ? *puVar >> 0x18 : 0x7a;
    if (iVar2 == 4) {
      fn_82549808(puVar,param_3,param_2);
    }
  }
  return;
}

