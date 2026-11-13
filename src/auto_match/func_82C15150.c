extern int fn_82C038C8();
extern int fn_82C130C0();
extern int fn_82C13690();
extern unsigned int iStack_a0;
extern unsigned int lbl_820ED098;
extern unsigned int lbl_820ED0A8;
extern unsigned int lbl_820ED0C8;
extern unsigned int lbl_820ED0D8;
extern unsigned int lbl_82154B18;
extern unsigned int lbl_82154B28;


unsigned __int64 fn_82C15150(__int64 *param_1,__int64 param_2,unsigned __int64 param_3,__int64 param_4)

{
  unsigned char bVar1;
  unsigned char bVar2;
  unsigned __int64 uVar3;
  int iVar5;
  unsigned int uVar6;
  int iVar7;
  unsigned __int64 uVar4;
  unsigned char *pbVar8;
  __int64 lVar9;
  unsigned char *pbVar11;
  __int64 lVar10;
  unsigned __int64 uVar12;
  unsigned __int64 uVar13;
  unsigned __int64 uVar14;
  int iVar15;
  unsigned char * apbStack_b0;
  int iStack_a0;
  short sStack_9c;
  short sStack_9a;
  unsigned char bStack_98;
  unsigned char bStack_97;
  unsigned char bStack_96;
  unsigned char bStack_95;
  unsigned char bStack_94;
  unsigned char bStack_93;
  unsigned char bStack_92;
  unsigned char bStack_91;
  unsigned char abStack_90 [64];
  
  apbStack_b0 = (unsigned char *)0x0;
  if (param_1 == (__int64 *)0x0) {
    return 2;
  }
  uVar13 = param_2 - 0x18;
  uVar12 = param_4 + 0x18;
  if ((uVar13 & 0xffffffff) < 0x32) {
    return 3;
  }
  uVar3 = uVar12 & 0xffffffff;
  iVar5 = fn_82C038C8(param_1,uVar3 + *param_1 + 0x30,2,&apbStack_b0);
  if (iVar5 != 2) {
    return 3;
  }
  if (apbStack_b0 == (unsigned char *)0x0) {
    return 3;
  }
  bVar1 = apbStack_b0[1];
  bVar2 = *apbStack_b0;
  if ((uVar13 & 0xffffffff) < 0x40) {
    return 3;
  }
  apbStack_b0 = apbStack_b0 + 2;
  iVar5 = fn_82C038C8(param_1,uVar3 + *param_1 + 0x3c,4,&apbStack_b0);
  if (iVar5 != 4) {
    return 3;
  }
  if (apbStack_b0 == (unsigned char *)0x0) {
    return 3;
  }
  uVar14 = 0x40;
  pbVar8 = apbStack_b0 + 4;
  iVar5 = (unsigned int)apbStack_b0[1] * 0x100 + (unsigned int)*apbStack_b0;
  uVar6 = (unsigned int)apbStack_b0[3] * 0x100 + (unsigned int)apbStack_b0[2];
  apbStack_b0 = pbVar8;
  if ((iVar5 != 0) && (iVar15 = 0, iVar5 != 0)) {
    do {
      if ((uVar13 & 0xffffffff) < (uVar14 + 4 & 0xffffffff)) {
        return 3;
      }
      iVar7 = fn_82C038C8(param_1,(uVar14 + 2 & 0xffffffff) + uVar3 + *param_1,2,&apbStack_b0);
      if (iVar7 != 2) {
        return 3;
      }
      if (apbStack_b0 == (unsigned char *)0x0) {
        return 3;
      }
      pbVar8 = apbStack_b0 + 2;
      iVar15 = iVar15 + 1;
      uVar14 = (unsigned __int64)apbStack_b0[1] * 0x100 + (unsigned __int64)*apbStack_b0 + uVar14 + 2 + 2;
      apbStack_b0 = pbVar8;
    } while (iVar15 < iVar5);
  }
  if (uVar6 != 0) {
    if (*(unsigned short *)(param_1 + 0x1e) == 4) {
      return 1;
    }
    if (4 < uVar6) {
      return 1;
    }
    iVar5 = 0;
    *(unsigned short *)((int)param_1 + (unsigned int)*(unsigned short *)(param_1 + 0x1e) * 0x24 + 0xf4) =
         (unsigned short)bVar1 * 0x100 + (unsigned short)bVar2;
    if (uVar6 != 0) {
      iVar15 = 0;
      do {
        if ((uVar13 & 0xffffffff) < (uVar14 + 0x16 & 0xffffffff)) {
          return 3;
        }
        iVar7 = fn_82C038C8(param_1,(uVar14 & 0xffffffff) + uVar3 + *param_1,0x16,&apbStack_b0);
        if (iVar7 != 0x16) {
          return 3;
        }
        if (apbStack_b0 == (unsigned char *)0x0) {
          return 3;
        }
        pbVar11 = (unsigned char *)&iStack_a0;
        iStack_a0 = (((unsigned int)apbStack_b0[3] * 0x100 + (unsigned int)apbStack_b0[2]) * 0x100 +
                    (unsigned int)apbStack_b0[1]) * 0x100 + (unsigned int)*apbStack_b0;
        sStack_9c = (unsigned short)apbStack_b0[5] * 0x100 + (unsigned short)apbStack_b0[4];
        bStack_98 = apbStack_b0[8];
        sStack_9a = (unsigned short)apbStack_b0[7] * 0x100 + (unsigned short)apbStack_b0[6];
        bStack_97 = apbStack_b0[9];
        bStack_96 = apbStack_b0[10];
        bStack_95 = apbStack_b0[0xb];
        bStack_94 = apbStack_b0[0xc];
        bStack_93 = apbStack_b0[0xd];
        bStack_92 = apbStack_b0[0xe];
        bStack_91 = apbStack_b0[0xf];
        pbVar8 = &lbl_820ED0C8;
        do {
          bVar1 = *pbVar8;
          bVar2 = *pbVar11;
          if ((unsigned __int64)bVar1 - (unsigned __int64)bVar2 != 0) break;
          pbVar8 = pbVar8 + 1;
          pbVar11 = pbVar11 + 1;
        } while (pbVar8 != &lbl_820ED0D8);
        iVar5 = iVar5 + 1;
        *(unsigned int *)((*(unsigned short *)(param_1 + 0x1e) + 7) * 0x24 + iVar15 + (int)param_1) =
             (unsigned int)LZCOUNT((int)((unsigned __int64)bVar1 - (unsigned __int64)bVar2)) >> 5;
        iVar7 = (unsigned int)*(unsigned short *)(param_1 + 0x1e) * 0x24 + iVar15;
        iVar15 = iVar15 + 8;
        *(unsigned short *)((int)param_1 + iVar7 + 0xf8) =
             (unsigned short)apbStack_b0[0x11] * 0x100 + (unsigned short)apbStack_b0[0x10];
        *(short *)(param_1 + 0x1e) = *(short *)(param_1 + 0x1e) + 1;
        pbVar8 = apbStack_b0 + 0x16;
        uVar14 = (((unsigned __int64)apbStack_b0[0x15] * 0x100 + (unsigned __int64)apbStack_b0[0x14]) *
                  0x100 + (unsigned __int64)apbStack_b0[0x13]) * 0x100 + (unsigned __int64)apbStack_b0[0x12]
                 + uVar14 + 0x16;
        apbStack_b0 = pbVar8;
      } while (iVar5 < (int)uVar6);
    }
  }
  if ((uVar14 + 0x18 & 0xffffffff) < (uVar13 & 0xffffffff)) {
    uVar4 = fn_82C130C0(param_1,abStack_90,&iStack_a0,uVar14 + uVar12);
    if ((int)uVar4 != 0) {
      return uVar4;
    }
    pbVar8 = abStack_90;
    pbVar11 = &lbl_82154B18;
    do {
      bVar1 = *pbVar11;
      bVar2 = *pbVar8;
      if ((unsigned __int64)bVar1 - (unsigned __int64)bVar2 != 0) break;
      pbVar11 = pbVar11 + 1;
      pbVar8 = pbVar8 + 1;
    } while (pbVar11 != &lbl_82154B28);
    if ((int)((unsigned __int64)bVar1 - (unsigned __int64)bVar2) != 0) {
      pbVar8 = abStack_90;
      pbVar11 = &lbl_820ED098;
      do {
        bVar1 = *pbVar11;
        bVar2 = *pbVar8;
        if ((unsigned __int64)bVar1 - (unsigned __int64)bVar2 != 0) break;
        pbVar11 = pbVar11 + 1;
        pbVar8 = pbVar8 + 1;
      } while (pbVar11 != &lbl_820ED0A8);
      if ((int)((unsigned __int64)bVar1 - (unsigned __int64)bVar2) != 0) {
        return 0;
      }
    }
    lVar9 = *param_1;
    lVar10 = (uVar14 + 0x18 + uVar12 & 0xffffffff) + lVar9;
    *param_1 = lVar10;
    if ((unsigned __int64)param_1[5] < (unsigned __int64)(iStack_a0 - 0x18) + lVar10) {
      return 1;
    }
    uVar4 = fn_82C13690(param_1,iStack_a0,param_3);
    if ((int)uVar4 != 0) {
      return uVar4;
    }
    *param_1 = lVar9;
  }
  return 0;
}

