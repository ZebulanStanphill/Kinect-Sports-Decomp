extern int iRam83219d60;


void fn_82A4F4E0(int param_1)

{
  unsigned int uVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  
  uVar1 = *(unsigned int *)(param_1 + -8);
  param_1 = param_1 - *(int *)(param_1 + -4);
  iVar4 = *(int *)(*(int *)(param_1 + -8) + 4) + -8;
  RtlEnterCriticalSection(0xffffffff83219da4);
  piVar2 = *(int **)(param_1 + -8);
  trapWord(6,(unsigned __int64)(unsigned int)piVar2[1],0);
  piVar2[2] = 1 << ((unsigned int)((param_1 + -8) - *piVar2) / (unsigned int)piVar2[1] & 0x3f) ^ piVar2[2];
  RtlLeaveCriticalSection(0xffffffff83219da4);
  iVar3 = (uVar1 & 0x1fff) * 4;
  iRam83219d60 = iRam83219d60 - iVar4;
  *(int *)(iVar3 + -0x7cde629c) = *(int *)(iVar3 + -0x7cde629c) - iVar4;
  return;
}

