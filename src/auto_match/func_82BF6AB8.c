extern int fn_82BE8D28();


unsigned __int64 fn_82BF6AB8(int param_1,unsigned int param_2)

{
  unsigned __int64 uVar1;
  
  if (param_2 == 0) {
    uVar1 = 0;
  }
  else {
    if ((*(unsigned int *)(param_1 + 8) == 0) && (*(unsigned int *)(param_1 + 0x10) == 0)) {
      *(unsigned int *)(param_1 + 8) = param_2;
    }
    else {
      *(unsigned int *)(*(unsigned int *)(param_1 + 0xc) + 8) = param_2;
      *(unsigned int *)(param_2 + 0xc) = *(unsigned int *)(param_1 + 0xc);
    }
    *(unsigned int *)(param_1 + 0xc) = param_2;
    *(unsigned int *)(param_1 + 0x10) = *(unsigned int *)(param_1 + 0x10) + 1;
    fn_82BE8D28(param_2);
    uVar1 = 1;
  }
  return uVar1;
}

