extern int fn_822315A0();
extern int fn_8223AAC0();
extern int fn_8265CA20();


int * fn_823A73C0(int *param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  
  *param_1 = 0;
  param_1[1] = 0;
  if (*(int *)(param_2 + 0x14) != 0) {
    iVar1 = *(int *)(**(int **)(param_2 + 0x10) + 0xc);
    iVar2 = *(int *)(**(int **)(param_2 + 0x10) + 8);
    iVar5 = 0;
    iVar6 = 0;
    if ((iVar1 != 0) && (cVar4 = fn_8223AAC0(iVar1), cVar4 != '\0')) {
      iVar5 = iVar2;
      iVar6 = iVar1;
    }
    iVar1 = param_1[1];
    param_1[1] = iVar6;
    *param_1 = iVar5;
    if (iVar1 != 0) {
      fn_822315A0();
    }
    if ((*(int *)*param_1 == param_3) && (((int *)*param_1)[1] == param_4)) {
      piVar3 = (int *)**(int **)(param_2 + 0x10);
      if (piVar3 != *(int **)(param_2 + 0x10)) {
        *(int *)piVar3[1] = *piVar3;
        *(int *)(*piVar3 + 4) = piVar3[1];
        if (piVar3[3] != 0) {
          fn_822315A0();
        }
        fn_8265CA20(piVar3);
        *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + -1;
      }
    }
    else {
      iVar1 = param_1[1];
      param_1[1] = 0;
      *param_1 = 0;
      if (iVar1 != 0) {
        fn_822315A0();
      }
    }
  }
  return param_1;
}

