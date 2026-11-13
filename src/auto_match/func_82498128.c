extern int fn_8248F8E8();
extern int fn_824973B0();
extern int fn_82497430();
extern unsigned int lbl_821BEBB0;


unsigned int * fn_82498128(unsigned int *param_1,int param_2,int *param_3,int *param_4)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  
  piVar4 = (int *)(param_2 + 4);
  if ((param_3 == (int *)**(int **)(param_2 + 4)) && (param_4 == *(int **)(param_2 + 4))) {
    piVar1 = (int *)*piVar4;
    piVar2 = (int *)*piVar1;
    *piVar1 = (int)piVar1;
    *(int *)(*piVar4 + 4) = *piVar4;
    *(unsigned int *)(param_2 + 8) = 0;
    if (piVar2 != (int *)*piVar4) {
      do {
        piVar1 = (int *)*piVar2;
        piVar2[3] = (int)&lbl_821BEBB0;
        fn_8248F8E8();
        piVar2 = piVar1;
      } while (piVar1 != (int *)*piVar4);
    }
    fn_82497430(param_2,8);
    *param_1 = *(unsigned int *)*piVar4;
  }
  else {
    while (piVar1 = param_3, piVar1 != param_4) {
      param_3 = (int *)*piVar1;
      iVar3 = fn_824973B0(param_2,piVar1 + 2);
      piVar2 = (int *)(iVar3 * 8 + *(int *)(param_2 + 0x10));
      if ((int *)piVar2[1] == piVar1) {
        if ((int *)*piVar2 == piVar1) {
          *piVar2 = *piVar4;
          *(int *)(iVar3 * 8 + *(int *)(param_2 + 0x10) + 4) = *piVar4;
        }
        else {
          piVar2[1] = piVar1[1];
        }
      }
      else if ((int *)*piVar2 == piVar1) {
        *piVar2 = *piVar1;
      }
      if (piVar1 != (int *)*piVar4) {
        *(int *)piVar1[1] = *piVar1;
        *(int *)(*piVar1 + 4) = piVar1[1];
        piVar1[3] = (int)&lbl_821BEBB0;
        fn_8248F8E8(piVar1);
        *(int *)(param_2 + 8) = *(int *)(param_2 + 8) + -1;
      }
    }
    *param_1 = piVar1;
  }
  return param_1;
}

