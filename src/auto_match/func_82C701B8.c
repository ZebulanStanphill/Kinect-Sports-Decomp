int fn_82C701B8(int param_1,int param_2,unsigned int *param_3,int param_4)

{
  unsigned char bVar1;
  unsigned int uVar2;
  unsigned int uVar3;
  int iVar4;
  unsigned int uVar5;
  __int64 lVar6;
  int iVar8;
  __int64 lVar7;
  int iVar9;
  int iVar10;
  unsigned __int64 uVar11;
  
  uVar2 = *param_3 & 0xfffffff8;
  uVar3 = 0;
  param_4 = param_4 - param_3[3];
  if (0 < (int)uVar2) {
    iVar10 = 0xc;
    do {
      bVar1 = *(unsigned char *)(((int)uVar3 >> 3) + param_3[0xf]);
      if (bVar1 == 0) {
        *(unsigned int *)(uVar3 + param_1) = 0;
        *(unsigned int *)(uVar3 + param_1 + 4) = 0;
      }
      else if (bVar1 == 0xff) {
        iVar9 = iVar10 + -0xc;
        lVar7 = (__int64)(*(int *)(param_3[0x11] + iVar9) * param_4 >> 0x14) +
                (unsigned __int64)param_3[3];
        if ((lVar7 < 0) || (iVar4 = (int)lVar7, (int)param_3[1] <= iVar4)) {
          *(unsigned char *)(uVar3 + param_1) = 0;
        }
        else {
          *(unsigned char *)(uVar3 + param_1) =
               *(unsigned char *)(*(int *)(param_3[0x10] + iVar9) + *param_3 * iVar4 + param_2);
        }
        lVar7 = (__int64)(*(int *)(param_3[0x11] + iVar9 + 4) * param_4 >> 0x14) +
                (unsigned __int64)param_3[3];
        if ((lVar7 < 0) || (iVar4 = (int)lVar7, (int)param_3[1] <= iVar4)) {
          *(unsigned char *)(uVar3 + param_1 + 1) = 0;
        }
        else {
          *(unsigned char *)(uVar3 + param_1 + 1) =
               *(unsigned char *)(*(int *)(param_3[0x10] + iVar9 + 4) + *param_3 * iVar4 + param_2);
        }
        lVar7 = (__int64)(*(int *)(param_3[0x11] + iVar10 + -4) * param_4 >> 0x14) +
                (unsigned __int64)param_3[3];
        if ((lVar7 < 0) || (iVar9 = (int)lVar7, (int)param_3[1] <= iVar9)) {
          *(unsigned char *)(uVar3 + param_1 + 2) = 0;
        }
        else {
          *(unsigned char *)(uVar3 + param_1 + 2) =
               *(unsigned char *)(*(int *)(param_3[0x10] + iVar10 + -4) + *param_3 * iVar9 + param_2);
        }
        lVar7 = (__int64)(*(int *)(param_3[0x11] + iVar10) * param_4 >> 0x14) +
                (unsigned __int64)param_3[3];
        if ((lVar7 < 0) || (iVar9 = (int)lVar7, (int)param_3[1] <= iVar9)) {
          *(unsigned char *)(uVar3 + param_1 + 3) = 0;
        }
        else {
          *(unsigned char *)(uVar3 + param_1 + 3) =
               *(unsigned char *)(*(int *)(param_3[0x10] + iVar10) + *param_3 * iVar9 + param_2);
        }
        lVar7 = (__int64)(*(int *)(param_3[0x11] + iVar10 + 4) * param_4 >> 0x14) +
                (unsigned __int64)param_3[3];
        if ((lVar7 < 0) || (iVar9 = (int)lVar7, (int)param_3[1] <= iVar9)) {
          *(unsigned char *)(uVar3 + param_1 + 4) = 0;
        }
        else {
          *(unsigned char *)(uVar3 + param_1 + 4) =
               *(unsigned char *)(*(int *)(param_3[0x10] + iVar10 + 4) + *param_3 * iVar9 + param_2);
        }
        lVar7 = (__int64)(*(int *)(param_3[0x11] + iVar10 + 8) * param_4 >> 0x14) +
                (unsigned __int64)param_3[3];
        if ((lVar7 < 0) || (iVar9 = (int)lVar7, (int)param_3[1] <= iVar9)) {
          *(unsigned char *)(uVar3 + param_1 + 5) = 0;
        }
        else {
          *(unsigned char *)(uVar3 + param_1 + 5) =
               *(unsigned char *)(*(int *)(param_3[0x10] + iVar10 + 8) + *param_3 * iVar9 + param_2);
        }
        lVar7 = (__int64)(*(int *)(param_3[0x11] + iVar10 + 0xc) * param_4 >> 0x14) +
                (unsigned __int64)param_3[3];
        if ((lVar7 < 0) || (iVar9 = (int)lVar7, (int)param_3[1] <= iVar9)) {
          *(unsigned char *)(uVar3 + param_1 + 6) = 0;
        }
        else {
          *(unsigned char *)(uVar3 + param_1 + 6) =
               *(unsigned char *)(*(int *)(param_3[0x10] + iVar10 + 0xc) + *param_3 * iVar9 + param_2);
        }
        lVar7 = (__int64)(*(int *)(param_3[0x11] + iVar10 + 0x10) * param_4 >> 0x14) +
                (unsigned __int64)param_3[3];
        if ((lVar7 < 0) || (iVar9 = (int)lVar7, (int)param_3[1] <= iVar9)) {
          *(unsigned char *)(uVar3 + param_1 + 7) = 0;
        }
        else {
          *(unsigned char *)(uVar3 + param_1 + 7) =
               *(unsigned char *)(*(int *)(param_3[0x10] + iVar10 + 0x10) + *param_3 * iVar9 + param_2)
          ;
        }
      }
      else {
        iVar4 = 0;
        uVar11 = 1;
        iVar9 = iVar10 + -0xc;
        lVar7 = 8;
        do {
          if (((unsigned int)bVar1 & (unsigned int)uVar11) == 0) {
LAB_82c7053c:
            *(unsigned char *)(uVar3 + param_1 + iVar4) = 0;
          }
          else {
            lVar6 = (__int64)(*(int *)(param_3[0x11] + iVar9) * param_4 >> 0x14) +
                    (unsigned __int64)param_3[3];
            if ((lVar6 < 0) || (iVar8 = (int)lVar6, (int)param_3[1] <= iVar8)) goto LAB_82c7053c;
            *(unsigned char *)(uVar3 + param_1 + iVar4) =
                 *(unsigned char *)(*(int *)(param_3[0x10] + iVar9) + *param_3 * iVar8 + param_2);
          }
          iVar4 = iVar4 + 1;
          iVar9 = iVar9 + 4;
          uVar11 = (uVar11 & 0x7fffffff) << 1 | uVar11 >> 0x1f;
          lVar7 = lVar7 + -1;
        } while (lVar7 != 0);
      }
      uVar3 = uVar3 + 8;
      iVar10 = iVar10 + 0x20;
    } while ((int)uVar3 < (int)uVar2);
  }
  uVar5 = *param_3;
  if ((uVar5 != uVar2) &&
     (bVar1 = *(unsigned char *)(((int)uVar3 >> 3) + param_3[0xf]), (int)uVar3 < (int)uVar5)) {
    iVar10 = uVar3 << 2;
    do {
      if ((1 << (uVar3 & 7) & (unsigned int)bVar1) == 0) {
LAB_82c705e0:
        *(unsigned char *)(uVar3 + param_1) = 0;
      }
      else {
        lVar7 = (__int64)(*(int *)(param_3[0x11] + iVar10) * param_4 >> 0x14) +
                (unsigned __int64)param_3[3];
        if ((lVar7 < 0) || (iVar9 = (int)lVar7, (int)param_3[1] <= iVar9)) goto LAB_82c705e0;
        *(unsigned char *)(uVar3 + param_1) =
             *(unsigned char *)(*(int *)(param_3[0x10] + iVar10) + uVar5 * iVar9 + param_2);
      }
      uVar5 = *param_3;
      uVar3 = uVar3 + 1;
      iVar10 = iVar10 + 4;
    } while ((int)uVar3 < (int)uVar5);
  }
  return uVar5 + param_1;
}

