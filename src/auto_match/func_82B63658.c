extern unsigned int *auStack_110;
extern unsigned int *auStack_d0;
extern int fn_82B633C8();


void fn_82B63658(unsigned int param_1,unsigned int param_2,int param_3,int param_4,__int64 param_5,
                  __int64 param_6,__int64 param_7,__int64 param_8)

{
  unsigned int uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  __int64 lVar5;
  unsigned int *puVar6;
  __int64 lVar7;
  int iVar8;
  int iVar9;
  __int64 lVar10;
  __int64 lVar11;
  int iVar12;
  unsigned int uVar13;
  __int64 lVar14;
  unsigned int auStack_110 [16];
  unsigned int auStack_d0 [16];
  
  lVar11 = (__int64)((int)param_1 >> 2) + (unsigned __int64)((int)param_1 < 0 && (param_1 & 3) != 0);
  iVar8 = 0;
  lVar10 = (__int64)((int)param_2 >> 2) + (unsigned __int64)((int)param_2 < 0 && (param_2 & 3) != 0);
  if (0 < lVar10) {
    iVar2 = (int)lVar10;
    iVar9 = 0;
    do {
      lVar10 = 4;
      if (iVar2 + -1 <= iVar8) {
        lVar10 = 4 - param_8;
      }
      uVar13 = 0;
      iVar12 = (int)lVar11;
      if (0 < iVar12) {
        do {
          lVar5 = 0;
          iVar4 = iVar9;
          do {
            lVar7 = 0;
            lVar14 = 4;
            do {
              iVar3 = (int)((lVar5 + lVar7 & 0xffffffffU) << 2);
              puVar6 = (unsigned int *)
                       ((int)((((unsigned __int64)uVar13 & 0x3fffffff) * 4 + lVar7 & 0xffffffff) << 3) +
                        iVar4 + param_3);
              lVar7 = lVar7 + 1;
              uVar1 = puVar6[1];
              *(unsigned int *)((int)auStack_110 + iVar3) = *puVar6;
              *(unsigned int *)((int)auStack_d0 + iVar3) = uVar1;
              lVar14 = lVar14 + -1;
            } while (lVar14 != 0);
            lVar5 = lVar5 + 4;
            iVar4 = iVar4 + param_4;
          } while ((int)lVar5 < 0x10);
          lVar5 = 4;
          if (iVar12 + -1 <= (int)uVar13) {
            lVar5 = 4 - param_7;
          }
          fn_82B633C8(param_5,auStack_110,lVar5,lVar10);
          fn_82B633C8(param_5 + 8,auStack_d0,lVar5,lVar10);
          uVar13 = uVar13 + 1;
          param_5 = param_5 + 0x10;
        } while ((int)uVar13 < iVar12);
      }
      iVar8 = iVar8 + 1;
      param_5 = (param_6 - lVar11 & 0xfffffffU) * 0x10 + param_5;
      iVar9 = param_4 * 4 + iVar9;
    } while (iVar8 < iVar2);
  }
  return;
}

