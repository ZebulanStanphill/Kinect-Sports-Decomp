typedef unsigned char bool;


bool fn_82CFAD30(int *param_1)

{
  int iVar1;
  
  iVar1 = (*(int (**)())(*param_1 + 0x2c))();
  param_1[2] = iVar1;
  return iVar1 == -1;
}

