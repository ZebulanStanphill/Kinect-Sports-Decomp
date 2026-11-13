extern int fn_82AB15D0();


void fn_82BBBE08(int param_1,__int64 param_2,__int64 param_3,unsigned int param_4,int param_5,
                  unsigned int param_6)

{
  int iVar1;
  int iVar2;
  unsigned __int64 uVar3;
  unsigned __int64 uVar4;
  unsigned __int64 uVar5;
  __int64 lVar6;
  __int64 lVar7;
  
  if ((param_5 != 5) && (param_5 != 6)) {
    if ((*(int *)((int)((param_2 + 0xf4U & 0xffffffff) << 2) + param_1) == 0x21) &&
       (*(int *)((int)(((param_2 + 0x45U & 0x3fffffff) * 4 + param_3 & 0xffffffff) << 2) + param_1)
        != 0)) {
      fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820e0b88,0xffffffff820e0c10,0x8a);
    }
    *(unsigned int *)
     ((int)(((param_2 + 0x45U & 0x3fffffff) * 4 + param_3 & 0xffffffff) << 2) + param_1) = param_4;
    *(int *)((int)(((param_2 + 0x55U & 0x3fffffff) * 4 + param_3 & 0xffffffff) << 2) + param_1) =
         param_5;
    *(unsigned int *)
     ((int)(((param_2 + 0x65U & 0x3fffffff) * 4 + param_3 & 0xffffffff) << 2) + param_1) = param_6;
    return;
  }
  iVar1 = (int)((param_2 + 0xe4U & 0xffffffff) << 2);
  if (*(int *)(iVar1 + param_1) != 0) {
    iVar2 = (int)((param_2 + 0xf4U & 0xffffffff) << 2);
    if ((*(int *)(iVar2 + param_1) != 0x21) ||
       (*(int *)((int)(((param_2 + 0x45U & 0x3fffffff) * 4 + param_3 & 0xffffffff) << 2) + param_1)
        != 0)) {
      fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820e0b00,0xffffffff820e0c10,0x7a);
    }
    *(unsigned int *)(iVar1 + param_1) = 0;
    *(unsigned char *)((int)param_2 + param_1 + 0x380) = 0;
    lVar7 = 4;
    *(int *)((int)((param_2 + 0x104U & 0xffffffff) << 2) + param_1) = (int)param_2;
    *(unsigned int *)(iVar2 + param_1) = 0;
    lVar6 = 0;
    do {
      uVar5 = (param_2 + 0x45U & 0x3fffffff) * 4 + lVar6;
      uVar4 = (param_2 + 0x55U & 0x3fffffff) * 4 + lVar6;
      uVar3 = (param_2 + 0x65U & 0x3fffffff) * 4 + lVar6;
      lVar6 = lVar6 + 1;
      *(unsigned int *)((int)((uVar5 & 0xffffffff) << 2) + param_1) = 0;
      *(unsigned int *)((int)((uVar4 & 0xffffffff) << 2) + param_1) = 0x13;
      *(unsigned int *)((int)((uVar3 & 0xffffffff) << 2) + param_1) = 0;
      lVar7 = lVar7 + -1;
    } while (lVar7 != 0);
    return;
  }
  return;
}

