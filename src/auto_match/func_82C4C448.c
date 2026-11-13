extern int fn_82C44B80();
extern int fn_82C44BE0();
extern int fn_82C47A68();
extern int fn_82C47AC8();
extern int fn_82C48040();
extern int fn_82C487A0();
extern int fn_82C5E168();
extern int fn_82C5E340();
extern int fn_82C74C30();
extern int fn_82C74D98();
extern int fn_82C751C0();
extern int fn_82C8F060();
extern int fn_82CA0B70();
extern int fn_82CA0C90();
extern int fn_82CA1080();
extern int fn_82CA2458();
extern int fn_82CA2488();
extern int fn_82CA2900();
extern int fn_82CA3A50();
extern int fn_82CA4C20();
extern int fn_82CA6768();
extern int fn_82CA8498();
extern int fn_82CA9338();
extern int fn_82CAAA10();
extern unsigned int iStack_4b0;
extern unsigned int iStack_4b8;
extern unsigned int iStack_4dc;
extern unsigned int iStack_4e8;
extern unsigned int iStack_4ec;
extern unsigned int uRam83175d40;
extern unsigned int uStack_490;
extern unsigned int uStack_494;
extern unsigned int uStack_498;
extern unsigned int uStack_49c;
extern unsigned int uStack_4a0;
extern unsigned int uStack_4a4;
extern unsigned int uStack_4a8;
extern unsigned int uStack_4ac;
extern unsigned int uStack_4b2;
extern unsigned int uStack_4b4;
extern unsigned int uStack_4bc;
extern unsigned int uStack_4c0;
extern unsigned int uStack_4e0;
extern unsigned int uStack_4e2;
extern unsigned int uStack_4e4;
extern unsigned int uStack_4f0;
extern unsigned int uStack_500;


unsigned __int64 fn_82C4C448(int param_1,int param_2,unsigned short param_3,unsigned int param_4,int param_5,
                       unsigned __int64 param_6)

{
  int iVar1;
  unsigned int uVar2;
  unsigned int *puVar3;
  int iVar4;
  unsigned int uVar5;
  int iVar6;
  unsigned __int64 uVar7;
  unsigned int uVar9;
  unsigned __int64 uVar8;
  unsigned int uVar11;
  int iVar12;
  unsigned int uVar13;
  int iVar14;
  unsigned __int64 uVar10;
  unsigned __int64 uVar15;
  unsigned __int64 uVar16;
  unsigned __int64 uVar17;
  __int64 lVar18;
  unsigned int uStack_500;
  int aiStack_4fc [3];
  unsigned int uStack_4f0;
  int iStack_4ec;
  int iStack_4e8;
  unsigned short uStack_4e4;
  unsigned short uStack_4e2;
  unsigned int uStack_4e0;
  int iStack_4dc;
  struct { unsigned int first; unsigned int second; } stack_pair_4c0;

  int iStack_4b8;
  unsigned short uStack_4b4;
  unsigned short uStack_4b2;
  int iStack_4b0;
  unsigned int uStack_4ac;
  unsigned int uStack_4a8;
  unsigned int uStack_4a4;
  unsigned int uStack_4a0;
  unsigned int uStack_49c;
  unsigned int uStack_498;
  unsigned int uStack_494;
  unsigned int uStack_490;
  
  if (param_1 == 0) {
    return 0xfffffffffffffffd;
  }
  iVar1 = *(int *)(param_1 + 0x2e0);
  if (*(int *)(iVar1 + 0xe8c) == 0) {
    return 5;
  }
  *(unsigned int *)(*(int *)(iVar1 + 0xea0) + 0x20) = 0;
  if (*(int *)(iVar1 + 0xf8c) != 0) {
    if (((param_2 == 0x32595559) || (param_2 == 0x59565955)) || (param_2 == 0x55595659)) {
LAB_82c4c500:
      if (param_2 == 0) goto LAB_82c4c508;
    }
    else {
      if (param_2 != 0) {
        if (param_2 != 3) {
          return 0xfffffffffffffffb;
        }
        goto LAB_82c4c500;
      }
LAB_82c4c508:
      if (param_3 == 8) {
        return 0xfffffffffffffffb;
      }
    }
    if ((param_2 == 3) && (param_3 == 4)) {
      return 0xfffffffffffffffb;
    }
  }
  if (*(int *)(iVar1 + 0x5674) == 1) {
    fn_82C47A68(iVar1);
LAB_82c4ce8c:
    fn_82C48040(param_1,aiStack_4fc,&uStack_500);
    if (((*(int *)(iVar1 + 0x3cb0) == 7) || (*(int *)(iVar1 + 0x3cb0) == 6)) &&
       (*(int *)(iVar1 + 0x18) == 0)) {
      puVar3 = *(unsigned int **)(iVar1 + 0xebc);
      iVar6 = 0x40;
      uStack_500 = 0;
      uVar16 = (unsigned __int64)puVar3[1];
      uVar15 = (unsigned __int64)puVar3[2];
      uVar17 = (unsigned __int64)*puVar3;
      if (((*(int *)(iVar1 + 0x5580) == 1) && (0 < *(int *)(iVar1 + 0x39f4))) &&
         (1 < *(__int64 *)(iVar1 + 0xe30))) {
        uVar11 = *(unsigned int *)(iVar1 + 0x5644);
        iVar12 = *(int *)(iVar1 + 0x5648);
      }
      else {
        uVar11 = *(unsigned int *)(iVar1 + 0x9c);
        iVar12 = *(int *)(iVar1 + 0xa0);
      }
      stack_pair_4c0.second = param_4;
      if (param_4 == 0) {
        stack_pair_4c0.second = uVar11;
      }
      *(unsigned int *)(iVar1 + 0x3cc8) = stack_pair_4c0.second;
      iStack_4e8 = aiStack_4fc[0];
      if (*(int *)(iVar1 + 0x3c04) == 0) {
        uVar13 = uVar11 + 0xf;
        uVar9 = iVar12 + 0xf;
        aiStack_4fc[0] =
             (((int)uVar13 >> 4) + (unsigned int)((int)uVar13 < 0 && (uVar13 & 0xf) != 0)) * 0x10;
        iStack_4e8 = (((int)uVar9 >> 4) + (unsigned int)((int)uVar9 < 0 && (uVar9 & 0xf) != 0)) * 0x10;
      }
      iVar4 = *(int *)(iVar1 + 0xf8c);
      if (iVar4 == 0) {
        lVar18 = 0;
        iVar14 = 0;
        uVar7 = 0x20;
        uVar8 = 0x20;
      }
      else {
        lVar18 = (unsigned __int64)uVar11 + 0x40;
        uVar7 = 0;
        iVar14 = ((int)uVar11 >> 2) + (unsigned int)((int)uVar11 < 0 && (uVar11 & 3) != 0) + 0x20;
        uVar8 = 0;
      }
      if ((*(int *)(iVar1 + 0x3c04) != 0) || (*(int *)(iVar1 + 0x3c48) != 0)) {
        uVar7 = 0;
        uVar8 = 0;
        iVar6 = 0;
      }
      if (param_2 == 3) {
        if (param_3 == 0x10) {
          uStack_490 = 0x1f;
          uStack_494 = 0x7e0;
          uStack_498 = 0xf800;
        }
        if (param_3 == 0xf) {
          uStack_490 = 0x1f;
          uStack_498 = 0x7c00;
          param_3 = 0x10;
          uStack_494 = 0x3e0;
        }
        if (param_3 == 0x20) {
          uStack_498 = 0xff0000;
          uStack_494 = 0xff00;
          uStack_490 = 0xff;
        }
      }
      stack_pair_4c0.first = 0x28;
      iStack_4b8 = iVar12;
      if (*(int *)(iVar1 + 0x5618) == 0) {
        iStack_4b8 = *(int *)(iVar1 + 0x5668);
      }
      uStack_4b4 = 1;
      uStack_4a8 = 0;
      uStack_4a4 = 0;
      uStack_4a0 = 0;
      uStack_49c = 0;
      uStack_4ac = param_3 * stack_pair_4c0.second * iVar12 >> 3;
      if (*(int *)(iVar1 + 0x3cd0) == 2) {
        iStack_4b8 = -iStack_4b8;
      }
      uStack_4f0 = 0x28;
      iStack_4ec = aiStack_4fc[0] + iVar6;
      iStack_4e8 = iStack_4e8 + iVar6;
      uStack_4e4 = 1;
      uStack_4e2 = 0xc;
      uStack_4b2 = param_3;
      iStack_4b0 = param_2;
      if (*(int *)(iVar1 + 0x5498) == 0) {
        if (iVar4 == 0) {
          uStack_4e0 = uRam83175d40;
        }
        else {
          uStack_4e0 = 0x31313450;
        }
        uVar11 = iStack_4e8 * iStack_4ec * 3;
        iStack_4dc = ((int)uVar11 >> 1) + (unsigned int)((int)uVar11 < 0 && (uVar11 & 1) != 0);
        uVar5 = fn_82CA2900(&uStack_500,&uStack_4f0,&stack_pair_4c0.first,uVar7,uVar8,0,0);
        uVar10 = (unsigned __int64)uStack_500;
        *(unsigned int *)(iVar1 + 0x5498) = uVar5;
      }
      else {
        if (iVar4 == 0) {
          uStack_4e0 = 0x30323449;
        }
        else {
          uStack_4e0 = 0x31313450;
        }
        uVar11 = iStack_4e8 * iStack_4ec * 3;
        iStack_4dc = ((int)uVar11 >> 1) + (unsigned int)((int)uVar11 < 0 && (uVar11 & 1) != 0);
        uVar10 = fn_82CA2488(*(int *)(iVar1 + 0x5498),&uStack_4f0,&stack_pair_4c0.first,uVar7,uVar8,0,0);
        uStack_500 = (unsigned int)uVar10;
      }
      if (uStack_500 != 0) {
        return uVar10;
      }
      iVar6 = *(int *)(iVar1 + 0x5498);
      if (iVar6 == 0) {
        return 0xfffffffffffffffb;
      }
      if (*(int *)(iVar1 + 0xf8c) != 0) {
        uVar17 = (lVar18 + 1U & 0x7ffffff) * 0x20 + uVar17;
        uVar16 = ((unsigned __int64)(iVar14 + 1) & 0xfffffff) * 0x10 + uVar16;
        uVar15 = ((unsigned __int64)(iVar14 + 1) & 0xfffffff) * 0x10 + uVar15;
      }
      *(unsigned int *)(iVar6 + 0x34) = *(unsigned int *)(iVar1 + 0x5680);
      if (*(int *)(iVar1 + 0x5680) == 1) {
        *(unsigned int *)(iVar6 + 0x28) = *(unsigned int *)(iVar1 + 0x5684);
        *(unsigned int *)(iVar6 + 0x2c) = *(unsigned int *)(iVar1 + 0x5688);
        *(unsigned int *)(iVar6 + 0x30) = *(unsigned int *)(iVar1 + 0x568c);
        *(unsigned int *)(iVar6 + 0x3920) = *(unsigned int *)(iVar1 + 0x5690);
        *(unsigned int *)(iVar6 + 0x3924) = *(unsigned int *)(iVar1 + 0x5694);
        *(unsigned int *)(iVar6 + 0x3928) = *(unsigned int *)(iVar1 + 0x5698);
      }
      uVar15 = fn_82CA2458(*(unsigned int *)(iVar1 + 0x5498),uVar17,param_6,uVar16,uVar15);
      *(unsigned int *)(iVar1 + 0x5580) = 0;
      goto LAB_82c4d2d4;
    }
    uVar15 = fn_82CA3A50(iVar1,param_6);
    if ((int)uVar15 != 0) {
      return uVar15;
    }
    *(unsigned int *)(iVar1 + 0x5580) = 0;
  }
  else {
    if (*(int *)(iVar1 + 0xd88) == 1) {
      *(unsigned int *)(iVar1 + 0xd88) = 0;
      *(unsigned short *)(iVar1 + 0xe9c) = 1;
      if (*(int *)(iVar1 + 0x564c) == 1) {
        *(unsigned int *)(iVar1 + 0x564c) = 0;
LAB_82c4ca74:
        if (*(int *)(iVar1 + 0x3a08) != 0) {
          iVar6 = *(int *)(iVar1 + 0x120);
          if ((iVar6 == 0) || (iVar6 == 4)) {
            if (*(int *)(iVar1 + 0x39f4) == 0) {
              *(unsigned int *)(iVar1 + 0x3a10) = *(unsigned int *)(iVar1 + 0x3a0c);
            }
            else if (iVar6 != 2) {
              if ((*(int *)(iVar1 + 0x3a10) == 0) && (*(int *)(iVar1 + 0x3a0c) == 1)) {
                fn_82C5E340(iVar1);
              }
              fn_82CA0B70(iVar1);
            }
          }
          if (*(int *)(iVar1 + 0x3a0c) != 0) {
            if (*(int *)(iVar1 + 0x3d0c) == 0) {
              fn_82C74C30(iVar1);
              *(unsigned int *)(iVar1 + 0x3d0c) = 1;
            }
            fn_82C8F060(iVar1);
          }
        }
        if ((*(int *)(iVar1 + 0x3cb0) == 7) &&
           ((*(int *)(iVar1 + 0x559c) != 0 || (*(int *)(iVar1 + 0x55a0) != 0)))) {
          fn_82CA1080(iVar1);
          *(unsigned int *)(iVar1 + 0x3d0c) = 1;
        }
        if (*(int *)(iVar1 + 0x3a28) != 0) {
          fn_82CA8498(iVar1,0);
          fn_82CAAA10(iVar1);
          uVar5 = *(unsigned int *)(iVar1 + 0x3a28);
          uVar2 = *(unsigned int *)(iVar1 + 0x3a2c);
          *(unsigned int *)(iVar1 + 0x3a28) = 0;
          *(unsigned int *)(iVar1 + 0x3a2c) = uVar5;
          if (*(int *)(iVar1 + 0x3d0c) == 0) {
            if ((*(int *)(iVar1 + 0x3e5c) == 0) || (*(int *)(iVar1 + 0x4fc0) != 0)) {
              iVar6 = *(int *)(iVar1 + 0x3a2c) * 0x54 + iVar1;
              uVar15 = (unsigned __int64)*(unsigned int *)(iVar6 + 0x3a78);
              fn_82CA9338(iVar1,(unsigned __int64)*(unsigned int *)(iVar6 + 0x3a74) +
                                      (unsigned __int64)*(unsigned int *)(iVar1 + 0xec0),
                                *(unsigned int *)(iVar1 + 0xec4) + uVar15,*(unsigned int *)(iVar1 + 0xec8) + uVar15,
                                (unsigned __int64)*(unsigned int *)(iVar1 + 0xef8) +
                                (unsigned __int64)*(unsigned int *)(iVar1 + 0xdc),
                                (unsigned __int64)*(unsigned int *)(iVar1 + 0xefc) +
                                (unsigned __int64)*(unsigned int *)(iVar1 + 0xe0),
                                (unsigned __int64)*(unsigned int *)(iVar1 + 0xf00) +
                                (unsigned __int64)*(unsigned int *)(iVar1 + 0xe0));
            }
            else {
              *(unsigned int *)(*(int *)(iVar1 + 0xeb0) + 0x250) = 0;
              iVar6 = *(int *)(iVar1 + 0xeb0);
              iVar12 = *(int *)(iVar6 + 0x250);
              *(int *)(iVar6 + 0x250) = iVar12 + 1;
              iVar6 = iVar12 * 0x44 + iVar6;
              *(unsigned int *)(iVar6 + 0x30) = 8;
              *(unsigned int *)(iVar6 + 0x34) = *(unsigned int *)(iVar1 + 0xea0);
              *(unsigned int *)(iVar6 + 0x48) =
                   *(unsigned int *)(*(int *)(iVar1 + 0x3a2c) * 0x54 + iVar1 + 0x3a74);
              *(unsigned int *)(iVar6 + 0x4c) =
                   *(unsigned int *)(*(int *)(iVar1 + 0x3a2c) * 0x54 + iVar1 + 0x3a78);
              *(unsigned int *)(iVar6 + 0x50) = *(unsigned int *)(iVar1 + 0xdc);
              *(unsigned int *)(iVar6 + 0x54) = *(unsigned int *)(iVar1 + 0xe0);
              *(unsigned int *)(iVar6 + 0x58) = *(unsigned int *)(iVar1 + 0x3a28);
              *(unsigned int *)(iVar6 + 0x5c) = *(unsigned int *)(iVar1 + 0x3a2c);
              *(unsigned int *)(iVar6 + 0x60) =
                   *(unsigned int *)(*(int *)(iVar1 + 0x3a2c) * 0x54 + iVar1 + 0x3a64);
              *(unsigned int *)(iVar6 + 100) =
                   *(unsigned int *)((*(int *)(iVar1 + 0x3a2c) + 0xb2) * 0x54 + iVar1);
              *(unsigned int *)(iVar6 + 0x70) =
                   *(unsigned int *)(*(int *)(iVar1 + 0x3a2c) * 0x54 + iVar1 + 0x3a58);
              *(unsigned int *)(iVar6 + 0x68) = *(unsigned int *)(iVar1 + 0xcc);
              *(unsigned int *)(iVar6 + 0x6c) = *(unsigned int *)(iVar1 + 0xd0);
              *(unsigned int *)(iVar6 + 0x3c) = *(unsigned int *)(iVar1 + 0xb4);
              *(unsigned int *)(iVar6 + 0x44) = *(unsigned int *)(iVar1 + 0xc0);
              *(unsigned int *)(iVar6 + 0x38) = *(unsigned int *)(iVar1 + 0xbc);
              *(unsigned int *)(iVar6 + 0x40) = *(unsigned int *)(iVar1 + 200);
            }
          }
          else if ((*(int *)(iVar1 + 0x3e5c) == 0) || (*(int *)(iVar1 + 0x4fc0) != 0)) {
            iVar6 = *(int *)(iVar1 + 0x3a2c) * 0x54 + iVar1;
            uVar15 = (unsigned __int64)*(unsigned int *)(iVar6 + 0x3a78);
            fn_82CA9338(iVar1,(unsigned __int64)*(unsigned int *)(iVar6 + 0x3a74) +
                                    (unsigned __int64)*(unsigned int *)(iVar1 + 0xef8),
                              *(unsigned int *)(iVar1 + 0xefc) + uVar15,*(unsigned int *)(iVar1 + 0xf00) + uVar15,
                              (unsigned __int64)*(unsigned int *)(iVar1 + 0xed8) +
                              (unsigned __int64)*(unsigned int *)(iVar1 + 0xdc),
                              (unsigned __int64)*(unsigned int *)(iVar1 + 0xedc) +
                              (unsigned __int64)*(unsigned int *)(iVar1 + 0xe0),
                              (unsigned __int64)*(unsigned int *)(iVar1 + 0xee0) +
                              (unsigned __int64)*(unsigned int *)(iVar1 + 0xe0));
            fn_82C5E168(iVar1);
          }
          else {
            iVar6 = *(int *)(iVar1 + 0xeb0);
            iVar12 = *(int *)(iVar6 + 0x250) * 0x44 + iVar6;
            *(int *)(iVar6 + 0x250) = *(int *)(iVar6 + 0x250) + 1;
            *(unsigned int *)(iVar12 + 0x30) = 8;
            *(unsigned int *)(iVar12 + 0x34) = *(unsigned int *)(iVar1 + 0xeb0);
            *(unsigned int *)(iVar12 + 0x48) =
                 *(unsigned int *)(*(int *)(iVar1 + 0x3a2c) * 0x54 + iVar1 + 0x3a74);
            *(unsigned int *)(iVar12 + 0x4c) =
                 *(unsigned int *)(*(int *)(iVar1 + 0x3a2c) * 0x54 + iVar1 + 0x3a78);
            *(unsigned int *)(iVar12 + 0x50) = *(unsigned int *)(iVar1 + 0xdc);
            *(unsigned int *)(iVar12 + 0x54) = *(unsigned int *)(iVar1 + 0xe0);
            *(unsigned int *)(iVar12 + 0x58) = *(unsigned int *)(iVar1 + 0x3a28);
            *(unsigned int *)(iVar12 + 0x5c) = *(unsigned int *)(iVar1 + 0x3a2c);
            *(unsigned int *)(iVar12 + 0x60) =
                 *(unsigned int *)(*(int *)(iVar1 + 0x3a2c) * 0x54 + iVar1 + 0x3a64);
            *(unsigned int *)(iVar12 + 100) =
                 *(unsigned int *)((*(int *)(iVar1 + 0x3a2c) + 0xb2) * 0x54 + iVar1);
            *(unsigned int *)(iVar12 + 0x70) =
                 *(unsigned int *)(*(int *)(iVar1 + 0x3a2c) * 0x54 + iVar1 + 0x3a58);
            *(unsigned int *)(iVar12 + 0x68) = *(unsigned int *)(iVar1 + 0xcc);
            *(unsigned int *)(iVar12 + 0x6c) = *(unsigned int *)(iVar1 + 0xd0);
            *(unsigned int *)(iVar12 + 0x3c) = *(unsigned int *)(iVar1 + 0xb4);
            *(unsigned int *)(iVar12 + 0x44) = *(unsigned int *)(iVar1 + 0xc0);
            *(unsigned int *)(iVar12 + 0x38) = *(unsigned int *)(iVar1 + 0xbc);
            *(unsigned int *)(iVar12 + 0x40) = *(unsigned int *)(iVar1 + 200);
          }
          *(unsigned int *)(iVar1 + 0x3a2c) = uVar2;
          *(unsigned int *)(iVar1 + 0x3a28) = uVar5;
          *(unsigned int *)(iVar1 + 0x3d0c) = 1;
        }
        *(unsigned int *)(iVar1 + 0x5678) = 0;
        if (0 < *(int *)(iVar1 + 0x39f4)) {
          if (((*(int *)(iVar1 + 0x120) == 2) || (*(int *)(iVar1 + 0x120) == 4)) &&
             ((*(int *)(iVar1 + 0xda4) == 0 ||
              ((*(int *)(iVar1 + 0x128) == 2 || (*(int *)(iVar1 + 0x128) == 4)))))) {
            uVar5 = 0;
          }
          else {
            uVar5 = 1;
          }
          *(unsigned int *)(iVar1 + 0xd68) = uVar5;
        }
        fn_82C47AC8(iVar1);
      }
      goto LAB_82c4ce8c;
    }
    if (*(short *)(iVar1 + 0xe9c) == 0) {
      return 2;
    }
    if ((param_6 & 0xffffffff) == 0) {
      if ((*(int *)(iVar1 + 0x3c04) == 0) && (*(int *)(iVar1 + 0x3c48) == 0)) {
        *(unsigned int *)(iVar1 + 0x3d0c) = 0;
      }
      else {
        *(unsigned int *)(iVar1 + 0x3d0c) = 1;
      }
      if (*(int *)(iVar1 + 0x3a08) != 0) {
        iVar6 = *(int *)(iVar1 + 0x120);
        if ((iVar6 == 0) || (iVar6 == 4)) {
          if (*(int *)(iVar1 + 0x39f4) == 0) {
            *(unsigned int *)(iVar1 + 0x3a10) = *(unsigned int *)(iVar1 + 0x3a0c);
          }
          else if (iVar6 != 2) {
            if ((*(int *)(iVar1 + 0x3a10) == 0) && (*(int *)(iVar1 + 0x3a0c) == 1)) {
              fn_82C5E340(iVar1);
            }
            fn_82CA0B70(iVar1);
          }
        }
        if (*(int *)(iVar1 + 0x3a0c) != 0) {
          if (*(int *)(iVar1 + 0x3d0c) == 0) {
            fn_82C74C30(iVar1);
            *(unsigned int *)(iVar1 + 0x3d0c) = 1;
          }
          fn_82CA0C90(iVar1);
        }
      }
      if ((*(int *)(iVar1 + 0x3cb0) == 7) &&
         ((*(int *)(iVar1 + 0x559c) != 0 || (*(int *)(iVar1 + 0x55a0) != 0)))) {
        fn_82CA1080(iVar1);
        *(unsigned int *)(iVar1 + 0x3d0c) = 1;
      }
      if ((*(int *)(iVar1 + 0x3a24) != 0) && (*(int *)(iVar1 + 0x3a28) != 0)) {
        fn_82CA8498(iVar1,0);
        fn_82CAAA10(iVar1);
        uVar15 = (unsigned __int64)*(unsigned int *)(iVar1 + 0xe0);
        iVar6 = *(int *)(iVar1 + 0x3a28);
        uVar5 = *(unsigned int *)(iVar1 + 0x3a2c);
        *(unsigned int *)(iVar1 + 0x3a28) = 0;
        *(int *)(iVar1 + 0x3a2c) = iVar6;
        iVar12 = iVar6 * 0x54 + iVar1;
        if (*(int *)(iVar1 + 0x3d0c) == 0) {
          fn_82CA9338(iVar1,(unsigned __int64)*(unsigned int *)(iVar12 + 0x3a74) +
                                  (unsigned __int64)*(unsigned int *)(iVar1 + 0xec0),
                            (unsigned __int64)*(unsigned int *)(iVar1 + 0xec4) +
                            (unsigned __int64)*(unsigned int *)(iVar12 + 0x3a78),
                            (unsigned __int64)*(unsigned int *)(iVar1 + 0xec8) +
                            (unsigned __int64)*(unsigned int *)(iVar12 + 0x3a78),
                            (unsigned __int64)*(unsigned int *)(iVar1 + 0xef8) + (unsigned __int64)*(unsigned int *)(iVar1 + 0xdc)
                            ,*(unsigned int *)(iVar1 + 0xefc) + uVar15,*(unsigned int *)(iVar1 + 0xf00) + uVar15);
        }
        else {
          fn_82CA9338(iVar1,(unsigned __int64)*(unsigned int *)(iVar12 + 0x3a74) +
                                  (unsigned __int64)*(unsigned int *)(iVar1 + 0xef8),
                            (unsigned __int64)*(unsigned int *)(iVar1 + 0xefc) +
                            (unsigned __int64)*(unsigned int *)(iVar12 + 0x3a78),
                            (unsigned __int64)*(unsigned int *)(iVar1 + 0xf00) +
                            (unsigned __int64)*(unsigned int *)(iVar12 + 0x3a78),
                            (unsigned __int64)*(unsigned int *)(iVar1 + 0xed8) + (unsigned __int64)*(unsigned int *)(iVar1 + 0xdc)
                            ,*(unsigned int *)(iVar1 + 0xedc) + uVar15,*(unsigned int *)(iVar1 + 0xee0) + uVar15);
          fn_82C5E168(iVar1);
        }
        *(unsigned int *)(iVar1 + 0x3a2c) = uVar5;
        *(int *)(iVar1 + 0x3a28) = iVar6;
        *(unsigned int *)(iVar1 + 0x3d0c) = 1;
      }
      if (0 < *(int *)(iVar1 + 0x39f4)) {
        if (((*(int *)(iVar1 + 0x120) != 2) && (*(int *)(iVar1 + 0x120) != 4)) ||
           ((*(int *)(iVar1 + 0xda4) != 0 &&
            ((*(int *)(iVar1 + 0x128) != 2 && (*(int *)(iVar1 + 0x128) != 4)))))) {
          *(unsigned int *)(iVar1 + 0xd68) = 1;
          *(unsigned int *)(iVar1 + 0x3ccc) = 1;
          fn_82C47AC8(iVar1);
          goto LAB_82c4d2d0;
        }
        *(unsigned int *)(iVar1 + 0xd68) = 0;
      }
      *(unsigned int *)(iVar1 + 0x3ccc) = 1;
      fn_82C47AC8(iVar1);
    }
    else {
      *(unsigned int *)(iVar1 + 0x3d00) = 2;
      if ((*(int *)(iVar1 + 0x3c04) == 0) && (*(int *)(iVar1 + 0x3c48) == 0)) {
        *(int *)(iVar1 + 0x3cc0) = param_2;
        *(unsigned short *)(iVar1 + 0x3cc4) = param_3;
        *(int *)(iVar1 + 0x3cd0) = param_5;
        uVar11 = param_4;
        if (param_4 == 0) {
          uVar11 = *(unsigned int *)(iVar1 + 0x58);
        }
        *(unsigned int *)(iVar1 + 0x3cc8) = uVar11;
        if ((param_5 != 0) && (param_5 != 2)) {
          *(unsigned int *)(iVar1 + 0x3cd0) = 0;
        }
        uVar15 = fn_82CA4C20(iVar1);
        if ((int)uVar15 != 0) {
          return uVar15;
        }
        *(unsigned int *)(iVar1 + 0x3cbc) = 1;
        fn_82C487A0(iVar1);
        iVar6 = *(int *)(iVar1 + 0xe74);
        if (iVar6 == -1) {
          if (*(int *)(iVar1 + 0x120) == 0) {
            fn_82C751C0(iVar1);
            *(unsigned int *)(iVar1 + 0xe74) = *(unsigned int *)(iVar1 + 0x3cfc);
          }
        }
        else {
          if ((-1 < iVar6) && (iVar6 < 5)) {
            *(int *)(iVar1 + 0x3cfc) = iVar6;
          }
          fn_82C751C0(iVar1);
        }
        if (*(int *)(iVar1 + 0x3cd4) != 0) {
          fn_82C44B80(iVar1);
          if (*(int *)(iVar1 + 0xf8c) == 0) {
            fn_82C74D98(iVar1,0,*(unsigned int *)(iVar1 + 0x8c),0);
          }
          else {
            (**(int (***)())(iVar1 + 0x3e34))();
          }
          *(unsigned int *)(iVar1 + 0x3d0c) = 1;
          fn_82C44BE0(iVar1);
        }
        goto LAB_82c4ca74;
      }
      iVar6 = *(int *)(iVar1 + 0x3c0c);
      *(unsigned int *)(iVar1 + 0xdc) = 0;
      *(unsigned int *)(iVar1 + 0xe0) = 0;
      iVar12 = *(int *)(iVar1 + 0x3c10) >> 4;
      *(int *)(iVar1 + 0xd0) = iVar6 >> 1;
      *(int *)(iVar1 + 0x58) = iVar6;
      *(int *)(iVar1 + 0x8c) = iVar12;
      *(int *)(iVar1 + 0x5c) = *(int *)(iVar1 + 0x3c10);
      *(int *)(iVar1 + 0xcc) = iVar6;
      *(int *)(iVar1 + 0xe4) = iVar6 << 4;
      *(int *)(iVar1 + 0xe8) = iVar6 << 2;
      *(int *)(iVar1 + 0x88) = iVar6 >> 4;
      uVar5 = fn_82CA6768(iVar12,*(unsigned int *)(iVar1 + 0xd40));
      iVar6 = *(int *)(iVar1 + 0xcc);
      trapWord(6,(unsigned __int64)*(unsigned int *)(iVar1 + 0xd40),0);
      *(unsigned int *)(iVar1 + 0xf1c) = uVar5;
      *(unsigned int *)(iVar1 + 0xf40) = uVar5;
      *(unsigned int *)(iVar1 + 0xf20) = *(unsigned int *)(iVar1 + 0x88) / *(unsigned int *)(iVar1 + 0xd40);
      *(int *)(iVar1 + 0x60) = iVar6;
      *(int *)(iVar1 + 0x6c) = *(int *)(iVar1 + 0xd0);
      *(int *)(iVar1 + 0x68) = *(int *)(iVar1 + 0xd4);
      *(unsigned int *)(iVar1 + 0x74) = *(unsigned int *)(iVar1 + 0xd8);
      *(int *)(iVar1 + 100) = iVar6 << 4;
      *(int *)(iVar1 + 0x70) = *(int *)(iVar1 + 0xd0) << 3;
      if ((*(int *)(iVar1 + 0x58) != iVar6) ||
         (uVar5 = 1, *(int *)(iVar1 + 0x5c) != *(int *)(iVar1 + 0xd4))) {
        uVar5 = 0;
      }
      uVar11 = *(unsigned int *)(iVar1 + 0x3c0c);
      uVar9 = *(unsigned int *)(iVar1 + 0x3c10);
      *(unsigned int *)(iVar1 + 0x78) = uVar5;
      iVar6 = (int)(uVar11 + 0xf) >> 4;
      iVar12 = (int)(uVar9 + 0xf) >> 4;
      *(int *)(iVar1 + 0x80) = iVar6;
      *(int *)(iVar1 + 0x84) = iVar12;
      *(int *)(iVar1 + 0x7c) = iVar12 * iVar6;
      if ((uVar11 != *(unsigned int *)(iVar1 + 0x88) << 4) ||
         (uVar5 = 1, uVar9 != *(int *)(iVar1 + 0x8c) << 4)) {
        uVar5 = 0;
      }
      *(unsigned int *)(iVar1 + 0x98) = uVar5;
      *(int *)(iVar1 + 0x3cc0) = param_2;
      *(unsigned short *)(iVar1 + 0x3cc4) = param_3;
      *(int *)(iVar1 + 0x3cd0) = param_5;
      if ((param_5 != 0) && (param_5 != 2)) {
        *(unsigned int *)(iVar1 + 0x3cd0) = 0;
      }
      if ((*(int *)(iVar1 + 0x3cd0) == 1) || (*(int *)(iVar1 + 0x3cd0) == 3)) {
        if (param_4 == 0) {
          param_4 = uVar9;
        }
      }
      else if (param_4 == 0) {
        param_4 = uVar11;
      }
      *(unsigned int *)(iVar1 + 0x3cc8) = param_4;
      uVar15 = fn_82CA4C20(iVar1);
      if ((int)uVar15 != 0) {
        return uVar15;
      }
      *(unsigned int *)(iVar1 + 0x3cbc) = 1;
      uVar15 = fn_82CA3A50(iVar1,param_6);
      if ((int)uVar15 != 0) {
        return uVar15;
      }
    }
  }
LAB_82c4d2d0:
  uVar15 = 0;
LAB_82c4d2d4:
  *(short *)(iVar1 + 0xe9c) = *(short *)(iVar1 + 0xe9c) + -1;
  return uVar15;
}

