#define true 1
#define ZEXT48(x) ((unsigned __int64)((unsigned int)(x)))
extern unsigned int *auStack_58;
extern unsigned int *auStack_60;
extern int fn_82A1E658();
extern int fn_82A28E60();
extern int fn_82A2A360();
extern int fn_82A2A580();
extern int fn_82BFB960();
extern int fn_82BFBBF0();
extern unsigned __int64 storeDoubleWordConditionalIndexed();


unsigned __int64 fn_82BFBDA8(int param_1,int param_2,int param_3,int param_4,unsigned int *param_5,
                       unsigned __int64 param_6)

{
  __int64 *plVar1;
  unsigned __int64 uVar2;
  int iVar4;
  unsigned __int64 uVar3;
  unsigned int *puVar5;
  __int64 lVar6;
  __int64 *plVar7;
  __int64 lVar8;
  unsigned int auStack_60 [2];
  unsigned int auStack_58 [22];
  
  auStack_60[0] = 0;
  uVar2 = fn_82BFB960(param_5,auStack_58,
                        (-(unsigned __int64)(param_5 != (unsigned int *)0x0) & 0x10) + param_6 + 0x48,
                        auStack_60);
  if ((uVar2 & 0xffffffff) == 0) {
    return 0;
  }
  lVar6 = uVar2 - 8;
  lVar8 = 9;
  do {
    lVar6 = lVar6 + 8;
    *(unsigned __int64 *)lVar6 = 0;
    lVar8 = lVar8 + -1;
  } while (lVar8 != 0);
  plVar1 = (__int64 *)uVar2;
  *(unsigned int *)((int)plVar1 + 0x3c) = auStack_58[0];
  *(unsigned int *)((int)plVar1 + 0x34) = auStack_60[0];
  if (param_5 == (unsigned int *)0x0) {
    *(unsigned int *)(plVar1 + 8) = 0;
    if ((param_6 & 0xffffffff) != 0) {
      plVar7 = plVar1 + 9;
LAB_82bfbe80:
      *(__int64 **)((int)plVar1 + 0x44) = plVar7;
    }
  }
  else {
    *(__int64 **)(plVar1 + 8) = plVar1 + 9;
    *(unsigned int *)(plVar1 + 9) = *param_5;
    *(unsigned int *)((int)plVar1 + 0x4c) = param_5[1];
    *(unsigned int *)(plVar1 + 10) = param_5[2];
    *(unsigned int *)((int)plVar1 + 0x54) = param_5[3];
    if ((param_6 & 0xffffffff) != 0) {
      plVar7 = plVar1 + 0xb;
      goto LAB_82bfbe80;
    }
  }
  if (param_1 < 0x10) {
    param_1 = 0x10;
  }
  else if (0x1000000 < param_1) {
    param_1 = 0x1000000;
  }
  if (param_2 < 0xfffffff) {
    if (0 < param_2) goto LAB_82bfbebc;
    param_2 = -1;
    param_4 = 0;
  }
  else {
    param_2 = 0xffffffe;
LAB_82bfbebc:
    if (param_2 < param_1) {
      param_1 = param_2;
    }
  }
  *(int *)(plVar1 + 5) = param_1;
  *(int *)((int)plVar1 + 0x2c) = param_2;
  if (param_3 != 0) {
    iVar4 = fn_82A2A580(0,0,0x7fffffff,0);
    *(int *)((int)plVar1 + 0x1c) = iVar4;
    if (iVar4 == 0) {
      iVar4 = *(int *)(plVar1 + 8);
      if (iVar4 != 0) {
        (**(int (***)())(iVar4 + 0xc))(*(unsigned int *)(iVar4 + 4),auStack_58[0]);
        return 0;
      }
      goto LAB_82bfbf3c;
    }
  }
  if (param_4 != 0) {
    iVar4 = fn_82A2A580(0,0,0x7fffffff,0);
    *(int *)((int)plVar1 + 0x14) = iVar4;
    if (iVar4 == 0) {
      if (*(int *)((int)plVar1 + 0x1c) != 0) {
        fn_82A1E658();
      }
      iVar4 = *(int *)(plVar1 + 8);
      if (iVar4 != 0) {
        (**(int (***)())(iVar4 + 0xc))(*(unsigned int *)(iVar4 + 4),auStack_58[0]);
        return 0;
      }
      goto LAB_82bfbf3c;
    }
  }
  *(unsigned int *)(plVar1 + 7) = 0x4c665374;
  puVar5 = (unsigned int *)fn_82BFBBF0(uVar2);
  if (puVar5 != (unsigned int *)0x0) {
    if (*(int *)((int)plVar1 + 0x14) != 0) {
      *(int *)(plVar1 + 2) = *(int *)(plVar1 + 2) + -1;
    }
    while( true ) {
      lVar6 = *plVar1;
      auStack_58[0] = (unsigned int)((unsigned __int64)lVar6 >> 0x20);
      *puVar5 = auStack_58[0];
      sync(1);
      if (*plVar1 == lVar6) break;
      lVar6 = storeDoubleWordConditionalIndexed(*plVar1,0,uVar2);
      *plVar1 = lVar6;
    }
    lVar6 = storeDoubleWordConditionalIndexed
                      ((lVar6 + 1U & 0x7fffffff) + (ZEXT48(puVar5) << 0x20),0,uVar2);
    *plVar1 = lVar6;
    sync(1);
    return uVar2;
  }
  if (*(int *)((int)plVar1 + 0x1c) != 0) {
    fn_82A1E658();
  }
  if (*(int *)((int)plVar1 + 0x14) != 0) {
    fn_82A1E658();
  }
  iVar4 = *(int *)(plVar1 + 8);
  if (iVar4 != 0) {
    (**(int (***)())(iVar4 + 0xc))(*(unsigned int *)(iVar4 + 4),auStack_58[0]);
    return 0;
  }
LAB_82bfbf3c:
  fn_82A2A360();
  uVar3 = fn_82A2A360();
  fn_82A28E60(uVar3,0,auStack_58[0]);
  return 0;
}

