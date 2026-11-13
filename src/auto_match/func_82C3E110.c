extern int memcpy();


void fn_82C3E110(int param_1,int *param_2,__int64 param_3,unsigned int *param_4)

{
  int iVar1;
  int iVar2;
  __int64 lVar3;
  __int64 lVar4;
  int iVar5;
  unsigned __int64 uVar6;
  short *psVar7;
  int iVar8;
  unsigned __int64 uVar9;
  short *psVar10;
  __int64 lVar11;
  
  uVar6 = (unsigned __int64)*(unsigned short *)(param_1 + 0x22);
  psVar10 = (short *)param_2[7];
  uVar9 = (unsigned __int64)(unsigned int)param_2[9];
  lVar3 = 0;
  iVar1 = param_2[6];
  iVar8 = param_2[5] * 2 + param_2[0xb];
  if (*(unsigned short *)(param_1 + 0x22) != 0) {
    iVar2 = (int)param_3 - (int)param_4;
    do {
      lVar4 = (unsigned __int64)*(unsigned int *)(iVar2 + (int)param_4) - (unsigned __int64)*param_4;
      if (lVar4 < 1) {
        if ((int)lVar4 < 0) {
          iVar5 = 0;
          if (0 < (__int64)(int)uVar6 * (__int64)*param_2) {
            psVar7 = psVar10;
            do {
              iVar5 = iVar5 + 1;
              *psVar7 = *psVar7 - *(short *)((iVar8 - (int)psVar10) + (int)psVar7);
              psVar7 = psVar7 + 1;
            } while (iVar5 < (int)((unsigned int)*(unsigned short *)(param_1 + 0x22) * *param_2));
          }
          lVar4 = param_3;
          uVar6 = uVar9;
          lVar11 = lVar3;
          if (0 < (int)lVar3) {
            do {
              psVar7 = (short *)uVar6;
              if (*(int *)lVar4 < 1) {
                if (*(int *)lVar4 < 0) {
                  *psVar7 = *(short *)(param_2 + 0xc) + *psVar7;
                }
              }
              else {
                *psVar7 = *psVar7 - *(short *)(param_2 + 0xc);
              }
              lVar11 = lVar11 + -1;
              lVar4 = lVar4 + 4;
              uVar6 = uVar6 + 2;
            } while (lVar11 != 0);
          }
        }
      }
      else {
        iVar5 = 0;
        if (0 < (__int64)(int)uVar6 * (__int64)*param_2) {
          psVar7 = psVar10;
          do {
            iVar5 = iVar5 + 1;
            *psVar7 = *(short *)((iVar8 - (int)psVar10) + (int)psVar7) + *psVar7;
            psVar7 = psVar7 + 1;
          } while (iVar5 < (int)((unsigned int)*(unsigned short *)(param_1 + 0x22) * *param_2));
        }
        lVar4 = param_3;
        uVar6 = uVar9;
        lVar11 = lVar3;
        if (0 < (int)lVar3) {
          do {
            psVar7 = (short *)uVar6;
            if (*(int *)lVar4 < 1) {
              if (*(int *)lVar4 < 0) {
                *psVar7 = *psVar7 - *(short *)(param_2 + 0xc);
              }
            }
            else {
              *psVar7 = *(short *)(param_2 + 0xc) + *psVar7;
            }
            lVar11 = lVar11 + -1;
            lVar4 = lVar4 + 4;
            uVar6 = uVar6 + 2;
          } while (lVar11 != 0);
        }
      }
      uVar6 = (unsigned __int64)*(unsigned short *)(param_1 + 0x22);
      lVar3 = lVar3 + 1;
      param_4 = param_4 + 1;
      uVar9 = uVar6 * 2 + uVar9;
      psVar10 = psVar10 + param_2[1];
    } while ((int)lVar3 < (int)(unsigned int)*(unsigned short *)(param_1 + 0x22));
  }
  if (-1 < (__int64)(uVar6 - 1)) {
    param_3 = (uVar6 - 1 & 0x3fffffff) * 4 + param_3;
    do {
      iVar8 = param_2[5];
      param_2[5] = iVar8 + -1;
      iVar2 = (iVar8 + -1) * 2;
      iVar8 = *(int *)param_3;
      if (*(int *)(param_1 + 0x2d0) < iVar8) {
        *(short *)(iVar2 + iVar1) = (short)*(int *)(param_1 + 0x2d0);
      }
      else if (iVar8 < *(int *)(param_1 + 0x2d4)) {
        *(short *)(iVar2 + iVar1) = (short)*(int *)(param_1 + 0x2d4);
      }
      else {
        *(short *)(iVar2 + iVar1) = (short)iVar8;
      }
      iVar8 = *(int *)param_3;
      if (iVar8 < 1) {
        if (iVar8 < 0) {
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
      uVar6 = uVar6 - 1;
    } while (uVar6 != 0);
  }
  if (param_2[5] == 0) {
    memcpy((unsigned int)*(unsigned short *)(param_1 + 0x22) * *param_2 * 2 + iVar1,iVar1,param_2[1] << 1);
    memcpy(((__int64)(int)(unsigned int)*(unsigned short *)(param_1 + 0x22) * (__int64)*param_2 &
                 0x7fffffffU) * 2 + (unsigned __int64)(unsigned int)param_2[0xb],(unsigned __int64)(unsigned int)param_2[0xb],
                 param_2[1] << 1);
    param_2[5] = param_2[1];
  }
  return;
}

