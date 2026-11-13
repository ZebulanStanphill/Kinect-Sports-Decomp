extern int fn_82ACA5E0();
extern int fn_82B09C40();
extern int fn_82B83718();


unsigned __int64 fn_82B0AE08(unsigned __int64 param_1,unsigned int param_2)

{
  int iVar1;
  unsigned int *puVar2;
  int iVar3;
  char cVar5;
  int iVar4;
  unsigned int uVar6;
  int iVar7;
  unsigned __int64 uVar8;
  unsigned __int64 uVar9;
  int *piVar10;
  
LAB_82b0ae1c:
  uVar6 = 0;
  iVar7 = 0x2c;
LAB_82b0ae24:
  uVar8 = (unsigned __int64)*(unsigned int *)(param_2 + 8);
  if ((*(unsigned int *)(param_2 + 8) >> 0x13 & 7) <= uVar6) {
    return 0;
  }
  iVar3 = *(int *)(iVar7 + param_2);
  iVar1 = *(int *)(iVar3 + 0xc);
  cVar5 = fn_82ACA5E0(iVar1);
  if ((cVar5 != '\0') && ((*(unsigned int *)(iVar1 + 8) & 0x1c000) < 0x10000)) {
    uVar9 = 0;
    for (piVar10 = (int *)(param_2 + 0x2c);
        ((uVar9 & 0xffffffff) < (uVar8 >> 0x13 & 7) && (*piVar10 != iVar3)); piVar10 = piVar10 + 1)
    {
      if (*(int *)(*piVar10 + 0xc) != iVar1) {
        iVar4 = fn_82B09C40(param_1,iVar1);
        if (iVar4 != 0) {
          fn_82B83718(param_1,*(unsigned int *)(param_2 + 0x1c));
          return 1;
        }
        uVar8 = (unsigned __int64)*(unsigned int *)(param_2 + 8);
        if ((*(unsigned int *)(param_2 + 8) & 0x3f80) == 0x3980) {
          puVar2 = *(unsigned int **)(iVar1 + 4);
          goto LAB_82b0aec0;
        }
      }
      uVar9 = uVar9 + 1;
    }
    goto LAB_82b0af0c;
  }
  goto LAB_82b0af14;
LAB_82b0aec0:
  if (puVar2 == (unsigned int *)0x0) goto LAB_82b0af00;
  param_2 = puVar2[4];
  if (((param_2 != 0) && ((*(unsigned int *)(param_2 + 8) & 0x3f80) == 0x3700)) &&
     ((*puVar2 & 0xe000000) != 0)) goto LAB_82b0af04;
  puVar2 = (unsigned int *)puVar2[2];
  goto LAB_82b0aec0;
LAB_82b0af00:
  param_2 = 0;
LAB_82b0af04:
  if (param_2 != 0) goto LAB_82b0ae1c;
LAB_82b0af0c:
  if (param_2 == 0) {
    return 0;
  }
LAB_82b0af14:
  uVar6 = uVar6 + 1;
  iVar7 = iVar7 + 4;
  goto LAB_82b0ae24;
}

