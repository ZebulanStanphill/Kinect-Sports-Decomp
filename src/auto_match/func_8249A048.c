extern int fn_8248F8E8();
extern int fn_82491E88();
extern int fn_824973B0();
extern int fn_82497430();
extern unsigned int lbl_821BEBB0;
extern unsigned int lbl_821BEBB8;


unsigned int * fn_8249A048(unsigned int *param_1,int param_2,int *param_3,int *param_4)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  
  piVar4 = (int *)(param_2 + 4);
  if ((param_3 == (int *)**(int **)(param_2 + 4)) && (param_4 == *(int **)(param_2 + 4))) {
    piVar1 = (int *)*piVar4;
    piVar3 = (int *)*piVar1;
    *piVar1 = (int)piVar1;
    *(int *)(*piVar4 + 4) = *piVar4;
    *(unsigned int *)(param_2 + 8) = 0;
    if (piVar3 != (int *)*piVar4) {
      do {
        piVar1 = (int *)*piVar3;
        piVar3[8] = (int)&lbl_821BEBB8;
        fn_82491E88(piVar3 + 0x1c);
        piVar3[8] = (int)&lbl_821BEBB0;
        fn_8248F8E8(piVar3);
        piVar3 = piVar1;
      } while (piVar1 != (int *)*piVar4);
    }
    fn_82497430(param_2,8);
    *param_1 = *(unsigned int *)*piVar4;
  }
  else {
    while (piVar1 = param_3, piVar1 != param_4) {
      param_3 = (int *)*piVar1;
      iVar2 = fn_824973B0(param_2,piVar1 + 4);
      piVar3 = (int *)(iVar2 * 8 + *(int *)(param_2 + 0x10));
      if ((int *)piVar3[1] == piVar1) {
        if ((int *)*piVar3 == piVar1) {
          *piVar3 = *piVar4;
          piVar3 = (int *)(iVar2 * 8 + *(int *)(param_2 + 0x10));
          iVar2 = *piVar4;
        }
        else {
          iVar2 = piVar1[1];
        }
        piVar3[1] = iVar2;
      }
      else if ((int *)*piVar3 == piVar1) {
        *piVar3 = *piVar1;
      }
      if (piVar1 != (int *)*piVar4) {
        *(int *)piVar1[1] = *piVar1;
        *(int *)(*piVar1 + 4) = piVar1[1];
        piVar1[8] = (int)&lbl_821BEBB8;
        fn_82491E88(piVar1 + 0x1c);
        piVar1[8] = (int)&lbl_821BEBB0;
        fn_8248F8E8(piVar1);
        *(int *)(param_2 + 8) = *(int *)(param_2 + 8) + -1;
      }
    }
    *param_1 = piVar1;
  }
  return param_1;
}

