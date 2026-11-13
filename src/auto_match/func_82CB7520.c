#define CONCAT11(h,l) ((unsigned short)((((unsigned char)(h)) << 8) | ((unsigned char)(l))))
#define CONCAT21(h,l) ((unsigned int)((((unsigned short)(h)) << 8) | ((unsigned char)(l))))
#define CONCAT31(h,l) ((unsigned int)((((unsigned int)(h)) << 8) | ((unsigned char)(l))))


void fn_82CB7520(int param_1,unsigned int *param_2,int param_3,unsigned char *param_4,int param_5,int param_6,
                  int param_7)

{
  int iVar1;
  unsigned __int64 uVar2;
  unsigned __int64 uVar3;
  int iVar4;
  unsigned __int64 uVar5;
  unsigned int uVar7;
  unsigned __int64 uVar6;
  int *piVar8;
  unsigned int *puVar9;
  unsigned char *puVar10;
  unsigned char *pbVar11;
  unsigned int *puVar12;
  __int64 lVar13;
  
  iVar1 = *(int *)(param_1 + 0x100);
  if (param_7 == 0) {
    lVar13 = 8;
    if (param_6 == 0) {
      puVar10 = (unsigned char *)((int)param_2 + 2);
      piVar8 = (int *)(param_3 + -4);
      do {
        pbVar11 = param_4 + param_5;
        iVar4 = (unsigned int)pbVar11[1] + (unsigned int)param_4[1] + 1;
        puVar10[-2] = *(unsigned char *)
                       (((unsigned int)*param_4 + (unsigned int)param_4[param_5] + iVar4 >> 2) + piVar8[1] + iVar1);
        puVar10[-1] = *(unsigned char *)
                       (((unsigned int)pbVar11[2] + (unsigned int)param_4[2] + iVar4 >> 2) + piVar8[2] + iVar1);
        iVar4 = (unsigned int)pbVar11[3] + (unsigned int)param_4[3] + 1;
        *puVar10 = *(unsigned char *)
                    (((unsigned int)pbVar11[2] + (unsigned int)param_4[2] + iVar4 >> 2) + piVar8[3] + iVar1);
        puVar10[1] = *(unsigned char *)
                      (((unsigned int)pbVar11[4] + (unsigned int)param_4[4] + iVar4 >> 2) + piVar8[4] + iVar1);
        iVar4 = (unsigned int)pbVar11[5] + (unsigned int)param_4[5] + 1;
        puVar10[2] = *(unsigned char *)
                      (((unsigned int)pbVar11[4] + (unsigned int)param_4[4] + iVar4 >> 2) + piVar8[5] + iVar1);
        puVar10[3] = *(unsigned char *)
                      (((unsigned int)param_4[6] + (unsigned int)pbVar11[6] + iVar4 >> 2) + piVar8[6] + iVar1);
        iVar4 = (unsigned int)pbVar11[7] + (unsigned int)param_4[7] + 1;
        puVar10[4] = *(unsigned char *)
                      (((unsigned int)param_4[6] + (unsigned int)pbVar11[6] + iVar4 >> 2) + piVar8[7] + iVar1);
        piVar8 = piVar8 + 8;
        puVar10[5] = *(unsigned char *)
                      (((unsigned int)pbVar11[8] + (unsigned int)param_4[8] + iVar4 >> 2) + *piVar8 + iVar1);
        puVar10 = puVar10 + param_5;
        lVar13 = lVar13 + -1;
        param_4 = pbVar11;
      } while (lVar13 != 0);
    }
    else {
      puVar9 = (unsigned int *)(param_3 + 8);
      do {
        pbVar11 = param_4 + param_5;
        uVar6 = (__int64)((int)((unsigned int)pbVar11[2] + (unsigned int)param_4[2]) >> 1) + (unsigned __int64)*puVar9;
        uVar5 = (__int64)((int)((unsigned int)pbVar11[3] + (unsigned int)param_4[3]) >> 1) + (unsigned __int64)puVar9[1];
        uVar7 = (unsigned int)uVar5;
        uVar3 = (__int64)((int)((unsigned int)pbVar11[1] + (unsigned int)param_4[1]) >> 1) + (unsigned __int64)puVar9[-1];
        uVar2 = (__int64)((int)((unsigned int)*param_4 + (unsigned int)param_4[param_5]) >> 1) +
                (unsigned __int64)puVar9[-2];
        if (((uVar5 | uVar6 | uVar3 | uVar2) & 0xffffff00) == 0) {
          uVar2 = uVar2 & 0xffffff;
        }
        else {
          uVar2 = (unsigned __int64)*(unsigned char *)((int)uVar2 + iVar1);
          uVar3 = (unsigned __int64)*(unsigned char *)((int)uVar3 + iVar1);
          uVar6 = (unsigned __int64)*(unsigned char *)((int)uVar6 + iVar1);
          uVar7 = (unsigned int)*(unsigned char *)(uVar7 + iVar1);
        }
        *param_2 = (unsigned int)((((uVar2 << 8 | uVar3 & 0xffffffff) & 0xffffff) << 8 | uVar6 & 0xffffffff)
                         << 8) | uVar7;
        uVar6 = (__int64)((int)((unsigned int)pbVar11[6] + (unsigned int)param_4[6]) >> 1) + (unsigned __int64)puVar9[4];
        uVar5 = (__int64)((int)((unsigned int)pbVar11[7] + (unsigned int)param_4[7]) >> 1) + (unsigned __int64)puVar9[5];
        uVar7 = (unsigned int)uVar5;
        uVar3 = (__int64)((int)((unsigned int)pbVar11[5] + (unsigned int)param_4[5]) >> 1) + (unsigned __int64)puVar9[3];
        uVar2 = (__int64)((int)((unsigned int)pbVar11[4] + (unsigned int)param_4[4]) >> 1) + (unsigned __int64)puVar9[2];
        if (((uVar5 | uVar6 | uVar3 | uVar2) & 0xffffff00) == 0) {
          uVar2 = uVar2 & 0xffffff;
        }
        else {
          uVar2 = (unsigned __int64)*(unsigned char *)((int)uVar2 + iVar1);
          uVar3 = (unsigned __int64)*(unsigned char *)((int)uVar3 + iVar1);
          uVar6 = (unsigned __int64)*(unsigned char *)((int)uVar6 + iVar1);
          uVar7 = (unsigned int)*(unsigned char *)(uVar7 + iVar1);
        }
        puVar9 = puVar9 + 8;
        param_2[1] = (unsigned int)((((uVar2 << 8 | uVar3 & 0xffffffff) & 0xffffff) << 8 |
                            uVar6 & 0xffffffff) << 8) | uVar7;
        param_2 = (unsigned int *)((int)param_2 + param_5);
        lVar13 = lVar13 + -1;
        param_4 = pbVar11;
      } while (lVar13 != 0);
    }
  }
  else {
    puVar9 = (unsigned int *)(param_3 + 8);
    pbVar11 = param_4 + 2;
    lVar13 = 8;
    if (param_6 == 0) {
      puVar12 = param_2 + 1;
      do {
        uVar6 = (__int64)((int)((unsigned int)pbVar11[1] + (unsigned int)*pbVar11) >> 1) + (unsigned __int64)*puVar9;
        uVar5 = (__int64)((int)((unsigned int)pbVar11[2] + (unsigned int)pbVar11[1]) >> 1) + (unsigned __int64)puVar9[1];
        uVar3 = (__int64)((int)((unsigned int)pbVar11[-1] + (unsigned int)*pbVar11) >> 1) + (unsigned __int64)puVar9[-1];
        uVar2 = (__int64)((int)((unsigned int)pbVar11[-2] + (unsigned int)pbVar11[-1]) >> 1) +
                (unsigned __int64)puVar9[-2];
        uVar7 = (unsigned int)uVar5;
        if (((uVar5 | uVar6 | uVar3 | uVar2) & 0xffffff00) == 0) {
          uVar7 = (unsigned int)(((((uVar2 & 0xffffff) << 8 | uVar3 & 0xffffffff) & 0xffffff) << 8 |
                         uVar6 & 0xffffffff) << 8) | uVar7;
        }
        else {
          uVar7 = CONCAT31(CONCAT21(CONCAT11(*(unsigned char *)((int)uVar2 + iVar1),
                                             *(unsigned char *)((int)uVar3 + iVar1)),
                                    *(unsigned char *)((int)uVar6 + iVar1)),
                           *(unsigned char *)(uVar7 + iVar1));
        }
        *(unsigned int *)(pbVar11 + (int)param_2 + (-2 - (int)param_4)) = uVar7;
        uVar6 = (__int64)((int)((unsigned int)pbVar11[5] + (unsigned int)pbVar11[4]) >> 1) + (unsigned __int64)puVar9[4];
        uVar5 = (__int64)((int)((unsigned int)pbVar11[6] + (unsigned int)pbVar11[5]) >> 1) + (unsigned __int64)puVar9[5];
        uVar3 = (__int64)((int)((unsigned int)pbVar11[4] + (unsigned int)pbVar11[3]) >> 1) + (unsigned __int64)puVar9[3];
        uVar2 = (__int64)((int)((unsigned int)pbVar11[2] + (unsigned int)pbVar11[3]) >> 1) + (unsigned __int64)puVar9[2];
        uVar7 = (unsigned int)uVar5;
        if (((uVar5 | uVar6 | uVar3 | uVar2) & 0xffffff00) == 0) {
          uVar7 = (unsigned int)(((((uVar2 & 0xffffff) << 8 | uVar3 & 0xffffffff) & 0xffffff) << 8 |
                         uVar6 & 0xffffffff) << 8) | uVar7;
        }
        else {
          uVar7 = CONCAT31(CONCAT21(CONCAT11(*(unsigned char *)((int)uVar2 + iVar1),
                                             *(unsigned char *)((int)uVar3 + iVar1)),
                                    *(unsigned char *)((int)uVar6 + iVar1)),
                           *(unsigned char *)(uVar7 + iVar1));
        }
        *puVar12 = uVar7;
        pbVar11 = pbVar11 + param_5;
        puVar12 = (unsigned int *)((int)puVar12 + param_5);
        puVar9 = puVar9 + 8;
        lVar13 = lVar13 + -1;
      } while (lVar13 != 0);
    }
    else {
      do {
        uVar5 = (unsigned __int64)*pbVar11 + (unsigned __int64)*puVar9;
        uVar3 = (unsigned __int64)pbVar11[-1] + (unsigned __int64)puVar9[-1];
        uVar2 = (unsigned __int64)pbVar11[-2] + (unsigned __int64)puVar9[-2];
        uVar7 = (unsigned int)((unsigned __int64)pbVar11[1] + (unsigned __int64)puVar9[1]);
        if ((((unsigned __int64)pbVar11[1] + (unsigned __int64)puVar9[1] | uVar5 | uVar3 | uVar2) & 0xffffff00) ==
            0) {
          uVar7 = (unsigned int)(((((uVar2 & 0xffffff) << 8 | uVar3 & 0xffffffff) & 0xffffff) << 8 |
                         uVar5 & 0xffffffff) << 8) | uVar7;
        }
        else {
          uVar7 = CONCAT31(CONCAT21(CONCAT11(*(unsigned char *)((int)uVar2 + iVar1),
                                             *(unsigned char *)((int)uVar3 + iVar1)),
                                    *(unsigned char *)((int)uVar5 + iVar1)),
                           *(unsigned char *)(uVar7 + iVar1));
        }
        *param_2 = uVar7;
        uVar5 = (unsigned __int64)pbVar11[4] + (unsigned __int64)puVar9[4];
        uVar3 = (unsigned __int64)pbVar11[3] + (unsigned __int64)puVar9[3];
        uVar2 = (unsigned __int64)pbVar11[2] + (unsigned __int64)puVar9[2];
        uVar7 = (unsigned int)((unsigned __int64)pbVar11[5] + (unsigned __int64)puVar9[5]);
        if ((((unsigned __int64)pbVar11[5] + (unsigned __int64)puVar9[5] | uVar5 | uVar3 | uVar2) & 0xffffff00) ==
            0) {
          uVar7 = (unsigned int)(((((uVar2 & 0xffffff) << 8 | uVar3 & 0xffffffff) & 0xffffff) << 8 |
                         uVar5 & 0xffffffff) << 8) | uVar7;
        }
        else {
          uVar7 = CONCAT31(CONCAT21(CONCAT11(*(unsigned char *)((int)uVar2 + iVar1),
                                             *(unsigned char *)((int)uVar3 + iVar1)),
                                    *(unsigned char *)((int)uVar5 + iVar1)),
                           *(unsigned char *)(uVar7 + iVar1));
        }
        param_2[1] = uVar7;
        pbVar11 = pbVar11 + param_5;
        param_2 = (unsigned int *)((int)param_2 + param_5);
        puVar9 = puVar9 + 8;
        lVar13 = lVar13 + -1;
      } while (lVar13 != 0);
    }
  }
  return;
}

