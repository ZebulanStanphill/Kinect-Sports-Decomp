typedef struct { unsigned __int64 lo, hi; } V16;
extern unsigned int *auStack_90;
extern unsigned int *auStack_a0;
extern unsigned int *auStack_b0;
extern unsigned int *auStack_c0;
extern unsigned int *auStack_d0;
extern int fn_82547F50();
extern int fn_825D4748();
extern int fn_825D4818();
extern int fn_825D4A58();
extern int fn_825D4D38();
extern int fn_8262EDF0();
extern int fn_826310E0();
extern int fn_82631578();
extern int fn_82631920();
extern int fn_82645EA8();
extern int fn_8264C1F8();
extern unsigned int ltcg_pool_0_0f;
extern unsigned int lbl_8320A898;
extern unsigned int lbl_832700D0;
extern unsigned int lbl_832700D4;
extern unsigned int lbl_832700D8;
extern unsigned int lbl_8327F904;
extern unsigned int lbl_8327F984;
extern unsigned int lbl_83296890;
extern unsigned int lbl_832968D0;
extern unsigned int lbl_83296BE0;
extern unsigned int lbl_83296C20;
extern unsigned int lbl_83296C80;
extern V16 vectorMergeHighWord();
extern V16 vectorMergeLowWord();
extern void *memcpy(void *, const void *, unsigned int);


void fn_8262D218(int param_1,int param_2,int param_3)

{
  unsigned int uVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float *pfVar6;
  unsigned int uVar7;
  int in_r0;
  char cVar8;
  short *psVar9;
  unsigned __int64 *puVar10;
  unsigned __int64 *puVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  unsigned char in_vs32 [16];
  unsigned char auVar16 [16];
  unsigned char in_vs33 [16];
  unsigned char in_vs34 [16];
  unsigned char in_vs35 [16];
  unsigned char in_vs36 [16];
  unsigned char auVar17 [16];
  unsigned char in_vs39 [16];
  unsigned char auVar18 [16];
  unsigned char auVar19 [16];
  unsigned char in_vs42 [16];
  unsigned char in_vs43 [16];
  unsigned char auVar20 [16];
  unsigned char in_vs44 [16];
  unsigned char in_vs45 [16];
  unsigned char auVar21 [16];
  unsigned char in_vs60 [16];
  unsigned char in_vs61 [16];
  unsigned char in_vs62 [16];
  unsigned char in_vs63 [16];
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float in_register_00010060;
  float in_register_00010064;
  float in_register_00010068;
  float in_vr6;
  unsigned char auStack_d0 [16];
  unsigned char auStack_c0 [16];
  unsigned char auStack_b0 [16];
  unsigned char auStack_a0 [16];
  unsigned char auStack_90 [144];
  
  iVar13 = *(int *)(param_1 + 0x25c);
  iVar12 = *(int *)(param_1 + 0x260);
  if (lbl_832700D4 != iVar13) {
    fn_82547F50(iVar13,0,param_2);
    lbl_832700D4 = iVar13;
  }
  if ((iVar12 != 0) && (lbl_832700D0 != iVar12)) {
    fn_82547F50(iVar12,2,param_2);
    lbl_832700D0 = iVar12;
  }
  if (lbl_832700D8 != 1) {
    fn_82631920(param_2,lbl_8327F904);
    fn_82631578(param_2,lbl_8327F984);
    lbl_832700D8 = 1;
  }
  *(unsigned int *)(param_2 + 0x2f04) = 7;
  *(unsigned int *)(param_2 + 0x28dc) =
       *(unsigned int *)(param_2 + 0x28dc) & 0xfffffff0 | -(unsigned int)(*(int *)(param_2 + 0x3148) != 0) & 7;
  *(unsigned __int64 *)(param_2 + 0x10) = *(unsigned __int64 *)(param_2 + 0x10) | 0x2000000000;
  uVar7 = ltcg_pool_0_0f;
  uVar1 = *(unsigned int *)(param_1 + 0x16c);
  *(unsigned int *)(param_2 + 0x1784) = ltcg_pool_0_0f;
  *(unsigned int *)(param_2 + 0x1788) = uVar7;
  *(unsigned int *)(param_2 + 0x178c) = uVar7;
  *(unsigned int *)(param_2 + 0x1780) = uVar1;
  *(unsigned __int64 *)(param_2 + 8) = *(unsigned __int64 *)(param_2 + 8) | 0x8000000000000000;
  if (((*(unsigned int *)(param_1 + 0x20) & 0x1000) == 0) && ((*(unsigned int *)(param_1 + 0x20) & 0x2000) == 0)) {
    iVar13 = 0;
    if (0 < *(short *)(param_1 + 6)) {
      iVar12 = param_1 + 0x348;
      do {
        if (*(short *)(iVar12 + -6) == -2) {
          fn_8262EDF0(iVar12);
          fn_825D4D38((double)(*(float *)(iVar12 + -0x2c) * *(float *)(param_1 + 0x184)),
                            param_2,iVar12 + -0xa8,iVar12 + -0x98);
        }
        iVar13 = iVar13 + 1;
        iVar12 = iVar12 + 0x1d0;
      } while (iVar13 < *(short *)(param_1 + 6));
    }
  }
  else {
    puVar11 = &lbl_83296890;
    puVar10 = (unsigned __int64 *)(&lbl_83296BE0 + param_3 * 0x2c);
    if ((&lbl_83296C80)[param_3 * 0x2c] == 0) {
      puVar10 = &lbl_832968D0;
    }
    else {
      puVar11 = &lbl_83296C20 + param_3 * 0x16;
    }
    pfVar6 = (float *)(in_r0 + (int)puVar10 & 0xfffffff0);
    fVar22 = *pfVar6;
    fVar23 = pfVar6[1];
    fVar24 = pfVar6[2];
    fVar25 = pfVar6[3];
    pfVar6 = (float *)(in_r0 + (int)puVar11 & 0xfffffff0);{ V16 _vt0 = vectorMergeHighWord(in_vs32,in_vs44); memcpy(auVar19, &_vt0, 16); }{ V16 _vt1 = vectorMergeLowWord(in_vs32,in_vs44); memcpy(auVar16, &_vt1, 16); }{ V16 _vt2 = vectorMergeHighWord(in_vs42,in_vs43); memcpy(auVar18, &_vt2, 16); }{ V16 _vt3 = vectorMergeLowWord(in_vs42,in_vs43); memcpy(auVar20, &_vt3, 16); }
    vectorMergeHighWord(auVar19,auVar18);{ V16 _vt4 = vectorMergeHighWord(auVar16,auVar20); memcpy(auVar17, &_vt4, 16); }{ V16 _vt5 = vectorMergeLowWord(auVar19,auVar18); memcpy(auVar19, &_vt5, 16); }
    vectorMergeLowWord(auVar16,auVar20);
    fVar2 = *pfVar6 * in_register_00010060 + pfVar6[1] * in_register_00010064 +
            pfVar6[2] * in_register_00010068 + pfVar6[3] * in_vr6;
    fVar3 = *pfVar6 * fVar22 + pfVar6[1] * fVar23 + pfVar6[2] * fVar24 + pfVar6[3] * fVar25;
    fVar4 = *(float *)(puVar11 + 2) * in_register_00010060 +
            *(float *)((int)puVar11 + 0x14) * in_register_00010064 +
            *(float *)(puVar11 + 3) * in_register_00010068 +
            *(float *)((int)puVar11 + 0x1c) * in_vr6;
    fVar5 = *(float *)(puVar11 + 6) * in_register_00010060 +
            *(float *)((int)puVar11 + 0x34) * in_register_00010064 +
            *(float *)(puVar11 + 7) * in_register_00010068 +
            *(float *)((int)puVar11 + 0x3c) * in_vr6;{ V16 _vt6 = vectorMergeHighWord(auVar20,auVar18); memcpy(auVar16, &_vt6, 16); }{ V16 _vt7 = vectorMergeHighWord(in_vs36,in_vs45); memcpy(auVar21, &_vt7, 16); }{ V16 _vt8 = vectorMergeHighWord(in_vs34,in_vs35); memcpy(auVar18, &_vt8, 16); }{ V16 _vt9 = vectorMergeHighWord(in_vs44,in_vs33); memcpy(auVar20, &_vt9, 16); }{ V16 _vt10 = vectorMergeHighWord(auVar16,auVar21); memcpy(auVar16, &_vt10, 16); }{ V16 _vt11 = vectorMergeHighWord(auVar20,auVar18); memcpy(auVar21, &_vt11, 16); }{ V16 _vt12 = vectorMergeHighWord(auVar19,in_vs60); memcpy(auVar20, &_vt12, 16); }{ V16 _vt13 = vectorMergeHighWord(in_vs62,in_vs63); memcpy(auVar18, &_vt13, 16); }{ V16 _vt14 = vectorMergeHighWord(in_vs42,auVar17); memcpy(auVar19, &_vt14, 16); }{ V16 _vt15 = vectorMergeHighWord(in_vs39,in_vs61); memcpy(auVar17, &_vt15, 16); }
    pfVar6 = (float *)((unsigned int)(auStack_c0 + in_r0) & 0xfffffff0);
    *pfVar6 = fVar22;
    pfVar6[1] = fVar23;
    pfVar6[2] = fVar24;
    pfVar6[3] = fVar25;{ V16 _vt16 = vectorMergeHighWord(auVar19,auVar20); memcpy(auVar19, &_vt16, 16); }
    pfVar6 = (float *)((unsigned int)(auStack_b0 + in_r0) & 0xfffffff0);
    *pfVar6 = fVar3;
    pfVar6[1] = fVar3;
    pfVar6[2] = fVar3;
    pfVar6[3] = fVar3;{ V16 _vt17 = vectorMergeHighWord(auVar17,auVar18); memcpy(auVar20, &_vt17, 16); }{ V16 _vt18 = vectorMergeHighWord(auVar21,auVar19); memcpy(auVar17, &_vt18, 16); }{ V16 _vt19 = vectorMergeHighWord(auVar16,auVar20); memcpy(auVar18, &_vt19, 16); }{ V16 _vt20 = vectorMergeLowWord(auVar16,auVar20); memcpy(auVar16, &_vt20, 16); }{ V16 _vt21 = vectorMergeLowWord(auVar21,auVar19); memcpy(auVar19, &_vt21, 16); }
    pfVar6 = (float *)((unsigned int)(auStack_90 + in_r0) & 0xfffffff0);
    *pfVar6 = fVar2;
    pfVar6[1] = fVar2;
    pfVar6[2] = fVar2;
    pfVar6[3] = fVar2;
    pfVar6 = (float *)((unsigned int)(auStack_a0 + in_r0) & 0xfffffff0);
    *pfVar6 = fVar4;
    pfVar6[1] = fVar4;
    pfVar6[2] = fVar4;
    pfVar6[3] = fVar4;
    vectorMergeHighWord(auVar18,auVar17);
    vectorMergeLowWord(auVar18,auVar17);
    vectorMergeHighWord(auVar16,auVar19);
    vectorMergeLowWord(auVar16,auVar19);
    pfVar6 = (float *)((unsigned int)(auStack_c0 + in_r0) & 0xfffffff0);
    *pfVar6 = fVar4;
    pfVar6[1] = fVar4;
    pfVar6[2] = fVar4;
    pfVar6[3] = fVar4;
    pfVar6 = (float *)((unsigned int)(auStack_b0 + in_r0) & 0xfffffff0);
    *pfVar6 = fVar2;
    pfVar6[1] = fVar2;
    pfVar6[2] = fVar2;
    pfVar6[3] = fVar2;
    pfVar6 = (float *)((unsigned int)(auStack_a0 + in_r0) & 0xfffffff0);
    *pfVar6 = fVar5;
    pfVar6[1] = fVar5;
    pfVar6[2] = fVar5;
    pfVar6[3] = fVar5;
    pfVar6 = (float *)((unsigned int)(auStack_90 + in_r0) & 0xfffffff0);
    *pfVar6 = fVar22;
    pfVar6[1] = fVar23;
    pfVar6[2] = fVar24;
    pfVar6[3] = fVar25;
    fn_826310E0(param_2,0,auStack_c0,4);
    iVar12 = 0;
    iVar13 = 0;
    if (0 < *(short *)(param_1 + 6)) {
      psVar9 = (short *)(param_1 + 0x342);
      do {
        if (*psVar9 == -2) {
          iVar12 = iVar12 + 1;
        }
        iVar13 = iVar13 + 1;
        psVar9 = psVar9 + 0xe8;
      } while (iVar13 < *(short *)(param_1 + 6));
      if (iVar12 != 0) {
        for (iVar13 = 0; iVar13 < 1; iVar13 = iVar13 + 1) {
          cVar8 = fn_825D4748(param_2,iVar12 << 2,auStack_d0);
          if (cVar8 != '\0') {
            iVar14 = 0;
            if (0 < *(short *)(param_1 + 6)) {
              iVar15 = param_1 + 0x348;
              do {
                if (*(short *)(iVar15 + -6) == -2) {
                  if ((*(unsigned int *)(param_1 + 0x20) & 0x1000) == 0) {
                    fn_8262EDF0(iVar15);
                    fn_825D4818((double)(*(float *)(iVar15 + -0x2c) * *(float *)(param_1 + 0x184)),
                                 (double)*(float *)(param_1 + 0x164),auStack_d0);
                  }
                  else {
                    fn_8262EDF0(iVar15);
                    fn_825D4A58((double)(*(float *)(iVar15 + -0x2c) *
                                              *(float *)(param_1 + 0x184)),
                                      (double)*(float *)(param_1 + 0x164),auStack_d0);
                  }
                }
                iVar14 = iVar14 + 1;
                iVar15 = iVar15 + 0x1d0;
              } while (iVar14 < *(short *)(param_1 + 6));
            }
            *(unsigned int *)(param_2 + 0x30) = *(unsigned int *)(param_2 + 0x3554);
            if (param_2 == lbl_8320A898) {
              fn_82645EA8();
            }
            else {
              fn_8264C1F8(param_2,0,0);
            }
          }
        }
      }
    }
  }
  *(unsigned int *)(param_2 + 0x2f04) = 0xf;
  *(unsigned int *)(param_2 + 0x28dc) =
       *(unsigned int *)(param_2 + 0x28dc) & 0xfffffff0 | -(unsigned int)(*(int *)(param_2 + 0x3148) != 0) & 0xf;
  *(unsigned __int64 *)(param_2 + 0x10) = *(unsigned __int64 *)(param_2 + 0x10) | 0x2000000000;
  return;
}

