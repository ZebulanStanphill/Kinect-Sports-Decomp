void fn_830178D8(int param_1,int param_2)

{
  int *piVar1;
  unsigned int *puVar2;
  unsigned int *puVar3;
  int *piVar4;
  int *piVar5;
  unsigned int *puVar6;
  int *piVar7;
  int iVar8;
  
  iVar8 = param_1 + 0x720;
  RtlEnterCriticalSection(iVar8);
  puVar6 = *(unsigned int **)(param_1 + 0x6c0);
  puVar3 = (unsigned int *)0x0;
  while (puVar2 = puVar6, puVar2 != (unsigned int *)0x0) {
    if (puVar2[1] == param_2) {
      if (puVar2 == *(unsigned int **)(param_1 + 0x6c0)) {
        *(unsigned int *)(param_1 + 0x6c0) = *puVar2;
      }
      else {
        *puVar3 = *puVar2;
      }
      if (puVar2 == *(unsigned int **)(param_1 + 0x6c4)) {
        *(unsigned int **)(param_1 + 0x6c4) = puVar3;
      }
      *puVar2 = *(unsigned int *)(param_1 + 0x6c8);
      *(unsigned int **)(param_1 + 0x6c8) = puVar2;
      *(int *)(param_1 + 0x6d4) = *(int *)(param_1 + 0x6d4) + -1;
      RtlLeaveCriticalSection(iVar8);
      return;
    }
    puVar3 = puVar2;
    puVar6 = (unsigned int *)*puVar2;
  }
  piVar1 = *(int **)(param_1 + 0x6e0);
  if (piVar1 == (int *)0x0) {
LAB_83017a1c:
    RtlLeaveCriticalSection(iVar8);
  }
  else {
    do {
      piVar7 = (int *)piVar1[6];
      piVar5 = (int *)0x0;
      while (piVar4 = piVar7, piVar4 != (int *)0x0) {
        if (piVar4[1] == param_2) {
          if (piVar4 == (int *)piVar1[6]) {
            piVar1[6] = *piVar4;
          }
          else {
            *piVar5 = *piVar4;
          }
          if (piVar4 == (int *)piVar1[7]) {
            piVar1[7] = (int)piVar5;
          }
          *piVar4 = piVar1[8];
          piVar1[8] = (int)piVar4;
          piVar1[0xb] = piVar1[0xb] + -1;
          goto LAB_83017a1c;
        }
        piVar5 = piVar4;
        piVar7 = (int *)*piVar4;
      }
      piVar1 = (int *)*piVar1;
    } while (piVar1 != (int *)0x0);
    RtlLeaveCriticalSection(iVar8);
  }
  return;
}

