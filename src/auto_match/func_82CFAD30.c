typedef unsigned char bool;


bool fn_82CFAD30(int *self)

{
  int iVar1;
  
  iVar1 = (*(int (**)())(*self + 0x2c))();
  self[2] = iVar1;
  return iVar1 == -1;
}

