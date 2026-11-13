unsigned __int64 fn_829D3FE8(int param_1,int param_2,unsigned int *param_3)

{
  unsigned int uVar1;
  int *piVar2;
  
  uVar1 = 0;
  piVar2 = (int *)(param_2 + 0x208);
  while ((piVar2[-1] != param_1 || (*piVar2 != 2))) {
    uVar1 = uVar1 + 1;
    piVar2 = piVar2 + 0x54;
    if (5 < uVar1) {
      return 0;
    }
  }
  *param_3 = uVar1;
  return 1;
}

