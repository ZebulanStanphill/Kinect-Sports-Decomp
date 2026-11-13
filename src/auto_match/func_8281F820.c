extern unsigned int lbl_8320A63C;


void fn_8281F820(int param_1)

{
  int iVar1;
  int *piVar2;
  
  if (lbl_8320A63C == param_1) {
    lbl_8320A63C = *(int *)(param_1 + 8);
  }
  else {
    piVar2 = (int *)(lbl_8320A63C + 8);
    iVar1 = *(int *)(lbl_8320A63C + 8);
    while (iVar1 != param_1) {
      piVar2 = (int *)(*piVar2 + 8);
      iVar1 = *piVar2;
    }
    *piVar2 = *(int *)(param_1 + 8);
  }
  *(unsigned int *)(param_1 + 8) = 0;
  *(unsigned char *)(param_1 + 0xc) = 0;
  return;
}

