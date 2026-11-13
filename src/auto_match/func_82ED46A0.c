extern int fn_8265C940();
extern int fn_82ED4038();
extern int fn_82ED4618();


void fn_82ED46A0(int param_1,unsigned int param_2,int param_3,unsigned __int64 param_4,unsigned __int64 param_5)

{
  int iVar1;
  __int64 lVar2;
  unsigned int *puVar4;
  __int64 lVar3;
  unsigned int uVar5;
  unsigned int *puVar6;
  unsigned int uVar7;
  unsigned __int64 uVar8;
  
  fn_82ED4618();
  if (0 < (int)param_2) {
    *(unsigned int *)(param_1 + 0xc) = param_2;
    *(int *)(param_1 + 0x10) = param_3;
    *(unsigned int *)(param_1 + 0x14) = param_2 >> 4;
    iVar1 = (param_2 + 0xf >> 4) * (param_3 + 0xfU >> 4) * 4;
    *(int *)(param_1 + 4) = iVar1;
    *(int *)(param_1 + 8) = iVar1 >> 1;
  }
  if ((0x3fd41 < (param_4 & 0xffffffff)) ||
     (lVar2 = param_4 * 0x402c + 4, 0xfffffffb < (param_4 * 0x402c & 0xffffffff))) {
    lVar2 = -1;
  }
  puVar4 = (unsigned int *)fn_8265C940(lVar2,0x248c8000);
  lVar2 = 0;
  if (puVar4 == (unsigned int *)0x0) {
    puVar6 = (unsigned int *)0x0;
  }
  else {
    *puVar4 = (int)param_4;
    puVar6 = puVar4 + 1;
    if (-1 < (__int64)(param_4 - 1)) {
      puVar4 = puVar4 + -0x1007;
      uVar8 = param_4;
      do {
        puVar4[0x1008] = 0;
        puVar4[0x1009] = 0;
        puVar4[0x100a] = 0;
        puVar4[0x2010] = 0;
        puVar4[0x2011] = 0;
        puVar4[0x100d] = 0;
        puVar4[0x100c] = 0xffffffff;
        puVar4 = puVar4 + 0x100b;
        *puVar4 = 0;
        uVar8 = uVar8 - 1;
      } while (uVar8 != 0);
    }
  }
  *(unsigned int **)(param_1 + 0x18) = puVar6;
  *(int *)(param_1 + 0x1c) = (int)param_4;
  if (((param_5 & 0xffffffff) == 0) || ((param_4 & 0xffffffff) <= (param_5 & 0xffffffff))) {
    param_5 = param_4;
  }
  *(int *)(param_1 + 0x28) = (int)param_5;
  lVar3 = (param_5 & 0x3fffffff) << 2;
  if (0x3fffffff < (param_5 & 0xffffffff)) {
    lVar3 = -1;
  }
  uVar5 = fn_8265C940(lVar3,0x248c8000);
  *(unsigned int *)(param_1 + 0x20) = uVar5;
  uVar7 = 0;
  if (*(int *)(param_1 + 0x1c) != 0) {
    do {
      fn_82ED4038(lVar2 + (unsigned __int64)*(unsigned int *)(param_1 + 0x18),*(unsigned int *)(param_1 + 0xc),
                      *(unsigned int *)(param_1 + 0x10));
      uVar7 = uVar7 + 1;
      lVar2 = lVar2 + 0x402c;
    } while (uVar7 < *(unsigned int *)(param_1 + 0x1c));
  }
  return;
}

