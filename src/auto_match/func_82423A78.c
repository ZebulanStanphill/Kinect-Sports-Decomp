extern unsigned int lbl_8218EC10;


void fn_82423A78(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 8);
  if (param_2 == 0) {
    if (*(int *)(param_1 + 4) != *(int *)(iVar1 + 0x2b20)) {
      return;
    }
    *(unsigned int *)(iVar1 + 0x2b38) = 0x1d;
    *(unsigned int *)(iVar1 + 0x2b3c) = 1;
  }
  else {
    if (*(int *)(param_1 + 4) != *(int *)(iVar1 + 0x2b20)) {
      return;
    }
    *(unsigned int *)(iVar1 + 0x2b38) = 1;
    *(unsigned int *)(iVar1 + 0x2b3c) = 1;
  }
  *(unsigned int *)(iVar1 + 0x2b34) = lbl_8218EC10;
  return;
}

