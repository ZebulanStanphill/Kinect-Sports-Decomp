extern int fn_822315A0();
extern int fn_8223AAC0();


int * fn_822820E0(int *param_1,int param_2,int param_3)

{
  int iVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int *piVar6;
  int *piVar7;
  int iVar8;
  
  piVar6 = *(int **)(param_2 + 4);
  piVar5 = (int *)(param_3 + 0xc);
  if (piVar5 != piVar6) {
    piVar7 = (int *)(param_3 + 8);
    do {
      piVar7[-2] = *piVar5;
      iVar1 = piVar7[3];
      iVar8 = piVar7[2];
      iVar3 = 0;
      iVar4 = 0;
      if (iVar1 != 0) {
        cVar2 = fn_8223AAC0(iVar1);
        if (cVar2 != '\0') {
          iVar3 = iVar8;
          iVar4 = iVar1;
        }
      }
      iVar1 = *piVar7;
      *piVar7 = iVar4;
      piVar7[-1] = iVar3;
      if (iVar1 != 0) {
        fn_822315A0();
      }
      piVar5 = piVar5 + 3;
      piVar7 = piVar7 + 3;
    } while (piVar5 != piVar6);
  }
  iVar1 = *(int *)(param_2 + 4);
  iVar8 = iVar1 + -0xc;
  if (iVar1 + -0xc != iVar1) {
    piVar6 = (int *)(iVar1 + -4);
    do {
      if (*piVar6 != 0) {
        fn_822315A0();
      }
      iVar8 = iVar8 + 0xc;
      piVar6 = piVar6 + 3;
    } while (iVar8 != iVar1);
  }
  iVar1 = *(int *)(param_2 + 4);
  *param_1 = param_3;
  *(int *)(param_2 + 4) = iVar1 + -0xc;
  return param_1;
}

