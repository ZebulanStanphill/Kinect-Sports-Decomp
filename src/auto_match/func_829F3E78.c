extern unsigned int *auStack_140;
extern unsigned int fStack_158;
extern unsigned int fStack_15c;
extern unsigned int fStack_160;
extern int fn_829F2758();
extern int fn_829F2968();
extern int fn_829F3670();
extern int fn_82F691F0();
extern int fn_82F6A548();
extern int fn_82F6A594();
extern unsigned int lbl_82006848;
extern unsigned int lbl_82021534;
extern unsigned int lbl_82186E74;


void fn_829F3E78(unsigned __int64 param_1,unsigned __int64 param_2,int param_3,__int64 param_4)

{
  unsigned int uVar1;
  int iVar2;
  int iVar3;
  float *pfVar4;
  unsigned short uVar5;
  unsigned __int64 in_r0;
  int iVar6;
  int *piVar7;
  int iVar8;
  unsigned int *puVar9;
  int iVar10;
  __int64 lVar11;
  unsigned int uVar12;
  int *piVar13;
  int iVar14;
  __int64 lVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  unsigned char in_vs32 [16];
  unsigned char in_vs40 [16];
  unsigned char in_vs41 [16];
  unsigned char in_vs42 [16];
  unsigned char in_vs43 [16];
  unsigned char in_vs51 [16];
  unsigned char in_vs54 [16];
  float in_register_000103e0;
  float in_register_000103e4;
  float in_register_000103e8;
  float in_vr62;
  float in_register_000103f0;
  float in_register_000103f4;
  float in_register_000103f8;
  float in_vr63;
  float fStack_160;
  float fStack_15c;
  float fStack_158;
  unsigned char auStack_140 [16];
  __int64 lStack_130;
  int aiStack_120 [24];
  int aiStack_c0 [48];
  
  iVar6 = fn_82F6A548();
  iVar3 = (int)param_4;
  lVar11 = param_4 + 0x5c;
  param_4 = param_4 + 0x58;
  uVar5 = *(unsigned short *)((*(int *)(iVar3 + 0x5c) * (int)param_2 + *(int *)(iVar3 + 0x58)) * 2 + iVar6)
          >> 3;
  uVar12 = (unsigned int)uVar5;
  if ((0x13 < (int)(uVar12 - *(int *)(iVar3 + 0x60))) || (uVar5 == 0)) {
    dVar18 = (double)lbl_82006848;
    fn_829F3670((double)(__int64)*(int *)(iVar3 + 0x58),
                      (double)(__int64)*(int *)(iVar3 + 0x5c),
                      (double)(float)((double)(__int64)(int)uVar12 * dVar18));
    altv207_13(in_vs32,in_vs43);
    altv207_13(in_vs32,in_vs54);
    in_register_000103f0 = in_register_000103e0 - in_register_000103f0;
    in_register_000103f4 = in_register_000103e4 - in_register_000103f4;
    in_register_000103f8 = in_register_000103e8 - in_register_000103f8;
    in_vr63 = in_vr62 - in_vr63;
    altv300_27(in_vs32,in_vs42);
    altv300_29(in_vs41,in_vs51);
    dVar19 = (double)(fStack_160 * fStack_160 + fStack_158 * fStack_158 + fStack_15c * fStack_15c);
    fn_82F691F0(aiStack_120,0,0x80);
    piVar13 = (int *)param_4;
    fn_829F2968(aiStack_120,iVar6,param_2,*(unsigned __int64 *)piVar13,
                      (unsigned __int64)*(unsigned int *)(iVar3 + 0x60) << 0x20,*(unsigned short *)(param_3 + 0x144),2)
    ;
    if (uVar5 == 0) {
      uVar12 = 4999;
    }
    iVar14 = -1;
    iVar8 = 0;
    puVar9 = (unsigned int *)(aiStack_120 + 2);
    dVar16 = (double)lbl_82186E74;
    piVar7 = aiStack_c0;
    dVar17 = (double)lbl_82021534;
    do {
      if (2 < *piVar7) {
        uVar1 = *puVar9;
        if ((int)uVar1 < (int)uVar12) {
          lStack_130 = (__int64)(int)puVar9[-1];
          fn_829F3670((double)(__int64)(int)puVar9[-2],(double)lStack_130,
                            (double)(float)((double)uVar1 * dVar18));
          altv207_13(in_vs32,in_vs54);
          altv207_13(in_vs32,in_vs43);
          in_register_000103f0 = in_register_000103f0 - in_register_000103e0;
          in_register_000103f4 = in_register_000103f4 - in_register_000103e4;
          in_register_000103f8 = in_register_000103f8 - in_register_000103e8;
          in_vr63 = in_vr63 - in_vr62;
          pfVar4 = (float *)((unsigned int)(auStack_140 + (int)in_r0) & 0xfffffff0);
          *pfVar4 = in_register_000103f0;
          pfVar4[1] = in_register_000103f4;
          pfVar4[2] = in_register_000103f8;
          pfVar4[3] = in_vr63;
          altv300_27(in_vs32,in_vs41);
          altv300_29(in_vs40,in_vs51);
          if ((dVar17 < (double)(float)((double)(fStack_160 * fStack_160 +
                                                fStack_158 * fStack_158 + fStack_15c * fStack_15c) /
                                       dVar19)) ||
             ((double)(float)((double)(*(float *)(param_3 + 0x140) * *(float *)(param_3 + 0x140)) *
                             dVar16) < dVar19)) {
            iVar14 = iVar8;
            uVar12 = uVar1;
          }
        }
      }
      iVar8 = iVar8 + 1;
      piVar7 = piVar7 + 1;
      puVar9 = puVar9 + 3;
    } while (iVar8 < 8);
    if (iVar14 != -1) {
      iVar8 = aiStack_120[iVar14 * 3 + 1];
      iVar10 = aiStack_120[iVar14 * 3 + 2];
      *piVar13 = aiStack_120[iVar14 * 3];
      *(int *)(iVar3 + 0x5c) = iVar8;
      *(int *)(iVar3 + 0x60) = iVar10;
      fn_829F2758(param_4,lVar11);
    }
    iVar14 = 0;
    do {
      fn_82F691F0(aiStack_120,0,0x80);
      fn_829F2968(aiStack_120,iVar6,param_2,*(unsigned __int64 *)piVar13,
                        (unsigned __int64)*(unsigned int *)(iVar3 + 0x60) << 0x20,*(unsigned short *)(param_3 + 0x144),
                        1);
      uVar12 = (unsigned int)(*(unsigned short *)(((int)param_2 * *(int *)lVar11 + *piVar13) * 2 + iVar6) >> 3);
      if (uVar12 == 0) {
        uVar12 = 4999;
      }
      iVar8 = -1;
      iVar10 = 0;
      puVar9 = (unsigned int *)(aiStack_120 + 2);
      piVar7 = aiStack_c0;
      lVar15 = 8;
      do {
        if ((2 < *piVar7) && ((int)*puVar9 < (int)uVar12)) {
          iVar8 = iVar10;
          uVar12 = *puVar9;
        }
        iVar10 = iVar10 + 1;
        piVar7 = piVar7 + 1;
        puVar9 = puVar9 + 3;
        lVar15 = lVar15 + -1;
      } while (lVar15 != 0);
      if (iVar8 == -1) break;
      lStack_130 = (__int64)aiStack_120[iVar8 * 3 + 2];
      fn_829F3670((double)(__int64)aiStack_120[iVar8 * 3],
                        (double)(__int64)aiStack_120[iVar8 * 3 + 1],
                        (double)(float)((double)lStack_130 * dVar18));
      altv207_13(in_vs32,in_vs54);
      altv207_13(in_vs32,in_vs43);
      in_register_000103f0 = in_register_000103f0 - in_register_000103e0;
      in_register_000103f4 = in_register_000103f4 - in_register_000103e4;
      in_register_000103f8 = in_register_000103f8 - in_register_000103e8;
      in_vr63 = in_vr63 - in_vr62;
      pfVar4 = (float *)((unsigned int)(auStack_140 + (int)in_r0) & 0xfffffff0);
      *pfVar4 = in_register_000103f0;
      pfVar4[1] = in_register_000103f4;
      pfVar4[2] = in_register_000103f8;
      pfVar4[3] = in_vr63;
      altv300_27(in_vs32,in_vs41);
      altv300_29(in_vs40,in_vs51);
      if ((dVar17 < (double)(float)((double)(fStack_160 * fStack_160 +
                                            fStack_158 * fStack_158 + fStack_15c * fStack_15c) /
                                   dVar19)) ||
         ((double)(float)((double)(*(float *)(param_3 + 0x140) * *(float *)(param_3 + 0x140)) *
                         dVar16) < dVar19)) {
        iVar10 = aiStack_120[iVar8 * 3 + 1];
        iVar2 = aiStack_120[iVar8 * 3 + 2];
        *piVar13 = aiStack_120[iVar8 * 3];
        *(int *)(iVar3 + 0x5c) = iVar10;
        *(int *)(iVar3 + 0x60) = iVar2;
        fn_829F2758(param_4,lVar11);
      }
      iVar14 = iVar14 + 1;
    } while (iVar14 < 3);
  }
  fn_82F6A594();
  return;
}

