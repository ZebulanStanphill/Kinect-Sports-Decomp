typedef unsigned char bool;
#define true 1
extern int fn_82975B00();
extern unsigned int lbl_8315BDF0;
extern unsigned int lbl_8315BE10;
extern unsigned int lbl_8315BE20;
extern unsigned int lbl_8315BE30;


unsigned __int64 fn_829A1B90(int param_1,int param_2,unsigned __int64 param_3,unsigned __int64 param_4,unsigned int *param_5)

{
  int iVar1;
  int *piVar2;
  bool bVar3;
  int iVar4;
  int *piVar5;
  unsigned int uVar6;
  unsigned int uVar7;
  unsigned __int64 uVar8;
  unsigned int *puVar9;
  __int64 lVar10;
  int aiStack_30 [4];
  int aiStack_20 [8];
  
  bVar3 = (param_4 & 0x10000) != 0;
  if (bVar3) {
    aiStack_30[0] = 0;
  }
  uVar8 = (unsigned __int64)bVar3;
  if ((param_4 & 0x20000) != 0) {
    uVar8 = uVar8 + 1;
    aiStack_30[bVar3] = 1;
  }
  if ((param_4 & 0x40000) != 0) {
    lVar10 = uVar8 << 2;
    uVar8 = uVar8 + 1;
    *(unsigned int *)((int)aiStack_30 + (int)lVar10) = 2;
  }
  if ((param_4 & 0x80000) != 0) {
    lVar10 = uVar8 << 2;
    uVar8 = uVar8 + 1;
    *(unsigned int *)((int)aiStack_30 + (int)lVar10) = 3;
  }
  if (uVar8 < (param_3 & 0xffffffff)) {
    param_3 = uVar8;
  }
  aiStack_20[2] = -1;
  aiStack_20[3] = -1;
  if ((param_3 & 0xffffffff) != 0) {
    iVar4 = *(int *)(param_1 + 0x14);
    piVar5 = aiStack_30;
    do {
      piVar2 = (int *)((param_2 - (int)aiStack_30) + (int)piVar5);
      iVar1 = *piVar5;
      piVar5 = piVar5 + 1;
      aiStack_20[iVar1] = *(int *)(*(int *)(*piVar2 * 4 + iVar4) + 0x10);
      param_3 = param_3 - 1;
    } while (param_3 != 0);
  }
  if (*(short *)(param_1 + 0xca) == 0x104) {
    iVar4 = 0;
    uVar6 = 0;
    do {
      uVar7 = 0;
      piVar5 = aiStack_20;
      while ((*piVar5 == -1 || (*piVar5 == (&lbl_8315BDF0)[uVar6 + uVar7]))) {
        uVar7 = uVar7 + 1;
        piVar5 = piVar5 + 1;
        if (3 < uVar7) {
          puVar9 = &lbl_8315BDF0 + iVar4 * 4;
          if (puVar9 == (unsigned int *)0x0) goto LAB_829a1cc8;
          goto LAB_829a1dbc;
        }
      }
      uVar6 = uVar6 + 4;
      iVar4 = iVar4 + 1;
      if (0x13 < uVar6) {
LAB_829a1cc8:
        fn_82975B00(param_1,*(unsigned int *)(*(int *)(param_1 + 0x104) + 0x3c),0x11b5,
                          0xffffffff8205189c);
        return 0xffffffff80004005;
      }
    } while( true );
  }
  uVar6 = 0;
  do {
    if ((*(int *)((int)aiStack_20 + uVar6) != -1) &&
       (*(int *)((int)aiStack_20 + uVar6) != *(int *)((int)&lbl_8315BE20 + uVar6))) {
      uVar6 = 0;
      goto LAB_829a1d44;
    }
    uVar6 = uVar6 + 4;
  } while (uVar6 < 0x10);
  puVar9 = &lbl_8315BE20;
  goto LAB_829a1dbc;
  while (uVar6 = uVar6 + 4, uVar6 < 0x10) {
LAB_829a1d44:
    if ((*(int *)((int)aiStack_20 + uVar6) != -1) &&
       (*(int *)((int)aiStack_20 + uVar6) != *(int *)((int)&lbl_8315BE30 + uVar6))) {
      uVar6 = 0;
      goto LAB_829a1d78;
    }
  }
  goto LAB_829a1db8;
  while (uVar6 = uVar6 + 4, uVar6 < 0x10) {
LAB_829a1d78:
    if ((*(int *)((int)aiStack_20 + uVar6) != -1) &&
       (*(int *)((int)aiStack_20 + uVar6) != *(int *)((int)&lbl_8315BE10 + uVar6)))
    goto LAB_829a1db8;
  }
  puVar9 = &lbl_8315BE10;
  if ((param_4 & 0xf0000) == 0x80000) goto LAB_829a1dbc;
LAB_829a1db8:
  puVar9 = &lbl_8315BE30;
LAB_829a1dbc:
  uVar6 = 0;
  uVar7 = 0x10;
  piVar5 = puVar9 + -1;
  lVar10 = 4;
  do {
    piVar5 = piVar5 + 1;
    uVar6 = *piVar5 << (uVar7 & 0x3f) | uVar6;
    uVar7 = uVar7 + 2;
    lVar10 = lVar10 + -1;
  } while (lVar10 != 0);
  *param_5 = uVar6;
  return 0;
}

