extern unsigned int lbl_832767D4;
extern unsigned int lbl_832767E8;


void fn_8259EF00(int param_1)

{
  int iVar1;
  
  iVar1 = lbl_832767E8;
  if (*(int *)(*(int *)(param_1 + 4) + 0x9b0) != 0) {
    iVar1 = lbl_832767D4;
  }
  if (iVar1 != 0) {
    (**(int (***)())(**(int **)(iVar1 + 0x1a8) + 4))();
  }
  return;
}

