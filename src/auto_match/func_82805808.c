__int64 fn_82805808(int param_1)

{
  unsigned char bVar1;
  __int64 lVar2;
  unsigned int uVar3;
  __int64 lVar4;
  __int64 lVar5;
  unsigned __int64 uVar6;
  unsigned int uVar7;
  unsigned __int64 uVar8;
  unsigned char *pbVar9;
  unsigned int uVar10;
  
  uVar6 = (unsigned __int64)*(unsigned short *)(param_1 + 0x22);
  lVar2 = 0;
  pbVar9 = *(unsigned char **)(param_1 + 0xc);
  if (uVar6 != 0) {
    uVar10 = (unsigned int)*(unsigned short *)(param_1 + 0x1e);
    do {
      if (uVar10 != 0) {
        uVar3 = 6;
        do {
          bVar1 = *pbVar9;
          uVar7 = uVar3 - 6;
          lVar4 = 0;
          uVar8 = 0x80;
          do {
            if (uVar10 <= uVar7) break;
            if (((bVar1 & uVar8) != 0) && (((unsigned __int64)bVar1 & uVar8 >> 3) == 0)) {
              lVar4 = lVar4 + 1;
            }
            uVar8 = uVar8 >> 1;
            uVar7 = uVar7 + 1;
          } while (uVar8 != 0x10);
          bVar1 = bVar1 & 3;
          lVar2 = lVar4 + lVar2;
          if (bVar1 == 1) {
            lVar4 = 0;
            uVar8 = 0x80;
            uVar7 = uVar3;
            do {
              if (uVar10 <= uVar7) break;
              if (((pbVar9[1] & uVar8) != 0) && (((unsigned __int64)pbVar9[1] & uVar8 >> 3) == 0)) {
                lVar4 = lVar4 + 1;
              }
              uVar8 = uVar8 >> 1;
              uVar7 = uVar7 + 1;
            } while (uVar8 != 0x10);
LAB_828059bc:
            pbVar9 = pbVar9 + 1;
            lVar2 = lVar4 + lVar2;
          }
          else {
            if (bVar1 == 2) {
              uVar7 = uVar3 - 3;
              lVar4 = 0;
              uVar8 = 0x80;
              do {
                if (uVar10 <= uVar7) break;
                if (((pbVar9[1] & uVar8) != 0) && (((unsigned __int64)pbVar9[1] & uVar8 >> 3) == 0)) {
                  lVar4 = lVar4 + 1;
                }
                uVar8 = uVar8 >> 1;
                uVar7 = uVar7 + 1;
              } while (uVar8 != 0x10);
              goto LAB_828059bc;
            }
            if (bVar1 == 3) {
              uVar7 = uVar3 - 3;
              lVar4 = 0;
              uVar8 = 0x80;
              do {
                if (uVar10 <= uVar7) break;
                if (((pbVar9[1] & uVar8) != 0) && (((unsigned __int64)pbVar9[1] & uVar8 >> 3) == 0)) {
                  lVar4 = lVar4 + 1;
                }
                uVar8 = uVar8 >> 1;
                uVar7 = uVar7 + 1;
              } while (uVar8 != 0x10);
              pbVar9 = pbVar9 + 2;
              lVar5 = 0;
              uVar8 = 0x80;
              uVar7 = uVar3;
              do {
                if (uVar10 <= uVar7) break;
                if (((*pbVar9 & uVar8) != 0) && (((unsigned __int64)*pbVar9 & uVar8 >> 3) == 0)) {
                  lVar5 = lVar5 + 1;
                }
                uVar8 = uVar8 >> 1;
                uVar7 = uVar7 + 1;
              } while (uVar8 != 0x10);
              lVar2 = lVar5 + lVar4 + lVar2;
            }
          }
          pbVar9 = pbVar9 + 1;
          uVar7 = uVar3 + 3;
          uVar3 = uVar3 + 9;
        } while (uVar7 < uVar10);
      }
      uVar6 = uVar6 - 1;
    } while (uVar6 != 0);
  }
  return lVar2;
}

