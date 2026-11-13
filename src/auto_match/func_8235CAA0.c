unsigned __int64 fn_8235CAA0(int param_1)

{
  int iVar1;
  
  if ((*(unsigned int *)(param_1 + 0x15cc) != 0 && (*(unsigned int *)(param_1 + 0x15cc) & 0xff000000) < 0x7a000000)
     && ((iVar1 = *(int *)(param_1 + 0xa0), iVar1 == 0 ||
         ((*(int *)(iVar1 + 0x40) != 1 && ((iVar1 == 0 || (*(int *)(iVar1 + 0x40) != 2)))))))) {
    return 1;
  }
  return 0;
}

