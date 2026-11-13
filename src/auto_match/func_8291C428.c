#define true 1
extern int fn_8291C0A8();
extern int fn_82F66AC0();
extern int fn_82F66AE0();


unsigned __int64 fn_8291C428(int param_1,char *param_2,int *param_3)

{
  int iVar2;
  unsigned __int64 uVar1;
  unsigned __int64 uVar3;
  unsigned int uVar4;
  unsigned __int64 uVar5;
  char cVar9;
  __int64 lVar6;
  unsigned __int64 uVar7;
  char *pcVar8;
  char *pcVar10;
  __int64 lVar11;
  unsigned int uVar12;
  unsigned __int64 uVar13;
  
  cVar9 = *param_2;
  while (iVar2 = fn_82F66AC0(cVar9), iVar2 != 0) {
    param_2 = param_2 + 1;
    cVar9 = *param_2;
  }
  iVar2 = fn_82F66AE0(*param_2);
  if (((iVar2 != 0) || (*param_2 == '_')) || (*param_2 == '$')) {
    uVar12 = 1;
    while( true ) {
      pcVar10 = param_2 + uVar12;
      iVar2 = fn_82F66AE0(param_2[uVar12]);
      if ((iVar2 == 0) && (*pcVar10 != '_')) break;
      uVar12 = uVar12 + 1;
    }
    uVar13 = 0;
    uVar1 = (unsigned __int64)*(unsigned int *)(param_1 + 8);
    uVar3 = 0;
    uVar5 = (unsigned __int64)*(unsigned int *)(*(int *)(param_1 + 0x10) + 0xc);
    lVar11 = *(unsigned int *)(*(int *)(param_1 + 0x10) + 0x10) + uVar1;
    if (uVar5 != 0) {
      do {
        uVar4 = 0;
        uVar13 = (uVar5 + uVar3 & 0xffffffff) >> 1;
        iVar2 = *(int *)((int)uVar13 * 0x14 + (int)lVar11) + *(unsigned int *)(param_1 + 8);
        uVar7 = uVar13;
        if (uVar12 != 0) {
          pcVar8 = param_2;
          do {
            if (pcVar8[iVar2 - (int)param_2] < *pcVar8) {
              uVar3 = uVar13 + 1;
              uVar7 = uVar5;
              goto LAB_8291c554;
            }
            if (*pcVar8 < pcVar8[iVar2 - (int)param_2]) goto LAB_8291c554;
            uVar4 = uVar4 + 1;
            pcVar8 = pcVar8 + 1;
          } while (uVar4 < uVar12);
        }
        if ((uVar4 != uVar12) || (*(char *)(uVar4 + iVar2) == '\0')) break;
LAB_8291c554:
        uVar5 = uVar7;
      } while (uVar3 < uVar7);
    }
    if (uVar3 != uVar5) {
      lVar6 = uVar13 * 0x14 + lVar11;
      uVar5 = *(unsigned int *)lVar6 + uVar1;
      for (; uVar13 != 0; uVar13 = uVar13 - 1) {
        lVar6 = lVar6 + -0x14;
        uVar7 = *(unsigned int *)lVar6 + uVar1;
        uVar3 = uVar5;
        if ((uVar5 & 0xffffffff) != (uVar7 & 0xffffffff)) {
          do {
            cVar9 = *(char *)uVar3;
            pcVar8 = (char *)uVar7;
            if (cVar9 == '\0') break;
            uVar7 = uVar7 + 1;
            uVar3 = uVar3 + 1;
          } while (cVar9 == *pcVar8);
          if (cVar9 != *pcVar8) break;
        }
      }
      lVar6 = (uVar13 & 0x3fffffff) << 2;
      iVar2 = fn_8291C0A8(*(unsigned int *)((int)lVar6 + *(int *)(param_1 + 0x14)),pcVar10,0);
      if (iVar2 != 0) {
        lVar11 = uVar13 * 0x14 + lVar11;
        do {
          *param_3 = iVar2;
          uVar13 = uVar13 + 1;
          param_3 = (int *)(iVar2 + 0x24);
          lVar11 = lVar11 + 0x14;
          lVar6 = lVar6 + 4;
          if ((unsigned __int64)*(unsigned int *)(*(int *)(param_1 + 0x10) + 0xc) <= (uVar13 & 0xffffffff)) {
            return 0;
          }
          uVar3 = (unsigned __int64)*(unsigned int *)(param_1 + 8) + (unsigned __int64)*(unsigned int *)lVar11;
          uVar1 = uVar5;
          if ((uVar5 & 0xffffffff) != (uVar3 & 0xffffffff)) {
            do {
              cVar9 = *(char *)uVar1;
              pcVar8 = (char *)uVar3;
              if (cVar9 == '\0') break;
              uVar3 = uVar3 + 1;
              uVar1 = uVar1 + 1;
            } while (cVar9 == *pcVar8);
            if (cVar9 != *pcVar8) {
              return 0;
            }
          }
          iVar2 = fn_8291C0A8(*(unsigned int *)((int)lVar6 + *(int *)(param_1 + 0x14)),pcVar10,0);
        } while (iVar2 != 0);
      }
    }
  }
  return 0xffffffff8876086c;
}

