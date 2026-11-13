void fn_82C565B0(int param_1,unsigned int param_2)

{
  unsigned int uVar1;
  unsigned short uVar2;
  unsigned int uVar3;
  int iVar4;
  int iVar5;
  
  iVar4 = *(int *)(param_1 + 0x3cb0);
  *(unsigned int *)(param_1 + 0xf8) = param_2;
  if (5 < iVar4) {
    *(unsigned int *)(param_1 + 0x144) = 0;
    iVar4 = (*(int *)(param_1 + 0xfc) + param_2 * 2) * 0x14 + *(int *)(param_1 + 0x19d0);
    *(unsigned int *)(param_1 + 0x140) = *(unsigned int *)(iVar4 + -0x10);
    *(unsigned int *)(param_1 + 0x13c) = *(unsigned int *)(iVar4 + -0x14);
    uVar1 = *(unsigned int *)(iVar4 + -4);
    if (uVar1 == 0) {
      return;
    }
    *(unsigned int *)(param_1 + 300) = uVar1;
    *(unsigned int *)(param_1 + 0x130) = uVar1;
    if ((*(unsigned int *)(param_1 + 0xbbc) & 1) != 0) {
      *(unsigned short *)(*(int *)(param_1 + 0x770) + 0x10) = 0;
      **(unsigned short **)(param_1 + 0x770) = 0;
      *(unsigned short *)(*(int *)(param_1 + 0x774) + 0x10) = 0;
      **(unsigned short **)(param_1 + 0x774) = 0;
      return;
    }
    trapWord(6,(unsigned __int64)uVar1,0);
    uVar3 = ((int)uVar1 >> 1) + 0x400;
    uVar2 = (unsigned short)((int)uVar3 / (int)uVar1);
    *(unsigned short *)(*(int *)(param_1 + 0x770) + 0x10) = uVar2;
    trapWord(5,(unsigned __int64)uVar1 &
               ~((((unsigned __int64)uVar3 & 0x7fffffff) << 1 | (unsigned __int64)(uVar3 >> 0x1f)) - 1),0xffff);
    **(unsigned short **)(param_1 + 0x770) = uVar2;
    goto code_r0x82c56790;
  }
  iVar5 = param_2 << 1;
  *(unsigned int *)(param_1 + 0x130) = 8;
  *(unsigned int *)(param_1 + 0x144) = ~param_2 & 1;
  *(int *)(param_1 + 0x13c) = iVar5;
  *(unsigned int *)(param_1 + 0x140) = param_2 - (~param_2 & 1);
  *(unsigned int *)(param_1 + 300) = 8;
  if ((iVar4 < 3) && (iVar4 != 0)) {
    return;
  }
  if ((int)param_2 < 5) {
    *(unsigned int *)(param_1 + 300) = 8;
    *(unsigned int *)(param_1 + 0x130) = 8;
    if ((*(int *)(param_1 + 0x39e4) != 0) && ((int)param_2 < 3)) {
      *(int *)(param_1 + 300) = iVar5;
code_r0x82c5674c:
      *(int *)(param_1 + 0x130) = iVar5;
    }
  }
  else if (iVar4 < 4) {
    if ((int)param_2 < 9) {
      *(unsigned int *)(param_1 + 300) = param_2 << 1;
      *(int *)(param_1 + 0x130) = (int)(param_2 + 0xd) >> 1;
    }
    else {
      if (0x18 < (int)param_2) {
        iVar5 = param_2 - 6;
        *(unsigned int *)(param_1 + 300) = (param_2 - 8) * 2;
        goto code_r0x82c5674c;
      }
      *(unsigned int *)(param_1 + 300) = param_2 + 8;
      *(int *)(param_1 + 0x130) = (int)(param_2 + 0xd) >> 1;
    }
  }
  else {
    iVar5 = ((int)param_2 >> 1) + 6;
    *(int *)(param_1 + 0x130) = iVar5;
    *(int *)(param_1 + 300) = iVar5;
  }
  if (iVar4 < 3) {
    return;
  }
  uVar1 = *(unsigned int *)(param_1 + 300);
  trapWord(6,(unsigned __int64)uVar1,0);
  uVar3 = ((int)uVar1 >> 1) + 0x400;
  uVar2 = (unsigned short)((int)uVar3 / (int)uVar1);
  *(unsigned short *)(*(int *)(param_1 + 0x770) + 0x10) = uVar2;
  trapWord(5,(unsigned __int64)uVar1 &
             ~((((unsigned __int64)uVar3 & 0x7fffffff) << 1 | (unsigned __int64)(uVar3 >> 0x1f)) - 1),0xffff);
  **(unsigned short **)(param_1 + 0x770) = uVar2;
code_r0x82c56790:
  uVar1 = *(unsigned int *)(param_1 + 0x130);
  trapWord(6,(unsigned __int64)uVar1,0);
  uVar3 = ((int)uVar1 >> 1) + 0x400;
  uVar2 = (unsigned short)((int)uVar3 / (int)uVar1);
  *(unsigned short *)(*(int *)(param_1 + 0x774) + 0x10) = uVar2;
  trapWord(5,(unsigned __int64)uVar1 &
             ~((((unsigned __int64)uVar3 & 0x7fffffff) << 1 | (unsigned __int64)(uVar3 >> 0x1f)) - 1),0xffff);
  **(unsigned short **)(param_1 + 0x774) = uVar2;
  return;
}

