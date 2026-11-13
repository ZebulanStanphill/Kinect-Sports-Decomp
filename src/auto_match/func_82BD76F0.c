extern int fn_82BD7F18();
extern int fn_82BDC9A8();
extern int fn_82F68CC0();


unsigned __int64 fn_82BD76F0(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  unsigned int uVar5;
  unsigned int uVar6;
  int iVar7;
  unsigned __int64 uVar8;
  int *piVar9;
  __int64 lVar10;
  int aiStack_70 [28];
  
  piVar3 = *(int **)(*(int *)(param_1 + 4) + 8);
  iVar7 = 0;
  uVar8 = 1;
  lVar10 = 2;
  piVar9 = aiStack_70;
  piVar4 = (int *)(param_1 + 8);
  do {
    if (*piVar4 == 0) {
      *piVar9 = 0;
    }
    else {
      if (piVar4[2] == 1) {
        *piVar9 = *(int *)(*piVar4 + 8);
      }
      else {
        *piVar9 = 0;
      }
      if (*piVar9 != 0) {
        iVar7 = iVar7 + 1;
      }
    }
    piVar4 = piVar4 + 1;
    piVar9 = piVar9 + 1;
    lVar10 = lVar10 + -1;
  } while (lVar10 != 0);
  if ((piVar3 != (int *)0x0) && (iVar7 != 0)) {
    while ((uVar8 = 0, param_2 != 0 &&
           ((param_2 = param_2 + -1, piVar3 != (int *)0x0 && (iVar7 != 0))))) {
      fn_82F68CC0(param_1 + 0x1e80,
                   (unsigned __int64)*(unsigned int *)(*piVar3 + 8) + (unsigned __int64)*(unsigned int *)(*piVar3 + 4),
                   *(unsigned int *)(*(int *)(param_1 + 0x18) + 0x18));
      fn_82BDC9A8(param_1 + 0x40,0,param_1 + 0x1e80,param_1 + 0x2100);
      piVar9 = aiStack_70;
      lVar10 = 2;
      piVar4 = (int *)(param_1 + 8);
      do {
        piVar1 = (int *)*piVar9;
        if (piVar1 != (int *)0x0) {
          fn_82F68CC0((unsigned __int64)*(unsigned int *)(*piVar1 + 8) + (unsigned __int64)*(unsigned int *)(*piVar1 + 4),
                       param_1 + 0x2100,0x28);
          iVar2 = *piVar1;
          uVar6 = *(unsigned int *)(iVar2 + 0xc);
          if (*(int *)(iVar2 + 4) + 0x28U < *(unsigned int *)(iVar2 + 0xc)) {
            uVar6 = *(int *)(iVar2 + 4) + 0x28;
          }
          *(unsigned int *)(iVar2 + 4) = uVar6;
          if (uVar6 == *(unsigned int *)(*piVar1 + 0xc)) {
            iVar2 = fn_82BD7F18(*piVar4,piVar1);
            *piVar9 = iVar2;
            if (iVar2 == 0) {
              iVar7 = iVar7 + -1;
            }
          }
        }
        lVar10 = lVar10 + -1;
        piVar4 = piVar4 + 1;
        piVar9 = piVar9 + 1;
      } while (lVar10 != 0);
      iVar2 = *piVar3;
      uVar5 = *(int *)(iVar2 + 4) + *(int *)(*(int *)(param_1 + 0x18) + 0x18);
      uVar6 = *(unsigned int *)(iVar2 + 0xc);
      if (uVar5 < *(unsigned int *)(iVar2 + 0xc)) {
        uVar6 = uVar5;
      }
      *(unsigned int *)(iVar2 + 4) = uVar6;
      if (uVar6 == *(unsigned int *)(*piVar3 + 0xc)) {
        piVar3 = (int *)fn_82BD7F18(*(unsigned int *)(param_1 + 4),piVar3);
      }
    }
  }
  return uVar8;
}

