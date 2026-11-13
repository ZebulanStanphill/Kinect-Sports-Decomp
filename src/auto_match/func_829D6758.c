extern unsigned int *auStack_40;
extern unsigned int *auStack_60;
extern unsigned int fStack_38;
extern int fn_824DCB30();
extern int fn_829CFE50();
extern int fn_829D4E08();
extern unsigned int iStack_54;
extern unsigned int lbl_832179FC;
extern unsigned int uStack_58;
extern unsigned int uStack_5c;


void fn_829D6758(unsigned int *param_1)

{
  unsigned int uVar1;
  unsigned int uVar2;
  float *pfVar3;
  unsigned int *puVar4;
  unsigned int *puVar5;
  int in_r0;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  unsigned char in_vs32 [16];
  unsigned char in_vs40 [16];
  unsigned char in_vs41 [16];
  unsigned char in_vs42 [16];
  unsigned char in_vs43 [16];
  unsigned int uVar10;
  unsigned int uVar11;
  unsigned int uVar12;
  float in_register_000103d0;
  float in_register_000103d4;
  float in_register_000103d8;
  float in_vr61;
  float in_register_000103e0;
  float in_register_000103e4;
  float in_register_000103e8;
  float in_vr62;
  float in_register_000103f0;
  float in_register_000103f4;
  float in_register_000103f8;
  float in_vr63;
  unsigned short auStack_60 [2];
  unsigned int uStack_5c;
  unsigned int uStack_58;
  int iStack_54;
  int aiStack_50 [4];
  unsigned char auStack_40 [8];
  float fStack_38;
  
  iVar9 = lbl_832179FC + 0x24980;
  RtlEnterCriticalSection(iVar9);
  iVar8 = lbl_832179FC;
  if (param_1[0x1a] == 2) {
    iVar6 = fn_829D4E08(*param_1,param_1[2]);
    uVar2 = param_1[0x17];
    uVar1 = *(unsigned int *)(iVar6 + 0x50);
    trapWord(6,(unsigned __int64)uVar1,0);
    iVar6 = *(int *)((uVar2 - (uVar2 / uVar1) * uVar1) * 4 + iVar6);
    param_1[0x17] = uVar2 + 1;
    if (iVar6 == 3) goto LAB_829d6954;
    param_1[0x1b] = iVar6;
  }
  else {
    param_1[0x1b] = 0;
  }
  uVar2 = param_1[0x1b];
  if (uVar2 == 0) {
    puVar4 = (unsigned int *)(param_1[3] * 0x150 + iVar8 + 0xf0U & 0xfffffff0);
    uVar10 = puVar4[1];
    uVar11 = puVar4[2];
    uVar12 = puVar4[3];
    puVar5 = (unsigned int *)((unsigned int)(auStack_40 + in_r0) & 0xfffffff0);
    *puVar5 = *puVar4;
    puVar5[1] = uVar10;
    puVar5[2] = uVar11;
    puVar5[3] = uVar12;
  }
  else {
    if (uVar2 != 1) {
      if (uVar2 < 3) {
        param_1[0x1c] = 0;
        param_1[0x1d] = 0;
        param_1[0x1e] = 0;
      }
      goto LAB_829d6954;
    }
    altv207_13(in_vs32,in_vs42);
    altv207_13(in_vs42,in_vs43);
    altv207_13(in_vs42,in_vs41);
    altv300_21(in_vs32,in_vs40);
    pfVar3 = (float *)((unsigned int)(auStack_40 + in_r0) & 0xfffffff0);
    *pfVar3 = (in_register_000103d0 + in_register_000103e0 + in_register_000103f0) *
              in_register_000103d0;
    pfVar3[1] = (in_register_000103d4 + in_register_000103e4 + in_register_000103f4) *
                in_register_000103d0;
    pfVar3[2] = (in_register_000103d8 + in_register_000103e8 + in_register_000103f8) *
                in_register_000103d0;
    pfVar3[3] = (in_vr61 + in_vr62 + in_vr63) * in_register_000103d0;
  }
  if (*(float *)(lbl_832179FC + 0x8f030) <= fStack_38) {
    fn_824DCB30(&uStack_58,&uStack_5c,auStack_60);
    fn_829CFE50(2,0,uStack_58,uStack_5c,auStack_60[0],&iStack_54,aiStack_50);
    param_1[0x1c] = 1;
    iVar8 = (aiStack_50[0] + -0xf0) * 2;
    param_1[0x1e] = iVar8;
    iVar6 = (iStack_54 + -0x140) * 2;
    param_1[0x1d] = iVar6;
    iVar7 = iVar6;
    if (iVar6 < -0x13f) {
      iVar7 = -0x140;
    }
    if (iVar7 < 0x140) {
      if (iVar6 < -0x13f) {
        iVar6 = -0x140;
      }
    }
    else {
      iVar6 = 0x140;
    }
    param_1[0x1d] = iVar6;
    iVar6 = iVar8;
    if (iVar8 < -0xef) {
      iVar6 = -0xf0;
    }
    if (iVar6 < 0xf0) {
      if (iVar8 < -0xef) {
        iVar8 = -0xf0;
      }
    }
    else {
      iVar8 = 0xf0;
    }
    param_1[0x1e] = iVar8;
  }
  else {
    param_1[0x1c] = 0;
    param_1[0x1d] = 0;
    param_1[0x1e] = 0;
  }
LAB_829d6954:
  RtlLeaveCriticalSection(iVar9);
  return;
}

