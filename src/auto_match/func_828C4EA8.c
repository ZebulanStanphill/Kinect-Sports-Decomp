extern int fn_828C48B0();
extern unsigned int iStack_40;
extern unsigned int uStack00000010;


void fn_828C4EA8(unsigned __int64 param_1,__int64 param_2,__int64 param_3)

{
  __int64 lVar1;
  __int64 lVar2;
  int iVar4;
  __int64 lVar3;
  unsigned __int64 uVar5;
  unsigned __int64 uVar6;
  unsigned __int64 uVar7;
  unsigned __int64 uVar8;
  unsigned __int64 uStack00000010;
  int iStack_40;
  
  uVar8 = param_1 & 0xffffffff;
  lVar2 = (param_2 + 1U & 0x7fffffff) << 1;
  iStack_40 = (int)(param_1 >> 0x20);
  iVar4 = (int)lVar2;
  lVar1 = param_2;
  while (lVar3 = lVar2, iVar4 < (int)param_3) {
    uVar5 = uVar8 + lVar3;
    uVar6 = (uVar5 - 1 & 0xffffffff) >> 2;
    if (*(unsigned int *)(iStack_40 + 8) <= uVar6) {
      uVar6 = uVar6 - *(unsigned int *)(iStack_40 + 8);
    }
    uVar7 = (uVar5 & 0xffffffff) >> 2;
    if (*(unsigned int *)(iStack_40 + 8) <= uVar7) {
      uVar7 = uVar7 - *(unsigned int *)(iStack_40 + 8);
    }
    if (*(unsigned int *)(*(int *)(*(int *)(*(int *)(iStack_40 + 4) + (int)((uVar7 & 0xffffffff) << 2)) +
                          (int)((uVar5 & 3) << 2)) + 8) <
        *(unsigned int *)(*(int *)(*(int *)(*(int *)(iStack_40 + 4) + (int)((uVar6 & 0xffffffff) << 2)) +
                          (int)((uVar5 - 1 & 3) << 2)) + 8)) {
      lVar3 = lVar3 + -1;
    }
    uVar6 = (uVar8 + lVar3 & 0xffffffff) >> 2;
    if (*(unsigned int *)(iStack_40 + 8) <= uVar6) {
      uVar6 = uVar6 - *(unsigned int *)(iStack_40 + 8);
    }
    uVar5 = (uVar8 + lVar1 & 0xffffffff) >> 2;
    if (*(unsigned int *)(iStack_40 + 8) <= uVar5) {
      uVar5 = uVar5 - *(unsigned int *)(iStack_40 + 8);
    }
    lVar2 = (lVar3 + 1U & 0x7fffffff) << 1;
    *(unsigned int *)
     (*(int *)(*(int *)(iStack_40 + 4) + (int)((uVar5 & 0xffffffff) << 2)) +
     (int)((uVar8 + lVar1 & 3) << 2)) =
         *(unsigned int *)
          (*(int *)(*(int *)(iStack_40 + 4) + (int)((uVar6 & 0xffffffff) << 2)) +
          (int)((uVar8 + lVar3 & 3) << 2));
    iVar4 = (int)lVar2;
    lVar1 = lVar3;
  }
  if (iVar4 == (int)param_3) {
    uVar5 = (uVar8 + param_3) - 1;
    uVar6 = (uVar5 & 0xffffffff) >> 2;
    if (*(unsigned int *)(iStack_40 + 8) <= uVar6) {
      uVar6 = uVar6 - *(unsigned int *)(iStack_40 + 8);
    }
    uVar8 = uVar8 + lVar1;
    uVar7 = (uVar8 & 0xffffffff) >> 2;
    if (*(unsigned int *)(iStack_40 + 8) <= uVar7) {
      uVar7 = uVar7 - *(unsigned int *)(iStack_40 + 8);
    }
    lVar1 = param_3 + -1;
    *(unsigned int *)
     (*(int *)(*(int *)(iStack_40 + 4) + (int)((uVar7 & 0xffffffff) << 2)) + (int)((uVar8 & 3) << 2)
     ) = *(unsigned int *)
          (*(int *)(*(int *)(iStack_40 + 4) + (int)((uVar6 & 0xffffffff) << 2)) +
          (int)((uVar5 & 3) << 2));
  }
  uStack00000010 = param_1;
  fn_828C48B0(param_1,lVar1,param_2);
  return;
}

