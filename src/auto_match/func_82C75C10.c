extern int fn_82CA6740();
extern int fn_82CA6768();
extern unsigned int lbl_820FC450;


void fn_82C75C10(int param_1)

{
  int iVar1;
  unsigned int uVar3;
  unsigned int uVar4;
  unsigned __int64 uVar2;
  __int64 lVar5;
  unsigned __int64 uVar6;
  int iVar7;
  int iVar8;
  unsigned int *puVar9;
  int iVar10;
  __int64 lVar11;
  
  lVar11 = 0;
  puVar9 = (unsigned int *)(*(int *)(param_1 + 0x50d0) * 0x90 + *(int *)(param_1 + 0x170) + -4);
  do {
    iVar10 = *(int *)(*(int *)(param_1 + 0x7b8) + 0x4c);
    uVar3 = fn_82CA6740(lVar11,6);
    if ((iVar10 == 0) || (iVar7 = 1, uVar3 != 5)) {
      iVar7 = 0;
    }
    iVar8 = *(int *)(&lbl_820FC450 + uVar3 * 4);
    uVar4 = fn_82CA6768(lVar11,6);
    if ((iVar10 == 0) || (lVar5 = 1, uVar4 != 5)) {
      lVar5 = 0;
    }
    uVar6 = (((unsigned __int64)*(unsigned int *)(&lbl_820FC450 + uVar4 * 4) - lVar5 & 0xffffffff) >> 0x1f) - 1 &
            (unsigned __int64)*(unsigned int *)(&lbl_820FC450 + uVar4 * 4) - lVar5;
    lVar11 = lVar11 + 1;
    puVar9 = puVar9 + 1;
    *puVar9 = (1 << ((unsigned int)uVar6 & 0x3f)) * 0x1000000 - 0x1000000U |
              (1 << (uVar3 & 0x3f)) * 0x100 - 0x100U | (1 << (uVar4 & 0x3f)) * 0x10000 - 0x10000U |
              (unsigned int)((uVar6 & 0xffffffff) << 4) & 0xf0 |
              0xffffffffU - (iVar8 - iVar7 >> 0x1f) & iVar8 - iVar7 & 0xf;
  } while ((int)lVar11 < 0x24);
  lVar11 = 0;
  iVar10 = 0;
  do {
    iVar7 = *(int *)(*(int *)(param_1 + 0x7b8) + 0x4c);
    uVar6 = fn_82CA6740(lVar11,6);
    if ((iVar7 == 0) || (iVar8 = 1, (int)uVar6 != 5)) {
      iVar8 = 0;
    }
    iVar1 = *(int *)(&lbl_820FC450 + (int)((uVar6 & 0xffffffff) << 2));
    uVar2 = fn_82CA6768(lVar11,6);
    if ((iVar7 == 0) || (lVar5 = 1, (int)uVar2 != 5)) {
      lVar5 = 0;
    }
    lVar11 = lVar11 + 1;
    *(unsigned short *)(iVar10 + *(int *)(param_1 + 0x16c)) =
         (unsigned short)(((uVar2 & 0xfffffff) << 4 |
                  (((unsigned __int64)*(unsigned int *)(&lbl_820FC450 + (int)((uVar2 & 0xffffffff) << 2)) - lVar5 &
                   0xffffffff) >> 0x1f) - 1 &
                  (unsigned __int64)*(unsigned int *)(&lbl_820FC450 + (int)((uVar2 & 0xffffffff) << 2)) - lVar5 &
                  0xffffffff) << 8) |
         (unsigned short)((uVar6 & 0xffffffff) << 4) |
         -(short)(iVar1 - iVar8 >> 0x1f) - 1U & (unsigned short)(iVar1 - iVar8);
    iVar10 = iVar10 + 2;
  } while (iVar10 < 0x48);
  return;
}

