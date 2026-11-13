typedef unsigned char bool;
#define true 1
#define false 0
#define CONCAT22(h,l) ((unsigned int)((((unsigned short)(h)) << 16) | ((unsigned short)(l))))
extern int fn_82C4E3B0();
extern int fn_82C4E470();
extern int fn_830C6D68();
extern unsigned int uStack_a8;
extern unsigned int uStack_ac;
extern unsigned int uStack_b0;
extern unsigned int uStack_c0;


unsigned __int64 fn_830C7BD0(int *param_1,int param_2,int param_3,int param_4,unsigned int *param_5)

{
  unsigned char bVar1;
  unsigned char bVar2;
  unsigned char bVar3;
  unsigned char bVar4;
  unsigned char bVar5;
  unsigned char bVar6;
  unsigned short uVar7;
  short sVar8;
  unsigned short uVar9;
  short sVar10;
  unsigned short uVar11;
  unsigned short uVar12;
  short sVar13;
  unsigned int uVar14;
  int *piVar15;
  int iVar16;
  unsigned __int64 *puVar17;
  unsigned char *pbVar18;
  unsigned int uVar19;
  __int64 lVar20;
  int iVar21;
  unsigned short *puVar22;
  unsigned short *puVar23;
  unsigned short uVar24;
  unsigned short uVar25;
  unsigned short uVar26;
  unsigned short uVar27;
  unsigned short uVar28;
  unsigned short uVar29;
  unsigned short uVar30;
  unsigned short uVar31;
  bool bVar32;
  int iVar33;
  unsigned int uVar34;
  unsigned int uVar35;
  __int64 lVar36;
  unsigned int *puVar37;
  unsigned int uVar38;
  unsigned int uVar39;
  unsigned int *puVar40;
  int iVar41;
  unsigned __int64 uVar42;
  unsigned __int64 uVar43;
  unsigned __int64 uVar44;
  unsigned __int64 uVar45;
  unsigned int uStack_c0;
  short sStack_bc;
  short sStack_ba;
  short sStack_b8;
  short sStack_b6;
  struct { unsigned int first; unsigned int second; } stack_pair_b0;

  unsigned int uStack_a8;
  
  uVar7 = *(unsigned short *)((int)param_1 + 0x32);
  uVar44 = (unsigned __int64)uVar7;
  uVar14 = *param_5;
  uVar43 = (unsigned __int64)uVar14;
  iVar41 = (int)(unsigned int)uVar7 >> 1;
  if ((param_4 == 0) || (bVar32 = false, *(int *)(param_1[0x146] + param_4 * 4) != 0)) {
    bVar32 = true;
  }
  piVar15 = (int *)param_1[0x55];
  iVar16 = param_1[0x57];
  sVar8 = *(short *)((int)param_1 + 0x3e);
  uVar9 = *(unsigned short *)((int)param_1 + 0x42);
  sVar10 = *(short *)(param_1 + 0x10);
  uVar11 = *(unsigned short *)(param_1 + 0x11);
  puVar17 = (unsigned __int64 *)*param_1;
  if (piVar15 == (int *)0x0) {
    uVar45 = 0;
    *(unsigned int *)((int)puVar17 + 0x14) = 3;
  }
  else {
    iVar33 = *piVar15;
    sVar13 = *(short *)((int)((*puVar17 >> (0x40 - (unsigned __int64)*(unsigned char *)(piVar15 + 2) & 0x7f) &
                              0xffffffff) << 1) + iVar33);
    uVar45 = (unsigned __int64)sVar13;
    if (sVar13 < 0) {
      fn_82C4E470(puVar17);
      do {
        uVar42 = *puVar17;
        fn_82C4E470(puVar17,1);
        sVar13 = *(short *)((int)(((uVar45 - ((__int64)uVar42 >> 0x3f)) + 0x8000 & 0xffffffff) << 1
                                 ) + iVar33);
        uVar45 = (unsigned __int64)sVar13;
      } while (sVar13 < 0);
    }
    else {
      iVar33 = *(int *)(puVar17 + 1);
      iVar21 = (int)(uVar45 & 0xf);
      *puVar17 = *puVar17 << (uVar45 & 0xf);
      *(int *)(puVar17 + 1) = iVar33 - iVar21;
      if (iVar33 < iVar21) {
        do {
          pbVar18 = *(unsigned char **)((int)puVar17 + 0xc);
          if (pbVar18 < (unsigned char *)(*(int *)(puVar17 + 2) - 4U)) {
            bVar1 = *pbVar18;
            bVar2 = pbVar18[1];
            bVar3 = pbVar18[2];
            bVar4 = pbVar18[3];
            bVar5 = pbVar18[4];
            bVar6 = pbVar18[5];
            iVar33 = *(int *)(puVar17 + 1);
            *(unsigned char **)((int)puVar17 + 0xc) = pbVar18 + 6;
            *(int *)(puVar17 + 1) = iVar33 + 0x30;
            *puVar17 = ((((((unsigned __int64)bVar1 * 0x100 + (unsigned __int64)bVar2) * 0x100 + (unsigned __int64)bVar3)
                          * 0x100 + (unsigned __int64)bVar4) * 0x100 + (unsigned __int64)bVar5) * 0x100 +
                        (unsigned __int64)bVar6 << ((__int64)-iVar33 & 0x7fU)) + *puVar17;
            goto LAB_830c7d34;
          }
          iVar33 = fn_82C4E3B0(puVar17);
        } while (iVar33 == 1);
        uVar45 = (unsigned __int64)((int)sVar13 >> 4);
      }
      else {
LAB_830c7d34:
        uVar45 = (unsigned __int64)((int)sVar13 >> 4);
      }
    }
  }
  if (*(int *)(*param_1 + 0x14) != 0) {
    return 1;
  }
  uVar34 = 0;
  if ((uVar45 & 8) != 0) {
    uVar34 = fn_830C6D68(param_1,param_1[0x54]);
  }
  stack_pair_b0.first = 0;
  lVar36 = 0;
  uStack_a8 = 0;
  stack_pair_b0.second = 0;
  if (param_3 != 0) {
    uVar42 = uVar43 - 1;
    if ((*(unsigned int *)(param_2 + -0x18) & 0x20000) != 0) {
      if ((*(unsigned int *)(param_2 + -0x18) & 0x700) < 0x200) {
        uStack_c0 = *(unsigned int *)((int)((uVar42 & 0xffffffff) << 2) + iVar16);
      }
      else {
        uVar35 = *(unsigned int *)((int)((uVar42 & 0xffffffff) << 2) + iVar16);
        uVar19 = *(unsigned int *)((int)((uVar42 + uVar44 & 0xffffffff) << 2) + iVar16);
        sStack_ba = (short)uVar19;
        sStack_bc = (short)((unsigned int)uVar19 >> 0x10);
        sStack_b8 = (short)((unsigned int)uVar35 >> 0x10);
        sStack_b6 = (short)uVar35;
        uStack_c0 = CONCAT22((short)((int)sStack_bc + (int)sStack_b8 + 1 >> 1),
                             (short)((int)sStack_ba + (int)sStack_b6 + 1 >> 1));
      }
      lVar36 = 1;
      stack_pair_b0.first = uStack_c0;
    }
  }
  if (!bVar32) {
    uVar42 = uVar43 - uVar44;
    puVar40 = (unsigned int *)(param_2 + iVar41 * -0x18);
    if ((*puVar40 & 0x20000) != 0) {
      if ((*puVar40 & 0x700) < 0x200) {
        uStack_c0 = *(unsigned int *)((int)((uVar42 & 0xffffffff) << 2) + iVar16);
      }
      else {
        uVar35 = *(unsigned int *)((int)((uVar42 & 0xffffffff) << 2) + iVar16);
        uVar19 = *(unsigned int *)((int)((uVar42 - uVar44 & 0xffffffff) << 2) + iVar16);
        sStack_b6 = (short)uVar19;
        sStack_ba = (short)uVar35;
        sStack_bc = (short)((unsigned int)uVar35 >> 0x10);
        sStack_b8 = (short)((unsigned int)uVar19 >> 0x10);
        uStack_c0 = CONCAT22((short)((int)sStack_bc + (int)sStack_b8 + 1 >> 1),
                             (short)((int)sStack_ba + (int)sStack_b6 + 1 >> 1));
      }
      lVar20 = lVar36 << 2;
      lVar36 = lVar36 + 1;
      *(unsigned int *)((int)&stack_pair_b0.first + (int)lVar20) = uStack_c0;
    }
    if (iVar41 != 1) {
      if (param_3 == iVar41 + -1) {
        uVar42 = uVar42 - 1;
        puVar40 = puVar40 + -6;
      }
      else {
        uVar42 = uVar42 + 2;
        puVar40 = puVar40 + 6;
      }
      if ((*puVar40 & 0x20000) != 0) {
        if ((*puVar40 & 0x700) < 0x200) {
          uStack_c0 = *(unsigned int *)((int)((uVar42 & 0xffffffff) << 2) + iVar16);
        }
        else {
          uVar35 = *(unsigned int *)((int)((uVar42 & 0xffffffff) << 2) + iVar16);
          uVar19 = *(unsigned int *)((int)((uVar42 - uVar44 & 0xffffffff) << 2) + iVar16);
          sStack_b6 = (short)uVar19;
          sStack_ba = (short)uVar35;
          sStack_bc = (short)((unsigned int)uVar35 >> 0x10);
          sStack_b8 = (short)((unsigned int)uVar19 >> 0x10);
          uStack_c0 = CONCAT22((short)((int)sStack_bc + (int)sStack_b8 + 1 >> 1),
                               (short)((int)sStack_ba + (int)sStack_b6 + 1 >> 1));
        }
        lVar20 = lVar36 << 2;
        lVar36 = lVar36 + 1;
        *(unsigned int *)((int)&stack_pair_b0.first + (int)lVar20) = uStack_c0;
      }
    }
  }
  if ((unsigned int)lVar36 < 2) {
    uStack_c0 = -(unsigned int)(lVar36 == 1) & stack_pair_b0.first;
  }
  else {
    uVar25 = (unsigned short)((unsigned int)((int)(short)(((unsigned __int64)(stack_pair_b0.second) >> 16) & 0xFFFF) - (int)(short)(((unsigned __int64)(stack_pair_b0.first) >> 16) & 0xFFFF)) >> 0x10);
    uVar24 = (unsigned short)((unsigned int)((int)(short)(((unsigned __int64)(stack_pair_b0.second) >> 16) & 0xFFFF) - (int)(short)(((unsigned __int64)(uStack_a8) >> 16) & 0xFFFF)) >> 0x10) ^
             uVar25;
    uVar25 = (unsigned short)((unsigned int)((int)(short)(((unsigned __int64)(uStack_a8) >> 16) & 0xFFFF) - (int)(short)(((unsigned __int64)(stack_pair_b0.first) >> 16) & 0xFFFF)) >> 0x10) ^
             uVar25;
    uVar27 = (unsigned short)((unsigned int)((int)(short)(((unsigned __int64)(stack_pair_b0.second) >> 0) & 0xFFFF) - (int)(short)(((unsigned __int64)(stack_pair_b0.first) >> 0) & 0xFFFF)) >> 0x10);
    uVar26 = (unsigned short)((unsigned int)((int)(short)(((unsigned __int64)(stack_pair_b0.second) >> 0) & 0xFFFF) - (int)(short)(((unsigned __int64)(uStack_a8) >> 0) & 0xFFFF)) >> 0x10) ^
             uVar27;
    uVar27 = (unsigned short)((unsigned int)((int)(short)(((unsigned __int64)(uStack_a8) >> 0) & 0xFFFF) - (int)(short)(((unsigned __int64)(stack_pair_b0.first) >> 0) & 0xFFFF)) >> 0x10) ^
             uVar27;
    uStack_c0 = CONCAT22((((unsigned __int64)(uStack_a8) >> 0) & 0xFFFF) & ~((short)(uVar26 | uVar27) >> 0xf) |
                         (short)uVar27 >> 0xf & (((unsigned __int64)(stack_pair_b0.first) >> 0) & 0xFFFF) |
                         (short)uVar26 >> 0xf & (((unsigned __int64)(stack_pair_b0.second) >> 0) & 0xFFFF),
                         (((unsigned __int64)(uStack_a8) >> 16) & 0xFFFF) & ~((short)(uVar24 | uVar25) >> 0xf) |
                         (short)uVar25 >> 0xf & (((unsigned __int64)(stack_pair_b0.first) >> 16) & 0xFFFF) |
                         (short)uVar24 >> 0xf & (((unsigned __int64)(stack_pair_b0.second) >> 16) & 0xFFFF));
  }
  puVar40 = (unsigned int *)(uVar14 * 4 + iVar16);
  *(unsigned short *)((int)puVar40 + 2) = ((((unsigned __int64)(uStack_c0) >> 16) & 0xFFFF) + (short)uVar34 + sVar8 & uVar9) - sVar8;
  uVar35 = 0;
  *(unsigned short *)(uVar14 * 4 + iVar16) =
       ((short)((unsigned int)uVar34 >> 0x10) + (((unsigned __int64)(uStack_c0) >> 0) & 0xFFFF) + sVar10 & uVar11) - sVar10;
  if ((uVar45 & 4) != 0) {
    uVar35 = fn_830C6D68(param_1,param_1[0x54]);
  }
  stack_pair_b0.first = *puVar40;
  uVar38 = 1;
  uStack_a8 = 0;
  stack_pair_b0.second = 0;
  if (!bVar32) {
    lVar36 = uVar43 - uVar44;
    uVar42 = lVar36 + 1;
    puVar37 = (unsigned int *)(param_2 + iVar41 * -0x18);
    if ((*puVar37 & 0x20000) != 0) {
      if ((*puVar37 & 0x700) < 0x200) {
        uStack_c0 = *(unsigned int *)((int)((uVar42 & 0xffffffff) << 2) + iVar16);
      }
      else {
        uVar34 = *(unsigned int *)((int)((uVar42 & 0xffffffff) << 2) + iVar16);
        uVar19 = *(unsigned int *)((int)((uVar42 - uVar44 & 0xffffffff) << 2) + iVar16);
        sStack_ba = (short)uVar34;
        sStack_b6 = (short)uVar19;
        sStack_b8 = (short)((unsigned int)uVar19 >> 0x10);
        sStack_bc = (short)((unsigned int)uVar34 >> 0x10);
        uStack_c0 = CONCAT22((short)((int)sStack_bc + (int)sStack_b8 + 1 >> 1),
                             (short)((int)sStack_ba + (int)sStack_b6 + 1 >> 1));
      }
      uVar38 = 2;
      stack_pair_b0.second = uStack_c0;
    }
    uVar39 = uVar38;
    if (iVar41 != 1) {
      if (param_3 == iVar41 + -1) {
        uVar42 = lVar36 - 1;
        puVar37 = puVar37 + -6;
      }
      else {
        uVar42 = lVar36 + 2;
        puVar37 = puVar37 + 6;
      }
      if ((*puVar37 & 0x20000) != 0) {
        if ((*puVar37 & 0x700) < 0x200) {
          uStack_c0 = *(unsigned int *)((int)((uVar42 & 0xffffffff) << 2) + iVar16);
        }
        else {
          uVar34 = *(unsigned int *)((int)((uVar42 & 0xffffffff) << 2) + iVar16);
          uVar19 = *(unsigned int *)((int)((uVar42 - uVar44 & 0xffffffff) << 2) + iVar16);
          sStack_bc = (short)((unsigned int)uVar34 >> 0x10);
          sStack_b6 = (short)uVar19;
          sStack_ba = (short)uVar34;
          sStack_b8 = (short)((unsigned int)uVar19 >> 0x10);
          uStack_c0 = CONCAT22((short)((int)sStack_bc + (int)sStack_b8 + 1 >> 1),
                               (short)((int)sStack_ba + (int)sStack_b6 + 1 >> 1));
        }
        uVar39 = uVar38 + 1;
        (&stack_pair_b0.first)[uVar38] = uStack_c0;
      }
    }
    if (1 < uVar39) {
      uVar25 = (unsigned short)((unsigned int)((int)(short)(((unsigned __int64)(stack_pair_b0.second) >> 16) & 0xFFFF) - (int)(short)(((unsigned __int64)(stack_pair_b0.first) >> 16) & 0xFFFF)) >> 0x10);
      uVar24 = (unsigned short)((unsigned int)((int)(short)(((unsigned __int64)(stack_pair_b0.second) >> 16) & 0xFFFF) - (int)(short)(((unsigned __int64)(uStack_a8) >> 16) & 0xFFFF)) >> 0x10) ^
               uVar25;
      uVar25 = (unsigned short)((unsigned int)((int)(short)(((unsigned __int64)(uStack_a8) >> 16) & 0xFFFF) - (int)(short)(((unsigned __int64)(stack_pair_b0.first) >> 16) & 0xFFFF)) >> 0x10) ^
               uVar25;
      uVar27 = (unsigned short)((unsigned int)((int)(short)(((unsigned __int64)(stack_pair_b0.second) >> 0) & 0xFFFF) - (int)(short)(((unsigned __int64)(stack_pair_b0.first) >> 0) & 0xFFFF)) >> 0x10);
      uVar26 = (unsigned short)((unsigned int)((int)(short)(((unsigned __int64)(stack_pair_b0.second) >> 0) & 0xFFFF) - (int)(short)(((unsigned __int64)(uStack_a8) >> 0) & 0xFFFF)) >> 0x10) ^
               uVar27;
      uVar27 = (unsigned short)((unsigned int)((int)(short)(((unsigned __int64)(uStack_a8) >> 0) & 0xFFFF) - (int)(short)(((unsigned __int64)(stack_pair_b0.first) >> 0) & 0xFFFF)) >> 0x10) ^
               uVar27;
      uStack_c0 = CONCAT22((((unsigned __int64)(uStack_a8) >> 0) & 0xFFFF) & ~((short)(uVar26 | uVar27) >> 0xf) |
                           (short)uVar27 >> 0xf & (((unsigned __int64)(stack_pair_b0.first) >> 0) & 0xFFFF) |
                           (short)uVar26 >> 0xf & (((unsigned __int64)(stack_pair_b0.second) >> 0) & 0xFFFF),
                           (((unsigned __int64)(uStack_a8) >> 16) & 0xFFFF) & ~((short)(uVar24 | uVar25) >> 0xf) |
                           (short)uVar25 >> 0xf & (((unsigned __int64)(stack_pair_b0.first) >> 16) & 0xFFFF) |
                           (short)uVar24 >> 0xf & (((unsigned __int64)(stack_pair_b0.second) >> 16) & 0xFFFF));
      goto LAB_830c8350;
    }
    if (uVar39 != 1) goto LAB_830c8350;
  }
  uStack_c0 = stack_pair_b0.first;
LAB_830c8350:
  *(unsigned short *)((int)puVar40 + 6) = ((((unsigned __int64)(uStack_c0) >> 16) & 0xFFFF) + (short)uVar35 + sVar8 & uVar9) - sVar8;
  uVar34 = 0;
  *(unsigned short *)(puVar40 + 1) =
       ((short)((unsigned int)uVar35 >> 0x10) + (((unsigned __int64)(uStack_c0) >> 0) & 0xFFFF) + sVar10 & uVar11) - sVar10;
  if ((uVar45 & 2) != 0) {
    uVar34 = fn_830C6D68(param_1,param_1[0x54]);
  }
  iVar41 = 0;
  uStack_a8 = 0;
  if (param_3 != 0) {
    uVar43 = (uVar43 + uVar44) - 1;
    if ((*(unsigned int *)(param_2 + -0x18) & 0x20000) != 0) {
      if ((*(unsigned int *)(param_2 + -0x18) & 0x700) < 0x200) {
        stack_pair_b0.first = *(unsigned int *)((int)((uVar43 & 0xffffffff) << 2) + iVar16);
      }
      else {
        uVar35 = *(unsigned int *)((int)((uVar43 & 0xffffffff) << 2) + iVar16);
        uVar19 = *(unsigned int *)((int)((uVar43 - uVar44 & 0xffffffff) << 2) + iVar16);
        sStack_ba = (short)uVar35;
        sStack_b6 = (short)uVar19;
        sStack_bc = (short)((unsigned int)uVar35 >> 0x10);
        sStack_b8 = (short)((unsigned int)uVar19 >> 0x10);
        stack_pair_b0.first = CONCAT22((short)((int)sStack_bc + (int)sStack_b8 + 1 >> 1),
                             (short)((int)sStack_ba + (int)sStack_b6 + 1 >> 1));
      }
      iVar41 = 1;
    }
  }
  uVar38 = puVar40[1];
  (&stack_pair_b0.first)[iVar41] = *puVar40;
  (&stack_pair_b0.second)[iVar41] = uVar38;
  puVar22 = (unsigned short *)((uVar14 + uVar7) * 4 + iVar16);
  uVar25 = (unsigned short)((unsigned int)((int)(short)(((unsigned __int64)(stack_pair_b0.second) >> 16) & 0xFFFF) - (int)(short)(((unsigned __int64)(stack_pair_b0.first) >> 16) & 0xFFFF)) >> 0x10);
  uVar24 = (unsigned short)((unsigned int)((int)(short)(((unsigned __int64)(stack_pair_b0.second) >> 16) & 0xFFFF) - (int)(short)(((unsigned __int64)(uStack_a8) >> 16) & 0xFFFF)) >> 0x10) ^
           uVar25;
  uVar25 = (unsigned short)((unsigned int)((int)(short)(((unsigned __int64)(uStack_a8) >> 16) & 0xFFFF) - (int)(short)(((unsigned __int64)(stack_pair_b0.first) >> 16) & 0xFFFF)) >> 0x10) ^
           uVar25;
  uVar27 = (unsigned short)((unsigned int)((int)(short)(((unsigned __int64)(stack_pair_b0.second) >> 0) & 0xFFFF) - (int)(short)(((unsigned __int64)(stack_pair_b0.first) >> 0) & 0xFFFF)) >> 0x10);
  uVar26 = (unsigned short)((unsigned int)((int)(short)(((unsigned __int64)(stack_pair_b0.second) >> 0) & 0xFFFF) - (int)(short)(((unsigned __int64)(uStack_a8) >> 0) & 0xFFFF)) >> 0x10) ^
           uVar27;
  uVar27 = (unsigned short)((unsigned int)((int)(short)(((unsigned __int64)(uStack_a8) >> 0) & 0xFFFF) - (int)(short)(((unsigned __int64)(stack_pair_b0.first) >> 0) & 0xFFFF)) >> 0x10) ^
           uVar27;
  puVar22[1] = (((((unsigned __int64)(uStack_a8) >> 16) & 0xFFFF) & ~((short)(uVar24 | uVar25) >> 0xf) |
                 (short)uVar25 >> 0xf & (((unsigned __int64)(stack_pair_b0.first) >> 16) & 0xFFFF) | (short)uVar24 >> 0xf & (((unsigned __int64)(stack_pair_b0.second) >> 16) & 0xFFFF)) +
                (short)uVar34 + sVar8 & uVar9) - sVar8;
  uVar35 = 0;
  *puVar22 = ((short)((unsigned int)uVar34 >> 0x10) +
              ((((unsigned __int64)(uStack_a8) >> 0) & 0xFFFF) & ~((short)(uVar26 | uVar27) >> 0xf) |
               (short)uVar27 >> 0xf & (((unsigned __int64)(stack_pair_b0.first) >> 0) & 0xFFFF) | (short)uVar26 >> 0xf & (((unsigned __int64)(stack_pair_b0.second) >> 0) & 0xFFFF)) +
              sVar10 & uVar11) - sVar10;
  if ((uVar45 & 1) != 0) {
    uVar35 = fn_830C6D68(param_1,param_1[0x54]);
  }
  uVar24 = puVar22[1];
  uVar25 = *puVar22;
  puVar23 = (unsigned short *)(((uVar14 + uVar7) - (unsigned int)uVar7) * 4 + iVar16);
  uVar7 = puVar23[1];
  uVar26 = puVar23[3];
  uVar27 = puVar23[2];
  uVar12 = *puVar23;
  uVar31 = (unsigned short)((unsigned int)((int)(short)uVar26 - (int)(short)uVar7) >> 0x10);
  uVar30 = (unsigned short)((unsigned int)((int)(short)uVar26 - (int)(short)uVar24) >> 0x10) ^ uVar31;
  uVar31 = (unsigned short)((unsigned int)((int)(short)uVar24 - (int)(short)uVar7) >> 0x10) ^ uVar31;
  uVar29 = (unsigned short)((unsigned int)((int)(short)uVar27 - (int)(short)uVar12) >> 0x10);
  uVar28 = (unsigned short)((unsigned int)((int)(short)uVar27 - (int)(short)uVar25) >> 0x10) ^ uVar29;
  uVar29 = (unsigned short)((unsigned int)((int)(short)uVar25 - (int)(short)uVar12) >> 0x10) ^ uVar29;
  puVar22[2] = ((short)((unsigned int)uVar35 >> 0x10) +
                (uVar25 & ~((short)(uVar28 | uVar29) >> 0xf) | (short)uVar29 >> 0xf & uVar12 |
                (short)uVar28 >> 0xf & uVar27) + sVar10 & uVar11) - sVar10;
  puVar22[3] = ((uVar24 & ~((short)(uVar30 | uVar31) >> 0xf) | (short)uVar30 >> 0xf & uVar26 |
                (short)uVar31 >> 0xf & uVar7) + (short)uVar35 + sVar8 & uVar9) - sVar8;
  return 0;
}

