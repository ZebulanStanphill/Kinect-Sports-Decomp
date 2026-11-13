typedef unsigned char bool;
#define true 1
#define false 0
extern int fn_82415090();
extern int fn_82427540();


unsigned __int64 fn_824276D0(int *param_1,unsigned int *param_2,unsigned int param_3)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  unsigned int *puVar4;
  int iVar5;
  unsigned __int64 uVar6;
  unsigned int uVar9;
  unsigned __int64 uVar7;
  unsigned __int64 uVar8;
  bool bVar10;
  
  iVar1 = *param_1;
  uVar6 = fn_82427540(param_1,iVar1);
  iVar5 = *(int *)((iVar1 + -1) * 4 + param_1[1]);
  piVar2 = *(int **)(iVar5 + 4);
  if ((piVar2 == (int *)0x0) || (bVar10 = true, *piVar2 != 10)) {
    bVar10 = false;
  }
  if (!bVar10) {
    if (piVar2 == (int *)0x0) {
LAB_82427764:
      bVar10 = false;
    }
    else {
      piVar3 = *(int **)(iVar5 + 8);
      if (piVar3 == (int *)0x0) goto LAB_82427764;
      bVar10 = true;
      if (*piVar3 + *piVar2 != 10) goto LAB_82427764;
    }
    if (!bVar10) {
      uVar9 = fn_82415090();
      goto LAB_82427780;
    }
  }
  uVar9 = 10;
LAB_82427780:
  bVar10 = true;
  puVar4 = (unsigned int *)param_2[1];
  for (param_2 = (unsigned int *)*param_2; param_2 != puVar4; param_2 = param_2 + 1) {
    uVar7 = fn_82427540(*param_2,iVar1);
    bVar10 = (bool)(uVar6 < uVar7 & bVar10);
  }
  if ((!bVar10) || (uVar8 = 1, param_3 < uVar9)) {
    uVar8 = 0;
  }
  return uVar8;
}

