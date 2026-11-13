extern int memcpy();


void fn_82C3E3E8(int param_1,int *param_2,__int64 param_3,unsigned int *param_4)

{
  int iVar1;
  int iVar2;
  short *psVar3;
  __int64 lVar4;
  __int64 lVar5;
  int iVar6;
  unsigned __int64 uVar7;
  short *psVar8;
  int iVar9;
  unsigned __int64 uVar10;
  __int64 lVar11;
  
  uVar7 = (unsigned __int64)*(unsigned short *)(param_1 + 0x22);
  psVar3 = (short *)param_2[7];
  lVar4 = 0;
  uVar10 = (unsigned __int64)(unsigned int)param_2[9];
  iVar9 = param_2[5] * 2 + param_2[0xb];
  iVar1 = param_2[6];
  if (*(unsigned short *)(param_1 + 0x22) != 0) {
    iVar2 = (int)param_3 - (int)param_4;
    do {
      lVar5 = (unsigned __int64)*(unsigned int *)(iVar2 + (int)param_4) - (unsigned __int64)*param_4;
      if (lVar5 < 1) {
        if ((int)lVar5 < 0) {
          iVar6 = 0;
          if (0 < (__int64)(int)uVar7 * (__int64)*param_2) {
            psVar8 = psVar3;
            do {
              iVar6 = iVar6 + 1;
              *psVar8 = *psVar8 - *(short *)((iVar9 - (int)psVar3) + (int)psVar8);
              psVar8 = psVar8 + 1;
            } while (iVar6 < (int)((unsigned int)*(unsigned short *)(param_1 + 0x22) * *param_2));
          }
          lVar5 = param_3;
          uVar7 = uVar10;
          lVar11 = lVar4;
          if (0 < (int)lVar4) {
            do {
              psVar8 = (short *)uVar7;
              if (*(int *)lVar5 < 1) {
                if (*(int *)lVar5 < 0) {
                  *psVar8 = *(short *)(param_2 + 0xc) + *psVar8;
                }
              }
              else {
                *psVar8 = *psVar8 - *(short *)(param_2 + 0xc);
              }
              lVar11 = lVar11 + -1;
              lVar5 = lVar5 + 4;
              uVar7 = uVar7 + 2;
            } while (lVar11 != 0);
          }
        }
      }
      else {
        iVar6 = 0;
        if (0 < (__int64)(int)uVar7 * (__int64)*param_2) {
          psVar8 = psVar3;
          do {
            iVar6 = iVar6 + 1;
            *psVar8 = *(short *)((iVar9 - (int)psVar3) + (int)psVar8) + *psVar8;
            psVar8 = psVar8 + 1;
          } while (iVar6 < (int)((unsigned int)*(unsigned short *)(param_1 + 0x22) * *param_2));
        }
        lVar5 = param_3;
        uVar7 = uVar10;
        lVar11 = lVar4;
        if (0 < (int)lVar4) {
          do {
            psVar8 = (short *)uVar7;
            if (*(int *)lVar5 < 1) {
              if (*(int *)lVar5 < 0) {
                *psVar8 = *psVar8 - *(short *)(param_2 + 0xc);
              }
            }
            else {
              *psVar8 = *(short *)(param_2 + 0xc) + *psVar8;
            }
            lVar11 = lVar11 + -1;
            lVar5 = lVar5 + 4;
            uVar7 = uVar7 + 2;
          } while (lVar11 != 0);
        }
      }
      uVar7 = (unsigned __int64)*(unsigned short *)(param_1 + 0x22);
      lVar4 = lVar4 + 1;
      param_4 = param_4 + 1;
      uVar10 = uVar7 * 2 + uVar10;
      psVar3 = psVar3 + param_2[1];
    } while ((int)lVar4 < (int)(unsigned int)*(unsigned short *)(param_1 + 0x22));
  }
  if (-1 < (__int64)(uVar7 - 1)) {
    param_3 = (uVar7 - 1 & 0x3fffffff) * 4 + param_3;
    do {
      iVar9 = param_2[5];
      param_2[5] = iVar9 + -1;
      iVar2 = (iVar9 + -1) * 4;
      iVar9 = *(int *)param_3;
      if (*(int *)(param_1 + 0x2d0) < iVar9) {
        *(int *)(iVar2 + iVar1) = *(int *)(param_1 + 0x2d0);
      }
      else if (iVar9 < *(int *)(param_1 + 0x2d4)) {
        *(int *)(iVar2 + iVar1) = *(int *)(param_1 + 0x2d4);
      }
      else {
        *(int *)(iVar2 + iVar1) = iVar9;
      }
      iVar9 = *(int *)param_3;
      if (iVar9 < 1) {
        if (iVar9 < 0) {
          *(short *)(param_2[5] * 2 + param_2[0xb]) = -*(short *)(param_2 + 0xc);
        }
        else {
          *(unsigned short *)(param_2[5] * 2 + param_2[0xb]) = 0;
        }
      }
      else {
        *(unsigned short *)(param_2[5] * 2 + param_2[0xb]) = *(unsigned short *)(param_2 + 0xc);
      }
      param_3 = param_3 + -4;
      uVar7 = uVar7 - 1;
    } while (uVar7 != 0);
  }
  if (param_2[5] == 0) {
    memcpy(((__int64)(int)(unsigned int)*(unsigned short *)(param_1 + 0x22) * (__int64)*param_2 &
                 0x3fffffffU) * 4 + (unsigned __int64)(unsigned int)param_2[6],(unsigned __int64)(unsigned int)param_2[6],
                 param_2[1] << 2);
    memcpy(((__int64)(int)(unsigned int)*(unsigned short *)(param_1 + 0x22) * (__int64)*param_2 &
                 0x7fffffffU) * 2 + (unsigned __int64)(unsigned int)param_2[0xb],(unsigned __int64)(unsigned int)param_2[0xb],
                 param_2[1] << 1);
    param_2[5] = param_2[1];
  }
  return;
}

