extern int fn_82768E30();


void fn_8276AAF0(int param_1,unsigned __int64 param_2)

{
  unsigned int uVar1;
  unsigned __int64 uVar2;
  
  uVar1 = *(unsigned int *)(param_1 + 4);
  fn_82768E30(param_1,param_1,param_2);
  if ((unsigned __int64)uVar1 < (param_2 & 0xffffffff)) {
    param_2 = param_2 - uVar1;
    uVar2 = 0;
    if (param_2 != 0) {
      do {
        uVar2 = uVar2 + 1;
      } while ((uVar2 & 0xffffffff) < (param_2 & 0xffffffff));
    }
  }
  return;
}

