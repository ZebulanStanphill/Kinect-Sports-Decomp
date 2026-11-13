extern unsigned int *auStack_80;
extern unsigned int uStack_88;


unsigned __int64 fn_82CABF20(unsigned int *param_1,int param_2)

{
  unsigned int uVar1;
  unsigned int uVar2;
  unsigned int uVar3;
  unsigned int uVar4;
  unsigned __int64 *puVar5;
  unsigned int uVar6;
  unsigned int *puVar7;
  unsigned int uVar8;
  int iVar9;
  unsigned int uVar10;
  __int64 lVar11;
  unsigned __int64 uStack_88;
  unsigned int auStack_80 [32];
  
  puVar5 = &uStack_88;
  uVar10 = 0;
  *param_1 = param_2 << 6 | *param_1 & 0x3f;
  lVar11 = 10;
  do {
    puVar5 = puVar5 + 1;
    *puVar5 = 0;
    lVar11 = lVar11 + -1;
  } while (lVar11 != 0);
  iVar9 = 0;
  if (0 < param_2) {
    do {
      uVar2 = param_1[1] & 0x3f;
      if (0x13 < uVar2) {
        return 0xfffffffffffffffd;
      }
      uVar4 = param_1[1] & 0x3f;
      uVar8 = 1 << (0x14 - uVar2 & 0x3f);
      uVar1 = auStack_80[uVar4];
      param_1 = param_1 + 1;
      *param_1 = ((int)uVar1 >> (0x14 - uVar2 & 0x3f)) << 6 | uVar2;
      if ((uVar8 & uVar1) == 0) {
        uVar3 = uVar8 + uVar1;
      }
      else {
        uVar3 = auStack_80[uVar4 - 1];
      }
      auStack_80[uVar4] = uVar3;
      if (uVar3 == 0x100000) {
        uVar10 = uVar2;
      }
      uVar4 = uVar2 - 1;
      if ((int)uVar10 < (int)uVar4) {
        puVar7 = auStack_80 + uVar4;
        do {
          uVar6 = *puVar7;
          if (uVar6 != uVar1) break;
          uVar8 = uVar8 * 2;
          if ((uVar6 & uVar8) == 0) {
            uVar6 = uVar6 + uVar8;
          }
          else {
            uVar6 = puVar7[-1];
          }
          *puVar7 = uVar6;
          if (uVar6 == 0x100000) {
            uVar10 = uVar4;
          }
          uVar4 = uVar4 - 1;
          puVar7 = puVar7 + -1;
        } while ((int)uVar10 < (int)uVar4);
      }
      uVar8 = uVar2 + 1;
      if (uVar8 < 0x14) {
        puVar7 = auStack_80 + uVar2;
        do {
          if (puVar7[1] != uVar1) break;
          uVar8 = uVar8 + 1;
          puVar7 = puVar7 + 1;
          *puVar7 = uVar3;
        } while ((int)uVar8 < 0x14);
      }
      iVar9 = iVar9 + 1;
    } while (iVar9 < param_2);
  }
  return 0;
}

