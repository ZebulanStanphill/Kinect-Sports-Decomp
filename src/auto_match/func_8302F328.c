extern int fn_83021C40();


unsigned __int64 fn_8302F328(int param_1,int param_2,unsigned __int64 param_3)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  
  if ((int)param_3 == 0) {
    return 0x1f;
  }
  piVar2 = *(int **)(param_1 + 0xc4);
  if (piVar2 != (int *)0x0) {
    while (piVar2[1] != param_2) {
      piVar2 = (int *)*piVar2;
      if (piVar2 == (int *)0x0) {
        return 1;
      }
    }
    piVar1 = piVar2 + 2;
    if (piVar1 != (int *)0x0) {
      for (piVar3 = (int *)*piVar1; (piVar3 != (int *)piVar2[3] && (*piVar3 != (int)param_3));
          piVar3 = piVar3 + 1) {
      }
      if ((-(unsigned int)((int *)piVar2[3] != piVar3) & (unsigned int)piVar3) != 0) {
        fn_83021C40(piVar1,param_3);
      }
    }
  }
  return 1;
}

