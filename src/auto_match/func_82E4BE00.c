extern int fn_82E913E0();


unsigned __int64 fn_82E4BE00(int param_1,unsigned __int64 param_2)

{
  int iVar1;
  
  iVar1 = fn_82E913E0(*(unsigned int *)(param_1 + 0x230),param_2,0);
  if (iVar1 == 0) {
    return 0xffffffffffffff9c;
  }
  *(int *)(param_1 + 0x238) = *(int *)(param_1 + 0x238) + 1;
  return 0;
}

