extern int fn_82AB15D0();


__int64 fn_82BBC0A8(int param_1,int param_2,unsigned int param_3,unsigned int param_4)

{
  __int64 lVar1;
  unsigned __int64 uVar2;
  int *piVar4;
  __int64 lVar3;
  __int64 lVar5;
  
  if (*(char *)(param_1 + 0x751) != '\0') {
    fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820e0cbc,0xffffffff820e0c10,0x1e2);
  }
  lVar1 = 0;
  piVar4 = (int *)(param_1 + 0x390);
  do {
    if (*piVar4 == 0) {
      *(int *)((int)((lVar1 + 0xf4U & 0xffffffff) << 2) + param_1) = param_2;
      *(unsigned int *)((int)((lVar1 + 0x104U & 0xffffffff) << 2) + param_1) = param_3;
      *(unsigned int *)((int)((lVar1 + 0xe4U & 0xffffffff) << 2) + param_1) = param_4;
      if (param_2 == 0x21) {
        return lVar1;
      }
      lVar3 = 0;
      lVar5 = 4;
      do {
        uVar2 = (lVar1 + 0x45U & 0x3fffffff) * 4 + lVar3;
        lVar3 = lVar3 + 1;
        *(unsigned int *)((int)((uVar2 & 0xffffffff) << 2) + param_1) = 5;
        lVar5 = lVar5 + -1;
      } while (lVar5 != 0);
      return lVar1;
    }
    lVar1 = lVar1 + 1;
    piVar4 = piVar4 + 1;
  } while ((int)lVar1 < 0x10);
  fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff82196f10,0xffffffff820e0c10,499);
  return 0;
}

