extern int fn_82CE5410();
extern int fn_82D00FB0();


unsigned __int64 fn_82D02398(int *param_1,int param_2)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  int *piVar6;
  int *piVar7;
  int iVar8;
  int iVar9;
  
  iVar8 = *(int *)(param_2 + 0xc);
  piVar2 = (int *)fn_82CE5410();
  piVar1 = (int *)*piVar2;
  iVar9 = 0;
  *piVar2 = (iVar8 * 4 + 0x7fU & 0xffffff80) + (int)piVar1;
  piVar2 = *(int **)(param_2 + 8);
  piVar6 = (int *)*param_1;
  piVar3 = (int *)(*(int *)(param_2 + 0xc) * param_1[1] + (int)piVar2);
  if (piVar6 != (int *)0x0) {
    piVar7 = piVar1 + -1;
    piVar4 = param_1;
    do {
      piVar5 = piVar6;
      if ((piVar2 <= piVar6) && (piVar6 < piVar3)) {
        piVar7 = piVar7 + 1;
        *piVar7 = (int)piVar6;
        iVar9 = iVar9 + 1;
        *piVar4 = *piVar6;
        piVar5 = piVar4;
      }
      piVar6 = (int *)*piVar6;
      piVar4 = piVar5;
    } while (piVar6 != (int *)0x0);
  }
  piVar6 = (int *)param_1[8];
  if ((piVar6 < piVar2) || (piVar3 <= piVar6)) {
    if (iVar9 != *(int *)(param_2 + 0xc)) goto LAB_82d02494;
  }
  else {
    trapWord(6,(unsigned __int64)(unsigned int)param_1[1],0);
    if ((unsigned int)(param_1[9] - (int)piVar6) / (unsigned int)param_1[1] + iVar9 != *(int *)(param_2 + 0xc)) {
LAB_82d02494:
      if (0 < iVar9) {
        if (1 < iVar9) {
          fn_82D00FB0(piVar1,0,iVar9 + -1,0xffffffff82d01418);
        }
        if (1 < iVar9) {
          iVar8 = iVar9 + -1;
          piVar6 = (int *)*piVar1;
          piVar2 = piVar1;
          do {
            piVar2 = piVar2 + 1;
            piVar3 = (int *)*piVar2;
            *piVar6 = (int)piVar3;
            iVar8 = iVar8 + -1;
            piVar6 = piVar3;
          } while (iVar8 != 0);
        }
        *(int *)piVar1[iVar9 + -1] = *param_1;
        *param_1 = *piVar1;
      }
      piVar2 = (int *)fn_82CE5410();
      *piVar2 = (int)piVar1;
      return 0;
    }
    param_1[8] = 0;
    param_1[9] = 0;
  }
  piVar2 = (int *)fn_82CE5410();
  *piVar2 = (int)piVar1;
  return 1;
}

