void fn_8270D668(unsigned int *param_1)

{
  unsigned int uVar1;
  
  uVar1 = param_1[0x15];
  param_1[0x15] = (int)(uVar1 - 1);
  if (uVar1 - 1 == 0) {
    (*(int (**)())(**(int **)(*param_1 + 0xc) + 0x74))(*(int **)(*param_1 + 0xc));
    param_1[0x14] = 0;
  }
  return;
}

