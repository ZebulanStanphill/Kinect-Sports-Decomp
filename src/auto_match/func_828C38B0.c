extern int fn_8240D928();


unsigned __int64 fn_828C38B0(int param_1,unsigned int param_2)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)**(int **)(param_1 + 0x2e8);
  if (piVar1 != *(int **)(param_1 + 0x2e8)) {
    do {
      iVar2 = fn_8240D928(piVar1[2]);
      if (iVar2 == param_2) {
        return 1;
      }
      piVar1 = (int *)*piVar1;
    } while (piVar1 != (int *)*(int *)(param_1 + 0x2e8));
  }
  return 0;
}

