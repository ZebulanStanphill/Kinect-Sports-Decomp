unsigned __int64 fn_8278FD18(int *param_1)

{
  unsigned int uVar1;
  short *psVar2;
  
  uVar1 = param_1[1];
  if (uVar1 != 0) {
    if ((*param_1 == 0) || (uVar1 <= uVar1 - 1)) {
      psVar2 = (short *)0x0;
    }
    else {
      psVar2 = (short *)((uVar1 - 1) * 2 + *param_1);
    }
    if (*psVar2 == 0) {
      return 1;
    }
  }
  return 0;
}

