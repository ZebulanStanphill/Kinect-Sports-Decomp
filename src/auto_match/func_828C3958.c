extern int fn_828D85F8();


void fn_828C3958(int param_1,unsigned __int64 param_2)

{
  int *piVar1;
  
  piVar1 = (int *)**(int **)(param_1 + 0x2e8);
  if (piVar1 != *(int **)(param_1 + 0x2e8)) {
    do {
      fn_828D85F8(piVar1[2],param_2);
      piVar1 = (int *)*piVar1;
    } while (piVar1 != (int *)*(int *)(param_1 + 0x2e8));
  }
  return;
}

