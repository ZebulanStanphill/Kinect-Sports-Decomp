extern int fn_82A1BB18();


unsigned __int64 fn_82A5B680(int param_1,unsigned int param_2)

{
  int iVar2;
  unsigned __int64 uVar1;
  
  if (((param_2 == 0) || (param_2 == -2)) &&
     ((*(unsigned int *)(param_1 + 0x14) == 0 || (iVar2 = fn_82A1BB18(), iVar2 == *(unsigned int *)(param_1 + 0x14)))
     )) {
    uVar1 = 1;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}

