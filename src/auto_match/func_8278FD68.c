unsigned __int64 fn_8278FD68(int *param_1)

{
  unsigned int uVar1;
  short *psVar3;
  unsigned __int64 uVar2;
  
  uVar1 = param_1[1];
  if (uVar1 != 0) {
    if ((*param_1 == 0) || (uVar1 <= uVar1 - 1)) {
      psVar3 = (short *)0x0;
    }
    else {
      psVar3 = (short *)((uVar1 - 1) * 2 + *param_1);
    }
    if ((*psVar3 == 0xd) || (uVar2 = 0, *psVar3 == 10)) {
      uVar2 = 1;
    }
    return uVar2;
  }
  return 0;
}

