extern int fn_82BE8D28();


unsigned __int64 fn_82BF8958(int param_1,unsigned int param_2)

{
  unsigned __int64 uVar1;
  
  if (((param_2 == 0) || (*(unsigned int *)(param_2 + 8) == 0)) || (*(unsigned int *)(param_2 + 0xc) == 0)) {
    uVar1 = 0;
  }
  else {
    *(unsigned int *)(param_1 + 0xc) = param_2;
    fn_82BE8D28(param_2);
    uVar1 = 1;
  }
  return uVar1;
}

