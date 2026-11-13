typedef struct { unsigned __int64 lo, hi; } V16;
extern unsigned int *auStack_140;
extern unsigned int *auStack_f0;
extern int fn_82553A18();
extern int fn_82F68CC0();
extern int fn_82F6DA04();
extern int fn_82F6DC9C();
extern unsigned int iStack_12c;
extern unsigned int stack0x00000020;
extern unsigned int stack0x00000030;
extern unsigned int stack0x00000040;
extern unsigned int stack0x00000050;
extern unsigned int uStack_100;
extern unsigned int uStack_108;
extern unsigned int uStack_110;
extern unsigned int uStack_118;
extern unsigned int uStack_120;
extern unsigned int uStack_f8;
extern V16 vectorMergeHighWord();
extern void *memcpy(void *, const void *, unsigned int);


void fn_825A1840(unsigned __int64 param_1,unsigned __int64 param_2,unsigned __int64 param_3,unsigned __int64 param_4,
                  unsigned __int64 param_5,unsigned __int64 param_6,unsigned __int64 param_7,unsigned __int64 param_8)

{
  unsigned int uVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float *pfVar5;
  float *pfVar6;
  unsigned __int64 in_r0;
  int *piVar7;
  unsigned __int64 uVar8;
  __int64 lVar9;
  int iVar10;
  int *piVar11;
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
  unsigned char in_vs37 [16];
  unsigned char in_vs38 [16];
  unsigned char in_vs39 [16];
  unsigned char in_vs40 [16];
  unsigned char in_vs41 [16];
  unsigned char in_vs42 [16];
  unsigned char in_vs43 [16];
  unsigned char auVar17 [16];
  unsigned char in_vs44 [16];
  unsigned char in_vs45 [16];
  unsigned char auVar18 [16];
  unsigned char in_vs62 [16];
  unsigned char in_vs63 [16];
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  unsigned __int64 in_stack_00000020;
  unsigned __int64 in_stack_00000028;
  unsigned __int64 in_stack_00000030;
  unsigned __int64 in_stack_00000038;
  unsigned __int64 in_stack_00000040;
  unsigned __int64 in_stack_00000048;
  int in_stack_00000064;
  unsigned char auStack_140 [20];
  int iStack_12c;
  unsigned __int64 uStack_120;
  unsigned __int64 uStack_118;
  unsigned __int64 uStack_110;
  unsigned __int64 uStack_108;
  unsigned __int64 uStack_100;
  unsigned __int64 uStack_f8;
  unsigned char auStack_f0 [240];
  
  piVar7 = (int *)fn_82F6DA04();
  iVar13 = 0;
  in_stack_00000020 = param_3;
  in_stack_00000028 = param_4;
  in_stack_00000030 = param_5;
  in_stack_00000038 = param_6;
  in_stack_00000040 = param_7;
  in_stack_00000048 = param_8;
  if (0 < piVar7[1]) {
    iVar12 = 0;
    do {
      iStack_12c = *piVar7;
      fn_82F68CC0(auStack_140,&stack0x00000050,0x10);
      fn_82553A18(param_2,*(unsigned int *)(piVar7[2] + iVar12),param_3,param_4,param_5,param_6,
                        param_7,param_8);
      iVar13 = iVar13 + 1;
      iVar12 = iVar12 + 4;
    } while (iVar13 < piVar7[1]);
  }
  if (in_stack_00000064 != 0) {
    piVar11 = (int *)(*piVar7 + 0x98);
    if ((piVar11 != (int *)0x0) &&
       (uVar1 = *(unsigned int *)(*piVar7 + 0x9c), uVar8 = (unsigned __int64)uVar1, 0 < (int)uVar1)) {
      iVar12 = 0;
      iVar13 = (int)in_r0;
      fVar34 = *(float *)((unsigned int)(&stack0x00000050 + iVar13) & 0xfffffff0);
      fVar30 = ((float *)((unsigned int)(&stack0x00000050 + iVar13) & 0xfffffff0))[3];
      pfVar5 = (float *)((int)&stack0x00000040 + iVar13 & 0xfffffff0);
      fVar33 = *pfVar5;
      fVar29 = pfVar5[3];
      pfVar5 = (float *)((int)&stack0x00000030 + iVar13 & 0xfffffff0);
      fVar32 = *pfVar5;
      fVar28 = pfVar5[3];
      pfVar5 = (float *)((int)&stack0x00000020 + iVar13 & 0xfffffff0);
      fVar31 = *pfVar5;
      fVar27 = pfVar5[3];
      do {
        piVar7 = (int *)(*piVar11 + iVar12);
        if (piVar7[7] == 0) {
          iVar13 = *piVar7;
          lVar9 = (__int64)(piVar7[3] - piVar7[2] >> 6) + 1;
          if ((iVar13 != 0) && (0 < (int)lVar9)) {
            iVar10 = *(int *)(iVar13 + 0x120);
            do {
              iVar14 = 0;
              fVar20 = fVar27;
              fVar19 = fVar31;
              fVar22 = fVar28;
              fVar21 = fVar32;
              fVar24 = fVar29;
              fVar23 = fVar33;
              fVar26 = fVar30;
              fVar25 = fVar34;
              if (0 < iVar10) {
                iVar15 = 0;
                do {
                  pfVar5 = (float *)(piVar7[2] + 0x30U & 0xfffffff0);
                  iVar10 = (int)in_r0;
                  pfVar6 = (float *)(iVar10 + piVar7[2] & 0xfffffff0);
                  fVar2 = *pfVar5 * fVar27 + pfVar5[1] * fVar28 + pfVar5[2] * fVar29 +
                          pfVar5[3] * fVar30;
                  fVar3 = *pfVar5 * fVar31 + pfVar5[1] * fVar32 + pfVar5[2] * fVar33 +
                          pfVar5[3] * fVar34;
                  fVar4 = *pfVar6 * fVar31 + pfVar6[1] * fVar32 + pfVar6[2] * fVar33 +
                          pfVar6[3] * fVar34;{ V16 _vt0 = vectorMergeHighWord(in_vs43,in_vs45); memcpy(auVar18, &_vt0, 16); }{ V16 _vt1 = vectorMergeHighWord(in_vs32,in_vs41); memcpy(auVar16, &_vt1, 16); }{ V16 _vt2 = vectorMergeHighWord(in_vs38,in_vs39); memcpy(auVar17, &_vt2, 16); }
                  vectorMergeHighWord(auVar16,auVar18);{ V16 _vt3 = vectorMergeHighWord(in_vs44,in_vs37); memcpy(auVar16, &_vt3, 16); }{ V16 _vt4 = vectorMergeHighWord(in_vs35,in_vs36); memcpy(auVar18, &_vt4, 16); }{ V16 _vt5 = vectorMergeHighWord(auVar16,auVar17); memcpy(in_vs45, &_vt5, 16); }{ V16 _vt6 = vectorMergeHighWord(in_vs63,in_vs33); memcpy(in_vs43, &_vt6, 16); }
                  pfVar5 = (float *)((unsigned int)(auStack_f0 + iVar10) & 0xfffffff0);
                  *pfVar5 = fVar3;
                  pfVar5[1] = fVar3;
                  pfVar5[2] = fVar3;
                  pfVar5[3] = fVar3;{ V16 _vt7 = vectorMergeHighWord(in_vs42,in_vs34); memcpy(in_vs42, &_vt7, 16); }{ V16 _vt8 = vectorMergeHighWord(in_vs40,in_vs62); memcpy(auVar16, &_vt8, 16); }{ V16 _vt9 = vectorMergeHighWord(in_vs42,auVar18); memcpy(in_vs44, &_vt9, 16); }{ V16 _vt10 = vectorMergeHighWord(auVar16,in_vs43); memcpy(in_vs32, &_vt10, 16); }
                  pfVar5 = (float *)((int)&uStack_120 + iVar10 & 0xfffffff0);
                  *pfVar5 = fVar2;
                  pfVar5[1] = fVar2;
                  pfVar5[2] = fVar2;
                  pfVar5[3] = fVar2;
                  pfVar5 = (float *)((int)&uStack_110 + iVar10 & 0xfffffff0);
                  *pfVar5 = fVar4;
                  pfVar5[1] = fVar4;
                  pfVar5[2] = fVar4;
                  pfVar5[3] = fVar4;
                  pfVar5 = (float *)((int)&uStack_100 + iVar10 & 0xfffffff0);
                  *pfVar5 = fVar3;
                  pfVar5[1] = fVar3;
                  pfVar5[2] = fVar3;
                  pfVar5[3] = fVar3;
                  iStack_12c = iVar13;
                  fn_82F68CC0(auStack_140,auStack_f0,0x10);
                  fn_82553A18(param_2,*(unsigned int *)(iVar15 + *(int *)(iVar13 + 0x124)),
                                    uStack_120,uStack_118,uStack_110,uStack_108,uStack_100,uStack_f8
                                   );
                  iVar10 = *(int *)(iVar13 + 0x120);
                  iVar14 = iVar14 + 1;
                  iVar15 = iVar15 + 4;
                } while (iVar14 < iVar10);
              }
              fVar34 = fVar25;
              fVar30 = fVar26;
              fVar33 = fVar23;
              fVar29 = fVar24;
              fVar32 = fVar21;
              fVar28 = fVar22;
              fVar31 = fVar19;
              fVar27 = fVar20;
              lVar9 = lVar9 + -1;
            } while (lVar9 != 0);
          }
        }
        uVar8 = uVar8 - 1;
        iVar12 = iVar12 + 0x1a0;
      } while (uVar8 != 0);
    }
  }
  fn_82F6DC9C();
  return;
}

