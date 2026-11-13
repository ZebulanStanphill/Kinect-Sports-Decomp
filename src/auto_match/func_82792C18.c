extern int fn_82791560();
extern int fn_827917E8();
extern int fn_82791A60();


unsigned __int64 fn_82792C18(int param_1)

{
  unsigned __int64 uVar1;
  
  uVar1 = 0;
  if (*(int *)(param_1 + 4) == 2) {
    fn_82791A60();
    uVar1 = 1;
    if (*(unsigned int *)(param_1 + 0x14) == 0x3e) {
      *(unsigned int *)(param_1 + 4) = 0x8002;
      fn_82791560(param_1 + 8);
    }
    else if (*(unsigned int *)(param_1 + 0x14) == 0x2f) {
      *(unsigned int *)(param_1 + 4) = 6;
    }
    else {
      *(unsigned int *)(param_1 + 4) = 7;
      fn_827917E8(param_1);
    }
  }
  return uVar1;
}

