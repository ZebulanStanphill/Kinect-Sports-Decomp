extern int fn_82F63CA0();


unsigned __int64 fn_8286D8D0(int param_1,int *param_2)

{
  int *piVar1;
  int *piVar2;
  
  piVar1 = *(int **)(param_1 + 8);
  piVar2 = *(int **)(param_1 + 4);
  if (piVar2 != piVar1) {
    do {
      if (*piVar2 == *param_2) break;
      piVar2 = piVar2 + 1;
    } while (piVar2 != piVar1);
    if (piVar2 != piVar1) {
      fn_82F63CA0(piVar2,piVar2 + 1,(*(int *)(param_1 + 8) - (int)(piVar2 + 1) >> 2) << 2);
      *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + -4;
      piVar1 = (int *)*param_2;
      if (piVar1 != (int *)0x0) {
        (**(int (***)())(*piVar1 + 0x30))(piVar1,1);
      }
      *param_2 = 0;
      return 0x20370000;
    }
  }
  return 0xffffffffa0370000;
}

