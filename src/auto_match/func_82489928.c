extern int fn_82489D60();
extern int memmove();


void fn_82489928(int *param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  unsigned int uVar3;
  int iVar4;
  unsigned int uVar5;
  int *piVar6;
  int *piVar7;
  int aiStack_40;
  
  piVar1 = (int *)param_1[0x15];
  piVar7 = (int *)param_1[0x14];
  piVar6 = piVar7;
  for (; piVar7 != piVar1; piVar7 = piVar7 + 1) {
    piVar6 = piVar6 + 1;
    if (*piVar7 == param_2) {
      memmove(piVar7,piVar6,(param_1[0x15] - (int)piVar6 >> 2) << 2);
      param_1[0x15] = param_1[0x15] + -4;
    }
  }
  iVar2 = *param_1;
  uVar5 = 0;
  uVar3 = param_1[1] - iVar2 >> 2;
  if (uVar3 != 0) {
    iVar4 = 0;
    do {
      if (*(int *)(*(int *)(iVar4 + iVar2) + 0x14) == param_2) {
        iVar2 = *(int *)(uVar5 * 4 + iVar2);
        if ((*(int *)(iVar2 + 4) != 0) && (*(int *)(iVar2 + 4) != 3)) {
          *(unsigned int *)(iVar2 + 0x24) = 1;
          return;
        }
        aiStack_40 = *(int *)(iVar2 + 0x14);
        fn_82489D60((unsigned __int64)*(unsigned int *)(iVar2 + 0x20) + 0x20,&aiStack_40);
        *(unsigned int *)(iVar2 + 0x14) = 0xffffffff;
        *(unsigned int *)(iVar2 + 4) = 0;
        return;
      }
      uVar5 = uVar5 + 1;
      iVar4 = iVar4 + 4;
    } while (uVar5 < uVar3);
  }
  aiStack_40 = param_2;
  fn_82489D60(param_1 + 8,&aiStack_40);
  return;
}

