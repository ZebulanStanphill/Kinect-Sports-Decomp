extern int fn_82F63CA0();


void fn_8282EC60(int *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  unsigned int uVar4;
  int *piVar5;
  int *piVar6;
  
  if ((param_1 != param_2) && (piVar6 = param_1 + 1, piVar6 != param_2)) {
    do {
      iVar1 = *piVar6;
      uVar4 = *(int *)(iVar1 + 4) + *(int *)(iVar1 + 0xc);
      if (*(unsigned int *)(*param_1 + 0xc) < uVar4) {
        iVar2 = piVar6[-1];
        piVar3 = piVar6;
        piVar5 = piVar6 + -1;
        while (uVar4 <= *(unsigned int *)(iVar2 + 0xc)) {
          *piVar3 = iVar2;
          iVar2 = piVar5[-1];
          piVar3 = piVar5;
          piVar5 = piVar5 + -1;
          uVar4 = *(int *)(iVar1 + 4) + *(int *)(iVar1 + 0xc);
        }
        *piVar3 = iVar1;
      }
      else {
        fn_82F63CA0(piVar6 + (1 - ((int)piVar6 - (int)param_1 >> 2)),param_1);
        *param_1 = iVar1;
      }
      piVar6 = piVar6 + 1;
    } while (piVar6 != param_2);
  }
  return;
}

