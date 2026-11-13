extern int fn_82C038C8();
extern unsigned int iStack_70;
extern unsigned int iStack_80;
extern unsigned int lbl_820ED038;
extern unsigned int lbl_820ED048;
extern unsigned int lbl_820ED058;
extern unsigned int lbl_820ED068;


unsigned __int64 fn_82C13690(__int64 *param_1,int param_2)

{
  unsigned char bVar1;
  unsigned char bVar2;
  unsigned char bVar3;
  unsigned char bVar4;
  unsigned char bVar5;
  unsigned char bVar6;
  unsigned char bVar7;
  int iVar8;
  unsigned int uVar9;
  int iVar10;
  short sVar11;
  short sVar12;
  unsigned char *pbVar13;
  unsigned char *pbVar14;
  unsigned int *puVar15;
  unsigned int *puVar16;
  unsigned int uVar17;
  unsigned char *pbVar18;
  unsigned char *pbVar19;
  unsigned int uVar20;
  unsigned int uVar21;
  unsigned char *pbVar22;
  unsigned int *apuStack_90 [4];
  int iStack_80;
  short sStack_7c;
  short sStack_7a;
  unsigned char bStack_78;
  unsigned char bStack_77;
  unsigned char bStack_76;
  unsigned char bStack_75;
  unsigned char bStack_74;
  unsigned char bStack_73;
  unsigned char bStack_72;
  unsigned char bStack_71;
  int iStack_70;
  short sStack_6c;
  short sStack_6a;
  unsigned char bStack_68;
  unsigned char bStack_67;
  unsigned char bStack_66;
  unsigned char bStack_65;
  unsigned char bStack_64;
  unsigned char bStack_63;
  unsigned char bStack_62;
  unsigned char bStack_61;
  
  apuStack_90[0] = (unsigned int *)0x0;
  if (param_1 == (__int64 *)0x0) {
    return 2;
  }
  uVar20 = param_2 - 0x18;
  if (uVar20 < 0x36) {
    return 3;
  }
  iVar8 = fn_82C038C8(param_1,*param_1,0x36,apuStack_90);
  if (iVar8 != 0x36) {
    return 3;
  }
  uVar9 = 0x36;
  iStack_70 = (((unsigned int)(unsigned char)*apuStack_90[0] * 0x100 + (unsigned int)*(unsigned char *)((int)apuStack_90[0] + 2)) *
               0x100 + (unsigned int)*(unsigned char *)((int)apuStack_90[0] + 1)) * 0x100 +
              (unsigned int)*(unsigned char *)apuStack_90[0];
  sStack_6c = (unsigned short)*(unsigned char *)((int)apuStack_90[0] + 5) * 0x100 +
              (unsigned short)*(unsigned char *)(apuStack_90[0] + 1);
  bStack_68 = *(unsigned char *)(apuStack_90[0] + 2);
  sStack_6a = (unsigned short)*(unsigned char *)((int)apuStack_90[0] + 7) * 0x100 +
              (unsigned short)*(unsigned char *)((int)apuStack_90[0] + 6);
  bStack_67 = *(unsigned char *)((int)apuStack_90[0] + 9);
  bStack_66 = *(unsigned char *)((int)apuStack_90[0] + 10);
  bStack_65 = *(unsigned char *)((int)apuStack_90[0] + 0xb);
  bStack_64 = *(unsigned char *)(apuStack_90[0] + 3);
  bStack_63 = *(unsigned char *)((int)apuStack_90[0] + 0xd);
  bStack_62 = *(unsigned char *)((int)apuStack_90[0] + 0xe);
  bStack_61 = *(unsigned char *)((int)apuStack_90[0] + 0xf);
  iStack_80 = (((unsigned int)*(unsigned char *)((int)apuStack_90[0] + 0x13) * 0x100 +
               (unsigned int)*(unsigned char *)((int)apuStack_90[0] + 0x12)) * 0x100 +
              (unsigned int)*(unsigned char *)((int)apuStack_90[0] + 0x11)) * 0x100 +
              (unsigned int)*(unsigned char *)(apuStack_90[0] + 4);
  sStack_7c = (unsigned short)*(unsigned char *)((int)apuStack_90[0] + 0x15) * 0x100 +
              (unsigned short)*(unsigned char *)(apuStack_90[0] + 5);
  bStack_78 = *(unsigned char *)(apuStack_90[0] + 6);
  sStack_7a = (unsigned short)*(unsigned char *)((int)apuStack_90[0] + 0x17) * 0x100 +
              (unsigned short)*(unsigned char *)((int)apuStack_90[0] + 0x16);
  bStack_77 = *(unsigned char *)((int)apuStack_90[0] + 0x19);
  pbVar13 = &lbl_820ED058;
  bStack_76 = *(unsigned char *)((int)apuStack_90[0] + 0x1a);
  pbVar14 = (unsigned char *)&iStack_70;
  bStack_75 = *(unsigned char *)((int)apuStack_90[0] + 0x1b);
  bStack_74 = *(unsigned char *)(apuStack_90[0] + 7);
  bStack_73 = *(unsigned char *)((int)apuStack_90[0] + 0x1d);
  bStack_72 = *(unsigned char *)((int)apuStack_90[0] + 0x1e);
  bStack_71 = *(unsigned char *)((int)apuStack_90[0] + 0x1f);
  puVar15 = apuStack_90[0] + 10;
  pbVar18 = (unsigned char *)((int)apuStack_90[0] + 0x29);
  pbVar19 = (unsigned char *)((int)apuStack_90[0] + 0x2a);
  pbVar22 = (unsigned char *)((int)apuStack_90[0] + 0x2b);
  bVar1 = *(unsigned char *)((int)apuStack_90[0] + 0x2f);
  bVar2 = *(unsigned char *)((int)apuStack_90[0] + 0x2e);
  bVar3 = *(unsigned char *)((int)apuStack_90[0] + 0x2d);
  bVar4 = *(unsigned char *)(apuStack_90[0] + 0xb);
  puVar16 = apuStack_90[0] + 0xc;
  apuStack_90[0] = (unsigned int *)((int)apuStack_90[0] + 0x36);
  uVar21 = (((unsigned int)*pbVar22 * 0x100 + (unsigned int)*pbVar19) * 0x100 + (unsigned int)*pbVar18) * 0x100 +
           (unsigned int)*(unsigned char *)puVar15;
  bVar5 = *(unsigned char *)puVar16;
  do {
    bVar6 = *pbVar13;
    bVar7 = *pbVar14;
    if ((unsigned __int64)bVar6 - (unsigned __int64)bVar7 != 0) break;
    pbVar13 = pbVar13 + 1;
    pbVar14 = pbVar14 + 1;
  } while (pbVar13 != &lbl_820ED068);
  if (((int)((unsigned __int64)bVar6 - (unsigned __int64)bVar7) != 0) ||
     (sVar11 = *(short *)((int)param_1 + 0xee) + 1, *(short *)((int)param_1 + 0xee) = sVar11,
     sVar11 != *(short *)((int)param_1 + 0xec))) goto LAB_82c13ef4;
  *(unsigned short *)((int)param_1 + 0xe4) = bVar5 & 0x7f;
  if (uVar21 != 0) {
    if (uVar20 < uVar21 + 0x36) {
      return 3;
    }
    uVar9 = fn_82C038C8(param_1,*param_1 + 0x36,uVar21,apuStack_90);
    if (uVar9 != uVar21) {
      return 3;
    }
    uVar9 = uVar9 + 0x36;
    iVar8 = (unsigned int)*(unsigned char *)((int)apuStack_90[0] + 1) * 0x100 + (unsigned int)*(unsigned char *)apuStack_90[0];
    *(short *)((int)param_1 + 0x3e) = (short)iVar8;
    if (3 < iVar8 - 0x160U) {
      return 1;
    }
    if (iVar8 == 0x160) {
      if (uVar21 < 0x16) {
        return 1;
      }
      *(unsigned short *)((int)param_1 + 0x3c) = 1;
      *(unsigned int *)(param_1 + 8) =
           (((unsigned int)*(unsigned char *)((int)apuStack_90[0] + 7) * 0x100 +
            (unsigned int)*(unsigned char *)((int)apuStack_90[0] + 6)) * 0x100 +
           (unsigned int)*(unsigned char *)((int)apuStack_90[0] + 5)) * 0x100 + (unsigned int)*(unsigned char *)(apuStack_90[0] + 1);
      *(unsigned int *)((int)param_1 + 0x44) =
           (((unsigned int)*(unsigned char *)((int)apuStack_90[0] + 0xb) * 0x100 +
            (unsigned int)*(unsigned char *)((int)apuStack_90[0] + 10)) * 0x100 +
           (unsigned int)*(unsigned char *)((int)apuStack_90[0] + 9)) * 0x100 + (unsigned int)*(unsigned char *)(apuStack_90[0] + 2);
      *(unsigned int *)(param_1 + 9) =
           (unsigned int)*(unsigned char *)((int)apuStack_90[0] + 0xd) * 0x100 + (unsigned int)*(unsigned char *)(apuStack_90[0] + 3);
      *(unsigned short *)((int)param_1 + 0x4c) =
           (unsigned short)(unsigned char)*apuStack_90[0] * 0x100 + (unsigned short)*(unsigned char *)((int)apuStack_90[0] + 2);
      *(unsigned short *)((int)param_1 + 0x54) =
           (unsigned short)*(unsigned char *)((int)apuStack_90[0] + 0x15) * 0x100 +
           (unsigned short)*(unsigned char *)(apuStack_90[0] + 5);
      bVar5 = *(unsigned char *)((int)apuStack_90[0] + 0x13);
      bVar6 = *(unsigned char *)((int)apuStack_90[0] + 0x12);
      *(unsigned short *)(param_1 + 0xb) = 1;
      *(unsigned int *)(param_1 + 10) = (unsigned int)bVar5 * 0x100 + (unsigned int)bVar6;
      sVar11 = (unsigned short)*(unsigned char *)((int)apuStack_90[0] + 0xf) * 0x100 +
               (unsigned short)*(unsigned char *)((int)apuStack_90[0] + 0xe);
      *(short *)((int)param_1 + 0x5a) = sVar11;
      *(short *)((int)param_1 + 0x5c) = sVar11;
      *(short *)((int)param_1 + 0x74) = sVar11;
      if (*(short *)((int)param_1 + 0x4c) == 1) {
LAB_82c13cb8:
        uVar17 = 4;
      }
      else {
        if (*(short *)((int)param_1 + 0x4c) != 2) {
          return 1;
        }
LAB_82c13cb0:
        uVar17 = 3;
      }
    }
    else {
      if (iVar8 != 0x161) {
        if (uVar21 < 0x24) {
          return 1;
        }
        *(unsigned short *)((int)param_1 + 0x3c) = 3;
        *(unsigned int *)(param_1 + 8) =
             (((unsigned int)*(unsigned char *)((int)apuStack_90[0] + 7) * 0x100 +
              (unsigned int)*(unsigned char *)((int)apuStack_90[0] + 6)) * 0x100 +
             (unsigned int)*(unsigned char *)((int)apuStack_90[0] + 5)) * 0x100 + (unsigned int)*(unsigned char *)(apuStack_90[0] + 1)
        ;
        *(unsigned int *)((int)param_1 + 0x44) =
             (((unsigned int)*(unsigned char *)((int)apuStack_90[0] + 0xb) * 0x100 +
              (unsigned int)*(unsigned char *)((int)apuStack_90[0] + 10)) * 0x100 +
             (unsigned int)*(unsigned char *)((int)apuStack_90[0] + 9)) * 0x100 + (unsigned int)*(unsigned char *)(apuStack_90[0] + 2)
        ;
        *(unsigned int *)(param_1 + 9) =
             (unsigned int)*(unsigned char *)((int)apuStack_90[0] + 0xd) * 0x100 +
             (unsigned int)*(unsigned char *)(apuStack_90[0] + 3);
        bVar5 = *(unsigned char *)((int)apuStack_90[0] + 2);
        uVar21 = *apuStack_90[0];
        *(unsigned short *)(param_1 + 0xb) = 0xfffe;
        *(unsigned short *)((int)param_1 + 0x4c) = (unsigned short)(unsigned char)uVar21 * 0x100 + (unsigned short)bVar5;
        iVar8 = (unsigned int)*(unsigned char *)((int)apuStack_90[0] + 0xf) * 0x100 +
                (unsigned int)*(unsigned char *)((int)apuStack_90[0] + 0xe);
        *(short *)((int)param_1 + 0x5c) = (short)iVar8;
        *(short *)((int)param_1 + 0x5a) = (short)(iVar8 + 7 >> 3) << 3;
        *(unsigned int *)(param_1 + 0xc) =
             (((unsigned int)*(unsigned char *)((int)apuStack_90[0] + 0x17) * 0x100 +
              (unsigned int)*(unsigned char *)((int)apuStack_90[0] + 0x16)) * 0x100 +
             (unsigned int)*(unsigned char *)((int)apuStack_90[0] + 0x15)) * 0x100 +
             (unsigned int)*(unsigned char *)(apuStack_90[0] + 5);
        *(unsigned short *)((int)param_1 + 0x54) =
             (unsigned short)*(unsigned char *)((int)apuStack_90[0] + 0x21) * 0x100 +
             (unsigned short)*(unsigned char *)(apuStack_90[0] + 8);
        bVar5 = *(unsigned char *)((int)apuStack_90[0] + 0x23);
        bVar6 = *(unsigned char *)((int)apuStack_90[0] + 0x22);
        *(unsigned int *)((int)param_1 + 100) = 1;
        *(unsigned short *)(param_1 + 0xd) = 0;
        *(unsigned short *)((int)param_1 + 0x56) = (unsigned short)bVar5 * 0x100 + (unsigned short)bVar6;
        *(unsigned short *)((int)param_1 + 0x6a) = 0x10;
        *(unsigned char *)((int)param_1 + 0x6c) = 0x80;
        *(unsigned char *)((int)param_1 + 0x6d) = 0;
        *(unsigned char *)((int)param_1 + 0x6e) = 0;
        *(unsigned char *)((int)param_1 + 0x6f) = 0xaa;
        *(unsigned char *)(param_1 + 0xe) = 0;
        *(unsigned char *)((int)param_1 + 0x71) = 0x38;
        *(unsigned char *)((int)param_1 + 0x72) = 0x9b;
        *(unsigned char *)((int)param_1 + 0x73) = 0x71;
        goto LAB_82c13c5c;
      }
      if (uVar21 < 0x1c) {
        return 1;
      }
      *(unsigned short *)((int)param_1 + 0x3c) = 2;
      *(unsigned int *)(param_1 + 8) =
           (((unsigned int)*(unsigned char *)((int)apuStack_90[0] + 7) * 0x100 +
            (unsigned int)*(unsigned char *)((int)apuStack_90[0] + 6)) * 0x100 +
           (unsigned int)*(unsigned char *)((int)apuStack_90[0] + 5)) * 0x100 + (unsigned int)*(unsigned char *)(apuStack_90[0] + 1);
      *(unsigned int *)((int)param_1 + 0x44) =
           (((unsigned int)*(unsigned char *)((int)apuStack_90[0] + 0xb) * 0x100 +
            (unsigned int)*(unsigned char *)((int)apuStack_90[0] + 10)) * 0x100 +
           (unsigned int)*(unsigned char *)((int)apuStack_90[0] + 9)) * 0x100 + (unsigned int)*(unsigned char *)(apuStack_90[0] + 2);
      *(unsigned int *)(param_1 + 9) =
           (unsigned int)*(unsigned char *)((int)apuStack_90[0] + 0xd) * 0x100 + (unsigned int)*(unsigned char *)(apuStack_90[0] + 3);
      sVar11 = (unsigned short)(unsigned char)*apuStack_90[0] * 0x100 + (unsigned short)*(unsigned char *)((int)apuStack_90[0] + 2);
      *(unsigned short *)(param_1 + 0xb) = 1;
      *(short *)((int)param_1 + 0x4c) = sVar11;
      sVar12 = (unsigned short)*(unsigned char *)((int)apuStack_90[0] + 0xf) * 0x100 +
               (unsigned short)*(unsigned char *)((int)apuStack_90[0] + 0xe);
      *(short *)((int)param_1 + 0x5a) = sVar12;
      *(short *)((int)param_1 + 0x5c) = sVar12;
      *(short *)((int)param_1 + 0x74) = sVar12;
      *(unsigned int *)(param_1 + 10) =
           (((unsigned int)*(unsigned char *)((int)apuStack_90[0] + 0x15) * 0x100 +
            (unsigned int)*(unsigned char *)(apuStack_90[0] + 5)) * 0x100 +
           (unsigned int)*(unsigned char *)((int)apuStack_90[0] + 0x13)) * 0x100 +
           (unsigned int)*(unsigned char *)((int)apuStack_90[0] + 0x12);
      *(unsigned short *)((int)param_1 + 0x54) =
           (unsigned short)*(unsigned char *)((int)apuStack_90[0] + 0x17) * 0x100 +
           (unsigned short)*(unsigned char *)((int)apuStack_90[0] + 0x16);
      if (sVar11 == 1) goto LAB_82c13cb8;
      if (sVar11 == 2) goto LAB_82c13cb0;
      if (sVar11 != 6) {
        return 1;
      }
      uVar17 = 0x3f;
    }
    *(unsigned int *)(param_1 + 0xc) = uVar17;
  }
LAB_82c13c5c:
  if ((((unsigned __int64)bVar1 * 0x100 + (unsigned __int64)bVar2) * 0x100 + (unsigned __int64)bVar3) * 0x100 +
      (unsigned __int64)bVar4 != 0) {
    pbVar19 = (unsigned char *)&iStack_80;
    pbVar22 = &lbl_820ED048;
    pbVar18 = pbVar22;
    do {
      bVar1 = *pbVar18;
      bVar2 = *pbVar19;
      if ((unsigned __int64)bVar1 - (unsigned __int64)bVar2 != 0) break;
      pbVar18 = pbVar18 + 1;
      pbVar19 = pbVar19 + 1;
    } while (pbVar18 != &lbl_820ED058);
    pbVar18 = &lbl_820ED038;
    if ((int)((unsigned __int64)bVar1 - (unsigned __int64)bVar2) == 0) {
      iVar8 = 9;
    }
    else {
      pbVar14 = (unsigned char *)&iStack_80;
      pbVar19 = pbVar18;
      do {
        bVar1 = *pbVar19;
        bVar2 = *pbVar14;
        if ((unsigned __int64)bVar1 - (unsigned __int64)bVar2 != 0) break;
        pbVar19 = pbVar19 + 1;
        pbVar14 = pbVar14 + 1;
      } while (pbVar19 != &lbl_820ED048);
      if ((int)((unsigned __int64)bVar1 - (unsigned __int64)bVar2) != 0) {
        return 1;
      }
      iVar8 = 8;
    }
    if ((uVar20 < uVar9 + iVar8) ||
       (iVar10 = fn_82C038C8(param_1,(unsigned __int64)uVar9 + *param_1,iVar8,apuStack_90),
       iVar10 != iVar8)) {
      return 3;
    }
    pbVar19 = (unsigned char *)&iStack_80;
    do {
      bVar1 = *pbVar22;
      bVar2 = *pbVar19;
      if ((unsigned __int64)bVar1 - (unsigned __int64)bVar2 != 0) break;
      pbVar22 = pbVar22 + 1;
      pbVar19 = pbVar19 + 1;
    } while (pbVar22 != &lbl_820ED058);
    if ((int)((unsigned __int64)bVar1 - (unsigned __int64)bVar2) == 0) {
      uVar9 = *apuStack_90[0];
      *(unsigned int *)(param_1 + 3) = uVar9;
      *(unsigned int *)(param_1 + 3) =
           ((uVar9 << 0x10 | uVar9 & 0xffff) & 0xffff00) << 8 | uVar9 >> 8 & 0xff00 |
           (unsigned int)*(unsigned char *)(param_1 + 3);
    }
    else {
      pbVar19 = (unsigned char *)&iStack_80;
      do {
        bVar1 = *pbVar18;
        bVar2 = *pbVar19;
        if ((unsigned __int64)bVar1 - (unsigned __int64)bVar2 != 0) break;
        pbVar18 = pbVar18 + 1;
        pbVar19 = pbVar19 + 1;
      } while (pbVar18 != &lbl_820ED048);
      if (((int)((unsigned __int64)bVar1 - (unsigned __int64)bVar2) != 0) ||
         (*(unsigned int *)(param_1 + 3) =
               ((unsigned int)*(unsigned char *)((int)apuStack_90[0] + 2) * 0x100 +
               (unsigned int)*(unsigned char *)((int)apuStack_90[0] + 1)) * (unsigned int)*(unsigned char *)apuStack_90[0],
         1 < *(unsigned char *)apuStack_90[0])) {
        return 1;
      }
    }
  }
LAB_82c13ef4:
  *param_1 = (unsigned __int64)uVar20 + *param_1;
  return 0;
}

