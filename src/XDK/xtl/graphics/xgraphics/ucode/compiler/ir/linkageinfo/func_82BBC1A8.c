extern int fn_82AB15D0();


__int64 fn_82BBC1A8(int param_1,int param_2,unsigned int param_3,unsigned int param_4,
                      __int64 param_5)

{
  int iVar1;
  unsigned __int64 uVar2;
  __int64 lVar3;
  __int64 lVar4;
  
  *(unsigned char *)((int)param_5 + param_1 + 0x380) = 1;
  if (*(char *)(param_1 + 0x750) != '\0') {
    fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820e0cf4,0xffffffff820e0c10,0x200);
  }
  if (*(char *)(param_1 + 0x751) == '\0') {
    fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820e0ce0,0xffffffff820e0c10,0x202);
  }
  iVar1 = (int)((param_5 + 0xe4U & 0xffffffff) << 2);
  if (*(int *)(iVar1 + param_1) != 0) {
    fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820e0cd0,0xffffffff820e0c10,0x203);
  }
  *(unsigned int *)(iVar1 + param_1) = param_4;
  *(int *)((int)((param_5 + 0xf4U & 0xffffffff) << 2) + param_1) = param_2;
  *(unsigned int *)((int)((param_5 + 0x104U & 0xffffffff) << 2) + param_1) = param_3;
  if (param_2 != 0x21) {
    lVar3 = 0;
    lVar4 = 4;
    do {
      uVar2 = (param_5 + 0x45U & 0x3fffffff) * 4 + lVar3;
      lVar3 = lVar3 + 1;
      *(unsigned int *)((int)((uVar2 & 0xffffffff) << 2) + param_1) = 5;
      lVar4 = lVar4 + -1;
    } while (lVar4 != 0);
  }
  return param_5;
}

