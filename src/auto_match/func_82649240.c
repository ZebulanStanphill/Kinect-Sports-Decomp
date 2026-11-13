extern unsigned int fStack_a0;
extern int fn_82645110();
extern int fn_82F691F0();


unsigned __int64 fn_82649240(int *param_1,int *param_2,unsigned int param_3)

{
  unsigned char bVar1;
  unsigned short uVar2;
  unsigned short uVar3;
  unsigned short uVar4;
  unsigned short uVar5;
  unsigned char bVar6;
  unsigned char bVar7;
  unsigned char bVar8;
  unsigned char bVar9;
  unsigned char bVar10;
  unsigned char bVar11;
  unsigned char bVar12;
  unsigned char bVar13;
  unsigned char bVar14;
  unsigned char bVar15;
  unsigned char bVar16;
  unsigned char bVar17;
  unsigned char bVar18;
  unsigned char bVar19;
  unsigned char bVar20;
  unsigned char bVar21;
  unsigned char bVar22;
  unsigned char bVar23;
  unsigned char bVar24;
  unsigned char bVar25;
  unsigned char bVar26;
  unsigned char bVar27;
  unsigned char bVar28;
  unsigned char bVar29;
  unsigned char bVar30;
  unsigned char bVar31;
  unsigned char bVar32;
  unsigned char bVar33;
  unsigned char bVar34;
  unsigned char bVar35;
  unsigned char bVar36;
  unsigned char bVar37;
  int iVar38;
  int iVar39;
  unsigned __int64 uVar40;
  unsigned char *pbVar41;
  unsigned __int64 uVar42;
  unsigned int uVar43;
  unsigned int uVar44;
  unsigned int uVar45;
  __int64 lVar46;
  __int64 lVar47;
  int iVar49;
  unsigned __int64 uVar48;
  unsigned int uVar50;
  unsigned int *puVar51;
  float fStack_a0;
  
  bVar1 = *(unsigned char *)(param_1 + 5);
  iVar38 = *param_1;
  if ((bVar1 & 0x40) == 0) {
    return 0xffffffff8876086a;
  }
  iVar49 = param_1[1];
  if (iVar49 == 9) {
    iVar49 = param_1[6];
    if ((iVar49 == 0) ||
       (iVar39 = *(int *)(iVar38 + 0x2a9c),
       (unsigned int)(iVar39 - **(int **)(iVar38 + 0x2a90)) <= (unsigned int)(iVar39 - iVar49))) {
      *param_2 = 0;
      if (0xf < param_3) {
        param_2[1] = 0;
        param_2[2] = 0;
        param_2[3] = 0;
      }
      uVar45 = param_1[0x25];
      uVar50 = 0;
      puVar51 = (unsigned int *)(param_1 + 7);
      do {
        lVar46 = ((unsigned __int64)(*puVar51 >> 0x14) + 0x200 & 0x1000) +
                 ((unsigned __int64)*puVar51 & 0x1fffffff);
        lVar47 = lVar46 + -0x40000000;
        dataCacheBlockFlush(lVar47);
        iVar49 = (int)lVar46;
        uVar43 = *(unsigned int *)(iVar49 + -0x3fffffec);
        uVar44 = *(unsigned int *)(iVar49 + -0x3ffffff0);
        *param_2 = ((*param_2 -
                    ((unsigned int)*(unsigned char *)(iVar49 + -0x3fffffcd) << 0x18 |
                     (unsigned int)*(unsigned char *)(iVar49 + -0x3fffffce) << 0x10 |
                     (unsigned int)*(unsigned char *)(iVar49 + -0x3fffffcf) << 8 |
                    (unsigned int)*(unsigned char *)(iVar49 + -0x3fffffd0))) -
                   ((unsigned int)*(unsigned char *)(iVar49 + -0x3fffffc9) << 0x18 |
                    (unsigned int)*(unsigned char *)(iVar49 + -0x3fffffca) << 0x10 |
                    (unsigned int)*(unsigned char *)(iVar49 + -0x3fffffcb) << 8 |
                   (unsigned int)*(unsigned char *)(iVar49 + -0x3fffffcc))) +
                   (uVar43 << 0x18 | (uVar43 & 0xff00) << 8 | uVar43 >> 8 & 0xff00 | uVar43 >> 0x18)
                   + (uVar44 << 0x18 |
                     (uVar44 & 0xff00) << 8 | uVar44 >> 8 & 0xff00 | uVar44 >> 0x18);
        if (0xf < param_3) {
          pbVar41 = (unsigned char *)lVar47;
          bVar6 = pbVar41[3];
          bVar14 = pbVar41[2];
          bVar22 = pbVar41[1];
          bVar30 = *pbVar41;
          bVar7 = *(unsigned char *)(iVar49 + -0x3fffffc1);
          bVar15 = *(unsigned char *)(iVar49 + -0x3fffffc2);
          bVar23 = *(unsigned char *)(iVar49 + -0x3fffffc3);
          bVar31 = *(unsigned char *)(iVar49 + -0x3fffffc4);
          bVar8 = *(unsigned char *)(iVar49 + -0x3fffffc5);
          bVar16 = *(unsigned char *)(iVar49 + -0x3fffffc6);
          bVar24 = *(unsigned char *)(iVar49 + -0x3fffffc7);
          bVar32 = *(unsigned char *)(iVar49 + -0x3fffffc8);
          bVar9 = *(unsigned char *)(iVar49 + -0x3fffffdd);
          bVar17 = *(unsigned char *)(iVar49 + -0x3fffffde);
          bVar25 = *(unsigned char *)(iVar49 + -0x3fffffdf);
          bVar33 = *(unsigned char *)(iVar49 + -0x3fffffe0);
          bVar10 = *(unsigned char *)(iVar49 + -0x3fffffd9);
          bVar18 = *(unsigned char *)(iVar49 + -0x3fffffda);
          bVar26 = *(unsigned char *)(iVar49 + -0x3fffffdb);
          bVar34 = *(unsigned char *)(iVar49 + -0x3fffffdc);
          bVar11 = *(unsigned char *)(iVar49 + -0x3fffffe1);
          bVar19 = *(unsigned char *)(iVar49 + -0x3fffffe2);
          bVar27 = *(unsigned char *)(iVar49 + -0x3fffffe3);
          bVar35 = *(unsigned char *)(iVar49 + -0x3fffffe4);
          bVar12 = *(unsigned char *)(iVar49 + -0x3ffffff9);
          bVar20 = *(unsigned char *)(iVar49 + -0x3ffffffa);
          bVar28 = *(unsigned char *)(iVar49 + -0x3ffffffb);
          bVar36 = *(unsigned char *)(iVar49 + -0x3ffffffc);
          bVar13 = *(unsigned char *)(iVar49 + -0x3fffffe5);
          bVar21 = *(unsigned char *)(iVar49 + -0x3fffffe6);
          bVar29 = *(unsigned char *)(iVar49 + -0x3fffffe7);
          bVar37 = *(unsigned char *)(iVar49 + -0x3fffffe8);
          param_2[1] = ((param_2[1] -
                        ((unsigned int)*(unsigned char *)(iVar49 + -0x3fffffd5) << 0x18 |
                         (unsigned int)*(unsigned char *)(iVar49 + -0x3fffffd6) << 0x10 |
                         (unsigned int)*(unsigned char *)(iVar49 + -0x3fffffd7) << 8 |
                        (unsigned int)*(unsigned char *)(iVar49 + -0x3fffffd8))) -
                       ((unsigned int)*(unsigned char *)(iVar49 + -0x3fffffd1) << 0x18 |
                        (unsigned int)*(unsigned char *)(iVar49 + -0x3fffffd2) << 0x10 |
                        (unsigned int)*(unsigned char *)(iVar49 + -0x3fffffd3) << 8 |
                       (unsigned int)*(unsigned char *)(iVar49 + -0x3fffffd4))) +
                       ((unsigned int)*(unsigned char *)(iVar49 + -0x3ffffff1) << 0x18 |
                        (unsigned int)*(unsigned char *)(iVar49 + -0x3ffffff2) << 0x10 |
                        (unsigned int)*(unsigned char *)(iVar49 + -0x3ffffff3) << 8 |
                       (unsigned int)*(unsigned char *)(iVar49 + -0x3ffffff4)) +
                       ((unsigned int)*(unsigned char *)(iVar49 + -0x3ffffff5) << 0x18 |
                        (unsigned int)*(unsigned char *)(iVar49 + -0x3ffffff6) << 0x10 |
                        (unsigned int)*(unsigned char *)(iVar49 + -0x3ffffff7) << 8 |
                       (unsigned int)*(unsigned char *)(iVar49 + -0x3ffffff8));
          param_2[2] = ((param_2[2] -
                        ((unsigned int)bVar8 << 0x18 | (unsigned int)bVar16 << 0x10 | (unsigned int)bVar24 << 8 |
                        (unsigned int)bVar32)) -
                       ((unsigned int)bVar7 << 0x18 | (unsigned int)bVar15 << 0x10 | (unsigned int)bVar23 << 8 |
                       (unsigned int)bVar31)) +
                       ((unsigned int)bVar11 << 0x18 | (unsigned int)bVar19 << 0x10 | (unsigned int)bVar27 << 8 |
                       (unsigned int)bVar35) +
                       ((unsigned int)bVar13 << 0x18 | (unsigned int)bVar21 << 0x10 | (unsigned int)bVar29 << 8 |
                       (unsigned int)bVar37);
          param_2[3] = ((param_2[3] -
                        ((unsigned int)bVar9 << 0x18 | (unsigned int)bVar17 << 0x10 | (unsigned int)bVar25 << 8 |
                        (unsigned int)bVar33)) -
                       ((unsigned int)bVar10 << 0x18 | (unsigned int)bVar18 << 0x10 | (unsigned int)bVar26 << 8 |
                       (unsigned int)bVar34)) +
                       ((unsigned int)bVar12 << 0x18 | (unsigned int)bVar20 << 0x10 | (unsigned int)bVar28 << 8 |
                       (unsigned int)bVar36) +
                       ((unsigned int)bVar6 << 0x18 | (unsigned int)bVar14 << 0x10 | (unsigned int)bVar22 << 8 |
                       (unsigned int)bVar30);
        }
        uVar50 = uVar50 + 1;
        puVar51 = puVar51 + 1;
      } while (uVar50 < uVar45);
      if ((*(unsigned char *)(iVar38 + 0x2abd) & 2) != 0) {
        uVar44 = 0;
        *param_2 = 1;
        uVar43 = 0;
      }
      if ((uVar44 != 0xfffffeed) || (uVar43 != 0xfffffeed)) {
        *(unsigned char *)(param_1 + 5) = bVar1 & 0x7f | 0x80;
        goto LAB_82649680;
      }
      *param_2 = 1;
    }
    else {
      if (iVar49 == iVar39) {
        fn_82645110();
      }
      *param_2 = 1;
    }
    if (0xf < param_3) {
      param_2[2] = 0;
      param_2[1] = 0;
      param_2[3] = 1;
    }
LAB_826492d8:
    uVar42 = 1;
  }
  else {
    if (iVar49 == 10) {
      if ((*(unsigned char *)(iVar38 + 0x2abd) & 2) != 0) {
                    /* WARNING: Subroutine does not return */
        fn_82F691F0(param_2,0,0x18);
      }
      iVar49 = param_1[6];
      if ((unsigned int)(*(int *)(iVar38 + 0x2a9c) - iVar49) <
          (unsigned int)(*(int *)(iVar38 + 0x2a9c) - **(int **)(iVar38 + 0x2a90))) {
LAB_826494c4:
        if (iVar49 == *(int *)(iVar38 + 0x2a9c)) {
          fn_82645110();
        }
        goto LAB_826492d8;
      }
      lVar46 = ((unsigned __int64)((unsigned int)param_1[7] >> 0x14) + 0x200 & 0x1000) +
               ((unsigned __int64)(unsigned int)param_1[7] & 0x1fffffff);
      lVar47 = lVar46 + -0x40000000;
      dataCacheBlockFlush(lVar47);
      iVar49 = (int)lVar46;
      uVar2 = *(unsigned short *)(iVar49 + -0x3ffffffe);
      uVar3 = *(unsigned short *)(iVar49 + -0x3ffffffa);
      uVar4 = *(unsigned short *)(iVar49 + -0x3ffffffc);
      uVar5 = *(unsigned short *)(iVar38 + 0x2888);
      *param_2 = (unsigned int)*(unsigned short *)lVar47 << 3;
      param_2[2] = (unsigned int)uVar4 << 3;
      param_2[1] = (uVar2 + 1) * 8;
      param_2[3] = (uVar3 + 1) * 8;
      if ((uVar5 & 1) == 1) {
        uVar2 = *(unsigned short *)(iVar49 + -0x3ffffff8);
        uVar40 = (unsigned __int64)uVar2 & 0x7ff;
        if ((uVar2 & 0x7ff) == 0) {
          uVar45 = 0;
        }
        else if ((uVar2 & 0x780) == 0) {
          lVar46 = LZCOUNT((int)(uVar40 << 0x19));
          uVar45 = (unsigned int)((0x71U - (lVar46 + 1) & 0xffffffff) << 0x17) |
                   (int)(uVar40 << 0xd) << ((int)lVar46 + 4U & 0x3f) & 0x7fffffU;
        }
        else {
          uVar45 = (unsigned int)((0x7f - ((~(uVar40 << 0xd) & 0xffffffff) >> 0x14 & 0xf) & 0xffffffff) <<
                         0x17) | (unsigned int)(uVar40 << 0x10) & 0x7ffff8;
        }
        uVar2 = *(unsigned short *)(iVar49 + -0x3ffffff6);
        param_2[4] = uVar45;
        uVar40 = ((unsigned __int64)uVar2 + 1) * 0x2000;
        uVar48 = uVar40 & 0xffe000;
        if (uVar48 == 0) {
          fStack_a0 = 0.0;
        }
        else if ((uVar40 & 0xf00000) == 0) {
          lVar46 = LZCOUNT((int)(uVar48 << 0xc));
          fStack_a0 = (float)((unsigned int)((0x71U - (lVar46 + 1) & 0xffffffff) << 0x17) |
                             (int)uVar48 << ((int)lVar46 + 4U & 0x3f) & 0x7fffffU);
        }
        else {
          fStack_a0 = (float)((unsigned int)((0x7f - ((~uVar48 & 0xffffffff) >> 0x14 & 0xf) & 0xffffffff) <<
                                    0x17) | (unsigned int)(uVar48 << 3) & 0x7ffff8);
        }
      }
      else {
        fStack_a0 = (float)(__int64)(int)((*(unsigned short *)(iVar49 + -0x3ffffff6) + 1) * 0x2000);
        param_2[4] = (int)(float)(__int64)(int)((unsigned int)*(unsigned short *)(iVar49 + -0x3ffffff8) << 0xd);
      }
      param_2[5] = (int)fStack_a0;
    }
    else if (iVar49 == 8) {
      *param_2 = 1;
      iVar49 = param_1[6];
      if ((unsigned int)(*(int *)(iVar38 + 0x2a9c) - iVar49) <
          (unsigned int)(*(int *)(iVar38 + 0x2a9c) - **(int **)(iVar38 + 0x2a90))) goto LAB_826494c4;
    }
LAB_82649680:
    uVar42 = 0;
  }
  return uVar42;
}

