extern int fn_8248F8E8();
extern int fn_82492768();
extern int fn_824973B0();
extern int fn_82497430();


unsigned int * fn_82498FE8(unsigned int *param_1,int param_2,int *param_3,int *param_4)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  
  piVar3 = (int *)(param_2 + 4);
  if ((param_3 == (int *)**(int **)(param_2 + 4)) && (param_4 == *(int **)(param_2 + 4))) {
    piVar2 = (int *)*piVar3;
    piVar4 = (int *)*piVar2;
    *piVar2 = (int)piVar2;
    *(int *)(*piVar3 + 4) = *piVar3;
    *(unsigned int *)(param_2 + 8) = 0;
    if (piVar4 != (int *)*piVar3) {
      do {
        piVar2 = (int *)*piVar4;
        fn_82492768(piVar4 + 3);
        fn_8248F8E8(piVar4);
        piVar4 = piVar2;
      } while (piVar2 != (int *)*piVar3);
    }
    fn_82497430(param_2,8);
    *param_1 = *(unsigned int *)*piVar3;
  }
  else {
    while (piVar2 = param_3, piVar2 != param_4) {
      param_3 = (int *)*piVar2;
      iVar1 = fn_824973B0(param_2,piVar2 + 2);
      piVar4 = (int *)(iVar1 * 8 + *(int *)(param_2 + 0x10));
      if ((int *)piVar4[1] == piVar2) {
        if ((int *)*piVar4 == piVar2) {
          *piVar4 = *piVar3;
          *(int *)(iVar1 * 8 + *(int *)(param_2 + 0x10) + 4) = *piVar3;
        }
        else {
          piVar4[1] = piVar2[1];
        }
      }
      else if ((int *)*piVar4 == piVar2) {
        *piVar4 = *piVar2;
      }
      if (piVar2 != (int *)*piVar3) {
        *(int *)piVar2[1] = *piVar2;
        *(int *)(*piVar2 + 4) = piVar2[1];
        fn_82492768(piVar2 + 3);
        fn_8248F8E8(piVar2);
        *(int *)(param_2 + 8) = *(int *)(param_2 + 8) + -1;
      }
    }
    *param_1 = piVar2;
  }
  return param_1;
}

