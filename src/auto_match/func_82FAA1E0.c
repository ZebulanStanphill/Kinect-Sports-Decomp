unsigned __int64 fn_82FAA1E0(int param_1,unsigned int *param_2)

{
  int *piVar1;
  
  piVar1 = *(int **)(param_1 + 0x2c);
  if (piVar1 != (int *)0x0) {
    do {
      if ((piVar1[1] == *param_2) && (0 < piVar1[3])) {
        return 0;
      }
      piVar1 = (int *)*piVar1;
    } while (piVar1 != (int *)0x0);
  }
  return 1;
}

