void fn_82A33C50(unsigned int *param_1)

{
  int (**pcVar1)();
  unsigned __int64 uVar2;
  unsigned int uVar3;
  
  uVar3 = *param_1;
  pcVar1 = (int (**)())param_1[1];
  if ((uVar3 & 0x80000000) == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = RtlNtStatusToDosError(uVar3);
    uVar3 = 0;
  }
  (*pcVar1)(uVar2,uVar3,param_1);
  return;
}

