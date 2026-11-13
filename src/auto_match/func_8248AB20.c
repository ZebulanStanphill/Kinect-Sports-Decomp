extern int fn_8248C128();


void fn_8248AB20(int param_1)

{
  int iVar1;
  
  if (*(unsigned int *)(param_1 + 0x88) != 0) {
    iVar1 = *(unsigned int *)(param_1 + 0x80);
    if ((*(unsigned int *)(iVar1 + 0x18) == 0) || (*(unsigned int *)(iVar1 + 8) == 0)) {
      *(unsigned int *)(iVar1 + 0x58) = 0;
    }
    else {
      *(unsigned int *)(iVar1 + 0x58) = 1;
    }
  }
  fn_8248C128(param_1);
  *(unsigned int *)(*(unsigned int *)(param_1 + 0x80) + 0x58) = 0;
  return;
}

