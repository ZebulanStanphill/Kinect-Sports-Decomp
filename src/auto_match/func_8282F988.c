extern int fn_828252D0();
extern int fn_828252D8();
extern int fn_8282F458();
extern int fn_8282F700();
extern int fn_8282F920();
extern int fn_82F678C8();
extern int fn_82F67988();


void fn_8282F988(int param_1)

{
  int iVar1;
  int iVar5;
  __int64 lVar2;
  unsigned __int64 uVar3;
  unsigned __int64 uVar4;
  __int64 lVar6;
  int *piVar7;
  unsigned int uVar8;
  unsigned __int64 uVar9;
  int aiStack_40 [16];
  
  *(unsigned int *)(param_1 + 0x120) = 0;
  *(unsigned int *)(param_1 + 0x124) = 0;
  *(unsigned int *)(param_1 + 0x128) = 0;
  *(unsigned int *)(param_1 + 300) = 0;
  if (*(int *)(param_1 + 0xd4) == 0) {
    return;
  }
  fn_8282F700(param_1,aiStack_40);
  if (aiStack_40[0] == 0) {
    *(unsigned int *)(param_1 + 0x130) = 1;
    return;
  }
  iVar5 = fn_8282F458(param_1 + 0x80,aiStack_40[0]);
  *(int *)(param_1 + 0x130) = iVar5;
  if (iVar5 == 0) {
    if (*(__int64 *)(param_1 + 0x14) == *(__int64 *)(param_1 + 0x98)) {
      uVar9 = ((unsigned __int64)*(unsigned int *)(param_1 + 0xac) * 5 +
               ((unsigned __int64)*(unsigned int *)(param_1 + 0xa0) & 0x1fffffff) * 8 +
               (unsigned __int64)*(unsigned int *)(param_1 + 0xa4) & 0x3fffffff) * 4 +
              (unsigned __int64)*(unsigned int *)(param_1 + 0xa8);
      lVar2 = fn_828252D0(uVar9);
      uVar3 = fn_82F678C8(lVar2,1,uVar9,aiStack_40[0]);
      if ((uVar3 & 0xffffffff) == (uVar9 & 0xffffffff)) {
        *(int *)(param_1 + 0x120) = (int)lVar2;
        lVar2 = ((unsigned __int64)*(unsigned int *)(param_1 + 0xa0) & 0x7ffffff) * 0x20 + lVar2;
        lVar6 = ((unsigned __int64)*(unsigned int *)(param_1 + 0xa4) & 0x3fffffff) * 4 + lVar2;
        *(int *)(param_1 + 0x124) = (int)lVar2;
        *(int *)(param_1 + 0x128) = (int)lVar6;
        lVar6 = (unsigned __int64)*(unsigned int *)(param_1 + 0xa8) + lVar6;
        uVar4 = fn_828252D0(*(int *)(param_1 + 0x28) << 2);
        *(int *)(param_1 + 300) = (int)uVar4;
        fn_8282F920(param_1,lVar6,uVar4);
        uVar3 = (unsigned __int64)*(unsigned int *)(param_1 + 0xa4);
        iVar5 = 0;
        if (uVar3 != 0) {
          piVar7 = (int *)(*(int *)(param_1 + 0x124) + -4);
          do {
            iVar1 = piVar7[1];
            piVar7 = piVar7 + 1;
            *piVar7 = iVar5;
            iVar5 = iVar1 + iVar5;
            uVar3 = uVar3 - 1;
          } while (uVar3 != 0);
        }
        iVar5 = *(int *)(param_1 + 0xac) * 0x14 + (int)lVar6;
        *(int *)(param_1 + 0x10c) = iVar5;
        *(int *)(param_1 + 0x110) = *(int *)(param_1 + 0xb0) * 8 + iVar5;
        goto LAB_8282faf8;
      }
      fn_828252D8(lVar2);
      uVar8 = 5;
    }
    else {
      uVar8 = 2;
    }
    *(unsigned int *)(param_1 + 0x130) = uVar8;
  }
LAB_8282faf8:
  fn_82F67988(aiStack_40[0]);
  return;
}

