extern unsigned int lbl_82002AE0;


void fn_8309CB18(int param_1,int param_2,int param_3)

{
  int iVar1;
  
  iVar1 = 0;
  *(unsigned int *)(param_1 + 0x1c) = lbl_82002AE0;
  *(unsigned char *)(param_1 + 0x20) = 0;
  *(unsigned int *)(param_1 + 0x2c) = *(unsigned int *)(param_2 + 0x30);
  *(unsigned int *)(param_1 + 0x30) = *(unsigned int *)(param_2 + 0x30);
  *(int *)(param_1 + 0x28) = param_2;
  *(unsigned int *)(param_1 + 0x60) = *(unsigned int *)(param_2 + 0x24);
  *(int *)(param_1 + 0x24) = param_2;
  if ((*(char *)(param_2 + 0x20) != '\0') && (param_3 != 0)) {
    iVar1 = param_3 + 0x10;
  }
  *(int *)(param_1 + 100) = iVar1;
  return;
}

