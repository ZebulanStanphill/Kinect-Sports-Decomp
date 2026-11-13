void fn_82F131A0(unsigned __int64 param_1,unsigned __int64 param_2,unsigned char *param_3,unsigned int *param_4,
                  int param_5,int param_6,int param_7,int param_8)

{
  unsigned char bVar1;
  unsigned char bVar2;
  unsigned int uVar3;
  unsigned int uVar4;
  int *piVar5;
  __int64 lVar6;
  unsigned __int64 *puVar7;
  unsigned int *puVar8;
  unsigned int *puVar9;
  unsigned __int64 *puVar10;
  unsigned char *pbVar11;
  unsigned char *pbVar12;
  unsigned int *puVar13;
  unsigned int uVar14;
  unsigned int uVar15;
  __int64 lVar16;
  __int64 lVar17;
  
  if (((unsigned int)param_4 & 0x11) == 0) {
    if (param_8 == 0) {
      if (param_7 == 0) {
        lVar16 = 2;
        puVar13 = param_4;
        do {
          puVar8 = (unsigned int *)((int)puVar13 - param_6);
          piVar5 = (int *)(param_3 + (int)((int)puVar13 + (-param_5 - (int)param_4)));
          lVar17 = 8;
          puVar9 = puVar13;
          do {
            puVar9 = (unsigned int *)((int)puVar9 + param_6);
            uVar3 = *puVar9;
            puVar8 = (unsigned int *)((int)puVar8 + param_6);
            uVar4 = *puVar8;
            uVar15 = (unsigned int)*(unsigned char *)(puVar9 + 1) | uVar3 << 8;
            uVar14 = (unsigned int)*(unsigned char *)((4 - param_6) + (int)puVar9) | uVar4 << 8;
            piVar5 = (int *)((int)piVar5 + param_5);
            *piVar5 = ((uVar15 & 0x3030303) + (uVar3 & 0x3030303) + (uVar14 & 0x3030303) +
                       (uVar4 & 0x3030303) + 0x2020202 >> 2 & 0x3030303) +
                      (uVar15 >> 2 & 0x3f3f3f3f) + (uVar3 >> 2 & 0x3f3f3f3f) +
                      (uVar14 >> 2 & 0x3f3f3f3f) + (uVar4 >> 2 & 0x3f3f3f3f);
            lVar17 = lVar17 + -1;
          } while (lVar17 != 0);
          lVar16 = lVar16 + -1;
          puVar13 = puVar13 + 1;
        } while (lVar16 != 0);
      }
      else {
        lVar16 = 2;
        puVar13 = param_4;
        do {
          piVar5 = (int *)(param_3 + (int)((int)puVar13 + (-param_5 - (int)param_4)));
          lVar17 = 8;
          puVar8 = puVar13;
          do {
            uVar3 = *puVar8;
            puVar9 = (unsigned int *)((int)puVar8 + param_6);
            puVar8 = (unsigned int *)((int)puVar8 + param_6);
            piVar5 = (int *)((int)piVar5 + param_5);
            *piVar5 = ((*puVar9 | uVar3) & 0x1010101) + (*puVar9 >> 1 & 0x7f7f7f7f) +
                      (uVar3 >> 1 & 0x7f7f7f7f);
            lVar17 = lVar17 + -1;
          } while (lVar17 != 0);
          lVar16 = lVar16 + -1;
          puVar13 = puVar13 + 1;
        } while (lVar16 != 0);
      }
    }
    else if (param_7 == 0) {
      lVar16 = 2;
      puVar13 = param_4;
      do {
        piVar5 = (int *)(param_3 + (-param_5 - (int)param_4) + (int)puVar13);
        lVar17 = 8;
        puVar8 = puVar13;
        do {
          uVar3 = *puVar8;
          puVar9 = puVar8 + 1;
          puVar8 = (unsigned int *)((int)puVar8 + param_6);
          uVar4 = (unsigned int)*(unsigned char *)puVar9 | uVar3 << 8;
          piVar5 = (int *)((int)piVar5 + param_5);
          *piVar5 = ((uVar4 | uVar3) & 0x1010101) + (uVar4 >> 1 & 0x7f7f7f7f) +
                    (uVar3 >> 1 & 0x7f7f7f7f);
          lVar17 = lVar17 + -1;
        } while (lVar17 != 0);
        lVar16 = lVar16 + -1;
        puVar13 = puVar13 + 1;
      } while (lVar16 != 0);
    }
    else {
      puVar7 = (unsigned __int64 *)(param_3 + -param_5);
      puVar10 = (unsigned __int64 *)((int)param_4 - param_6);
      lVar16 = 8;
      do {
        puVar10 = (unsigned __int64 *)((int)puVar10 + param_6);
        puVar7 = (unsigned __int64 *)((int)puVar7 + param_5);
        *puVar7 = *puVar10;
        lVar16 = lVar16 + -1;
      } while (lVar16 != 0);
    }
  }
  else if (param_8 == 0) {
    if (param_7 == 0) {
      param_3 = param_3 + 2;
      lVar16 = 8;
      do {
        puVar13 = (unsigned int *)((int)param_4 + param_6);
        lVar6 = (unsigned __int64)*(unsigned char *)((int)puVar13 + 1) + (unsigned __int64)*(unsigned char *)((int)param_4 + 1) + 2;
        param_3[-2] = (char)((unsigned __int64)*(unsigned char *)param_4 +
                             (unsigned __int64)*(unsigned char *)((int)param_4 + param_6) + lVar6 >> 2);
        lVar17 = (unsigned __int64)*(unsigned char *)((int)puVar13 + 2) + (unsigned __int64)*(unsigned char *)((int)param_4 + 2);
        param_3[-1] = (char)((unsigned __int64)(lVar17 + lVar6) >> 2);
        lVar6 = (unsigned __int64)(unsigned char)*puVar13 + (unsigned __int64)(unsigned char)*param_4;
        *param_3 = (char)((unsigned __int64)(lVar6 + lVar17 + 2) >> 2);
        bVar1 = *(unsigned char *)(param_4 + 1);
        bVar2 = *(unsigned char *)(puVar13 + 1);
        param_3[1] = (char)((unsigned __int64)bVar2 + (unsigned __int64)bVar1 + lVar6 + 2 >> 2);
        lVar17 = (unsigned __int64)*(unsigned char *)((int)puVar13 + 5) + (unsigned __int64)*(unsigned char *)((int)param_4 + 5);
        param_3[2] = (char)(lVar17 + (unsigned __int64)bVar2 + (unsigned __int64)bVar1 + 2 >> 2);
        lVar6 = (unsigned __int64)*(unsigned char *)((int)puVar13 + 6) + (unsigned __int64)*(unsigned char *)((int)param_4 + 6);
        param_3[3] = (char)((unsigned __int64)(lVar6 + lVar17 + 2) >> 2);
        lVar17 = (unsigned __int64)*(unsigned char *)((int)puVar13 + 7) + (unsigned __int64)*(unsigned char *)((int)param_4 + 7);
        param_3[4] = (char)((unsigned __int64)(lVar17 + lVar6 + 2) >> 2);
        param_3[5] = (char)((unsigned __int64)*(unsigned char *)(puVar13 + 2) + (unsigned __int64)*(unsigned char *)(param_4 + 2) +
                            lVar17 + 2 >> 2);
        param_3 = param_3 + param_5;
        lVar16 = lVar16 + -1;
        param_4 = puVar13;
      } while (lVar16 != 0);
    }
    else {
      lVar16 = 2;
      do {
        pbVar12 = (unsigned char *)((int)param_4 + param_6);
        *param_3 = (char)((int)((unsigned int)*(unsigned char *)param_4 + (unsigned int)*(unsigned char *)((int)param_4 + param_6) + 1
                               ) >> 1);
        param_3[1] = (char)((int)((unsigned int)pbVar12[1] + (unsigned int)*(unsigned char *)((int)param_4 + 1) + 1) >> 1);
        param_3[2] = (char)((int)((unsigned int)pbVar12[2] + (unsigned int)*(unsigned char *)((int)param_4 + 2) + 1) >> 1);
        param_3[3] = (char)((int)((unsigned int)pbVar12[3] + (unsigned int)(unsigned char)*param_4 + 1) >> 1);
        param_3[4] = (char)((int)((unsigned int)pbVar12[4] + (unsigned int)*(unsigned char *)(param_4 + 1) + 1) >> 1);
        param_3[5] = (char)((int)((unsigned int)pbVar12[5] + (unsigned int)*(unsigned char *)((int)param_4 + 5) + 1) >> 1);
        param_3[6] = (char)((int)((unsigned int)pbVar12[6] + (unsigned int)*(unsigned char *)((int)param_4 + 6) + 1) >> 1);
        param_3[7] = (char)((int)((unsigned int)pbVar12[7] + (unsigned int)*(unsigned char *)((int)param_4 + 7) + 1) >> 1);
        pbVar11 = pbVar12 + param_6;
        param_3 = param_3 + param_5;
        *param_3 = (char)((int)((unsigned int)*pbVar12 + (unsigned int)*pbVar11 + 1) >> 1);
        param_3[1] = (char)((int)((unsigned int)pbVar11[1] + (unsigned int)pbVar12[1] + 1) >> 1);
        param_3[2] = (char)((int)((unsigned int)pbVar11[2] + (unsigned int)pbVar12[2] + 1) >> 1);
        param_3[3] = (char)((int)((unsigned int)pbVar11[3] + (unsigned int)pbVar12[3] + 1) >> 1);
        param_3[4] = (char)((int)((unsigned int)pbVar11[4] + (unsigned int)pbVar12[4] + 1) >> 1);
        param_3[5] = (char)((int)((unsigned int)pbVar11[5] + (unsigned int)pbVar12[5] + 1) >> 1);
        param_3[6] = (char)((int)((unsigned int)pbVar11[6] + (unsigned int)pbVar12[6] + 1) >> 1);
        param_3[7] = (char)((int)((unsigned int)pbVar11[7] + (unsigned int)pbVar12[7] + 1) >> 1);
        pbVar12 = pbVar11 + param_6;
        param_3 = param_3 + param_5;
        *param_3 = (char)((int)((unsigned int)*pbVar11 + (unsigned int)*pbVar12 + 1) >> 1);
        param_3[1] = (char)((int)((unsigned int)pbVar12[1] + (unsigned int)pbVar11[1] + 1) >> 1);
        param_3[2] = (char)((int)((unsigned int)pbVar12[2] + (unsigned int)pbVar11[2] + 1) >> 1);
        param_3[3] = (char)((int)((unsigned int)pbVar12[3] + (unsigned int)pbVar11[3] + 1) >> 1);
        param_3[4] = (char)((int)((unsigned int)pbVar12[4] + (unsigned int)pbVar11[4] + 1) >> 1);
        param_3[5] = (char)((int)((unsigned int)pbVar12[5] + (unsigned int)pbVar11[5] + 1) >> 1);
        param_3[6] = (char)((int)((unsigned int)pbVar12[6] + (unsigned int)pbVar11[6] + 1) >> 1);
        param_3[7] = (char)((int)((unsigned int)pbVar12[7] + (unsigned int)pbVar11[7] + 1) >> 1);
        param_4 = (unsigned int *)(pbVar12 + param_6);
        param_3 = param_3 + param_5;
        *param_3 = (char)((int)((unsigned int)*pbVar12 + (unsigned int)*(unsigned char *)param_4 + 1) >> 1);
        param_3[1] = (char)((int)((unsigned int)*(unsigned char *)((int)param_4 + 1) + (unsigned int)pbVar12[1] + 1) >> 1);
        param_3[2] = (char)((int)((unsigned int)*(unsigned char *)((int)param_4 + 2) + (unsigned int)pbVar12[2] + 1) >> 1);
        param_3[3] = (char)((int)((unsigned int)(unsigned char)*param_4 + (unsigned int)pbVar12[3] + 1) >> 1);
        param_3[4] = (char)((int)((unsigned int)*(unsigned char *)(param_4 + 1) + (unsigned int)pbVar12[4] + 1) >> 1);
        param_3[5] = (char)((int)((unsigned int)*(unsigned char *)((int)param_4 + 5) + (unsigned int)pbVar12[5] + 1) >> 1);
        param_3[6] = (char)((int)((unsigned int)*(unsigned char *)((int)param_4 + 6) + (unsigned int)pbVar12[6] + 1) >> 1);
        param_3[7] = (char)((int)((unsigned int)*(unsigned char *)((int)param_4 + 7) + (unsigned int)pbVar12[7] + 1) >> 1);
        param_3 = param_3 + param_5;
        lVar16 = lVar16 + -1;
      } while (lVar16 != 0);
    }
  }
  else if (param_7 == 0) {
    lVar16 = 2;
    do {
      *param_3 = (char)((int)((unsigned int)*(unsigned char *)param_4 + (unsigned int)*(unsigned char *)((int)param_4 + 1) + 1) >> 1);
      param_3[1] = (char)((int)((unsigned int)*(unsigned char *)((int)param_4 + 2) +
                                (unsigned int)*(unsigned char *)((int)param_4 + 1) + 1) >> 1);
      param_3[2] = (char)((int)((unsigned int)(unsigned char)*param_4 + (unsigned int)*(unsigned char *)((int)param_4 + 2) + 1) >> 1);
      param_3[3] = (char)((int)((unsigned int)(unsigned char)*param_4 + (unsigned int)*(unsigned char *)(param_4 + 1) + 1) >> 1);
      param_3[4] = (char)((int)((unsigned int)*(unsigned char *)((int)param_4 + 5) + (unsigned int)*(unsigned char *)(param_4 + 1) + 1
                               ) >> 1);
      param_3[5] = (char)((int)((unsigned int)*(unsigned char *)((int)param_4 + 5) +
                                (unsigned int)*(unsigned char *)((int)param_4 + 6) + 1) >> 1);
      param_3[6] = (char)((int)((unsigned int)*(unsigned char *)((int)param_4 + 7) +
                                (unsigned int)*(unsigned char *)((int)param_4 + 6) + 1) >> 1);
      param_3[7] = (char)((int)((unsigned int)*(unsigned char *)(param_4 + 2) + (unsigned int)*(unsigned char *)((int)param_4 + 7) + 1
                               ) >> 1);
      param_3 = param_3 + param_5;
      *param_3 = (char)((int)((unsigned int)*(unsigned char *)((int)param_4 + param_6) +
                              (unsigned int)*(unsigned char *)((int)param_4 + param_6 + 1) + 1) >> 1);
      param_3[1] = (char)((int)((unsigned int)*(unsigned char *)((int)param_4 + param_6 + 2) +
                                (unsigned int)*(unsigned char *)((int)param_4 + param_6 + 1) + 1) >> 1);
      param_3[2] = (char)((int)((unsigned int)*(unsigned char *)((int)param_4 + param_6 + 3) +
                                (unsigned int)*(unsigned char *)((int)param_4 + param_6 + 2) + 1) >> 1);
      param_3[3] = (char)((int)((unsigned int)*(unsigned char *)((int)param_4 + param_6 + 3) +
                                (unsigned int)*(unsigned char *)((int)param_4 + param_6 + 4) + 1) >> 1);
      param_3[4] = (char)((int)((unsigned int)*(unsigned char *)((int)param_4 + param_6 + 5) +
                                (unsigned int)*(unsigned char *)((int)param_4 + param_6 + 4) + 1) >> 1);
      param_3[5] = (char)((int)((unsigned int)*(unsigned char *)((int)param_4 + param_6 + 5) +
                                (unsigned int)*(unsigned char *)((int)param_4 + param_6 + 6) + 1) >> 1);
      param_3[6] = (char)((int)((unsigned int)*(unsigned char *)((int)param_4 + param_6 + 7) +
                                (unsigned int)*(unsigned char *)((int)param_4 + param_6 + 6) + 1) >> 1);
      pbVar11 = (unsigned char *)((int)param_4 + param_6 * 2);
      param_3[7] = (char)((int)((unsigned int)*(unsigned char *)((int)param_4 + param_6 + 8) +
                                (unsigned int)*(unsigned char *)((int)param_4 + param_6 + 7) + 1) >> 1);
      param_3 = param_3 + param_5;
      *param_3 = (char)((int)((unsigned int)*pbVar11 + (unsigned int)pbVar11[1] + 1) >> 1);
      param_3[1] = (char)((int)((unsigned int)pbVar11[2] + (unsigned int)pbVar11[1] + 1) >> 1);
      param_3[2] = (char)((int)((unsigned int)pbVar11[3] + (unsigned int)pbVar11[2] + 1) >> 1);
      param_3[3] = (char)((int)((unsigned int)pbVar11[3] + (unsigned int)pbVar11[4] + 1) >> 1);
      param_3[4] = (char)((int)((unsigned int)pbVar11[5] + (unsigned int)pbVar11[4] + 1) >> 1);
      param_3[5] = (char)((int)((unsigned int)pbVar11[5] + (unsigned int)pbVar11[6] + 1) >> 1);
      param_3[6] = (char)((int)((unsigned int)pbVar11[7] + (unsigned int)pbVar11[6] + 1) >> 1);
      pbVar12 = pbVar11 + param_6;
      param_4 = (unsigned int *)(pbVar12 + param_6);
      param_3[7] = (char)((int)((unsigned int)pbVar11[8] + (unsigned int)pbVar11[7] + 1) >> 1);
      param_3 = param_3 + param_5;
      *param_3 = (char)((int)((unsigned int)*pbVar12 + (unsigned int)pbVar12[1] + 1) >> 1);
      param_3[1] = (char)((int)((unsigned int)pbVar12[2] + (unsigned int)pbVar12[1] + 1) >> 1);
      param_3[2] = (char)((int)((unsigned int)pbVar12[3] + (unsigned int)pbVar12[2] + 1) >> 1);
      param_3[3] = (char)((int)((unsigned int)pbVar12[3] + (unsigned int)pbVar12[4] + 1) >> 1);
      param_3[4] = (char)((int)((unsigned int)pbVar12[5] + (unsigned int)pbVar12[4] + 1) >> 1);
      param_3[5] = (char)((int)((unsigned int)pbVar12[5] + (unsigned int)pbVar12[6] + 1) >> 1);
      param_3[6] = (char)((int)((unsigned int)pbVar12[7] + (unsigned int)pbVar12[6] + 1) >> 1);
      param_3[7] = (char)((int)((unsigned int)pbVar12[8] + (unsigned int)pbVar12[7] + 1) >> 1);
      param_3 = param_3 + param_5;
      lVar16 = lVar16 + -1;
    } while (lVar16 != 0);
  }
  else {
    puVar7 = (unsigned __int64 *)(param_3 + -param_5);
    puVar10 = (unsigned __int64 *)((int)param_4 - param_6);
    lVar16 = 8;
    do {
      puVar10 = (unsigned __int64 *)((int)puVar10 + param_6);
      puVar7 = (unsigned __int64 *)((int)puVar7 + param_5);
      *puVar7 = *puVar10;
      lVar16 = lVar16 + -1;
    } while (lVar16 != 0);
  }
  return;
}

