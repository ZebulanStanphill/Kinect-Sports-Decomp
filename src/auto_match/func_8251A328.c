unsigned char   fn_8251A328(int param_1)

{
  unsigned int iVar1;
  unsigned __int64 uVar2;
  
  if ((*(char *)(param_1 + 8) == '\0') &&
     (((iVar1 = *(int *)(param_1 + 0x50), iVar1 == 0 || (iVar1 == 1)) || (iVar1 == 2)))) {
    uVar2 = 0;
  }
  else {
    uVar2 = 1;
  }
  return uVar2;
}

