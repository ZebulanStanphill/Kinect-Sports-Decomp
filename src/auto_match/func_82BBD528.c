extern unsigned int *auStack_40;
extern unsigned int *auStack_50;
extern int fn_82BBD0F0();
extern int fn_82BBD220();


__int64 fn_82BBD528(__int64 param_1,int param_2,unsigned __int64 param_3,unsigned __int64 param_4)

{
  int iVar1;
  unsigned int *puVar2;
  unsigned char *puVar3;
  unsigned int uVar4;
  __int64 lVar5;
  __int64 lVar6;
  __int64 lVar7;
  int iVar8;
  unsigned int uVar9;
  unsigned int uVar10;
  __int64 lVar11;
  int iVar12;
  unsigned int uVar13;
  int iVar14;
  __int64 lVar15;
  __int64 lVar16;
  unsigned int auStack_50 [4];
  unsigned char auStack_40 [64];
  
  lVar5 = fn_82BBD0F0(param_3);
  if (lVar5 == 0) {
    lVar6 = 0;
  }
  else {
    lVar6 = fn_82BBD220(auStack_50,param_3);
    iVar14 = (int)lVar5;
    iVar12 = (int)param_1;
    if (iVar14 < 5) {
      uVar13 = 0;
      uVar9 = 0;
      if (0 < (int)lVar6) {
        lVar7 = lVar6;
        do {
          puVar2 = (unsigned int *)param_1;
          uVar4 = *(unsigned int *)((int)puVar2 + ((int)auStack_50 - iVar12));
          if ((int)uVar4 < 0x20) {
            uVar10 = (1 << (uVar4 & 0x3f)) - 1;
          }
          else {
            uVar10 = 0xffffffff;
          }
          param_1 = param_1 + 4;
          uVar13 = (*puVar2 & uVar10) << (uVar9 & 0x3f) | uVar13;
          uVar9 = uVar4 + uVar9;
          lVar7 = lVar7 + -1;
        } while (lVar7 != 0);
      }
      iVar12 = 0;
      if (0 < iVar14) {
        uVar9 = 0;
        lVar7 = lVar5;
        do {
          auStack_40[iVar12] = (char)((int)uVar13 >> (uVar9 & 0x3f));
          uVar9 = uVar9 + 8;
          iVar12 = iVar12 + 1;
          lVar7 = lVar7 + -1;
        } while (lVar7 != 0);
      }
    }
    else {
      lVar7 = 0;
      if (0 < (int)lVar6) {
        lVar15 = lVar6;
        do {
          iVar8 = 0;
          iVar1 = *(int *)param_1;
          lVar11 = (__int64)(*(int *)(((int)auStack_50 - iVar12) + (int)(int *)param_1) >> 3);
          if (0 < lVar11) {
            uVar13 = 0;
            lVar16 = lVar11;
            do {
              auStack_40[iVar8 + (int)lVar7] = (char)(iVar1 >> (uVar13 & 0x3f));
              uVar13 = uVar13 + 8;
              iVar8 = iVar8 + 1;
              lVar16 = lVar16 + -1;
            } while (lVar16 != 0);
          }
          lVar15 = lVar15 + -1;
          lVar7 = lVar11 + lVar7;
          param_1 = param_1 + 4;
        } while (lVar15 != 0);
      }
    }
    uVar9 = 0;
    uVar13 = *(unsigned int *)((int)((param_4 & 0xffffffff) << 2) + -0x7ce91840);
    if (0 < iVar14) {
      do {
        uVar4 = uVar13 ^ uVar9;
        puVar3 = auStack_40 + uVar9;
        uVar9 = uVar9 + 1;
        *(unsigned char *)(uVar4 + param_2) = *puVar3;
        lVar5 = lVar5 + -1;
      } while (lVar5 != 0);
    }
  }
  return lVar6;
}

