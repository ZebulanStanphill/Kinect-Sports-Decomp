extern int fn_8240D928();


int fn_828C39A0(int param_1,unsigned int param_2)

{
  int iVar1;
  int *piVar2;
  
  piVar2 = (int *)**(int **)(param_1 + 0x2e8);
  if (piVar2 != *(int **)(param_1 + 0x2e8)) {
    do {
      iVar1 = fn_8240D928(piVar2[2]);
      if (iVar1 == param_2) break;
      piVar2 = (int *)*piVar2;
    } while (piVar2 != (int *)*(int *)(param_1 + 0x2e8));
  }
  iVar1 = 0;
  if (piVar2 != *(int **)(param_1 + 0x2e8)) {
    iVar1 = piVar2[2];
  }
  return iVar1;
}

