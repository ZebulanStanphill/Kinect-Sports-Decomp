unsigned __int64 fn_8231FE40(int param_1,int param_2)

{
  unsigned int iVar1;
  
  iVar1 = *(int *)(*(int *)(param_2 + 0x110) + 0x18);
  if (((iVar1 != 0xc) && (iVar1 != 0xd)) && (iVar1 != 0x1d)) {
    return 1;
  }
  *(int *)(param_1 + 4) = param_2;
  return 0;
}

