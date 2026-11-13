extern int fn_82BD7F18();
extern int memcpy();


unsigned __int64 fn_82BD94A0(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  unsigned __int64 uVar4;
  int *piVar6;
  unsigned __int64 uVar5;
  unsigned __int64 uVar7;
  int iVar8;
  int *piVar9;
  unsigned __int64 uVar10;
  __int64 lVar11;
  int aiStack_70 [4];
  
  piVar3 = *(int **)(*(int *)(param_1 + 4) + 8);
  iVar8 = 0;
  uVar7 = 1;
  lVar11 = 2;
  piVar9 = aiStack_70;
  piVar6 = (int *)(param_1 + 8);
  do {
    if (*piVar6 == 0) {
      *piVar9 = 0;
    }
    else {
      if (piVar6[2] == 1) {
        *piVar9 = *(int *)(*piVar6 + 8);
      }
      else {
        *piVar9 = 0;
      }
      if (*piVar9 != 0) {
        iVar8 = iVar8 + 1;
      }
    }
    piVar6 = piVar6 + 1;
    piVar9 = piVar9 + 1;
    lVar11 = lVar11 + -1;
  } while (lVar11 != 0);
  if ((piVar3 != (int *)0x0) && (iVar8 != 0)) {
    uVar7 = 0;
    while (((param_2 != 0 && (param_2 = param_2 + -1, piVar3 != (int *)0x0)) && (iVar8 != 0))) {
      piVar6 = aiStack_70;
      lVar11 = 2;
      uVar10 = (unsigned __int64)*(unsigned int *)(*piVar3 + 0xc) - (unsigned __int64)*(unsigned int *)(*piVar3 + 4);
      do {
        piVar9 = (int *)*piVar6;
        if ((piVar9 != (int *)0x0) &&
           (((unsigned __int64)*(unsigned int *)(*piVar9 + 0xc) - (unsigned __int64)*(unsigned int *)(*piVar9 + 4) & 0xffffffff)
            <= (uVar10 & 0xffffffff))) {
          uVar10 = (unsigned __int64)*(unsigned int *)(*piVar9 + 0xc) - (unsigned __int64)*(unsigned int *)(*piVar9 + 4);
        }
        piVar6 = piVar6 + 1;
        lVar11 = lVar11 + -1;
      } while (lVar11 != 0);
      piVar9 = aiStack_70;
      lVar11 = 2;
      piVar6 = (int *)(param_1 + 8);
      do {
        piVar1 = (int *)*piVar9;
        if (piVar1 != (int *)0x0) {
          memcpy((unsigned __int64)*(unsigned int *)(*piVar1 + 8) + (unsigned __int64)*(unsigned int *)(*piVar1 + 4),
                       (unsigned __int64)*(unsigned int *)(*piVar3 + 8) + (unsigned __int64)*(unsigned int *)(*piVar3 + 4),uVar10)
          ;
          iVar2 = *piVar1;
          uVar4 = *(unsigned int *)(iVar2 + 4) + uVar10;
          uVar5 = (unsigned __int64)*(unsigned int *)(iVar2 + 0xc);
          if ((uVar4 & 0xffffffff) < (unsigned __int64)*(unsigned int *)(iVar2 + 0xc)) {
            uVar5 = uVar4;
          }
          *(int *)(iVar2 + 4) = (int)uVar5;
          if ((uVar5 & 0xffffffff) == (unsigned __int64)*(unsigned int *)(*piVar1 + 0xc)) {
            iVar2 = fn_82BD7F18(*piVar6,piVar1);
            *piVar9 = iVar2;
            if (iVar2 == 0) {
              iVar8 = iVar8 + -1;
            }
          }
        }
        lVar11 = lVar11 + -1;
        piVar6 = piVar6 + 1;
        piVar9 = piVar9 + 1;
      } while (lVar11 != 0);
      iVar2 = *piVar3;
      uVar10 = *(unsigned int *)(iVar2 + 4) + uVar10;
      uVar5 = (unsigned __int64)*(unsigned int *)(iVar2 + 0xc);
      if ((uVar10 & 0xffffffff) < (unsigned __int64)*(unsigned int *)(iVar2 + 0xc)) {
        uVar5 = uVar10;
      }
      *(int *)(iVar2 + 4) = (int)uVar5;
      if ((uVar5 & 0xffffffff) == (unsigned __int64)*(unsigned int *)(*piVar3 + 0xc)) {
        piVar3 = (int *)fn_82BD7F18(*(unsigned int *)(param_1 + 4),piVar3);
      }
    }
  }
  return uVar7;
}

