typedef unsigned char bool;
#define true 1
#define false 0
extern int fn_82EF4C58();
extern int fn_82F02410();
extern int fn_82F15CE8();
extern int fn_82F15D40();
extern unsigned int lbl_831AFCA0;
extern unsigned int lbl_831B8ED8;
extern unsigned int lbl_831B8EDC;


void fn_82F16508(int param_1,unsigned int *param_2,__int64 param_3,int param_4)

{
  char cVar1;
  unsigned char bVar2;
  unsigned char bVar3;
  unsigned int uVar4;
  int iVar5;
  int iVar6;
  unsigned char bVar7;
  unsigned int *puVar8;
  bool bVar9;
  bool bVar10;
  unsigned __int64 uVar11;
  unsigned __int64 uVar12;
  unsigned int *puVar13;
  unsigned int uVar15;
  unsigned __int64 uVar14;
  int iVar16;
  int iVar17;
  unsigned int uVar18;
  unsigned int uVar19;
  unsigned __int64 uVar20;
  unsigned int uVar21;
  int iVar23;
  __int64 lVar22;
  unsigned char bVar24;
  unsigned int uVar25;
  unsigned int uVar26;
  unsigned int uVar27;
  
  uVar4 = *(unsigned int *)(param_1 + 0x1ebc);
  if (*(int *)(param_1 + 0xaf0) == 2) {
    if (*(int *)(param_1 + 0x7b38) == 0) {
      fn_82F15D40();
      return;
    }
    fn_82EF4C58();
    return;
  }
  uVar14 = ((__int64)*(int *)(param_1 + 0x2d0) * (__int64)param_4 & 0x7fffffffU) * 2 + param_3 &
           0x7fffffff;
  uVar20 = uVar14 * 2;
  if (*(int *)(param_1 + 0x8c8) == 0) {
    fn_82F02410(uVar4,*(char *)(param_2 + 0x16) != '\0',1);
  }
  if (*(int *)(param_1 + 0x8c4) == 0) {
    fn_82F02410(*(unsigned int *)(param_1 + 0x1ebc),*param_2 >> 0x1f,1);
  }
  if (*(int *)(param_1 + 0x5264) != 0) {
    cVar1 = *(char *)(param_2 + 0x16);
    if (cVar1 == '\x01') {
      uVar12 = 1;
      uVar11 = 1;
    }
    else {
      if (cVar1 == '\x05') {
        uVar11 = 1;
      }
      else {
        if (cVar1 != '\x06') goto LAB_82f165f8;
        uVar11 = 0;
      }
      uVar12 = 2;
    }
    fn_82F02410(*(unsigned int *)(param_1 + 0x1ebc),uVar11,uVar12);
  }
LAB_82f165f8:
  if ((*param_2 & 0x80000000) != 0) {
    cVar1 = *(char *)(param_2 + 0x16);
    if (cVar1 != '\0') {
      uVar18 = 0;
      if (cVar1 == '\x05') {
        do {
          uVar21 = *(unsigned int *)((int)(((__int64)(int)(uVar18 & 2) *
                                    (__int64)*(int *)(param_1 + 0x2d0) + uVar20 & 0xffffffff) << 2)
                            + *(int *)(param_1 + 0x914));
          if (((uVar21 & 3) != 0) &&
             (fn_82F02410(*(unsigned int *)(param_1 + 0x1ebc),((unsigned __int64)uVar21 & 3) - 1,1),
             *(int *)(param_1 + 0x6f98) != 0)) {
            *(int *)(param_1 + 0x6fdc) = *(int *)(param_1 + 0x6fdc) + 1;
          }
          uVar18 = uVar18 + 2;
        } while ((int)uVar18 < 4);
        return;
      }
      if (cVar1 == '\x06') {
        do {
          uVar21 = *(unsigned int *)((int)(((__int64)(int)(uVar18 & 2) *
                                    (__int64)*(int *)(param_1 + 0x2d0) + ((unsigned __int64)uVar18 & 1) +
                                    uVar20 & 0xffffffff) << 2) + *(int *)(param_1 + 0x914));
          if (((uVar21 & 3) != 0) &&
             (fn_82F02410(*(unsigned int *)(param_1 + 0x1ebc),((unsigned __int64)uVar21 & 3) - 1,1),
             *(int *)(param_1 + 0x6f98) != 0)) {
            *(int *)(param_1 + 0x6fdc) = *(int *)(param_1 + 0x6fdc) + 1;
          }
          uVar18 = uVar18 + 1;
        } while ((int)uVar18 < 2);
        return;
      }
      do {
        uVar21 = *(unsigned int *)((int)(((__int64)(int)(uVar18 & 2) * (__int64)*(int *)(param_1 + 0x2d0)
                                  + ((unsigned __int64)uVar18 & 1) + uVar20 & 0xffffffff) << 2) +
                          *(int *)(param_1 + 0x914));
        if (((uVar21 & 3) != 0) &&
           (fn_82F02410(*(unsigned int *)(param_1 + 0x1ebc),((unsigned __int64)uVar21 & 3) - 1,1),
           *(int *)(param_1 + 0x6f98) != 0)) {
          *(int *)(param_1 + 0x6fdc) = *(int *)(param_1 + 0x6fdc) + 1;
        }
        uVar18 = uVar18 + 1;
      } while ((int)uVar18 < 4);
      return;
    }
    uVar18 = *(unsigned int *)(*(int *)(param_1 + 0x914) + (int)(uVar14 << 3));
    if ((uVar18 & 3) == 0) {
      return;
    }
    fn_82F02410(*(unsigned int *)(param_1 + 0x1ebc),((unsigned __int64)uVar18 & 3) - 1,1);
    if (*(int *)(param_1 + 0x6f98) == 0) {
      return;
    }
    *(int *)(param_1 + 0x6fdc) = *(int *)(param_1 + 0x6fdc) + 1;
    return;
  }
  uVar18 = 0;
  uVar19 = 0;
  bVar7 = *(unsigned char *)((int)param_2 + 0x93) | *(unsigned char *)((int)param_2 + 0x92);
  uVar21 = (unsigned int)(char)bVar7;
  if (*(char *)(param_2 + 0x16) == '\0') {
    iVar23 = *(int *)(param_1 + 0x914);
    bVar24 = **(unsigned char **)(*(int *)(param_1 + 0x1c18) + 0x58);
    iVar5 = (unsigned int)bVar24 * 8;
    puVar8 = (unsigned int *)(iVar5 + *(int *)(param_1 + 0x5150));
    fn_82F02410(*(unsigned int *)(param_1 + 0x1ebc),*puVar8,puVar8[1]);
    if (*(int *)(param_1 + 0x6f98) != 0) {
      iVar16 = (bVar24 + 0x1c01) * 4;
      *(int *)(param_1 + 0x6fcc) =
           *(int *)(iVar5 + *(int *)(param_1 + 0x5150) + 4) + *(int *)(param_1 + 0x6fcc);
      *(int *)(iVar16 + param_1) = *(int *)(iVar16 + param_1) + 1;
      *(int *)(param_1 + 0x75c4) = *(int *)(param_1 + 0x75c4) + 1;
    }
    iVar5 = (int)((uVar20 & 0x3fffffff) << 2);
    if (*(int *)(param_1 + 0x7b3c) == 0) {
      if ((bVar24 == 0x22) || (bVar24 == 0x47)) goto LAB_82f16934;
      puVar13 = *(unsigned int **)(*(int *)(param_1 + 0x1c18) + 0x58);
      fn_82F02410(*(unsigned int *)(param_1 + 0x1ebc),*puVar13 >> 1 & 0x1ffff,
                        (&lbl_831AFCA0)[*(int *)(param_1 + 0xa00) * 0x49 + (unsigned int)*(unsigned char *)puVar13]);
      if (*(int *)(param_1 + 0x6f98) != 0) {
        *(unsigned int *)(param_1 + 0x6fd0) =
             (unsigned int)(unsigned char)(&lbl_831AFCA0)
                         [(unsigned int)**(unsigned char **)(*(int *)(param_1 + 0x1c18) + 0x58) +
                          *(int *)(param_1 + 0xa00) * 0x49] + *(int *)(param_1 + 0x6fd0);
      }
    }
    else if ((bVar24 == 0x23) || (bVar24 == 0x49)) {
LAB_82f16934:
      fn_82F02410(*(unsigned int *)(param_1 + 0x1ebc),*(unsigned short *)(iVar23 + iVar5),
                        (unsigned __int64)*(unsigned int *)(param_1 + 0xa24) -
                        (unsigned __int64)*(unsigned int *)(*(int *)(param_1 + 0x1c18) + 0x24));
      fn_82F02410(*(unsigned int *)(param_1 + 0x1ebc),
                        (int)(*(unsigned int *)(iVar23 + iVar5) << 0x10 | *(unsigned int *)(iVar23 + iVar5) >> 0x10)
                        >> 0x14,(unsigned __int64)*(unsigned int *)(param_1 + 0xa28) -
                                (unsigned __int64)*(unsigned int *)(*(int *)(param_1 + 0x1c18) + 0x24));
      if (*(int *)(param_1 + 0x6f98) != 0) {
        iVar16 = (*(int *)(param_1 + 0xa24) - *(int *)(*(int *)(param_1 + 0x1c18) + 0x24)) +
                 *(int *)(param_1 + 0x6fd4);
        *(int *)(param_1 + 0x6fd4) = iVar16;
        *(int *)(param_1 + 0x6fd4) =
             (iVar16 - *(int *)(*(int *)(param_1 + 0x1c18) + 0x24)) + *(int *)(param_1 + 0xa28);
      }
    }
    else {
      uVar18 = **(unsigned int **)(*(int *)(param_1 + 0x1c18) + 0x58);
      fn_82F02410(*(unsigned int *)(param_1 + 0x1ebc),uVar18 >> 1 & 0x1ffff,
                        uVar18 >> 0x12 & 0x3f);
      if (*(int *)(param_1 + 0x6f98) != 0) {
        *(unsigned int *)(param_1 + 0x6fd0) =
             (**(unsigned int **)(*(int *)(param_1 + 0x1c18) + 0x58) >> 0x12 & 0x3f) +
             *(int *)(param_1 + 0x6fd0);
      }
    }
    *(int *)(*(int *)(param_1 + 0x1c18) + 0x58) = *(int *)(*(int *)(param_1 + 0x1c18) + 0x58) + 4;
    if (((*(unsigned int *)(iVar23 + iVar5) & 3) != 0) &&
       (fn_82F02410(*(unsigned int *)(param_1 + 0x1ebc),
                          ((unsigned __int64)*(unsigned int *)(iVar23 + iVar5) & 3) - 1,1),
       *(int *)(param_1 + 0x6f98) != 0)) {
      *(int *)(param_1 + 0x6fdc) = *(int *)(param_1 + 0x6fdc) + 1;
    }
    if (bVar7 == 0) {
      if ((*(unsigned int *)(iVar23 + iVar5) & 4) == 0) {
        return;
      }
      if (*(int *)(param_1 + 0x97c) != 0) {
        fn_82F15CE8(param_1,param_2[0x18]);
      }
      fn_82F02410(uVar4,param_2[7],1);
      return;
    }
    if (param_2[0x1d] != 0) {
      fn_82F02410(uVar4,param_2[7],1);
    }
    uVar18 = *(unsigned int *)(param_1 + 0x600);
    if (((*(int *)(param_1 + 0x648) == 0) || (*(int *)(param_1 + 0x61c) == 0)) ||
       (uVar19 = 1, (*(unsigned int *)(iVar23 + iVar5) & 4) != 0)) {
      uVar19 = 0;
    }
  }
  fn_82F02410(*(unsigned int *)(param_1 + 0x1ebc),
                    *(unsigned int *)(*(int *)(param_1 + 0x5140) + uVar21 * 4),
                    *(unsigned char *)(*(int *)(param_1 + 0x5144) + (int)(char)bVar7));
  if (*(int *)(param_1 + 0x6f98) != 0) {
    *(unsigned int *)(param_1 + 0x6fbc) =
         (unsigned int)*(unsigned char *)(*(int *)(param_1 + 0x5144) + (int)(char)bVar7) + *(int *)(param_1 + 0x6fbc)
    ;
  }
  if ((*(int *)(param_1 + 0x97c) != 0) && (*(char *)(param_2 + 0x16) == '\0')) {
    fn_82F15CE8(param_1,param_2[0x18]);
  }
  cVar1 = *(char *)(param_2 + 0x16);
  if (cVar1 == '\x01') {
    bVar3 = 0;
    iVar23 = 0;
    bVar24 = 0x20;
    uVar25 = 0;
    do {
      iVar5 = *(int *)(param_1 + 0x914);
      iVar16 = (int)(((__int64)(int)(uVar25 & 2) * (__int64)*(int *)(param_1 + 0x2d0) +
                      ((unsigned __int64)uVar25 & 1) + uVar20 & 0x3fffffff) << 2);
      if ((bVar24 & bVar7) != 0) {
        bVar2 = **(unsigned char **)(*(int *)(param_1 + 0x1c18) + 0x58);
        iVar17 = (unsigned int)bVar2 * 8;
        puVar8 = (unsigned int *)(iVar17 + *(int *)(param_1 + 0x5150));
        fn_82F02410(*(unsigned int *)(param_1 + 0x1ebc),*puVar8,puVar8[1]);
        if (*(int *)(param_1 + 0x6f98) != 0) {
          iVar6 = (bVar2 + 0x1c01) * 4;
          *(int *)(param_1 + 0x6fcc) =
               *(int *)(iVar17 + *(int *)(param_1 + 0x5150) + 4) + *(int *)(param_1 + 0x6fcc);
          *(int *)(iVar6 + param_1) = *(int *)(iVar6 + param_1) + 1;
          *(int *)(param_1 + 0x75c4) = *(int *)(param_1 + 0x75c4) + 1;
        }
        if (*(int *)(param_1 + 0x7b3c) == 0) {
          if ((bVar2 == 0x22) || (bVar2 == 0x47)) goto LAB_82f16c84;
          puVar13 = *(unsigned int **)(*(int *)(param_1 + 0x1c18) + 0x58);
          fn_82F02410(*(unsigned int *)(param_1 + 0x1ebc),*puVar13 >> 1 & 0x1ffff,
                            (&lbl_831AFCA0)
                            [*(int *)(param_1 + 0xa00) * 0x49 + (unsigned int)*(unsigned char *)puVar13]);
          if (*(int *)(param_1 + 0x6f98) != 0) {
            *(unsigned int *)(param_1 + 0x6fd0) =
                 (unsigned int)(unsigned char)(&lbl_831AFCA0)
                             [(unsigned int)**(unsigned char **)(*(int *)(param_1 + 0x1c18) + 0x58) +
                              *(int *)(param_1 + 0xa00) * 0x49] + *(int *)(param_1 + 0x6fd0);
          }
        }
        else if ((bVar2 == 0x23) || (bVar2 == 0x49)) {
LAB_82f16c84:
          fn_82F02410(*(unsigned int *)(param_1 + 0x1ebc),*(unsigned short *)(iVar5 + iVar16),
                            (unsigned __int64)*(unsigned int *)(param_1 + 0xa24) -
                            (unsigned __int64)*(unsigned int *)(*(int *)(param_1 + 0x1c18) + 0x24));
          fn_82F02410(*(unsigned int *)(param_1 + 0x1ebc),
                            (int)(*(unsigned int *)(iVar5 + iVar16) << 0x10 |
                                 *(unsigned int *)(iVar5 + iVar16) >> 0x10) >> 0x14,
                            (unsigned __int64)*(unsigned int *)(param_1 + 0xa28) -
                            (unsigned __int64)*(unsigned int *)(*(int *)(param_1 + 0x1c18) + 0x24));
          if (*(int *)(param_1 + 0x6f98) != 0) {
            iVar17 = (*(int *)(param_1 + 0xa24) - *(int *)(*(int *)(param_1 + 0x1c18) + 0x24)) +
                     *(int *)(param_1 + 0x6fd4);
            *(int *)(param_1 + 0x6fd4) = iVar17;
            *(int *)(param_1 + 0x6fd4) =
                 (iVar17 - *(int *)(*(int *)(param_1 + 0x1c18) + 0x24)) + *(int *)(param_1 + 0xa28);
          }
        }
        else {
          uVar26 = **(unsigned int **)(*(int *)(param_1 + 0x1c18) + 0x58);
          fn_82F02410(*(unsigned int *)(param_1 + 0x1ebc),uVar26 >> 1 & 0x1ffff,
                            uVar26 >> 0x12 & 0x3f);
          if (*(int *)(param_1 + 0x6f98) != 0) {
            *(unsigned int *)(param_1 + 0x6fd0) =
                 (**(unsigned int **)(*(int *)(param_1 + 0x1c18) + 0x58) >> 0x12 & 0x3f) +
                 *(int *)(param_1 + 0x6fd0);
          }
        }
        *(int *)(*(int *)(param_1 + 0x1c18) + 0x58) =
             *(int *)(*(int *)(param_1 + 0x1c18) + 0x58) + 4;
      }
      if (((*(unsigned int *)(iVar5 + iVar16) & 3) != 0) &&
         (fn_82F02410(*(unsigned int *)(param_1 + 0x1ebc),
                            ((unsigned __int64)*(unsigned int *)(iVar5 + iVar16) & 3) - 1,1),
         *(int *)(param_1 + 0x6f98) != 0)) {
        *(int *)(param_1 + 0x6fdc) = *(int *)(param_1 + 0x6fdc) + 1;
      }
      uVar26 = *(unsigned int *)(iVar5 + iVar16);
      uVar27 = uVar26 >> 3 & 1;
      uVar18 = uVar27 | uVar18;
      iVar23 = (*(unsigned int *)(*(int *)(param_1 + 0x914) + iVar16) >> 2 & 1) + iVar23;
      if ((uVar27 == 0) || (uVar15 = 1, (uVar26 & 4) != 0)) {
        uVar15 = 0;
      }
      uVar19 = uVar15 | uVar19;
      if ((uVar27 != 0) || (bVar2 = 0, (uVar26 & 4) != 0)) {
        bVar2 = 1;
      }
      uVar25 = uVar25 + 1;
      bVar3 = bVar2 | bVar3;
      bVar24 = (char)bVar24 >> 1;
    } while ((int)uVar25 < 4);
    bVar9 = (uVar21 & 3) != 0;
    bVar10 = (bool)(bVar9 | bVar3);
    uVar18 = (bVar9 | uVar18) & *(unsigned int *)(param_1 + 0x600);
    if ((!bVar9) || (uVar21 = 1, 2 < iVar23)) {
      uVar21 = 0;
    }
    if ((*(int *)(param_1 + 0x648) == 0) || (uVar25 = 1, *(int *)(param_1 + 0x61c) == 0)) {
      uVar25 = 0;
    }
    iVar23 = *(int *)(param_1 + 0x97c);
    uVar19 = uVar25 & (uVar21 | uVar19);
  }
  else {
    if (cVar1 == '\x05') {
      bVar24 = 0x20;
      uVar25 = 0;
      uVar21 = uVar21 & 0x17;
      uVar26 = 0;
      lVar22 = 4;
      do {
        iVar23 = *(int *)(param_1 + 0x914);
        iVar5 = (int)(((__int64)(int)(uVar26 & 2) * (__int64)*(int *)(param_1 + 0x2d0) + uVar20 &
                      0x3fffffff) << 2);
        if ((bVar24 & bVar7) != 0) {
          bVar3 = **(unsigned char **)(*(int *)(param_1 + 0x1c18) + 0x58);
          iVar16 = (unsigned int)bVar3 * 8;
          puVar8 = (unsigned int *)(iVar16 + *(int *)(param_1 + 0x5150));
          fn_82F02410(*(unsigned int *)(param_1 + 0x1ebc),*puVar8,puVar8[1]);
          if (*(int *)(param_1 + 0x6f98) != 0) {
            iVar17 = (bVar3 + 0x1c01) * 4;
            *(int *)(param_1 + 0x6fcc) =
                 *(int *)(iVar16 + *(int *)(param_1 + 0x5150) + 4) + *(int *)(param_1 + 0x6fcc);
            *(int *)(iVar17 + param_1) = *(int *)(iVar17 + param_1) + 1;
            *(int *)(param_1 + 0x75c4) = *(int *)(param_1 + 0x75c4) + 1;
          }
          if (*(int *)(param_1 + 0x7b3c) == 0) {
            if ((bVar3 == 0x22) || (bVar3 == 0x47)) goto LAB_82f16fb8;
            puVar13 = *(unsigned int **)(*(int *)(param_1 + 0x1c18) + 0x58);
            fn_82F02410(*(unsigned int *)(param_1 + 0x1ebc),*puVar13 >> 1 & 0x1ffff,
                              (&lbl_831AFCA0)
                              [*(int *)(param_1 + 0xa00) * 0x49 + (unsigned int)*(unsigned char *)puVar13]);
            if (*(int *)(param_1 + 0x6f98) != 0) {
              *(unsigned int *)(param_1 + 0x6fd0) =
                   (unsigned int)(unsigned char)(&lbl_831AFCA0)
                               [(unsigned int)**(unsigned char **)(*(int *)(param_1 + 0x1c18) + 0x58) +
                                *(int *)(param_1 + 0xa00) * 0x49] + *(int *)(param_1 + 0x6fd0);
            }
          }
          else if ((bVar3 == 0x23) || (bVar3 == 0x49)) {
LAB_82f16fb8:
            fn_82F02410(*(unsigned int *)(param_1 + 0x1ebc),*(unsigned short *)(iVar5 + iVar23),
                              (unsigned __int64)*(unsigned int *)(param_1 + 0xa24) -
                              (unsigned __int64)*(unsigned int *)(*(int *)(param_1 + 0x1c18) + 0x24));
            fn_82F02410(*(unsigned int *)(param_1 + 0x1ebc),
                              (int)(*(unsigned int *)(iVar5 + iVar23) << 0x10 |
                                   *(unsigned int *)(iVar5 + iVar23) >> 0x10) >> 0x14,
                              (unsigned __int64)*(unsigned int *)(param_1 + 0xa28) -
                              (unsigned __int64)*(unsigned int *)(*(int *)(param_1 + 0x1c18) + 0x24));
            if (*(int *)(param_1 + 0x6f98) != 0) {
              iVar16 = (*(int *)(param_1 + 0xa24) - *(int *)(*(int *)(param_1 + 0x1c18) + 0x24)) +
                       *(int *)(param_1 + 0x6fd4);
              *(int *)(param_1 + 0x6fd4) = iVar16;
              *(int *)(param_1 + 0x6fd4) =
                   (iVar16 - *(int *)(*(int *)(param_1 + 0x1c18) + 0x24)) +
                   *(int *)(param_1 + 0xa28);
            }
          }
          else {
            uVar27 = **(unsigned int **)(*(int *)(param_1 + 0x1c18) + 0x58);
            fn_82F02410(*(unsigned int *)(param_1 + 0x1ebc),uVar27 >> 1 & 0x1ffff,
                              uVar27 >> 0x12 & 0x3f);
            if (*(int *)(param_1 + 0x6f98) != 0) {
              *(unsigned int *)(param_1 + 0x6fd0) =
                   (**(unsigned int **)(*(int *)(param_1 + 0x1c18) + 0x58) >> 0x12 & 0x3f) +
                   *(int *)(param_1 + 0x6fd0);
            }
          }
          *(int *)(*(int *)(param_1 + 0x1c18) + 0x58) =
               *(int *)(*(int *)(param_1 + 0x1c18) + 0x58) + 4;
        }
        if (((*(unsigned int *)(iVar5 + iVar23) & 3) != 0) &&
           (fn_82F02410(*(unsigned int *)(param_1 + 0x1ebc),
                              ((unsigned __int64)*(unsigned int *)(iVar5 + iVar23) & 3) - 1,1),
           *(int *)(param_1 + 0x6f98) != 0)) {
          *(int *)(param_1 + 0x6fdc) = *(int *)(param_1 + 0x6fdc) + 1;
        }
        if ((*(unsigned int *)(iVar5 + iVar23) & 4) != 0) {
          uVar25 = 3 << ((unsigned int)lVar22 & 0x3f) | uVar25;
        }
        lVar22 = lVar22 + -2;
        uVar21 = (*(unsigned int *)(iVar5 + iVar23) >> 3 & 1) << (5 - uVar26 & 0x3f) | uVar21;
        uVar26 = uVar26 + 2;
        bVar24 = (char)bVar24 >> 2;
      } while (0 < lVar22);
    }
    else {
      if (cVar1 != '\x06') goto LAB_82f173dc;
      bVar24 = 0x20;
      uVar25 = 0;
      uVar21 = uVar21 & 0xf;
      uVar27 = 0;
      uVar26 = 3;
      do {
        iVar23 = *(int *)(param_1 + 0x914);
        iVar5 = (int)(((__int64)(int)(uVar27 & 2) * (__int64)*(int *)(param_1 + 0x2d0) +
                       ((unsigned __int64)uVar27 & 1) + uVar20 & 0x3fffffff) << 2);
        if ((bVar24 & bVar7) != 0) {
          bVar3 = **(unsigned char **)(*(int *)(param_1 + 0x1c18) + 0x58);
          iVar16 = (unsigned int)bVar3 * 8;
          puVar8 = (unsigned int *)(iVar16 + *(int *)(param_1 + 0x5150));
          fn_82F02410(*(unsigned int *)(param_1 + 0x1ebc),*puVar8,puVar8[1]);
          if (*(int *)(param_1 + 0x6f98) != 0) {
            iVar17 = (bVar3 + 0x1c01) * 4;
            *(int *)(param_1 + 0x6fcc) =
                 *(int *)(iVar16 + *(int *)(param_1 + 0x5150) + 4) + *(int *)(param_1 + 0x6fcc);
            *(int *)(iVar17 + param_1) = *(int *)(iVar17 + param_1) + 1;
            *(int *)(param_1 + 0x75c4) = *(int *)(param_1 + 0x75c4) + 1;
          }
          if (*(int *)(param_1 + 0x7b3c) == 0) {
            if ((bVar3 == 0x22) || (bVar3 == 0x47)) goto LAB_82f1724c;
            puVar13 = *(unsigned int **)(*(int *)(param_1 + 0x1c18) + 0x58);
            fn_82F02410(*(unsigned int *)(param_1 + 0x1ebc),*puVar13 >> 1 & 0x1ffff,
                              (&lbl_831AFCA0)
                              [*(int *)(param_1 + 0xa00) * 0x49 + (unsigned int)*(unsigned char *)puVar13]);
            if (*(int *)(param_1 + 0x6f98) != 0) {
              *(unsigned int *)(param_1 + 0x6fd0) =
                   (unsigned int)(unsigned char)(&lbl_831AFCA0)
                               [(unsigned int)**(unsigned char **)(*(int *)(param_1 + 0x1c18) + 0x58) +
                                *(int *)(param_1 + 0xa00) * 0x49] + *(int *)(param_1 + 0x6fd0);
            }
          }
          else if ((bVar3 == 0x23) || (bVar3 == 0x49)) {
LAB_82f1724c:
            fn_82F02410(*(unsigned int *)(param_1 + 0x1ebc),*(unsigned short *)(iVar5 + iVar23),
                              (unsigned __int64)*(unsigned int *)(param_1 + 0xa24) -
                              (unsigned __int64)*(unsigned int *)(*(int *)(param_1 + 0x1c18) + 0x24));
            fn_82F02410(*(unsigned int *)(param_1 + 0x1ebc),
                              (int)(*(unsigned int *)(iVar5 + iVar23) << 0x10 |
                                   *(unsigned int *)(iVar5 + iVar23) >> 0x10) >> 0x14,
                              (unsigned __int64)*(unsigned int *)(param_1 + 0xa28) -
                              (unsigned __int64)*(unsigned int *)(*(int *)(param_1 + 0x1c18) + 0x24));
            if (*(int *)(param_1 + 0x6f98) != 0) {
              iVar16 = (*(int *)(param_1 + 0xa24) - *(int *)(*(int *)(param_1 + 0x1c18) + 0x24)) +
                       *(int *)(param_1 + 0x6fd4);
              *(int *)(param_1 + 0x6fd4) = iVar16;
              *(int *)(param_1 + 0x6fd4) =
                   (iVar16 - *(int *)(*(int *)(param_1 + 0x1c18) + 0x24)) +
                   *(int *)(param_1 + 0xa28);
            }
          }
          else {
            uVar15 = **(unsigned int **)(*(int *)(param_1 + 0x1c18) + 0x58);
            fn_82F02410(*(unsigned int *)(param_1 + 0x1ebc),uVar15 >> 1 & 0x1ffff,
                              uVar15 >> 0x12 & 0x3f);
            if (*(int *)(param_1 + 0x6f98) != 0) {
              *(unsigned int *)(param_1 + 0x6fd0) =
                   (**(unsigned int **)(*(int *)(param_1 + 0x1c18) + 0x58) >> 0x12 & 0x3f) +
                   *(int *)(param_1 + 0x6fd0);
            }
          }
          *(int *)(*(int *)(param_1 + 0x1c18) + 0x58) =
               *(int *)(*(int *)(param_1 + 0x1c18) + 0x58) + 4;
        }
        if (((*(unsigned int *)(iVar5 + iVar23) & 3) != 0) &&
           (fn_82F02410(*(unsigned int *)(param_1 + 0x1ebc),
                              ((unsigned __int64)*(unsigned int *)(iVar5 + iVar23) & 3) - 1,1),
           *(int *)(param_1 + 0x6f98) != 0)) {
          *(int *)(param_1 + 0x6fdc) = *(int *)(param_1 + 0x6fdc) + 1;
        }
        if ((*(unsigned int *)(iVar5 + iVar23) & 4) != 0) {
          uVar25 = 5 << (uVar26 & 0x3f) | uVar25;
        }
        uVar26 = uVar26 - 1;
        uVar21 = (*(unsigned int *)(iVar5 + iVar23) >> 3 & 1) << (5 - uVar27 & 0x3f) | uVar21;
        uVar27 = uVar27 + 1;
        bVar24 = (char)bVar24 >> 1;
      } while (1 < (int)uVar26);
    }
    if (uVar25 == 0x3c) {
      uVar25 = 0x3f;
    }
    if ((uVar21 != 0) || (bVar10 = false, uVar25 != 0)) {
      bVar10 = true;
    }
    uVar19 = uVar21 & ~uVar25 | uVar19;
    if ((*(int *)(param_1 + 0x648) == 0) || (*(int *)(param_1 + 0x61c) == 0)) {
      uVar19 = 0;
    }
    iVar23 = *(int *)(param_1 + 0x97c);
  }
  if ((iVar23 != 0) && (bVar10)) {
    fn_82F15CE8(param_1,param_2[0x18]);
  }
  if ((param_2[0x1d] != 0) && (param_2[7] != 0xffffffff)) {
    fn_82F02410(uVar4,param_2[7],1);
  }
LAB_82f173dc:
  if (uVar18 != 0) {
    uVar18 = *param_2 >> 0x16 & 3;
    fn_82F02410(uVar4,(&lbl_831B8ED8)[uVar18],(&lbl_831B8EDC)[uVar18]);
  }
  if (uVar19 != 0) {
    uVar14 = (~(unsigned __int64)*param_2 & 0xffffffff) >> 0x19 & 8;
    puVar13 = param_2;
    for (iVar23 = 0;
        ((puVar13 = puVar13 + 1, *puVar13 == 0 || (*(char *)((int)param_2 + iVar23 + 0x4a) != '\0'))
        && (iVar23 < 6)); iVar23 = iVar23 + 1) {
    }
    cVar1 = *(char *)((int)param_2 + iVar23 + 0x38);
    if (cVar1 == '\x01') {
      uVar14 = (__int64)*(char *)((int)param_2 + iVar23 + 0x80) + uVar14;
    }
    else if (cVar1 == '\x02') {
      uVar14 = (__int64)*(char *)((int)param_2 + iVar23 + 0x86) + uVar14 + 3;
    }
    else if (cVar1 == '\x04') {
      uVar14 = uVar14 + 7;
    }
    iVar23 = (int)((uVar14 & 0x1fffffff) << 3);
    puVar8 = (unsigned int *)(iVar23 + *(int *)(param_1 + 0x7600));
    fn_82F02410(*(unsigned int *)(param_1 + 0x1ebc),*puVar8,puVar8[1]);
    *(int *)(param_1 + 0x75e4) =
         *(int *)(iVar23 + *(int *)(param_1 + 0x7600) + 4) + *(int *)(param_1 + 0x75e4);
  }
  return;
}

