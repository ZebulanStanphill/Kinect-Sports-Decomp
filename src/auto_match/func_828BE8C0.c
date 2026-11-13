typedef unsigned char bool;


bool fn_828BE8C0(int param_1,char param_2)

{
  int iVar1;
  
  iVar1 = -0x7cdebf94;
  if (param_2 == '\0') {
    iVar1 = -0x7cdebf90;
  }
  return (*(unsigned int *)(param_1 * 0x1c + iVar1) & 4) != 0;
}

