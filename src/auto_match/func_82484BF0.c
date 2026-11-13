extern int fn_8225F160();
extern int fn_82485850();


void fn_82484BF0(int param_1)

{
  char cVar1;
  int *piVar2;
  unsigned int *puVar3;
  int iVar4;
  char *pcVar5;
  int iVar6;
  __int64 lVar7;
  
  pcVar5 = (char *)(param_1 + 0x34);
  iVar6 = (param_1 + 0x434) - (int)pcVar5;
  do {
    if ((char *)(param_1 + 0x134) <= pcVar5) break;
    cVar1 = pcVar5[iVar6];
    *pcVar5 = cVar1;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  iVar6 = 0;
  if (pcVar5 == (char *)(param_1 + 0x134)) {
    pcVar5[-1] = '\0';
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0x1c);
  }
  piVar2 = (int *)fn_8225F160();
  if (*piVar2 != 2) {
    pcVar5 = (char *)(param_1 + 0x134);
    iVar4 = (param_1 + 0x534) - (int)pcVar5;
    do {
      if ((char *)(param_1 + 0x234) <= pcVar5) break;
      cVar1 = pcVar5[iVar4];
      *pcVar5 = cVar1;
      pcVar5 = pcVar5 + 1;
    } while (cVar1 != '\0');
    if (pcVar5 == (char *)(param_1 + 0x234)) {
      pcVar5[-1] = '\0';
    }
    fn_82485850(param_1,param_1 + 0x634);
    pcVar5 = (char *)(param_1 + 0x334);
    iVar4 = (param_1 + 0x734) - (int)pcVar5;
    do {
      if ((char *)(param_1 + 0x434) <= pcVar5) break;
      cVar1 = pcVar5[iVar4];
      *pcVar5 = cVar1;
      pcVar5 = pcVar5 + 1;
    } while (cVar1 != '\0');
    if (pcVar5 == (char *)(param_1 + 0x434)) {
      pcVar5[-1] = '\0';
    }
  }
  puVar3 = (unsigned int *)fn_8225F160();
  puVar3[7] = 0;
  puVar3[8] = 0;
  *puVar3 = 2;
  puVar3[9] = 0;
  puVar3[10] = 4;
  iVar4 = fn_8225F160();
  *(unsigned int *)(iVar4 + 8) = 2;
  piVar2 = (int *)(param_1 + 0x838);
  lVar7 = 4;
  do {
    if (*piVar2 != 4) {
      iVar6 = iVar6 + 1;
    }
    piVar2 = piVar2 + 0x108;
    lVar7 = lVar7 + -1;
  } while (lVar7 != 0);
  iVar4 = fn_8225F160();
  *(int *)(iVar4 + 0x5c) = iVar6;
  return;
}

