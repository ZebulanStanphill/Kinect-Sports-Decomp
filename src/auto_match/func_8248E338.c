extern int fn_82231540();
extern int fn_822315A0();
extern int fn_823F2E20();


void fn_8248E338(int param_1,int *param_2)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  
  piVar1 = *(int **)(param_1 + 0x50);
  piVar2 = *(int **)(param_1 + 0x4c);
  if (piVar2 != piVar1) {
    do {
      if (*piVar2 == *param_2) break;
      piVar2 = piVar2 + 2;
    } while (piVar2 != piVar1);
    if (piVar2 != piVar1) {
      piVar1 = *(int **)(param_1 + 0x50);
      piVar4 = piVar2 + 2;
      if (piVar4 != piVar1) {
        iVar3 = (int)piVar2 - (int)piVar4;
        do {
          fn_823F2E20(iVar3 + (int)piVar4,piVar4);
          piVar4 = piVar4 + 2;
        } while (piVar4 != piVar1);
      }
      fn_82231540((unsigned __int64)*(unsigned int *)(param_1 + 0x50) - 8);
      *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + -8;
      piVar1 = *(int **)(param_1 + 0x50);
      piVar2 = *(int **)(param_1 + 0x4c);
      if (piVar2 != piVar1) {
        do {
          if (*piVar2 == *param_2) break;
          piVar2 = piVar2 + 2;
        } while (piVar2 != piVar1);
        if (piVar2 != piVar1) goto LAB_8248e410;
      }
      (**(int (***)())(*(int *)*param_2 + 0x10))();
    }
  }
LAB_8248e410:
  if (param_2[1] != 0) {
    fn_822315A0();
  }
  return;
}

