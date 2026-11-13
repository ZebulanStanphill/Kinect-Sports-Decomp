extern int fn_82791560();
extern int fn_82791A60();


unsigned __int64 fn_82792CB0(int param_1)

{
  unsigned __int64 uVar1;
  
  uVar1 = 0;
  if (*(int *)(param_1 + 4) == 4) {
    fn_82791A60();
    if (*(unsigned int *)(param_1 + 0x14) == 0x3e) {
      *(unsigned int *)(param_1 + 4) = 0x8004;
      fn_82791560(param_1 + 8);
      uVar1 = 1;
    }
    else {
      *(unsigned int *)(param_1 + 4) = 1;
    }
  }
  return uVar1;
}

