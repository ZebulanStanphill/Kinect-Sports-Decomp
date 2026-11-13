extern int fn_8265C9E0();
extern unsigned int lbl_83213E4C;
extern unsigned int lbl_83213E50;
extern unsigned int lbl_83213E54;


void fn_82887F18(unsigned __int64 param_1)

{
  int iVar1;
  unsigned char *puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  unsigned __int64 uVar6;
  unsigned int *puVar7;
  int iVar8;
  __int64 lVar9;
  
  lbl_83213E4C = (unsigned int)param_1;
  lbl_83213E50 = fn_8265C9E0(param_1 * 0x13ec);
  lbl_83213E54 = fn_8265C9E0((param_1 & 0x3ffffff) * 0x40 + param_1);
  uVar6 = (unsigned __int64)lbl_83213E4C;
  if (0 < (int)lbl_83213E4C) {
    puVar2 = (unsigned char *)(lbl_83213E54 + -0x41);
    iVar4 = lbl_83213E50;
    do {
      puVar7 = (unsigned int *)(iVar4 + 0x194);
      lVar9 = 0x33;
      do {
        puVar7[-0x32] = 0;
        puVar7 = puVar7 + 1;
        *puVar7 = 0;
        lVar9 = lVar9 + -1;
      } while (lVar9 != 0);
      iVar5 = 0x2ca;
      do {
        iVar8 = 0;
        lVar9 = 0x33;
        do {
          iVar3 = iVar5 + -0x231 + iVar8;
          iVar1 = iVar5 + iVar8;
          iVar8 = iVar8 + 1;
          *(unsigned int *)(iVar3 * 4 + iVar4) = 0;
          *(unsigned int *)(iVar1 * 4 + iVar4) = 0;
          lVar9 = lVar9 + -1;
        } while (lVar9 != 0);
        iVar5 = iVar5 + 0x33;
      } while (iVar5 < 0x4fb);
      uVar6 = uVar6 - 1;
      puVar2 = puVar2 + 0x41;
      *puVar2 = 0;
      iVar4 = iVar4 + 0x13ec;
    } while (uVar6 != 0);
  }
  return;
}

