extern int fn_8265C990();
extern int fn_82ED4140();


__int64 fn_82ED4510(__int64 param_1,unsigned __int64 param_2)

{
  int iVar1;
  int iVar2;
  unsigned __int64 uVar3;
  __int64 lVar4;
  __int64 lVar5;
  __int64 lVar6;
  int *piVar7;
  
  if ((param_2 & 2) == 0) {
    fn_82ED4140(param_1);
    lVar4 = param_1;
    if ((param_2 & 1) != 0) {
      fn_8265C990(param_1,0x248c8000);
    }
  }
  else {
    uVar3 = (unsigned __int64)*(unsigned int *)((int)param_1 + -4);
    lVar4 = param_1 + -4;
    lVar5 = uVar3 - 1;
    if (-1 < lVar5) {
      lVar6 = uVar3 * 0x402c + param_1 + 0xc;
      do {
        iVar2 = (int)lVar6;
        if (*(int *)(iVar2 + -0x4038) != 0) {
          fn_8265C990(*(int *)(iVar2 + -0x4038),0x248c8000);
          *(unsigned int *)(iVar2 + -0x4038) = 0;
        }
        if (*(int *)(iVar2 + -0x4034) != 0) {
          fn_8265C990(*(int *)(iVar2 + -0x4034),0x248c8000);
          *(unsigned int *)(iVar2 + -0x4034) = 0;
        }
        piVar7 = (int *)(lVar6 + -0x402c);
        iVar1 = *piVar7;
        if (iVar1 != 0) {
          fn_8265C990(iVar1,0x248c8000);
          *piVar7 = 0;
        }
        if (*(int *)(iVar2 + -0x4030) != 0) {
          fn_8265C990(*(int *)(iVar2 + -0x4030),0x248c8000);
          *(unsigned int *)(iVar2 + -0x4030) = 0;
        }
        lVar5 = lVar5 + -1;
        lVar6 = lVar6 + -0x402c;
      } while (-1 < lVar5);
    }
    if ((param_2 & 1) != 0) {
      fn_8265C990(lVar4,0x248c8000);
    }
  }
  return lVar4;
}

