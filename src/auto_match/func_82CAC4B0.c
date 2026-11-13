typedef unsigned char bool;
extern int fn_82C4E3B0();
extern int fn_82C4E470();
extern int fn_82C4E5E8();
extern int fn_82CAC2E0();
extern unsigned int lbl_82106631;
extern unsigned int lbl_82106C76;


unsigned __int64
fn_82CAC4B0(unsigned __int64 param_1,int *param_2,unsigned __int64 *param_3,unsigned int *param_4,unsigned int *param_5,
             unsigned int *param_6,int *param_7)

{
  bool bVar1;
  unsigned char bVar2;
  unsigned char bVar3;
  unsigned char bVar4;
  unsigned char bVar5;
  unsigned char bVar6;
  unsigned char bVar7;
  short sVar8;
  int *piVar9;
  unsigned char *pbVar10;
  unsigned int uVar11;
  unsigned int uVar12;
  int iVar13;
  int iVar14;
  __int64 lVar15;
  unsigned __int64 uVar16;
  unsigned __int64 uVar17;
  unsigned int uVar18;
  __int64 lVar19;
  unsigned __int64 uVar20;
  unsigned __int64 uVar21;
  
  if ((*(unsigned int *)(*param_2 + 4) & param_2[5]) == 0) {
    iVar14 = fn_82CAC2E0();
    *param_7 = iVar14;
    if (iVar14 != 0) {
      return 0;
    }
    *(unsigned int *)(*param_2 + 4) = param_2[5] | *(unsigned int *)(*param_2 + 4);
  }
  piVar9 = (int *)param_2[0xb];
  if (piVar9 == (int *)0x0) {
    uVar20 = 0;
    *(unsigned int *)((int)param_3 + 0x14) = 3;
  }
  else {
    iVar14 = *piVar9;
    sVar8 = *(short *)((int)((*param_3 >> (0x40 - (unsigned __int64)*(unsigned char *)(piVar9 + 2) & 0x7f) &
                             0xffffffff) << 1) + iVar14);
    uVar20 = (unsigned __int64)sVar8;
    if (sVar8 < 0) {
      fn_82C4E470(param_3);
      do {
        uVar21 = *param_3;
        fn_82C4E470(param_3,1);
        sVar8 = *(short *)((int)(((uVar20 - ((__int64)uVar21 >> 0x3f)) + 0x8000 & 0xffffffff) << 1)
                          + iVar14);
        uVar20 = (unsigned __int64)sVar8;
      } while (sVar8 < 0);
    }
    else {
      iVar14 = *(int *)(param_3 + 1);
      iVar13 = (int)(uVar20 & 0xf);
      *param_3 = *param_3 << (uVar20 & 0xf);
      *(int *)(param_3 + 1) = iVar14 - iVar13;
      if (iVar14 < iVar13) {
        do {
          pbVar10 = *(unsigned char **)((int)param_3 + 0xc);
          if (pbVar10 < (unsigned char *)(*(int *)(param_3 + 2) - 4U)) {
            bVar7 = *pbVar10;
            bVar2 = pbVar10[1];
            bVar3 = pbVar10[2];
            bVar4 = pbVar10[3];
            bVar5 = pbVar10[4];
            bVar6 = pbVar10[5];
            iVar14 = *(int *)(param_3 + 1);
            *(unsigned char **)((int)param_3 + 0xc) = pbVar10 + 6;
            *(int *)(param_3 + 1) = iVar14 + 0x30;
            *param_3 = ((((((unsigned __int64)bVar7 * 0x100 + (unsigned __int64)bVar2) * 0x100 + (unsigned __int64)bVar3)
                          * 0x100 + (unsigned __int64)bVar4) * 0x100 + (unsigned __int64)bVar5) * 0x100 +
                        (unsigned __int64)bVar6 << ((__int64)-iVar14 & 0x7fU)) + *param_3;
            goto LAB_82cac614;
          }
          iVar14 = fn_82C4E3B0(param_3);
        } while (iVar14 == 1);
        uVar20 = (unsigned __int64)((int)sVar8 >> 4);
      }
      else {
LAB_82cac614:
        uVar20 = (unsigned __int64)((int)sVar8 >> 4);
      }
    }
  }
  uVar20 = -(unsigned __int64)(uVar20 <= (unsigned int)param_2[3]) & uVar20;
  uVar18 = (unsigned int)uVar20;
  bVar7 = *(unsigned char *)(param_2[2] + uVar18);
  uVar21 = (unsigned __int64)bVar7;
  if (bVar7 != 0) {
    uVar16 = (unsigned __int64)*(unsigned int *)(param_3 + 1);
    lVar19 = 0;
    uVar17 = uVar16 + 0x10;
    if (bVar7 < 0x21) {
      if ((uVar17 & 0xffffffff) < uVar21) {
        do {
          if ((uVar17 & 0xffffffff) == 0) break;
          uVar21 = uVar21 - uVar17;
          *(int *)(param_3 + 1) = (int)(uVar16 - uVar17);
          lVar19 = (unsigned __int64)
                   (unsigned int)((int)(*param_3 >> (0x40 - uVar17 & 0x7f)) << ((unsigned int)uVar21 & 0x3f)) +
                   lVar19;
          *param_3 = *param_3 << (uVar17 & 0x7f);
          if ((__int64)(uVar16 - uVar17) < 0) {
            fn_82C4E5E8(param_3);
          }
          uVar16 = (unsigned __int64)*(unsigned int *)(param_3 + 1);
          uVar17 = uVar16 + 0x10;
        } while ((uVar17 & 0xffffffff) < (uVar21 & 0xffffffff));
      }
      lVar15 = uVar16 - uVar21;
      *(int *)(param_3 + 1) = (int)lVar15;
      uVar16 = uVar21 & 0x7f;
      uVar21 = (*param_3 >> (0x40 - uVar21 & 0x7f) & 0xffffffff) + lVar19;
      *param_3 = *param_3 << uVar16;
      if (lVar15 < 0) {
        fn_82C4E5E8(param_3);
      }
    }
    else {
      uVar21 = 0;
    }
  }
  if ((int)uVar18 < 0x2e) {
    if ((int)uVar18 < 0x17) {
      *param_6 = 0;
    }
    else {
      uVar18 = uVar18 - 0x17;
      *param_6 = 1;
    }
    if ((int)uVar18 < 0x10) {
      *param_5 = 0;
      *param_4 = uVar18;
    }
    else if ((int)uVar18 < 0x14) {
      *param_5 = 1;
      *param_4 = uVar18 - 0x10;
    }
    else if ((int)uVar18 < 0x16) {
      *param_5 = 2;
      *param_4 = uVar18 - 0x14;
    }
    else {
      *param_5 = 3;
      *param_4 = 0;
    }
  }
  else {
    uVar11 = *(unsigned int *)((int)((uVar20 & 0xffffffff) << 2) + param_2[10]);
    *param_5 = 0;
    uVar21 = uVar11 & uVar21;
    uVar11 = (unsigned int)uVar21;
    if ((int)uVar18 < 0x3b) {
      *param_6 = 0;
      if ((int)uVar18 < 0x30) {
        *param_4 = (int)(char)(&lbl_82106C76)[uVar18] + uVar11;
      }
      else if ((int)uVar18 < 0x32) {
        *param_5 = 1;
        *param_4 = (int)(char)(&lbl_82106C76)[uVar18] + uVar11;
      }
      else if (uVar18 == 0x32) {
        *param_4 = uVar11 + 0x20;
      }
      else if (uVar18 == 0x33) {
        *param_5 = 1;
        *param_4 = uVar11 + 0x10;
      }
      else if ((int)uVar18 < 0x39) {
        *param_4 = 0;
        *param_5 = (int)(char)(&lbl_82106C76)[uVar18] + uVar11;
      }
      else {
        *param_4 = 1;
        *param_5 = (int)(char)(&lbl_82106C76)[uVar18] + uVar11;
      }
    }
    else if ((int)uVar18 < 0x49) {
      *param_6 = 1;
      if ((int)uVar18 < 0x41) {
        *param_4 = (int)(char)(&lbl_82106631)[uVar18] + uVar11;
      }
      else if ((int)uVar18 < 0x44) {
        *param_5 = 1;
        *param_4 = (int)(char)(&lbl_82106631)[uVar18] + uVar11;
      }
      else if ((int)uVar18 < 0x47) {
        *param_4 = 0;
        *param_5 = (int)(char)(&lbl_82106631)[uVar18] + uVar11;
      }
      else {
        *param_4 = 1;
        *param_5 = (int)(char)(&lbl_82106631)[uVar18] + uVar11;
      }
    }
    else if ((int)uVar18 < 0x4b) {
      uVar21 = uVar21 & 3;
      uVar12 = (int)uVar11 >> 2;
      *param_6 = uVar18 - 0x49;
      if (uVar21 < 4) {
        bVar1 = (int)uVar21 != 0;
        if (uVar21 == 1 && bVar1) {
          *param_4 = uVar12 + 3;
          *param_5 = 2;
        }
        else if (uVar21 == 2 && bVar1) {
          *param_4 = (uVar12 & 1) + 3;
          *param_5 = ((int)uVar11 >> 3) + 3;
        }
        else if (bVar1) {
          *param_4 = (uVar12 & 3) + 5;
          *param_5 = ((int)uVar11 >> 4) + 3;
        }
        else {
          *param_4 = 2;
          *param_5 = uVar12 + 2;
        }
      }
    }
    else {
      *param_6 = uVar11 & 1;
      *param_4 = (int)uVar11 >> 1 & 0x3f;
      *param_5 = (int)uVar11 >> 7;
    }
  }
  *param_5 = *param_5 + 1;
  uVar18 = *(unsigned int *)(param_3 + 1);
  uVar20 = *param_3;
  *param_3 = uVar20 << 1;
  uVar11 = (unsigned int)((__int64)uVar20 >> 0x3f);
  *(int *)(param_3 + 1) = (int)((unsigned __int64)uVar18 - 1);
  if ((__int64)((unsigned __int64)uVar18 - 1) < 0) {
    fn_82C4E5E8(param_3);
  }
  *param_5 = (*param_5 ^ uVar11) - uVar11;
  return 0;
}

