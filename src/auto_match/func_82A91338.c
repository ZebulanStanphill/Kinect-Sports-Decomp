#define ZEXT48(x) ((unsigned __int64)((unsigned int)(x)))
extern int fn_82A8B5F8();
extern int fn_82A8F3C0();
extern int fn_82A90798();
extern int fn_82A912A0();
extern unsigned int lbl_8315FA80;
extern unsigned int stack0x00000000;


void fn_82A91338(int param_1,unsigned int param_2,int param_3,int param_4,int param_5)

{
  float fVar1;
  float *pfVar2;
  int iVar3;
  int in_r0;
  unsigned int uVar4;
  char cVar5;
  __int64 lVar6;
  unsigned int uVar7;
  unsigned __int64 uVar8;
  __int64 lVar9;
  unsigned __int64 uVar10;
  unsigned char in_vs32 [16];
  unsigned char in_vs41 [16];
  unsigned char in_vs42 [16];
  unsigned char in_vs43 [16];
  unsigned char in_vs59 [16];
  unsigned char in_vs60 [16];
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
  
  uVar10 = ZEXT48(&stack0x00000000);
  altv207_13(in_vs32,in_vs43);
  uVar7 = param_2 & 0x1fff;
  altv207_13(in_vs32,in_vs42);
  pfVar2 = (float *)(in_r0 + param_4 & 0xfffffff0);
  *pfVar2 = in_register_000103f0;
  pfVar2[1] = in_register_000103f4;
  pfVar2[2] = in_register_000103f8;
  pfVar2[3] = in_vr63;
  pfVar2 = (float *)(in_r0 + param_5 & 0xfffffff0);
  *pfVar2 = in_register_000103e0;
  pfVar2[1] = in_register_000103e4;
  pfVar2[2] = in_register_000103e8;
  pfVar2[3] = in_vr62;
  if (*(int *)(param_1 + 0x5970) == 0) {
    uVar7 = param_2 & 0xfff;
  }
  uVar4 = *(unsigned int *)(param_1 + 0x5988);
  if (param_3 == 0) {
    uVar4 = (*(int *)(param_1 + 0x5924) * *(int *)(param_1 + 0x591c) + 0x187 >> 3) +
            *(int *)(param_1 + 0x5984);
  }
  else if (param_3 == 1) {
    uVar4 = fn_82A8F3C0(param_1);
  }
  if (*(unsigned int *)(param_1 + 0x5988) <= uVar4) {
    return;
  }
  uVar8 = 0;
  fn_82A8B5F8(uVar10 - 0x230,*(unsigned int *)(param_1 + 0x598c));
  if (uVar7 == 0x1fff) {
    uVar8 = 0xd;
    cVar5 = fn_82A90798(uVar10 - 0x240,uVar10 - 0x230,uVar10 - 0x1d0,0xd,0x20);
    if (cVar5 == '\0') {
      return;
    }
  }
  else {
    if (uVar7 == 0) {
      return;
    }
    lVar6 = uVar10 - 0x214;
    uVar4 = 0;
    lVar9 = 0xd;
    do {
      if ((uVar7 & 1 << (uVar4 & 0x3f)) != 0) {
        lVar6 = lVar6 + 4;
        *(unsigned int *)lVar6 = uVar4;
        uVar8 = uVar8 + 1;
      }
      uVar4 = uVar4 + 1;
      lVar9 = lVar9 + -1;
    } while (lVar9 != 0);
    cVar5 = fn_82A912A0(uVar10 - 0x240,uVar10 - 0x230,uVar10 - 0x1d0,uVar8,uVar10 - 0x210,0x20
                             );
    uVar8 = -(unsigned __int64)(cVar5 != '\0') & uVar8;
    if ((int)uVar8 == 0) {
      return;
    }
  }
  if ((lbl_8315FA80 != 1) && (-1 < (__int64)(uVar8 - 1))) {
    lVar6 = (uVar8 - 1 & 0x7ffffff) * 0x20 + (uVar10 - 0x198);
    uVar10 = uVar8;
    do {
      iVar3 = (int)lVar6;
      fVar1 = *(float *)(iVar3 + -0x30);
      *(float *)(iVar3 + -0x30) = -*(float *)(iVar3 + -0x20);
      lVar6 = lVar6 + -0x20;
      *(float *)lVar6 = -fVar1;
      uVar10 = uVar10 - 1;
    } while (uVar10 != 0);
  }
  lVar6 = uVar8 - 1;
  altv207_13(in_vs32,in_vs42);
  altv207_13(in_vs32,in_vs41);
  pfVar2 = (float *)(in_r0 + param_4 & 0xfffffff0);
  *pfVar2 = in_register_000103f0;
  pfVar2[1] = in_register_000103f4;
  pfVar2[2] = in_register_000103f8;
  pfVar2[3] = in_vr63;
  pfVar2 = (float *)(in_r0 + param_5 & 0xfffffff0);
  *pfVar2 = in_register_000103e0;
  pfVar2[1] = in_register_000103e4;
  pfVar2[2] = in_register_000103e8;
  pfVar2[3] = in_vr62;
  if (0 < (int)lVar6) {
    do {
      altv207_13(in_vs32,in_vs60);
      altv207_13(in_vs32,in_vs43);
      altv207_13(in_vs43,in_vs42);
      if (in_register_000103d0 < in_register_000103f0) {
        in_register_000103f0 = in_register_000103d0;
      }
      if (in_register_000103d4 < in_register_000103f4) {
        in_register_000103f4 = in_register_000103d4;
      }
      if (in_register_000103d8 < in_register_000103f8) {
        in_register_000103f8 = in_register_000103d8;
      }
      if (in_vr61 < in_vr63) {
        in_vr63 = in_vr61;
      }
      pfVar2 = (float *)(in_r0 + param_4 & 0xfffffff0);
      *pfVar2 = in_register_000103f0;
      pfVar2[1] = in_register_000103f4;
      pfVar2[2] = in_register_000103f8;
      pfVar2[3] = in_vr63;
      altv207_13(in_vs32,in_vs59);
      if (in_register_000103f0 < in_register_000103e0) {
        in_register_000103f0 = in_register_000103e0;
      }
      if (in_register_000103f4 < in_register_000103e4) {
        in_register_000103f4 = in_register_000103e4;
      }
      if (in_register_000103f8 < in_register_000103e8) {
        in_register_000103f8 = in_register_000103e8;
      }
      if (in_vr63 < in_vr62) {
        in_vr63 = in_vr62;
      }
      pfVar2 = (float *)(in_r0 + param_5 & 0xfffffff0);
      *pfVar2 = in_register_000103f0;
      pfVar2[1] = in_register_000103f4;
      pfVar2[2] = in_register_000103f8;
      pfVar2[3] = in_vr63;
      lVar6 = lVar6 + -1;
    } while (lVar6 != 0);
  }
  return;
}

