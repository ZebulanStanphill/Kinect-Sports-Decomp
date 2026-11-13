extern unsigned int lbl_8326B394;


void fn_825F0D40(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)(**(int (***)())(**(int **)(param_1 + 0x40) + 0x3c))();
  param_2 = param_2 * 4;
  if (*(int *)(*(int *)(param_1 + 0xb8) + param_2) == 0) {
    iVar2 = *(int *)(*(int *)(param_1 + 0x44) + 4) * 4;
    *(unsigned int *)(*(int *)piVar1[1] + iVar2) = *(unsigned int *)(*(int *)(*piVar1 + 0x98) + iVar2);
  }
  else if (*(int *)(param_1 + 0x44) == 0) {
    iVar2 = *(int *)(*(int *)(param_1 + 0xb0) + param_2);
    if (iVar2 == 0) {
      iVar2 = lbl_8326B394;
    }
    *(int *)(*(int *)(param_1 + 0x40) + 0x19c) = iVar2;
  }
  else {
    *(unsigned int *)(*(int *)(*(int *)(param_1 + 0x44) + 4) * 4 + *(int *)piVar1[1]) =
         *(unsigned int *)(*(int *)(param_1 + 0xb8) + param_2);
  }
  return;
}

