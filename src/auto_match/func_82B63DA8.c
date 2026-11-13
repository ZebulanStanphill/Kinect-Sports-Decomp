extern unsigned int *auStack_100;
extern unsigned int *auStack_c0;
extern int fn_82B63790();


void fn_82B63DA8(unsigned int param_1,unsigned int param_2,int param_3,int param_4,__int64 param_5,
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
  __int64 lVar9;
  int iVar10;
  int iVar11;
  __int64 lVar12;
  unsigned int uVar13;
  __int64 lVar14;
  unsigned int auStack_100 [16];
  unsigned int auStack_c0 [48];
  
  lVar9 = (__int64)((int)param_1 >> 2) + (unsigned __int64)((int)param_1 < 0 && (param_1 & 3) != 0);
  iVar8 = 0;
  lVar12 = (__int64)((int)param_2 >> 2) + (unsigned __int64)((int)param_2 < 0 && (param_2 & 3) != 0);
  if (0 < lVar12) {
    iVar2 = (int)lVar12;
    iVar11 = 0;
    do {
      lVar12 = 4;
      if (iVar2 + -1 <= iVar8) {
        lVar12 = 4 - param_8;
      }
      uVar13 = 0;
      iVar10 = (int)lVar9;
      if (0 < iVar10) {
        do {
          lVar5 = 0;
          iVar4 = iVar11;
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
              *(unsigned int *)((int)auStack_100 + iVar3) = *puVar6;
              *(unsigned int *)((int)auStack_c0 + iVar3) = uVar1;
              lVar14 = lVar14 + -1;
            } while (lVar14 != 0);
            lVar5 = lVar5 + 4;
            iVar4 = iVar4 + param_4;
          } while ((int)lVar5 < 0x10);
          lVar5 = 4;
          if (iVar10 + -1 <= (int)uVar13) {
            lVar5 = 4 - param_7;
          }
          fn_82B63790(param_5,auStack_c0,auStack_100,lVar5,lVar12);
          uVar13 = uVar13 + 1;
          param_5 = param_5 + 8;
        } while ((int)uVar13 < iVar10);
      }
      iVar8 = iVar8 + 1;
      param_5 = (param_6 - lVar9 & 0x1fffffffU) * 8 + param_5;
      iVar11 = param_4 * 4 + iVar11;
    } while (iVar8 < iVar2);
  }
  return;
}

