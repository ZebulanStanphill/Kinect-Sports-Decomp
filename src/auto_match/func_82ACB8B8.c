unsigned __int64 fn_82ACB8B8(int param_1,int param_2)

{
  unsigned int uVar1;
  unsigned int uVar2;
  int *piVar3;
  
  for (uVar1 = *(unsigned int *)(param_1 + 4); ((uVar1 & 1) == 0 && (uVar1 != 0));
      uVar1 = *(unsigned int *)((uVar1 & 0xfffffffe) + 4)) {
    uVar2 = 0;
    if (*(unsigned int *)(uVar1 + 8) != 0) {
      piVar3 = (int *)(uVar1 + 0x10);
      do {
        if (*piVar3 == param_2) {
          return 1;
        }
        uVar2 = uVar2 + 1;
        piVar3 = piVar3 + 1;
      } while (uVar2 < *(unsigned int *)(uVar1 + 8));
    }
  }
  return 0;
}

