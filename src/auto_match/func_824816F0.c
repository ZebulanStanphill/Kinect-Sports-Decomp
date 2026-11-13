extern unsigned int *auStack_870;
extern unsigned int *auStack_890;
extern unsigned int *auStack_8b0;
extern unsigned int *auStack_8d0;
extern unsigned int *auStack_8f0;
extern unsigned int *auStack_910;
extern int fn_82230110();
extern int fn_82230300();
extern int fn_822315A0();
extern int fn_82250A18();
extern int fn_8225C590();
extern int fn_8225DB68();
extern int fn_8225F160();
extern int fn_82281868();
extern int fn_822819E0();
extern int fn_822848B8();
extern int fn_82297428();
extern int fn_823AB478();
extern int fn_8247DD58();
extern int fn_82480A60();
extern int fn_82480B48();
extern int fn_82480BF8();
extern int fn_82480D10();
extern int fn_82480E80();
extern int fn_82481248();
extern int fn_82481368();
extern int fn_82484618();
extern int fn_82484E08();
extern int fn_82484EE0();
extern int fn_824858E0();
extern int fn_824866D8();
extern int fn_824C04E0();
extern int fn_824C1C58();
extern int fn_824C21B8();
extern int fn_82528BF8();
extern int fn_8265C9E0();
extern int fn_8265CA20();
extern int fn_8288B760();
extern int fn_828AAF70();
extern int fn_82F68CC0();
extern unsigned int lbl_821985F4;
extern unsigned int lbl_821BD7A8;
extern unsigned int lbl_83265988;
extern unsigned int lbl_83276730;
extern unsigned int lbl_832975B0;


void fn_824816F0(int param_1,unsigned __int64 param_2,int *param_3)

{
  unsigned int uVar1;
  unsigned int uVar2;
  unsigned int *puVar4;
  unsigned int *puVar5;
  unsigned __int64 uVar3;
  int iVar6;
  unsigned int uVar7;
  char cVar9;
  int iVar8;
  unsigned __int64 uVar10;
  unsigned __int64 uVar11;
  char *pcVar12;
  char cVar14;
  unsigned __int64 uVar13;
  char *pcVar15;
  unsigned char *pbVar16;
  __int64 lVar17;
  unsigned __int64 uVar18;
  int aiStack_940 [4];
  unsigned char **ppuStack_930;
  int *piStack_92c;
  unsigned char ***pppuStack_920;
  unsigned char auStack_910 [32];
  unsigned char auStack_8f0 [32];
  unsigned char auStack_8d0 [32];
  unsigned char auStack_8b0 [32];
  unsigned char auStack_890 [32];
  unsigned char auStack_870 [2160];
  
  aiStack_940[0] = 0;
  *(unsigned int *)(param_1 + 0x54) = 1;
  if ((3 < (param_2 & 0xffffffff)) && ((param_2 & 0xffffffff) < 10)) {
    if (param_3 != (int *)0x0) {
      *(int *)(param_1 + 0xb0) = *param_3;
      *param_3 = *(int *)(*(int *)(param_1 + 0x48) + 4);
    }
    *(unsigned int *)(param_1 + 0x100) = 1;
  }
  fn_82484EE0((double)*(float *)(param_1 + 0x104),*(unsigned int *)(param_1 + 0x48),param_2,
                  param_3);
  if (0x18 < (param_2 & 0xffffffff)) {
    if ((param_2 & 0xffffffff) < 0x1a) {
      return;
    }
    if ((param_2 & 0xffffffff) < 0x1f) goto LAB_82482014;
    if ((param_2 & 0xffffffff) != 0x2f) {
      if ((param_2 & 0xffffffff) == 0x30) {
        iVar8 = lbl_832975B0;
        if (lbl_832975B0 == 0) {
          iVar8 = fn_82250A18();
        }
        if (*(char *)(iVar8 + 4) != '\0') {
          fn_82480E80(param_1);
          return;
        }
        *(unsigned int *)(*(int *)(param_1 + 0x48) + 0x30) = 2;
        *(unsigned int *)(param_1 + 0x74) = 1;
        *(unsigned int *)(param_1 + 0x4c) = 1;
        return;
      }
      if ((param_2 & 0xffffffff) != 0x31) {
        return;
      }
      puVar4 = (unsigned int *)fn_82484618(*(unsigned int *)(param_1 + 0x48));
      uVar7 = lbl_83265988;
      iVar8 = *(int *)(param_1 + 0xa4);
      if (iVar8 == 0) {
        if (puVar4 == (unsigned int *)0x0) {
          return;
        }
        uVar10 = (unsigned __int64)*puVar4;
        if (uVar10 == (uVar10 - 1) + (unsigned __int64)(uVar10 == 0)) {
          return;
        }
        *(unsigned int *)(param_1 + 0x4c) = 1;
        *(unsigned int *)(param_1 + 0x50) = 1;
        if (*(int *)(param_1 + 0x78) == 0) {
          return;
        }
        fn_822848B8();
        *(unsigned int *)(param_1 + 0x78) = 0;
        return;
      }
      if (puVar4 == (unsigned int *)0x0) {
        return;
      }
      uVar10 = (unsigned __int64)*puVar4;
      if (uVar10 == (uVar10 - 1) + (unsigned __int64)(uVar10 == 0)) {
        return;
      }
      if (*(int *)(iVar8 + 0x14) != 1) {
        if (*(int *)(iVar8 + 0x14) != 6) {
          return;
        }
        fn_824C04E0(iVar8,7);
        iVar8 = *(int *)(iVar8 + 0x48);
        if (*(int *)(iVar8 + 0x38) == 0) {
          return;
        }
        cVar9 = fn_8288B760();
        if (cVar9 == '\0') {
          return;
        }
        lVar17 = (**(int (***)())(**(int **)(iVar8 + 0x38) + 8))();
        fn_828AAF70(lVar17 + 0x198,1);
        return;
      }
      iVar8 = param_1 + 0x53c;
      if (iVar8 != 0) {
        fn_82230110(auStack_8f0,(unsigned __int64)*(unsigned int *)(param_1 + 0x48) + 0x334);
        fn_82230110(auStack_8b0,(unsigned __int64)*(unsigned int *)(param_1 + 0x48) + 0x134);
        fn_82230110(auStack_910,(unsigned __int64)*(unsigned int *)(param_1 + 0x48) + 0x34);
        fn_82230110(auStack_8d0,(unsigned __int64)*(unsigned int *)(param_1 + 0x48) + 0x234);
        uVar1 = *(unsigned int *)(*(int *)(param_1 + 0x48) + 0x18c0);
        uVar2 = *(unsigned int *)(*(int *)(param_1 + 0x48) + 0x18b8);
        uVar11 = fn_82484618();
        fn_824C1C58(iVar8,auStack_8d0,auStack_910,auStack_8b0,auStack_8f0,uVar11,uVar2,uVar1);
        fn_82230300(auStack_8d0,1,0);
        fn_82230300(auStack_910,1,0);
        fn_82230300(auStack_8b0,1,0);
        fn_82230300(auStack_8f0,1,0);
      }
      puVar5 = (unsigned int *)fn_82484618(*(unsigned int *)(param_1 + 0x48));
      *(unsigned int *)(param_1 + 0x948) = *puVar5;
      if (*(__int64 *)(*(int *)(param_1 + 0x48) + 0x18d0) == 0) {
        iVar6 = fn_8225F160();
        aiStack_940[0] = *(int *)(iVar6 + 0x38);
        piStack_92c = aiStack_940;
        pppuStack_920 = &ppuStack_930;
        ppuStack_930 = &lbl_821985F4;
        uVar11 = fn_8225C590();
        fn_8225DB68(uVar11,&ppuStack_930);
        if (aiStack_940[0] == 2) {
          fn_82481368(param_1);
          return;
        }
        iVar6 = *(int *)(param_1 + 0xa4);
        uVar7 = fn_823AB478(uVar7);
        *(unsigned int *)(iVar6 + 0x54) = uVar7;
        uVar10 = fn_8265C9E0(0x428);
        if (uVar10 == 0) {
          uVar10 = 0;
        }
        else {
          fn_82F68CC0(uVar10,iVar8,0x428);
        }
        if ((uVar10 & 0xffffffff) != (unsigned __int64)*(unsigned int *)(iVar6 + 0x5c)) {
          if ((unsigned __int64)*(unsigned int *)(iVar6 + 0x5c) != 0) {
            fn_8265CA20();
          }
          *(int *)(iVar6 + 0x5c) = (int)uVar10;
        }
        *(unsigned __int64 *)(iVar6 + 0x60) = 0;
        iVar8 = *(int *)(iVar6 + 0x6c);
        *(unsigned int *)(iVar6 + 0x6c) = 0;
        *(unsigned int *)(iVar6 + 0x68) = 0;
        if (iVar8 != 0) {
          fn_822315A0();
        }
        fn_824C04E0(iVar6,1);
        return;
      }
      pbVar16 = (unsigned char *)(*(int *)(param_1 + 0x48) + 0x334);
      uVar13 = 0x6c;
      uVar10 = (unsigned __int64)*pbVar16;
      if (uVar10 == 0x6c) {
        iVar6 = (int)&lbl_821BD7A8 - (int)pbVar16;
        uVar10 = 0x6c;
        do {
          pbVar16 = pbVar16 + 1;
          if (uVar10 == 0) {
            lVar17 = 0;
            goto LAB_82481d00;
          }
          uVar13 = (unsigned __int64)pbVar16[iVar6];
          uVar10 = (unsigned __int64)*pbVar16;
        } while (uVar10 == uVar13);
      }
      lVar17 = uVar10 - uVar13;
LAB_82481d00:
      if (lVar17 != 0) {
        uVar11 = 0xffffffff821bd858;
      }
      else {
        uVar11 = 0xffffffff821bd868;
      }
      fn_82528BF8(lbl_83276730,uVar11,auStack_870,0x400,0,1);
      uVar1 = *(unsigned int *)(param_1 + 0xa4);
      uVar18 = *(unsigned __int64 *)(*(int *)(param_1 + 0x48) + 0x18d0);
      uVar11 = fn_82297428(auStack_890,auStack_870);
      uVar3 = fn_823AB478(uVar7);
      fn_824C21B8(uVar1,uVar3,(lVar17 != 0) + '\x01',iVar8,uVar18,uVar11);
      return;
    }
    iVar8 = lbl_832975B0;
    if (lbl_832975B0 == 0) {
      iVar8 = fn_82250A18();
    }
    iVar6 = *(int *)(param_1 + 0x48);
    if (*(char *)(iVar8 + 4) == '\0') {
      *(unsigned int *)(iVar6 + 0x30) = 1;
      *(unsigned int *)(param_1 + 0x74) = 1;
      *(unsigned int *)(param_1 + 0x4c) = 1;
      goto LAB_8248200c;
    }
    pcVar15 = (char *)(iVar6 + 0x34);
    cVar9 = *(char *)(iVar6 + 0x34);
    cVar14 = 'm';
    if (cVar9 == 'm') {
      cVar9 = 'm';
      pcVar12 = pcVar15;
      do {
        pcVar12 = pcVar12 + 1;
        if (cVar9 == '\0') goto LAB_82481f78;
        cVar14 = pcVar12[(int)"minimode" - (int)pcVar15];
        cVar9 = *pcVar12;
      } while (cVar9 == cVar14);
    }
    if (cVar9 == cVar14) {
LAB_82481f78:
      iVar8 = param_1 + 0x2c;
LAB_82481fcc:
      iVar6 = *(int *)(param_1 + 0x14);
      if (*(int *)(iVar6 + 0x10) == 0) {
        if (*(int *)(iVar6 + 8) != 0) {
          fn_822819E0(iVar6,iVar8);
        }
      }
      else {
        fn_82281868(iVar6,iVar8,0);
      }
    }
    else {
      cVar9 = *pcVar15;
      cVar14 = 'e';
      if (cVar9 == 'e') {
        iVar8 = (int)"eventmode" - (int)pcVar15;
        cVar9 = 'e';
        do {
          pcVar15 = pcVar15 + 1;
          if (cVar9 == '\0') goto LAB_82481fc8;
          cVar14 = pcVar15[iVar8];
          cVar9 = *pcVar15;
        } while (cVar9 == cVar14);
      }
      if (cVar9 == cVar14) {
LAB_82481fc8:
        iVar8 = param_1 + 0x28;
        goto LAB_82481fcc;
      }
    }
    *(unsigned int *)(param_1 + 0x100) = 1;
LAB_8248200c:
    *(unsigned int *)(param_1 + 0xf4) = 0;
    return;
  }
  if (9 < (param_2 & 0xffffffff)) {
LAB_82482014:
    fn_82480D10(param_1);
    goto LAB_8248201c;
  }
  if ((param_2 & 0xffffffff) == 1) {
    cVar14 = 'p';
    pcVar15 = (char *)(*(int *)(param_1 + 0x48) + 0x434);
    cVar9 = *pcVar15;
    if (cVar9 == 'p') {
      iVar8 = (int)"partymode" - (int)pcVar15;
      cVar9 = 'p';
      do {
        pcVar15 = pcVar15 + 1;
        if (cVar9 == '\0') goto LAB_824819f4;
        cVar14 = pcVar15[iVar8];
        cVar9 = *pcVar15;
      } while (cVar9 == cVar14);
    }
    if (cVar9 == cVar14) {
LAB_824819f4:
      uVar10 = 1;
    }
    else {
      uVar10 = fn_824858E0(*(int *)(param_1 + 0x48) + 0x634);
    }
    if ((uVar10 & 0xffffffff) == 0) {
LAB_82481a44:
      uVar11 = 2;
    }
    else if (((uVar10 & 0xffffffff) == 1) || ((uVar10 & 0xffffffff) < 3)) {
LAB_82481a3c:
      uVar11 = 0;
    }
    else if ((uVar10 & 0xffffffff) < 6) {
      uVar11 = 1;
    }
    else {
      if ((uVar10 & 0xffffffff) == 6) goto LAB_82481a44;
      if ((uVar10 & 0xffffffff) < 8) goto LAB_82481a3c;
      uVar11 = 3;
    }
    iVar8 = *(int *)(param_1 + 0x48);
    if ((uVar10 & 0xffffffff) == 0) {
      if (((*(int *)(iVar8 + 0xc58) == 3) || (*(int *)(iVar8 + 0x1078) == 3)) ||
         (*(int *)(iVar8 + 0x1498) == 3)) {
        uVar10 = 0xffffffff821be630;
        goto LAB_82481a9c;
      }
    }
    else if ((uVar10 & 0xffffffff) != 1) {
      uVar10 = fn_824866D8(iVar8,uVar10,uVar11);
      goto LAB_82481a9c;
    }
    uVar10 = 0;
LAB_82481a9c:
    if ((param_3 == (int *)0x0) || (*param_3 == 0)) {
      *(unsigned int *)(param_1 + 0xac) = 0;
    }
    else {
      *(int *)(param_1 + 0xac) = *param_3;
    }
    if ((uVar10 & 0xffffffff) != 0) {
      *param_3 = 0;
      fn_82481248(param_1,uVar10,0xffffffff82481540);
      return;
    }
    fn_82480A60(param_1);
    return;
  }
  if ((param_2 & 0xffffffff) == 2) {
    cVar14 = 'p';
    pcVar15 = (char *)(*(int *)(param_1 + 0x48) + 0x434);
    cVar9 = *pcVar15;
    if (cVar9 == 'p') {
      iVar8 = (int)"partymode" - (int)pcVar15;
      cVar9 = 'p';
      do {
        pcVar15 = pcVar15 + 1;
        if (cVar9 == '\0') goto LAB_82481974;
        cVar14 = pcVar15[iVar8];
        cVar9 = *pcVar15;
      } while (cVar9 == cVar14);
    }
    if (cVar9 != cVar14) {
      fn_824858E0(*(int *)(param_1 + 0x48) + 0x634);
    }
LAB_82481974:
    if ((param_3 == (int *)0x0) || (*param_3 == 0)) {
      *(unsigned int *)(param_1 + 0xac) = 0;
    }
    else {
      *(int *)(param_1 + 0xac) = *param_3;
    }
    fn_82480B48(param_1);
    return;
  }
  if ((param_2 & 0xffffffff) == 3) {
    if ((param_3 == (int *)0x0) || (*param_3 == 0)) {
      *(unsigned int *)(param_1 + 0xac) = 0;
    }
    else {
      *(int *)(param_1 + 0xac) = *param_3;
    }
    if (*(int *)(param_1 + 0xac) != 0) {
      *(int *)(*(int *)(param_1 + 0x48) + 4) = *(int *)(param_1 + 0xac);
    }
    iVar8 = *(int *)(param_1 + 0xa4);
    if (iVar8 != 0) {
      fn_8247DD58(iVar8);
      fn_8265CA20(iVar8);
      *(unsigned int *)(param_1 + 0xa4) = 0;
    }
    fn_82484E08(*(unsigned int *)(param_1 + 0x48));
    return;
  }
  if ((param_2 & 0xffffffff) < 4) {
    return;
  }
  if (9 < (param_2 & 0xffffffff)) {
    return;
  }
  cVar14 = 'p';
  pcVar15 = (char *)(*(int *)(param_1 + 0x48) + 0x434);
  cVar9 = *pcVar15;
  if (cVar9 == 'p') {
    iVar8 = (int)"partymode" - (int)pcVar15;
    cVar9 = 'p';
    do {
      pcVar15 = pcVar15 + 1;
      if (cVar9 == '\0') goto LAB_824817e8;
      cVar14 = pcVar15[iVar8];
      cVar9 = *pcVar15;
    } while (cVar9 == cVar14);
  }
  if (cVar9 == cVar14) {
LAB_824817e8:
    uVar10 = 1;
  }
  else {
    uVar10 = fn_824858E0(*(int *)(param_1 + 0x48) + 0x634);
  }
  if ((uVar10 & 0xffffffff) == 0) {
LAB_82481838:
    uVar11 = 2;
  }
  else if (((uVar10 & 0xffffffff) == 1) || ((uVar10 & 0xffffffff) < 3)) {
LAB_82481830:
    uVar11 = 0;
  }
  else if ((uVar10 & 0xffffffff) < 6) {
    uVar11 = 1;
  }
  else {
    if ((uVar10 & 0xffffffff) == 6) goto LAB_82481838;
    if ((uVar10 & 0xffffffff) < 8) goto LAB_82481830;
    uVar11 = 3;
  }
  iVar8 = *(int *)(param_1 + 0x48);
  if ((uVar10 & 0xffffffff) == 0) {
    if (((*(int *)(iVar8 + 0xc58) == 3) || (*(int *)(iVar8 + 0x1078) == 3)) ||
       (*(int *)(iVar8 + 0x1498) == 3)) {
      uVar10 = 0xffffffff821be630;
    }
    else {
      uVar10 = 0;
    }
LAB_82481890:
    if ((uVar10 & 0xffffffff) != 0) {
      *param_3 = 0;
      fn_82481248(param_1,uVar10,0xffffffff82481488);
      goto LAB_8248201c;
    }
  }
  else if ((uVar10 & 0xffffffff) != 1) {
    uVar10 = fn_824866D8(iVar8,uVar10,uVar11);
    goto LAB_82481890;
  }
  fn_82480BF8(param_1);
LAB_8248201c:
  *(unsigned int *)(param_1 + 0xf4) = 1;
  return;
}

