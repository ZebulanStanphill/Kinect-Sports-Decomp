void fn_82C2F308(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar4;
  __int64 lVar3;
  int *piVar5;
  short sVar6;
  
  if (*(short *)(param_1 + 0x244) < 1) {
    return;
  }
  iVar2 = 0;
  iVar4 = 0;
  do {
    iVar4 = *(short *)(iVar4 + *(int *)(param_1 + 0x248)) * 0x6f0 + *(int *)(param_1 + 0x140);
    lVar3 = (__int64)*(short *)(iVar4 + 0x76);
    if (0 < *(short *)(iVar4 + 0x76)) {
      piVar5 = (int *)(**(short **)(*(int *)(iVar4 + 0x1a8) + 0xc) * 4 + *(int *)(iVar4 + 0x38) + -4
                      );
      do {
        piVar1 = piVar5 + 1;
        piVar5 = piVar5 + 1;
        *piVar5 = (int)*(short *)(param_1 + 0xd0) * *piVar1;
        lVar3 = lVar3 + -1;
      } while (lVar3 != 0);
    }
    sVar6 = (short)iVar2 + 1;
    iVar2 = (int)sVar6;
    iVar4 = iVar2 << 1;
  } while (sVar6 < *(short *)(param_1 + 0x244));
  return;
}

