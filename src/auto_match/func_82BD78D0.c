extern int fn_82BD7F18();
extern int fn_82BDD190();
extern int memcpy();
extern int memset();


unsigned __int64 fn_82BD78D0(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  int *piVar5;
  unsigned __int64 uVar4;
  unsigned __int64 uVar6;
  unsigned int uVar7;
  unsigned __int64 uVar8;
  int iVar9;
  int *piVar10;
  int iVar11;
  __int64 lVar12;
  __int64 lVar13;
  int aiStack_70 [1];
  
  piVar3 = *(int **)(*(int *)(param_1 + 4) + 8);
  iVar9 = 0;
  uVar8 = 1;
  lVar13 = 2;
  piVar10 = aiStack_70;
  piVar5 = (int *)(param_1 + 8);
  do {
    if (*piVar5 == 0) {
      *piVar10 = 0;
    }
    else {
      if (piVar5[2] == 1) {
        *piVar10 = *(int *)(*piVar5 + 8);
      }
      else {
        *piVar10 = 0;
      }
      if (*piVar10 != 0) {
        iVar9 = iVar9 + 1;
      }
    }
    piVar5 = piVar5 + 1;
    piVar10 = piVar10 + 1;
    lVar13 = lVar13 + -1;
  } while (lVar13 != 0);
  if ((piVar3 != (int *)0x0) && (iVar9 != 0)) {
    uVar8 = 0;
    while (((param_2 != 0 && (param_2 = param_2 + -1, piVar3 != (int *)0x0)) && (iVar9 != 0))) {
      memcpy(param_1 + 0x1f80,
                   (unsigned __int64)*(unsigned int *)(*piVar3 + 8) + (unsigned __int64)*(unsigned int *)(*piVar3 + 4),
                   *(unsigned int *)(*(int *)(param_1 + 0x18) + 0x18));
      iVar11 = param_1 + 0x1d00;
      iVar2 = fn_82BDD190(param_1 + 0x20,0,param_1 + 0x1f80,iVar11);
      if (iVar2 != 0) {
                    /* WARNING: Subroutine does not return */
        memset(iVar11,0,0x280);
      }
      piVar10 = aiStack_70;
      lVar13 = 2;
      piVar5 = (int *)(param_1 + 8);
      do {
        piVar1 = (int *)*piVar10;
        if (piVar1 != (int *)0x0) {
          lVar12 = 0x280;
          if ((unsigned int)(*(int *)(*piVar1 + 0xc) - *(int *)(*piVar1 + 4)) < 0x281) {
            lVar12 = (unsigned __int64)*(unsigned int *)(*piVar1 + 0xc) - (unsigned __int64)*(unsigned int *)(*piVar1 + 4);
          }
          memcpy((unsigned __int64)*(unsigned int *)(*piVar1 + 8) + (unsigned __int64)*(unsigned int *)(*piVar1 + 4),iVar11,
                       lVar12);
          iVar2 = *piVar1;
          uVar4 = (unsigned __int64)*(unsigned int *)(iVar2 + 4) + lVar12;
          uVar6 = (unsigned __int64)*(unsigned int *)(iVar2 + 0xc);
          if ((uVar4 & 0xffffffff) < (unsigned __int64)*(unsigned int *)(iVar2 + 0xc)) {
            uVar6 = uVar4;
          }
          *(int *)(iVar2 + 4) = (int)uVar6;
          if ((uVar6 & 0xffffffff) == (unsigned __int64)*(unsigned int *)(*piVar1 + 0xc)) {
            iVar2 = fn_82BD7F18(*piVar5,piVar1);
            *piVar10 = iVar2;
            if (iVar2 == 0) {
              iVar9 = iVar9 + -1;
            }
          }
        }
        lVar13 = lVar13 + -1;
        piVar5 = piVar5 + 1;
        piVar10 = piVar10 + 1;
      } while (lVar13 != 0);
      iVar2 = *piVar3;
      uVar7 = *(unsigned int *)(iVar2 + 0xc);
      if (*(int *)(iVar2 + 4) + 0x280U < *(unsigned int *)(iVar2 + 0xc)) {
        uVar7 = *(int *)(iVar2 + 4) + 0x280;
      }
      *(unsigned int *)(iVar2 + 4) = uVar7;
      if (uVar7 == *(unsigned int *)(*piVar3 + 0xc)) {
        piVar3 = (int *)fn_82BD7F18(*(unsigned int *)(param_1 + 4),piVar3);
      }
    }
  }
  return uVar8;
}

