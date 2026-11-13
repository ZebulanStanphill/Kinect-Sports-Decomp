extern int fn_82522ED8();


unsigned __int64 fn_824F2EA8(int param_1,int *param_2)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  
  if (*(int **)(param_1 + 0xc) != (int *)0x0) {
    piVar2 = (int *)0x0;
    piVar3 = *(int **)(param_1 + 0xc);
    do {
      if (**(int **)(*piVar3 + 4) == *param_2) {
        if (piVar2 != (int *)0x0) goto LAB_824f2f48;
        *(int *)(param_1 + 0xc) = piVar3[1];
        goto LAB_824f2f5c;
      }
      piVar1 = piVar3 + 1;
      piVar2 = piVar3;
      piVar3 = (int *)*piVar1;
    } while ((int *)*piVar1 != (int *)0x0);
  }
  if (*(int **)(param_1 + 0x10) != (int *)0x0) {
    piVar2 = (int *)0x0;
    piVar3 = *(int **)(param_1 + 0x10);
    do {
      if (**(int **)(*piVar3 + 4) == *param_2) {
        if (piVar2 == (int *)0x0) {
          *(int *)(param_1 + 0x10) = piVar3[1];
        }
        else {
LAB_824f2f48:
          piVar2[1] = piVar3[1];
        }
LAB_824f2f5c:
        piVar2 = (int *)*piVar3;
        if (piVar2 != (int *)0x0) {
          (**(int (***)())(*piVar2 + 0xc))(piVar2,1);
        }
        fn_82522ED8(piVar3);
        return 1;
      }
      piVar1 = piVar3 + 1;
      piVar2 = piVar3;
      piVar3 = (int *)*piVar1;
    } while ((int *)*piVar1 != (int *)0x0);
  }
  return 0;
}

