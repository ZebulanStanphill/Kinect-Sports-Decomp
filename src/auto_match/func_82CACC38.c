extern int fn_82C4E3B0();
extern int fn_82C4E470();
extern int fn_82C4E5E8();
extern int fn_82CAC2E0();
extern unsigned int lbl_82106677;


__int64 fn_82CACC38(unsigned __int64 param_1,int *param_2,unsigned __int64 *param_3,int *param_4)

{
  unsigned char bVar1;
  unsigned char bVar2;
  unsigned char bVar3;
  unsigned char bVar4;
  unsigned char bVar5;
  unsigned char bVar6;
  short sVar7;
  int *piVar8;
  unsigned char *pbVar9;
  int iVar10;
  int iVar11;
  __int64 lVar12;
  unsigned __int64 uVar13;
  unsigned __int64 uVar14;
  __int64 lVar15;
  unsigned __int64 uVar16;
  unsigned __int64 uVar17;
  
  if ((*(unsigned int *)(*param_2 + 4) & param_2[5]) == 0) {
    iVar11 = fn_82CAC2E0();
    *param_4 = iVar11;
    if (iVar11 != 0) {
      return 0;
    }
    *(unsigned int *)(*param_2 + 4) = param_2[5] | *(unsigned int *)(*param_2 + 4);
  }
  piVar8 = (int *)param_2[0xb];
  if (piVar8 == (int *)0x0) {
    uVar16 = 0;
    *(unsigned int *)((int)param_3 + 0x14) = 3;
  }
  else {
    iVar11 = *piVar8;
    sVar7 = *(short *)((int)((*param_3 >> (0x40 - (unsigned __int64)*(unsigned char *)(piVar8 + 2) & 0x7f) &
                             0xffffffff) << 1) + iVar11);
    uVar16 = (unsigned __int64)sVar7;
    if (sVar7 < 0) {
      fn_82C4E470(param_3);
      do {
        uVar17 = *param_3;
        fn_82C4E470(param_3,1);
        sVar7 = *(short *)((int)(((uVar16 - ((__int64)uVar17 >> 0x3f)) + 0x8000 & 0xffffffff) << 1)
                          + iVar11);
        uVar16 = (unsigned __int64)sVar7;
      } while (sVar7 < 0);
    }
    else {
      iVar11 = *(int *)(param_3 + 1);
      iVar10 = (int)(uVar16 & 0xf);
      *param_3 = *param_3 << (uVar16 & 0xf);
      *(int *)(param_3 + 1) = iVar11 - iVar10;
      if (iVar11 < iVar10) {
        do {
          pbVar9 = *(unsigned char **)((int)param_3 + 0xc);
          if (pbVar9 < (unsigned char *)(*(int *)(param_3 + 2) - 4U)) {
            bVar6 = *pbVar9;
            bVar1 = pbVar9[1];
            bVar2 = pbVar9[2];
            bVar3 = pbVar9[3];
            bVar4 = pbVar9[4];
            bVar5 = pbVar9[5];
            iVar11 = *(int *)(param_3 + 1);
            *(unsigned char **)((int)param_3 + 0xc) = pbVar9 + 6;
            *(int *)(param_3 + 1) = iVar11 + 0x30;
            *param_3 = ((((((unsigned __int64)bVar6 * 0x100 + (unsigned __int64)bVar1) * 0x100 + (unsigned __int64)bVar2)
                          * 0x100 + (unsigned __int64)bVar3) * 0x100 + (unsigned __int64)bVar4) * 0x100 +
                        (unsigned __int64)bVar5 << ((__int64)-iVar11 & 0x7fU)) + *param_3;
            goto LAB_82cacd98;
          }
          iVar11 = fn_82C4E3B0(param_3);
        } while (iVar11 == 1);
        uVar16 = (unsigned __int64)((int)sVar7 >> 4);
      }
      else {
LAB_82cacd98:
        uVar16 = (unsigned __int64)((int)sVar7 >> 4);
      }
    }
  }
  uVar16 = -(unsigned __int64)(uVar16 <= (unsigned int)param_2[3]) & uVar16;
  iVar11 = (int)uVar16;
  bVar6 = *(unsigned char *)(param_2[2] + iVar11);
  uVar17 = (unsigned __int64)bVar6;
  if (bVar6 != 0) {
    uVar13 = (unsigned __int64)*(unsigned int *)(param_3 + 1);
    lVar15 = 0;
    uVar14 = uVar13 + 0x10;
    if (bVar6 < 0x21) {
      if ((uVar14 & 0xffffffff) < uVar17) {
        do {
          if ((uVar14 & 0xffffffff) == 0) break;
          uVar17 = uVar17 - uVar14;
          *(int *)(param_3 + 1) = (int)(uVar13 - uVar14);
          lVar15 = (unsigned __int64)
                   (unsigned int)((int)(*param_3 >> (0x40 - uVar14 & 0x7f)) << ((unsigned int)uVar17 & 0x3f)) +
                   lVar15;
          *param_3 = *param_3 << (uVar14 & 0x7f);
          if ((__int64)(uVar13 - uVar14) < 0) {
            fn_82C4E5E8(param_3);
          }
          uVar13 = (unsigned __int64)*(unsigned int *)(param_3 + 1);
          uVar14 = uVar13 + 0x10;
        } while ((uVar14 & 0xffffffff) < (uVar17 & 0xffffffff));
      }
      lVar12 = uVar13 - uVar17;
      *(int *)(param_3 + 1) = (int)lVar12;
      uVar13 = uVar17 & 0x7f;
      uVar17 = (*param_3 >> (0x40 - uVar17 & 0x7f) & 0xffffffff) + lVar15;
      *param_3 = *param_3 << uVar13;
      if (lVar12 < 0) {
        fn_82C4E5E8(param_3);
      }
    }
    else {
      uVar17 = 0;
    }
  }
  if (0x10 < iVar11) {
    uVar16 = uVar16 - 0x11;
  }
  if (4 < (int)uVar16) {
    uVar16 = (unsigned __int64)(unsigned char)(&lbl_82106677)[(int)uVar16] + (__int64)((int)uVar17 >> 1);
  }
  return ((uVar16 ^ -(uVar17 & 1)) + (uVar17 & 1) & 0x7fffffff) * 2 + (unsigned __int64)(0x10 < iVar11);
}

