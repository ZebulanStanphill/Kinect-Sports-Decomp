extern unsigned int *auStack_90;
extern unsigned int *auStack_a4;
extern int fn_829DC450();
extern int fn_829DDD98();
extern unsigned int lbl_832179FC;
extern unsigned int uStack_58;
extern unsigned int uStack_98;


void fn_829D56F0(int *param_1)

{
  unsigned int *puVar1;
  unsigned int *puVar2;
  unsigned int uVar3;
  unsigned __int64 *puVar4;
  unsigned int uVar5;
  int iVar6;
  unsigned int uVar7;
  __int64 lVar8;
  __int64 lVar9;
  unsigned int auStack_a4 [3];
  unsigned __int64 uStack_98;
  unsigned int auStack_90 [6];
  unsigned __int64 uStack_58;
  int aiStack_50 [16];
  
  auStack_a4[1] = 0x7a;
  auStack_a4[2] = fn_829DC450(param_1[0x1b]);
  uStack_98 = ((((unsigned __int64)(uStack_98)) & (~(((unsigned __int64)0xFFFFFFFF) << 0))) | ((((unsigned __int64)(fn_829DDD98(param_1[0x1b]))) & ((unsigned __int64)0xFFFFFFFF)) << 0));
  puVar4 = &uStack_58;
  uStack_98 = ((((unsigned __int64)(uStack_98)) & (~(((unsigned __int64)0xFFFFFFFF) << 32))) | ((((unsigned __int64)(0x1800)) & ((unsigned __int64)0xFFFFFFFF)) << 32));
  lVar8 = 8;
  do {
    puVar4 = puVar4 + 1;
    *puVar4 = 0;
    lVar8 = lVar8 + -1;
  } while (lVar8 != 0);
  puVar4 = &uStack_98;
  lVar8 = 8;
  do {
    puVar4 = puVar4 + 1;
    *puVar4 = 0;
    lVar8 = lVar8 + -1;
  } while (lVar8 != 0);
  puVar2 = auStack_a4;
  uVar3 = 0;
  uVar5 = 0;
  puVar1 = (unsigned int *)(param_1 + 0x10);
  lVar8 = 4;
  do {
    puVar2 = puVar2 + 1;
    puVar1 = puVar1 + 1;
    uVar5 = *puVar2 | uVar5;
    uVar3 = *puVar1 & *puVar2 | uVar3;
    lVar8 = lVar8 + -1;
  } while (lVar8 != 0);
  puVar2 = (unsigned int *)(param_1 + 0x1f);
  lVar8 = 0x10;
  puVar2[param_1[0x3f] * 2 + 1] = uVar3;
  puVar2[param_1[0x3f] * 2] = uVar5;
  param_1[0x3f] = param_1[0x3f] + 1U & 0xf;
  do {
    uVar3 = *puVar2;
    uVar5 = 0;
    iVar6 = 0;
    lVar9 = 0x10;
    do {
      if ((uVar3 & 1) != 0) {
        if ((1 << (uVar5 & 0x3f) & puVar2[1]) != 0) {
          *(int *)((int)auStack_90 + iVar6) = *(int *)((int)auStack_90 + iVar6) + 1;
        }
        *(int *)((int)aiStack_50 + iVar6) = *(int *)((int)aiStack_50 + iVar6) + 1;
      }
      uVar5 = uVar5 + 1;
      iVar6 = iVar6 + 4;
      lVar9 = lVar9 + -1;
    } while (lVar9 != 0);
    lVar8 = lVar8 + -1;
    puVar2 = puVar2 + 2;
  } while (lVar8 != 0);
  uVar3 = 0;
  uVar5 = 0;
  puVar2 = auStack_90;
  lVar8 = 0x10;
  do {
    if (*(unsigned int *)(lbl_832179FC + 0x8f034) < *puVar2) {
      uVar3 = 1 << (uVar5 & 0x3f) | uVar3;
    }
    uVar5 = uVar5 + 1;
    puVar2 = puVar2 + 1;
    lVar8 = lVar8 + -1;
  } while (lVar8 != 0);
  if ((uVar3 == 0) && (*param_1 == 6)) {
    uVar5 = 0;
    uVar7 = 0;
    puVar2 = auStack_90;
    lVar8 = 0x10;
    do {
      if (uVar5 < *puVar2) {
        uVar3 = 1 << (uVar7 & 0x3f);
        uVar5 = *puVar2;
      }
      uVar7 = uVar7 + 1;
      puVar2 = puVar2 + 1;
      lVar8 = lVar8 + -1;
    } while (lVar8 != 0);
  }
  param_1[0x10] = uVar3;
  return;
}

