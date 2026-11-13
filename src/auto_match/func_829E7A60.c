extern unsigned int *auStack_b0;
extern unsigned int *auStack_c8;
extern unsigned int fStack_b4;
extern int fn_829E8B10();
extern int fn_829E8B70();
extern int fn_829E8E50();
extern int fn_829E90F0();
extern int fn_829E9138();
extern int fn_829EBED0();
extern unsigned int lbl_820798D0;
extern unsigned int lbl_820798E0;
extern unsigned int lbl_820798E4;
extern unsigned int lbl_821AAD20;
extern unsigned int uStack_50;
extern unsigned int uStack_54;
extern unsigned int uStack_58;
extern unsigned int uStack_5c;
extern unsigned int uStack_60;
extern unsigned int uStack_64;
extern unsigned int uStack_68;
extern unsigned int uStack_6c;
extern unsigned int uStack_70;
extern unsigned int uStack_74;
extern unsigned int uStack_78;
extern unsigned int uStack_7c;
extern unsigned int uStack_d0;


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

__int64 fn_829E7A60(int param_1,__int64 param_2,unsigned __int64 param_3,unsigned __int64 param_4,
                      unsigned int *param_5)

{
  float fVar1;
  __int64 lVar2;
  int iVar3;
  int iVar4;
  float *pfVar5;
  float *pfVar6;
  int iVar8;
  int iVar9;
  __int64 lVar7;
  unsigned __int64 uVar10;
  int iVar11;
  __int64 lVar12;
  __int64 lVar13;
  unsigned int uVar14;
  unsigned __int64 uVar15;
  unsigned __int64 uStack_d0;
  unsigned char auStack_c8 [8];
  __int64 lStack_c0;
  float fStack_b4;
  unsigned char auStack_b0 [48];
  unsigned char **ppuStack_80;
  unsigned int uStack_7c;
  unsigned int uStack_78;
  unsigned int uStack_74;
  unsigned int uStack_70;
  unsigned int uStack_6c;
  unsigned int uStack_68;
  unsigned int uStack_64;
  unsigned int uStack_60;
  unsigned int uStack_5c;
  unsigned int uStack_58;
  unsigned int uStack_54;
  unsigned int uStack_50;
  
  if (*(char *)(param_1 + 0x10) == '\0') {
    lVar2 = -0x7fff0001;
  }
  else {
    uStack_7c = 0;
    uStack_74 = 1;
    ppuStack_80 = &lbl_820798D0;
    uStack_70 = 0;
    uStack_6c = 0;
    uStack_68 = 1;
    uStack_64 = 1;
    uStack_5c = 0;
    uStack_58 = 0;
    uStack_54 = 0;
    uStack_50 = 4;
    uStack_60 = 1;
    uStack_78 = 1;
    fn_829E8B70(&ppuStack_80);
    lVar13 = (unsigned __int64)param_5[2] - (unsigned __int64)*param_5;
    lVar12 = (unsigned __int64)param_5[3] - (unsigned __int64)param_5[1];
    fn_829E8E50(&ppuStack_80,
                      (__int64)(int)param_5[1] * (__int64)(int)param_3 + (unsigned __int64)*param_5 +
                      param_2,lVar13,lVar12,1,param_3,1,1);
    fn_829EBED0(&ppuStack_80,param_1 + 0x14,0);
    uVar14 = *(unsigned int *)(param_1 + 0x28);
    uVar10 = (unsigned __int64)uVar14;
    fVar1 = lbl_821AAD20;
    if (0 < (int)uVar14) {
      iVar3 = *(int *)(param_1 + 0x3c);
      do {
        iVar8 = 0;
        if (0 < *(int *)(param_1 + 0x24)) {
          pfVar5 = (float *)(iVar3 + -4);
          do {
            iVar8 = iVar8 + 1;
            pfVar5 = pfVar5 + 1;
            fVar1 = *pfVar5 + fVar1;
          } while (iVar8 < *(int *)(param_1 + 0x24));
        }
        iVar3 = *(int *)(param_1 + 0x38) + iVar3;
        uVar10 = uVar10 - 1;
      } while (uVar10 != 0);
    }
    iVar3 = *(int *)(param_1 + 0xc);
    iVar8 = *(int *)(param_1 + 8);
    iVar4 = 0;
    fVar1 = lbl_820798E4 / fVar1;
    if (0 < (int)uVar14) {
      pfVar5 = (float *)(*(int *)(param_1 + 0x48) + -4);
      iVar9 = *(int *)(param_1 + 0x24);
      do {
        iVar11 = 0;
        if (0 < iVar9) {
          pfVar6 = (float *)(iVar4 * *(int *)(param_1 + 0x38) + *(int *)(param_1 + 0x3c) + -4);
          do {
            pfVar6 = pfVar6 + 1;
            iVar11 = iVar11 + 1;
            pfVar5 = pfVar5 + 1;
            *pfVar5 = *pfVar6 * fVar1;
            iVar9 = *(int *)(param_1 + 0x24);
          } while (iVar11 < iVar9);
        }
        iVar4 = iVar4 + 1;
      } while (iVar4 < *(int *)(param_1 + 0x28));
    }
    lVar2 = fn_829E9138(*(unsigned int *)(param_1 + 4),*(unsigned int *)(param_1 + 0x48),
                            (__int64)iVar3 * (__int64)iVar8,auStack_c8,auStack_b0,10);
    if ((-1 < lVar2) &&
       (lVar2 = fn_829E90F0(*(unsigned int *)(param_1 + 4),&uStack_d0), fVar1 = lbl_820798E0,
       lVar2 == 0)) {
      uVar10 = uStack_d0 >> 0x20;
      if (9 < uVar10) {
        uVar10 = 10;
      }
      if (uVar10 != 0) {
        pfVar5 = &fStack_b4;
        uVar15 = uVar10;
        do {
          pfVar6 = pfVar5 + 1;
          pfVar5 = pfVar5 + 1;
          *pfVar5 = *pfVar6 * fVar1;
          uVar15 = uVar15 - 1;
        } while (uVar15 != 0);
        if (uVar10 != 0) {
          lVar7 = ((uVar10 - 1 & 0xffffffff) >> 1) + 1;
          pfVar5 = &fStack_b4;
          uVar14 = 0;
          do {
            uStack_d0 = (unsigned __int64)(int)*param_5;
            pfVar6 = pfVar5 + 1;
            pfVar5 = pfVar5 + 2;
            fVar1 = *pfVar5;
            param_5[((uVar14 >> 1) + 2) * 2] =
                 (unsigned int)(*pfVar6 * (float)(__int64)(int)lVar13 + (float)(__int64)uStack_d0);
            lStack_c0 = (__int64)(int)param_5[1];
            param_5[uVar14 + 5] = (unsigned int)(fVar1 * (float)(__int64)(int)lVar12 + (float)lStack_c0);
            lVar7 = lVar7 + -1;
            uVar14 = uVar14 + 2;
          } while (lVar7 != 0);
        }
      }
    }
    fn_829E8B10(&ppuStack_80);
  }
  return lVar2;
}

