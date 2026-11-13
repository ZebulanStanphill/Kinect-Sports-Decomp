#define CONCAT11(h,l) ((unsigned short)((((unsigned char)(h)) << 8) | ((unsigned char)(l))))
#define CONCAT21(h,l) ((unsigned int)((((unsigned short)(h)) << 8) | ((unsigned char)(l))))
#define CONCAT31(h,l) ((unsigned int)((((unsigned int)(h)) << 8) | ((unsigned char)(l))))


void fn_82CB83B8(int param_1,unsigned int *param_2,int param_3,unsigned char *param_4,int param_5,int param_6,
                  int param_7)

{
  unsigned char bVar1;
  unsigned char bVar2;
  unsigned char bVar3;
  unsigned char bVar4;
  int iVar5;
  unsigned __int64 uVar6;
  unsigned __int64 uVar7;
  unsigned int uVar8;
  unsigned __int64 uVar9;
  unsigned __int64 uVar10;
  int *piVar11;
  unsigned int *puVar12;
  unsigned char *puVar13;
  unsigned char *pbVar14;
  int iVar15;
  unsigned int *puVar16;
  __int64 lVar17;
  
  iVar5 = *(int *)(param_1 + 0x100);
  if (param_7 == 0) {
    lVar17 = 8;
    if (param_6 == 0) {
      puVar13 = (unsigned char *)((int)param_2 + 2);
      piVar11 = (int *)(param_3 + -4);
      do {
        pbVar14 = param_4 + param_5;
        iVar15 = (unsigned int)pbVar14[1] + (unsigned int)param_4[1] + 2;
        puVar13[-2] = *(unsigned char *)
                       (((unsigned int)*param_4 + (unsigned int)param_4[param_5] + iVar15 >> 2) + piVar11[1] + iVar5
                       );
        bVar1 = param_4[2];
        bVar2 = pbVar14[2];
        puVar13[-1] = *(unsigned char *)
                       (((unsigned int)bVar2 + (unsigned int)bVar1 + iVar15 >> 2) + piVar11[2] + iVar5);
        bVar3 = param_4[3];
        bVar4 = pbVar14[3];
        *puVar13 = *(unsigned char *)
                    (((unsigned int)bVar4 + (unsigned int)bVar3 + (unsigned int)bVar2 + (unsigned int)bVar1 + 2 >> 2) + piVar11[3] +
                    iVar5);
        bVar1 = param_4[4];
        bVar2 = pbVar14[4];
        puVar13[1] = *(unsigned char *)
                      (((unsigned int)bVar2 + (unsigned int)bVar1 + (unsigned int)bVar4 + (unsigned int)bVar3 + 2 >> 2) + piVar11[4]
                      + iVar5);
        bVar3 = param_4[5];
        bVar4 = pbVar14[5];
        puVar13[2] = *(unsigned char *)
                      (((unsigned int)bVar4 + (unsigned int)bVar3 + (unsigned int)bVar2 + (unsigned int)bVar1 + 2 >> 2) + piVar11[5]
                      + iVar5);
        bVar1 = param_4[6];
        bVar2 = pbVar14[6];
        puVar13[3] = *(unsigned char *)
                      (((unsigned int)bVar2 + (unsigned int)bVar1 + (unsigned int)bVar4 + (unsigned int)bVar3 + 2 >> 2) + piVar11[6]
                      + iVar5);
        bVar3 = param_4[7];
        bVar4 = pbVar14[7];
        puVar13[4] = *(unsigned char *)
                      (((unsigned int)bVar4 + (unsigned int)bVar3 + (unsigned int)bVar2 + (unsigned int)bVar1 + 2 >> 2) + piVar11[7]
                      + iVar5);
        piVar11 = piVar11 + 8;
        puVar13[5] = *(unsigned char *)
                      (((unsigned int)pbVar14[8] + (unsigned int)param_4[8] + (unsigned int)bVar4 + (unsigned int)bVar3 + 2 >> 2) +
                       *piVar11 + iVar5);
        puVar13 = puVar13 + param_5;
        lVar17 = lVar17 + -1;
        param_4 = pbVar14;
      } while (lVar17 != 0);
    }
    else {
      puVar12 = (unsigned int *)(param_3 + 8);
      do {
        pbVar14 = param_4 + param_5;
        uVar10 = (__int64)((int)((unsigned int)pbVar14[2] + (unsigned int)param_4[2] + 1) >> 1) +
                 (unsigned __int64)*puVar12;
        uVar9 = (__int64)((int)((unsigned int)pbVar14[3] + (unsigned int)param_4[3] + 1) >> 1) +
                (unsigned __int64)puVar12[1];
        uVar8 = (unsigned int)uVar9;
        uVar7 = (__int64)((int)((unsigned int)pbVar14[1] + (unsigned int)param_4[1] + 1) >> 1) +
                (unsigned __int64)puVar12[-1];
        uVar6 = (__int64)((int)((unsigned int)*param_4 + (unsigned int)param_4[param_5] + 1) >> 1) +
                (unsigned __int64)puVar12[-2];
        if (((uVar9 | uVar10 | uVar7 | uVar6) & 0xffffff00) == 0) {
          uVar6 = uVar6 & 0xffffff;
        }
        else {
          uVar6 = (unsigned __int64)*(unsigned char *)(((unsigned int)uVar6 & 0x3ff) + iVar5);
          uVar7 = (unsigned __int64)*(unsigned char *)(((unsigned int)uVar7 & 0x3ff) + iVar5);
          uVar10 = (unsigned __int64)*(unsigned char *)(((unsigned int)uVar10 & 0x3ff) + iVar5);
          uVar8 = (unsigned int)*(unsigned char *)((uVar8 & 0x3ff) + iVar5);
        }
        *param_2 = (unsigned int)((((uVar6 << 8 | uVar7 & 0xffffffff) & 0xffffff) << 8 | uVar10 & 0xffffffff
                          ) << 8) | uVar8;
        uVar10 = (__int64)((int)((unsigned int)pbVar14[6] + (unsigned int)param_4[6] + 1) >> 1) +
                 (unsigned __int64)puVar12[4];
        uVar9 = (__int64)((int)((unsigned int)pbVar14[7] + (unsigned int)param_4[7] + 1) >> 1) +
                (unsigned __int64)puVar12[5];
        uVar8 = (unsigned int)uVar9;
        uVar7 = (__int64)((int)((unsigned int)pbVar14[5] + (unsigned int)param_4[5] + 1) >> 1) +
                (unsigned __int64)puVar12[3];
        uVar6 = (__int64)((int)((unsigned int)pbVar14[4] + (unsigned int)param_4[4] + 1) >> 1) +
                (unsigned __int64)puVar12[2];
        if (((uVar9 | uVar10 | uVar7 | uVar6) & 0xffffff00) == 0) {
          uVar6 = uVar6 & 0xffffff;
        }
        else {
          uVar6 = (unsigned __int64)*(unsigned char *)(((unsigned int)uVar6 & 0x3ff) + iVar5);
          uVar7 = (unsigned __int64)*(unsigned char *)(((unsigned int)uVar7 & 0x3ff) + iVar5);
          uVar10 = (unsigned __int64)*(unsigned char *)(((unsigned int)uVar10 & 0x3ff) + iVar5);
          uVar8 = (unsigned int)*(unsigned char *)((uVar8 & 0x3ff) + iVar5);
        }
        puVar12 = puVar12 + 8;
        param_2[1] = (unsigned int)((((uVar6 << 8 | uVar7 & 0xffffffff) & 0xffffff) << 8 |
                            uVar10 & 0xffffffff) << 8) | uVar8;
        param_2 = (unsigned int *)((int)param_2 + param_5);
        lVar17 = lVar17 + -1;
        param_4 = pbVar14;
      } while (lVar17 != 0);
    }
  }
  else {
    puVar12 = (unsigned int *)(param_3 + 8);
    pbVar14 = param_4 + 2;
    lVar17 = 8;
    if (param_6 == 0) {
      puVar16 = param_2 + 1;
      iVar15 = (int)param_2 + (-2 - (int)param_4);
      do {
        uVar10 = (__int64)((int)((unsigned int)pbVar14[1] + (unsigned int)*pbVar14 + 1) >> 1) + (unsigned __int64)*puVar12
        ;
        uVar9 = (__int64)((int)((unsigned int)pbVar14[2] + (unsigned int)pbVar14[1] + 1) >> 1) +
                (unsigned __int64)puVar12[1];
        uVar7 = (__int64)((int)((unsigned int)pbVar14[-1] + (unsigned int)*pbVar14 + 1) >> 1) +
                (unsigned __int64)puVar12[-1];
        uVar6 = (__int64)((int)((unsigned int)pbVar14[-2] + (unsigned int)pbVar14[-1] + 1) >> 1) +
                (unsigned __int64)puVar12[-2];
        uVar8 = (unsigned int)uVar9;
        if (((uVar9 | uVar10 | uVar7 | uVar6) & 0xffffff00) == 0) {
          *(unsigned int *)(pbVar14 + iVar15) =
               (unsigned int)(((((uVar6 & 0xffffff) << 8 | uVar7 & 0xffffffff) & 0xffffff) << 8 |
                      uVar10 & 0xffffffff) << 8) | uVar8;
        }
        else {
          *(unsigned int *)(pbVar14 + iVar15) =
               CONCAT31(CONCAT21(CONCAT11(*(unsigned char *)(((unsigned int)uVar6 & 0x3ff) + iVar5),
                                          *(unsigned char *)(((unsigned int)uVar7 & 0x3ff) + iVar5)),
                                 *(unsigned char *)(((unsigned int)uVar10 & 0x3ff) + iVar5)),
                        *(unsigned char *)((uVar8 & 0x3ff) + iVar5));
        }
        uVar10 = (__int64)((int)((unsigned int)pbVar14[5] + (unsigned int)pbVar14[4] + 1) >> 1) +
                 (unsigned __int64)puVar12[4];
        uVar9 = (__int64)((int)((unsigned int)pbVar14[6] + (unsigned int)pbVar14[5] + 1) >> 1) +
                (unsigned __int64)puVar12[5];
        uVar7 = (__int64)((int)((unsigned int)pbVar14[4] + (unsigned int)pbVar14[3] + 1) >> 1) +
                (unsigned __int64)puVar12[3];
        uVar6 = (__int64)((int)((unsigned int)pbVar14[2] + (unsigned int)pbVar14[3] + 1) >> 1) +
                (unsigned __int64)puVar12[2];
        uVar8 = (unsigned int)uVar9;
        if (((uVar9 | uVar10 | uVar7 | uVar6) & 0xffffff00) == 0) {
          *puVar16 = (unsigned int)(((((uVar6 & 0xffffff) << 8 | uVar7 & 0xffffffff) & 0xffffff) << 8 |
                            uVar10 & 0xffffffff) << 8) | uVar8;
        }
        else {
          *puVar16 = CONCAT31(CONCAT21(CONCAT11(*(unsigned char *)(((unsigned int)uVar6 & 0x3ff) + iVar5),
                                                *(unsigned char *)(((unsigned int)uVar7 & 0x3ff) + iVar5)),
                                       *(unsigned char *)(((unsigned int)uVar10 & 0x3ff) + iVar5)),
                              *(unsigned char *)((uVar8 & 0x3ff) + iVar5));
        }
        pbVar14 = pbVar14 + param_5;
        puVar16 = (unsigned int *)((int)puVar16 + param_5);
        puVar12 = puVar12 + 8;
        lVar17 = lVar17 + -1;
      } while (lVar17 != 0);
    }
    else {
      do {
        uVar9 = (unsigned __int64)*pbVar14 + (unsigned __int64)*puVar12;
        uVar7 = (unsigned __int64)pbVar14[-1] + (unsigned __int64)puVar12[-1];
        uVar6 = (unsigned __int64)pbVar14[-2] + (unsigned __int64)puVar12[-2];
        uVar8 = (unsigned int)((unsigned __int64)pbVar14[1] + (unsigned __int64)puVar12[1]);
        if ((((unsigned __int64)pbVar14[1] + (unsigned __int64)puVar12[1] | uVar9 | uVar7 | uVar6) & 0xffffff00)
            == 0) {
          *param_2 = (unsigned int)(((((uVar6 & 0xffffff) << 8 | uVar7 & 0xffffffff) & 0xffffff) << 8 |
                            uVar9 & 0xffffffff) << 8) | uVar8;
        }
        else {
          *param_2 = CONCAT31(CONCAT21(CONCAT11(*(unsigned char *)(((unsigned int)uVar6 & 0x3ff) + iVar5),
                                                *(unsigned char *)(((unsigned int)uVar7 & 0x3ff) + iVar5)),
                                       *(unsigned char *)(((unsigned int)uVar9 & 0x3ff) + iVar5)),
                              *(unsigned char *)((uVar8 & 0x3ff) + iVar5));
        }
        uVar9 = (unsigned __int64)pbVar14[4] + (unsigned __int64)puVar12[4];
        uVar7 = (unsigned __int64)pbVar14[3] + (unsigned __int64)puVar12[3];
        uVar6 = (unsigned __int64)pbVar14[2] + (unsigned __int64)puVar12[2];
        uVar8 = (unsigned int)((unsigned __int64)pbVar14[5] + (unsigned __int64)puVar12[5]);
        if ((((unsigned __int64)pbVar14[5] + (unsigned __int64)puVar12[5] | uVar9 | uVar7 | uVar6) & 0xffffff00)
            == 0) {
          param_2[1] = (unsigned int)(((((uVar6 & 0xffffff) << 8 | uVar7 & 0xffffffff) & 0xffffff) << 8 |
                              uVar9 & 0xffffffff) << 8) | uVar8;
        }
        else {
          param_2[1] = CONCAT31(CONCAT21(CONCAT11(*(unsigned char *)(((unsigned int)uVar6 & 0x3ff) + iVar5),
                                                  *(unsigned char *)(((unsigned int)uVar7 & 0x3ff) + iVar5)),
                                         *(unsigned char *)(((unsigned int)uVar9 & 0x3ff) + iVar5)),
                                *(unsigned char *)((uVar8 & 0x3ff) + iVar5));
        }
        pbVar14 = pbVar14 + param_5;
        param_2 = (unsigned int *)((int)param_2 + param_5);
        puVar12 = puVar12 + 8;
        lVar17 = lVar17 + -1;
      } while (lVar17 != 0);
    }
  }
  return;
}

