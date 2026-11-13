extern int fn_82FAE140();


unsigned __int64 fn_82FAC688(int param_1,int param_2,int *param_3,int *param_4)

{
  int iVar1;
  int iVar2;
  unsigned int uVar3;
  int iVar5;
  unsigned __int64 uVar4;
  unsigned int uVar6;
  int iVar7;
  
  iVar1 = *(int *)(param_2 + 0x6c);
  if ((*(unsigned int *)(iVar1 + 0x14) & 0x3e000000) == 0x2000000) {
    iVar7 = *(int *)(iVar1 + 0x28);
  }
  else {
    iVar7 = 0;
  }
  *param_3 = iVar7;
  if (*(short *)(iVar1 + 0x1c) == 3) {
    *param_3 = *param_3 + 0x180;
  }
  iVar7 = *(int *)(param_1 + 0x5c);
  iVar2 = *(int *)(param_2 + 0x198);
  iVar5 = fn_82FAE140(*(unsigned int *)(param_1 + 0x60));
  iVar5 = iVar5 + iVar7;
  if (*param_3 + iVar5 < *(int *)(iVar2 + 0xc) + *(int *)(iVar2 + 8)) {
    uVar3 = *(unsigned int *)(iVar2 + 0x10);
    trapWord(6,(unsigned __int64)uVar3,0);
    uVar6 = (*(int *)(iVar2 + 0x14) - *(int *)(iVar2 + 8)) + *param_3 + iVar5;
    *param_4 = uVar6 - (uVar6 / uVar3) * uVar3;
    if (*(short *)(iVar1 + 0x1c) == 3) {
      *param_3 = *param_3 + -0x180;
    }
    uVar4 = 1;
  }
  else {
    uVar4 = 0;
  }
  return uVar4;
}

