typedef struct { unsigned __int64 lo, hi; } V16;
extern V16 vectorMultiplyAddFloatingPoint();
extern void *memcpy(void *, const void *, unsigned int);


void fn_829F98E0(int param_1,int param_2,unsigned int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  unsigned int *puVar6;
  float *pfVar7;
  int in_r0;
  unsigned int uVar8;
  int iVar9;
  unsigned short *puVar10;
  unsigned int uVar11;
  __int64 lVar12;
  unsigned char in_vs32 [16];
  unsigned char auVar13 [16];
  unsigned char in_vs35 [16];
  unsigned char in_vs36 [16];
  unsigned char in_vs38 [16];
  unsigned char in_vs41 [16];
  unsigned char in_vs42 [16];
  unsigned char in_vs43 [16];
  unsigned char in_vs44 [16];
  unsigned char in_vs45 [16];
  unsigned char in_vs58 [16];
  unsigned char in_vs63 [16];
  float in_register_00010330;
  float in_register_00010334;
  float in_register_00010338;
  float in_vr51;
  float in_register_00010350;
  float in_register_00010354;
  float in_register_00010358;
  float in_vr53;
  float in_register_00010360;
  float in_register_00010364;
  float in_register_00010368;
  float in_vr54;
  float in_register_00010370;
  float in_register_00010374;
  float in_register_00010378;
  float in_vr55;
  float in_register_000103a0;
  float in_register_000103b0;
  float in_register_000103b4;
  float in_register_000103b8;
  float in_vr59;
  unsigned int in_register_000103e0;
  
  puVar10 = (unsigned short *)(param_1 + 0x1c3fc);
  lVar12 = 0x12c0;
  do {
    if (*puVar10 == param_3) {
      *puVar10 = (unsigned short)param_2;
    }
    puVar10 = puVar10 + 8;
    lVar12 = lVar12 + -1;
  } while (lVar12 != 0);
  iVar2 = (param_3 + 0xdc4c) * 4;
  iVar3 = (param_2 + 0xdc4c) * 4;
  iVar9 = (param_2 + 0x33f3) * 0x10 + param_1;
  altv207_13(in_vs63,in_vs35);
  iVar4 = (param_2 + 0xdd14) * 4;
  altv300_21(in_vs32,in_vs41);
  altv300_21(in_vs32,in_vs38);
  iVar5 = (param_2 + 0xde40) * 4;{ V16 _vt0 = vectorMultiplyAddFloatingPoint(in_vs44,in_vs32,in_vs45); memcpy(auVar13, &_vt0, 16); }
  puVar6 = (unsigned int *)(in_r0 + iVar9 & 0xfffffff0);
  *puVar6 = in_register_000103e0;
  puVar6[1] = in_register_000103e0;
  puVar6[2] = in_register_000103e0;
  puVar6[3] = in_register_000103e0;
  iVar1 = *(int *)(iVar4 + param_1);
  uVar8 = *(int *)(iVar3 + param_1) + *(int *)(iVar2 + param_1);
  *(unsigned int *)(iVar3 + param_1) = uVar8;
  uVar11 = *(int *)((param_3 + 0xdd14) * 4 + param_1) + iVar1;
  *(unsigned int *)(iVar4 + param_1) = uVar11;
  trapWord(6,(unsigned __int64)uVar8,0);
  *(int *)(iVar5 + param_1) = *(int *)((param_3 + 0xde40) * 4 + param_1) + *(int *)(iVar5 + param_1)
  ;
  *(short *)((param_2 + 0x1bbb8) * 2 + param_1) =
       (short)((((unsigned __int64)uVar11 & 0xffffff) << 8) / (unsigned __int64)uVar8);
  trapWord(6,(unsigned __int64)*(unsigned int *)(iVar3 + param_1),0);
  *(short *)((param_2 + 0x1be10) * 2 + param_1) =
       (short)((((unsigned __int64)*(unsigned int *)(iVar5 + param_1) & 0xffffff) << 8) /
              (unsigned __int64)*(unsigned int *)(iVar3 + param_1));
  altv207_13(auVar13,in_vs42);
  altv300_21(auVar13,in_vs58);
  pfVar7 = (float *)(in_r0 + iVar9 & 0xfffffff0);
  *pfVar7 = in_register_000103b0 * in_register_000103a0;
  pfVar7[1] = in_register_000103b4 * in_register_000103a0;
  pfVar7[2] = in_register_000103b8 * in_register_000103a0;
  pfVar7[3] = in_vr59 * in_register_000103a0;
  *(unsigned int *)(iVar2 + param_1) = 0;
  altv207_13(in_vs38,in_vs35);
  altv207_13(auVar13,in_vs41);
  if (in_register_00010360 < in_register_00010350) {
    in_register_00010350 = in_register_00010360;
  }
  if (in_register_00010364 < in_register_00010354) {
    in_register_00010354 = in_register_00010364;
  }
  if (in_register_00010368 < in_register_00010358) {
    in_register_00010358 = in_register_00010368;
  }
  if (in_vr54 < in_vr53) {
    in_vr53 = in_vr54;
  }
  pfVar7 = (float *)(in_r0 + (param_2 + 0x34bb) * 0x10 + param_1 & 0xfffffff0);
  *pfVar7 = in_register_00010350;
  pfVar7[1] = in_register_00010354;
  pfVar7[2] = in_register_00010358;
  pfVar7[3] = in_vr53;
  altv207_13(auVar13,in_vs43);
  altv207_13(in_vs36,in_vs35);
  if (in_register_00010370 < in_register_00010330) {
    in_register_00010370 = in_register_00010330;
  }
  if (in_register_00010374 < in_register_00010334) {
    in_register_00010374 = in_register_00010334;
  }
  if (in_register_00010378 < in_register_00010338) {
    in_register_00010378 = in_register_00010338;
  }
  if (in_vr55 < in_vr51) {
    in_vr55 = in_vr51;
  }
  pfVar7 = (float *)(in_r0 + (param_2 + 0x3583) * 0x10 + param_1 & 0xfffffff0);
  *pfVar7 = in_register_00010370;
  pfVar7[1] = in_register_00010374;
  pfVar7[2] = in_register_00010378;
  pfVar7[3] = in_vr55;
  return;
}

