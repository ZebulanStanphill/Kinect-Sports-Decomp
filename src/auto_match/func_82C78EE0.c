typedef unsigned char bool;
typedef struct { unsigned __int64 lo, hi; } V16;
extern int fn_82C69588();
extern int fn_82C787E8();
extern unsigned int lbl_820FC514;
extern unsigned int lbl_8329F088;
extern unsigned int lbl_8329F090;
extern V16 vectorSplatHalfWord();
extern V16 vectorSplatImmediateSignedHalfWord();
extern V16 vectorSubtractSignedHalfWordSaturate();
extern void *memcpy(void *, const void *, unsigned int);


void fn_82C78EE0(int param_1,int param_2)

{
  unsigned char bVar1;
  unsigned int *puVar2;
  unsigned short uVar3;
  int in_r0;
  unsigned __int64 uVar4;
  unsigned short *puVar5;
  unsigned int *puVar6;
  unsigned int uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  unsigned int uVar16;
  unsigned char *puVar17;
  __int64 lVar18;
  unsigned char auVar19 [16];
  unsigned char in_vs44 [16];
  unsigned char auVar20 [16];
  unsigned int in_register_00010000;
  unsigned int in_ACC;
  unsigned int in_register_00010008;
  unsigned int in_vr0;
  unsigned int in_register_000100b0;
  unsigned int in_register_000100b4;
  unsigned int in_register_000100b8;
  unsigned int in_vr11;
  
  iVar10 = *(int *)(param_1 + 0xee4);
  if (*(int *)(param_1 + 0xed0) == 0) {
    iVar11 = 0;
  }
  else {
    iVar11 = *(int *)(param_1 + 0xe0) + *(int *)(param_1 + 0xed0);
  }
  if (*(int *)(param_1 + 0xed4) == 0) {
    iVar12 = 0;
  }
  else {
    iVar12 = *(int *)(param_1 + 0xe0) + *(int *)(param_1 + 0xed4);
  }
  iVar13 = *(int *)(param_1 + 0xef4);
  if (*(int *)(param_1 + 0xeec) == 0) {
    iVar14 = 0;
  }
  else {
    iVar14 = *(int *)(param_1 + 0xe0) + *(int *)(param_1 + 0xeec);
  }
  if (*(int *)(param_1 + 0xef0) == 0) {
    iVar15 = 0;
  }
  else {
    iVar15 = *(int *)(param_1 + 0xe0) + *(int *)(param_1 + 0xef0);
  }
  fn_82C787E8(param_1,param_2);
  *(unsigned int *)(param_2 + 8) = *(unsigned int *)(param_1 + 0x16c);
  *(int *)(param_2 + 0xc) = *(int *)(param_1 + 0x50d0) * 0x90 + *(int *)(param_1 + 0x170);
  *(int *)(param_2 + 0x10) = *(int *)(param_1 + 0x50d0) * 0x120 + *(int *)(param_1 + 0x174);
  *(int *)(param_2 + 0x14) = *(int *)(param_1 + 0x50d0) * 0x1f8 + *(int *)(param_1 + 0x178);
  *(char *)(param_2 + 0x18) =
       (char)*(unsigned int *)(param_1 + 0xf8) * '\x02' + (char)*(unsigned int *)(param_1 + 0xfc) + -1;
  *(char *)(param_2 + 0x19) = (char)*(unsigned int *)(param_1 + 0x160);
  *(char *)(param_2 + 0x1a) = (char)*(unsigned int *)(param_1 + 0x15c);
  *(unsigned int *)(param_2 + 0x150) = *(unsigned int *)(param_1 + 0x94c);
  *(unsigned int *)(param_2 + 0x154) = *(unsigned int *)(param_1 + 0x51e8);
  *(unsigned int *)(param_2 + 0x158) = *(unsigned int *)(param_1 + 0x51fc);
  *(char *)(param_2 + 0x1b) = (char)*(unsigned int *)(param_1 + 0x11c);
  *(char *)(param_2 + 0x1c) = (char)*(unsigned int *)(param_1 + 0x18c);
  *(char *)(param_2 + 0x1d) = (char)*(unsigned int *)(param_1 + 0x14c);
  *(bool *)(param_2 + 0x1e) = *(int *)(param_1 + 0xfb0) == 3 || *(int *)(param_1 + 0xfb0) == 2;
  *(unsigned int *)(param_2 + 0x164) = *(unsigned int *)(param_1 + 0x860);
  *(unsigned int *)(param_2 + 0x168) = *(unsigned int *)(param_1 + 0x9d8);
  *(unsigned short *)(param_2 + 0x2e) = 0;
  *(unsigned short *)(param_2 + 0x2c) = 0;
  *(short *)(param_2 + 0x3e) = (short)*(unsigned int *)(param_1 + 0x1a4);
  *(short *)(param_2 + 0x40) = (short)*(unsigned int *)(param_1 + 0x1a8);
  *(short *)(param_2 + 0x42) = (short)*(unsigned int *)(param_1 + 0x1ac);
  *(short *)(param_2 + 0x44) = (short)*(unsigned int *)(param_1 + 0x1b0);
  *(short *)(param_2 + 0x46) = (short)*(unsigned int *)(param_1 + 0x19c);
  *(short *)(param_2 + 0x48) = (short)*(unsigned int *)(param_1 + 0x1a0);
  *(char *)(param_2 + 0x20) = (char)*(unsigned int *)(param_1 + 0x39f4);
  *(char *)(param_2 + 0x1f) = (char)*(unsigned int *)(param_1 + 0x704);
  *(char *)(param_2 + 0x22) = (char)*(unsigned int *)(param_1 + 0x154);
  *(unsigned int *)(param_2 + 0x184) = *(unsigned int *)(param_1 + 0x19d0);
  uVar16 = *(unsigned int *)(param_1 + 0x39e0);
  *(int *)(param_2 + 400) = param_1 + 0xb88;
  *(unsigned int *)(param_2 + 0x188) = uVar16;
  *(int *)(param_2 + 0x18c) = param_1 + 0xb7c;
  *(unsigned int *)(param_2 + 0x194) = *(unsigned int *)(param_1 + 0xb64);
  *(unsigned int *)(param_2 + 0x198) = *(unsigned int *)(param_1 + 0xb68);
  *(unsigned int *)(param_2 + 0x19c) = *(unsigned int *)(param_1 + 0xb6c);
  *(unsigned int *)(param_2 + 0x1a0) = *(unsigned int *)(param_1 + 0xb70);
  *(unsigned int *)(param_2 + 0x1a4) = *(unsigned int *)(param_1 + 0xb74);
  *(unsigned int *)(param_2 + 0x1a8) = *(unsigned int *)(param_1 + 0xb78);
  *(unsigned int *)(param_2 + 0x60) = *(unsigned int *)(param_1 + 0x798);
  *(char *)(param_2 + 0x21) = (char)*(unsigned int *)(param_1 + 0xbbc);
  *(unsigned int *)(param_2 + 0x1bc) = *(unsigned int *)(param_1 + 0x72c);
  *(char *)(param_2 + 0x30) = (char)*(unsigned int *)(param_1 + 0x1cc);
  *(unsigned char *)(param_2 + 0x31) = 0;
  *(char *)(param_2 + 0x23) = (char)*(unsigned int *)(param_1 + 0xf78);
  *(short *)(param_2 + 0x170) = (short)*(unsigned int *)(param_1 + 0x88) * -6;
  *(short *)(param_2 + 0x172) = (short)*(unsigned int *)(param_1 + 0x88) << 1;
  *(short *)(param_2 + 0x174) = (short)*(unsigned int *)(param_1 + 0x88) << 1;
  *(short *)(param_2 + 0x176) = (short)*(unsigned int *)(param_1 + 0x88) << 1;
  *(short *)(param_2 + 0x16c) = -(short)*(unsigned int *)(param_1 + 0x88);
  *(short *)(param_2 + 0x16e) = (short)*(unsigned int *)(param_1 + 0x88);
  if (iVar10 == 0) {
    iVar9 = 0;
  }
  else {
    iVar9 = (*(int *)(param_1 + 0xcc) >> 1) * *(int *)(param_1 + 0x50d0) + iVar10;
  }
  *(int *)(param_2 + 0x1d0) = iVar9;
  iVar8 = iVar9 + 8;
  if (iVar9 == 0) {
    iVar8 = 0;
  }
  *(int *)(param_2 + 0x1d4) = iVar8;
  if (iVar9 == 0) {
    iVar8 = 0;
  }
  else {
    iVar8 = *(int *)(param_1 + 0xcc) * 8 + iVar9;
  }
  *(int *)(param_2 + 0x1d8) = iVar8;
  if (iVar9 == 0) {
    iVar9 = 0;
  }
  else {
    iVar9 = (*(int *)(param_1 + 0xcc) + 1) * 8 + iVar9;
  }
  *(int *)(param_2 + 0x1dc) = iVar9;
  if (iVar11 == 0) {
    iVar9 = 0;
  }
  else {
    iVar9 = (*(int *)(param_1 + 0xd0) >> 1) * *(int *)(param_1 + 0x50d0) + iVar11;
  }
  *(int *)(param_2 + 0x1e0) = iVar9;
  if (iVar12 == 0) {
    iVar9 = 0;
  }
  else {
    iVar9 = (*(int *)(param_1 + 0xd0) >> 1) * *(int *)(param_1 + 0x50d0) + iVar12;
  }
  *(int *)(param_2 + 0x1e4) = iVar9;
  if (iVar13 == 0) {
    iVar9 = 0;
  }
  else {
    iVar9 = (*(int *)(param_1 + 0xcc) >> 1) * *(int *)(param_1 + 0x50d0) + iVar13;
  }
  *(int *)(param_2 + 0x200) = iVar9;
  iVar8 = iVar9 + 8;
  if (iVar9 == 0) {
    iVar8 = 0;
  }
  *(int *)(param_2 + 0x204) = iVar8;
  if (iVar9 == 0) {
    iVar8 = 0;
  }
  else {
    iVar8 = *(int *)(param_1 + 0xcc) * 8 + iVar9;
  }
  *(int *)(param_2 + 0x208) = iVar8;
  if (iVar9 == 0) {
    iVar9 = 0;
  }
  else {
    iVar9 = (*(int *)(param_1 + 0xcc) + 1) * 8 + iVar9;
  }
  *(int *)(param_2 + 0x20c) = iVar9;
  if (iVar14 == 0) {
    iVar9 = 0;
  }
  else {
    iVar9 = (*(int *)(param_1 + 0xd0) >> 1) * *(int *)(param_1 + 0x50d0) + iVar14;
  }
  *(int *)(param_2 + 0x210) = iVar9;
  if (iVar15 == 0) {
    iVar9 = 0;
  }
  else {
    iVar9 = (*(int *)(param_1 + 0xd0) >> 1) * *(int *)(param_1 + 0x50d0) + iVar15;
  }
  *(int *)(param_2 + 0x214) = iVar9;
  if (*(int *)(param_1 + 0x54c8) == 0) {
    if (iVar10 == 0) {
      iVar10 = 0;
    }
    else {
      iVar10 = (*(int *)(param_1 + 0xcc) >> 1) * *(int *)(param_1 + 0x50d0) + iVar10;
    }
    *(int *)(param_2 + 0x1e8) = iVar10;
    iVar9 = iVar10 + 8;
    if (iVar10 == 0) {
      iVar9 = 0;
    }
    *(int *)(param_2 + 0x1ec) = iVar9;
    if (iVar10 == 0) {
LAB_82c7936c:
      iVar9 = 0;
    }
    else {
      iVar9 = *(int *)(param_1 + 0xcc) * 8 + iVar10;
    }
LAB_82c79370:
    *(int *)(param_2 + 0x1f0) = iVar9;
    if (iVar10 == 0) {
      iVar10 = 0;
    }
    else {
      iVar10 = (*(int *)(param_1 + 0xcc) + 1) * 8 + iVar10;
    }
    *(int *)(param_2 + 500) = iVar10;
    if (iVar11 == 0) {
      iVar11 = 0;
    }
    else {
      iVar11 = (*(int *)(param_1 + 0xd0) >> 1) * (*(unsigned int *)(param_1 + 0x50d0) ^ 1) + iVar11;
    }
    *(int *)(param_2 + 0x1f8) = iVar11;
    if (iVar12 != 0) {
      iVar12 = (*(int *)(param_1 + 0xd0) >> 1) * (*(unsigned int *)(param_1 + 0x50d0) ^ 1) + iVar12;
      goto LAB_82c79544;
    }
  }
  else {
    if ((*(int *)(param_1 + 0x120) == 2) && (*(int *)(param_1 + 0x50f8) != 0)) {
      if (iVar10 == 0) {
        iVar10 = 0;
      }
      else {
        iVar10 = (*(int *)(param_1 + 0xcc) >> 1) + iVar10;
      }
      *(int *)(param_2 + 0x1e8) = iVar10;
      iVar9 = iVar10 + 8;
      if (iVar10 == 0) {
        iVar9 = 0;
      }
      *(int *)(param_2 + 0x1ec) = iVar9;
      if (iVar10 == 0) goto LAB_82c7936c;
      iVar9 = *(int *)(param_1 + 0xcc) * 8 + iVar10;
      goto LAB_82c79370;
    }
    if (*(int *)(param_1 + 0xec0) == 0) {
      iVar10 = 0;
    }
    else {
      iVar10 = (*(int *)(param_1 + 0xcc) >> 1) * *(int *)(param_1 + 0x50d0) +
               *(int *)(param_1 + 0xdc) + *(int *)(param_1 + 0xec0);
    }
    *(int *)(param_2 + 0x1e8) = iVar10;
    iVar11 = iVar10 + 8;
    if (iVar10 == 0) {
      iVar11 = 0;
    }
    *(int *)(param_2 + 0x1ec) = iVar11;
    if (iVar10 == 0) {
      iVar11 = 0;
    }
    else {
      iVar11 = *(int *)(param_1 + 0xcc) * 8 + iVar10;
    }
    *(int *)(param_2 + 0x1f0) = iVar11;
    if (iVar10 == 0) {
      iVar10 = 0;
    }
    else {
      iVar10 = (*(int *)(param_1 + 0xcc) + 1) * 8 + iVar10;
    }
    *(int *)(param_2 + 500) = iVar10;
    if (*(int *)(param_1 + 0xec4) == 0) {
      iVar10 = 0;
    }
    else {
      iVar10 = (*(int *)(param_1 + 0xd0) >> 1) * (*(unsigned int *)(param_1 + 0x50d0) ^ 1) +
               *(int *)(param_1 + 0xe0) + *(int *)(param_1 + 0xec4);
    }
    *(int *)(param_2 + 0x1f8) = iVar10;
    if (*(int *)(param_1 + 0xec8) != 0) {
      iVar12 = (*(int *)(param_1 + 0xd0) >> 1) * (*(unsigned int *)(param_1 + 0x50d0) ^ 1) +
               *(int *)(param_1 + 0xe0) + *(int *)(param_1 + 0xec8);
      goto LAB_82c79544;
    }
  }
  iVar12 = 0;
LAB_82c79544:
  *(int *)(param_2 + 0x1fc) = iVar12;
  if (iVar13 == 0) {
    iVar13 = 0;
  }
  else {
    iVar13 = (*(int *)(param_1 + 0xcc) >> 1) * *(int *)(param_1 + 0x50d0) + iVar13;
  }
  *(int *)(param_2 + 0x218) = iVar13;
  iVar10 = iVar13 + 8;
  if (iVar13 == 0) {
    iVar10 = 0;
  }
  *(int *)(param_2 + 0x21c) = iVar10;
  if (iVar13 == 0) {
    iVar10 = 0;
  }
  else {
    iVar10 = *(int *)(param_1 + 0xcc) * 8 + iVar13;
  }
  *(int *)(param_2 + 0x220) = iVar10;
  if (iVar13 == 0) {
    iVar13 = 0;
  }
  else {
    iVar13 = (*(int *)(param_1 + 0xcc) + 1) * 8 + iVar13;
  }
  *(int *)(param_2 + 0x224) = iVar13;
  if (iVar14 == 0) {
    iVar14 = 0;
  }
  else {
    iVar14 = (*(int *)(param_1 + 0xd0) >> 1) * (*(unsigned int *)(param_1 + 0x50d0) ^ 1) + iVar14;
  }
  *(int *)(param_2 + 0x228) = iVar14;
  if (iVar15 == 0) {
    iVar15 = 0;
  }
  else {
    iVar15 = (*(int *)(param_1 + 0xd0) >> 1) * (*(unsigned int *)(param_1 + 0x50d0) ^ 1) + iVar15;
  }
  *(int *)(param_2 + 0x22c) = iVar15;
  *(unsigned short *)(param_2 + 0x498) = 2;
  iVar10 = 0;
  uVar7 = *(int *)(param_1 + 0xcc) + 0x20;
  lVar18 = 0x10;
  puVar5 = (unsigned short *)(param_2 + 0x4a6);
  *(short *)(param_2 + 0x49a) = (short)((int)(uVar7 * 4 | uVar7 >> 0x1e) >> 6);
  uVar7 = *(int *)(param_1 + 0xcc) + 0x10;
  *(short *)(param_2 + 0x49c) = (short)((int)(uVar7 * 8 | uVar7 >> 0x1d) >> 6);
  *(short *)(param_2 + 0x49e) = (short)(*(int *)(param_1 + 0xcc) * 0xc + 0x80 >> 6);
  uVar7 = *(int *)(param_1 + 0xcc) + 8;
  *(short *)(param_2 + 0x4a0) = (short)((int)(uVar7 * 0x10 | uVar7 >> 0x1c) >> 6);
  *(short *)(param_2 + 0x4a2) = (short)(*(int *)(param_1 + 0xcc) * 0x14 + 0x80 >> 6);
  *(short *)(param_2 + 0x4a4) = (short)(*(int *)(param_1 + 0xcc) * 0x18 + 0x80 >> 6);
  *(short *)(param_2 + 0x4a6) = (short)(*(int *)(param_1 + 0xcc) * 0x1c + 0x80 >> 6);
  do {
    iVar11 = *(int *)(param_1 + 0xd0) * iVar10;
    iVar10 = iVar10 + 1;
    puVar5 = puVar5 + 1;
    *puVar5 = (short)(iVar11 + 0x80 >> 6);
    lVar18 = lVar18 + -1;
  } while (lVar18 != 0);
  if (*(int *)(param_1 + 0xec0) == 0) {
    iVar10 = 0;
  }
  else {
    iVar10 = (*(int *)(param_1 + 0xcc) >> 1) * *(int *)(param_1 + 0x50d0) + *(int *)(param_1 + 0xdc)
             + *(int *)(param_1 + 0xec0);
  }
  *(int *)(param_2 + 0x230) = iVar10;
  iVar11 = iVar10 + 8;
  if (iVar10 == 0) {
    iVar11 = 0;
  }
  *(int *)(param_2 + 0x234) = iVar11;
  if (iVar10 == 0) {
    iVar11 = 0;
  }
  else {
    iVar11 = *(int *)(param_1 + 0xcc) * 8 + iVar10;
  }
  *(int *)(param_2 + 0x238) = iVar11;
  if (iVar10 == 0) {
    iVar10 = 0;
  }
  else {
    iVar10 = (*(int *)(param_1 + 0xcc) + 1) * 8 + iVar10;
  }
  *(int *)(param_2 + 0x23c) = iVar10;
  if (*(int *)(param_1 + 0xec4) == 0) {
    iVar10 = 0;
  }
  else {
    iVar10 = (*(int *)(param_1 + 0xd0) >> 1) * *(int *)(param_1 + 0x50d0) + *(int *)(param_1 + 0xe0)
             + *(int *)(param_1 + 0xec4);
  }
  *(int *)(param_2 + 0x240) = iVar10;
  if (*(int *)(param_1 + 0xec8) == 0) {
    iVar10 = 0;
  }
  else {
    iVar10 = (*(int *)(param_1 + 0xd0) >> 1) * *(int *)(param_1 + 0x50d0) + *(int *)(param_1 + 0xe0)
             + *(int *)(param_1 + 0xec8);
  }
  *(int *)(param_2 + 0x244) = iVar10;
  uVar16 = *(unsigned int *)(param_1 + 0xbc8);
  *(unsigned int *)(param_2 + 0x24c) = uVar16;
  *(unsigned int *)(param_2 + 0x248) = uVar16;
  uVar16 = *(unsigned int *)(param_1 + 0xbd0);
  *(unsigned int *)(param_2 + 0x254) = uVar16;{ V16 _vt0 = vectorSplatImmediateSignedHalfWord(8); memcpy(auVar20, &_vt0, 16); }
  *(unsigned int *)(param_2 + 0x250) = uVar16;
  *(unsigned int *)(param_2 + 600) = *(unsigned int *)(param_1 + 0xbd4);
  *(unsigned int *)(param_2 + 0x25c) = *(unsigned int *)(param_1 + 0xbdc);
  *(unsigned int *)(param_2 + 0x260) = *(unsigned int *)(param_1 + 0xa00);
  *(unsigned int *)(param_2 + 0x264) = *(unsigned int *)(param_1 + 0x9b0);
  bVar1 = *(unsigned char *)(param_2 + 0x23);
  *(unsigned int *)(param_2 + 0x26c) = *(unsigned int *)(param_1 + 0x740);
  *(unsigned int *)(param_2 + 0x270) = *(unsigned int *)(param_1 + 0x744);
  uVar16 = *(unsigned int *)(param_1 + 0x748);
  *(unsigned int *)(param_2 + 0x484) = 0x400040 - (unsigned int)bVar1;
  *(unsigned int *)(param_2 + 0x470) = bVar1 + 0x1f001f;
  *(unsigned int *)(param_2 + 0x474) = bVar1 + 0xf000f;
  *(unsigned int *)(param_2 + 0x478) = bVar1 + 0x70007;
  *(unsigned int *)(param_2 + 0x47c) = bVar1 + 0x30003;
  *(unsigned int *)(param_2 + 0x278) = uVar16;
  *(unsigned int *)(param_2 + 0x480) = 0x200020 - (unsigned int)bVar1;
  *(unsigned int *)(param_2 + 0x488) = 0x80008 - (unsigned int)bVar1;
  *(unsigned short *)(param_2 + 0x46e) = (unsigned short)*(unsigned char *)(param_2 + 0x23);{ V16 _vt1 = vectorSplatHalfWord(in_vs44,7); memcpy(auVar19, &_vt1, 16); }
  vectorSubtractSignedHalfWordSaturate(auVar20,auVar19);
  puVar2 = (unsigned int *)(in_r0 + param_2 + 0x460 & 0xfffffff0);
  *puVar2 = in_register_00010000;
  puVar2[1] = in_ACC;
  puVar2[2] = in_register_00010008;
  puVar2[3] = in_vr0;
  puVar2 = (unsigned int *)(param_2 + 0x450U & 0xfffffff0);
  *puVar2 = in_register_000100b0;
  puVar2[1] = in_register_000100b4;
  puVar2[2] = in_register_000100b8;
  puVar2[3] = in_vr11;
  *(unsigned int *)(param_2 + 0x4c8) = *(unsigned int *)(param_1 + 0x830);
  *(unsigned int *)(param_2 + 0x4cc) = *(unsigned int *)(param_1 + 0x834);
  *(unsigned int *)(param_2 + 0x4d4) = *(unsigned int *)(param_1 + 0x54d0);
  *(unsigned int *)(param_2 + 0x4d8) = *(unsigned int *)(param_1 + 0x54d4);
  *(char *)(param_2 + 0x4dc) = (char)*(unsigned int *)(param_1 + 0xf8);
  *(char *)(param_2 + 0x4dd) = (char)*(unsigned int *)(param_1 + 0xfc4);
  *(char *)(param_2 + 0x4de) = (char)*(unsigned int *)(param_1 + 0xfcc);
  *(char *)(param_2 + 0x4e1) = (char)*(unsigned int *)(param_1 + 0xfc);
  *(char *)(param_2 + 0x4e2) = (char)*(unsigned int *)(param_1 + 0x1dc);
  *(unsigned int *)(param_2 + 0x518) = *(unsigned int *)(param_1 + 0x55d0);
  *(unsigned int *)(param_2 + 0x51c) = *(unsigned int *)(param_1 + 0x120);
  *(char *)(param_2 + 0x4df) = (char)*(unsigned int *)(param_1 + 0x7a0);
  *(char *)(param_2 + 0x4e0) = (char)*(unsigned int *)(param_1 + 0x7a4);
  *(char *)(param_2 + 0x4e3) = (char)*(unsigned int *)(param_1 + 0x79c);
  *(int *)(param_2 + 0x4ec) = param_1 + 0x5db0;
  *(int *)(param_2 + 0x4d0) = param_1 + 0x848;
  *(char *)(param_2 + 0x4e6) = (char)*(unsigned int *)(param_1 + 0x50e4);
  *(char *)(param_2 + 0x4e7) = (char)*(unsigned int *)(param_1 + 0x548c);
  *(int *)(param_2 + 0x4f0) = param_1 + 0x5eb0;
  if ((*(int *)(param_1 + 0x50c8) == 0) || (*(int *)(param_1 + 0x50cc) != 0)) {
    if (*(int *)(param_1 + 0x3cb0) == 7) {
      *(unsigned int *)(param_2 + 0x4f4) = *(unsigned int *)(param_1 + 0x718);
      *(unsigned int *)(param_2 + 0x4f8) = *(unsigned int *)(param_1 + 0x718);
      *(unsigned int *)(param_2 + 0x4fc) = *(unsigned int *)(param_1 + 0x720);
      *(unsigned int *)(param_2 + 0x500) = *(unsigned int *)(param_1 + 0x71c);
      *(unsigned int *)(param_2 + 0x504) = *(unsigned int *)(param_1 + 0x720);
      *(unsigned int *)(param_2 + 0x508) = *(unsigned int *)(param_1 + 0x71c);
      *(unsigned int *)(param_2 + 0x50c) = *(unsigned int *)(param_1 + 0x720);
      *(unsigned int *)(param_2 + 0x510) = *(unsigned int *)(param_1 + 0x71c);
    }
    else {
      *(unsigned int *)(param_2 + 0x4f4) = *(unsigned int *)(param_1 + 0x714);
      *(unsigned int *)(param_2 + 0x4f8) = *(unsigned int *)(param_1 + 0x720);
      *(unsigned int *)(param_2 + 0x4fc) = *(unsigned int *)(param_1 + 0x710);
      *(unsigned int *)(param_2 + 0x500) = *(unsigned int *)(param_1 + 0x71c);
      *(unsigned int *)(param_2 + 0x504) = *(unsigned int *)(param_1 + 0x70c);
      *(unsigned int *)(param_2 + 0x508) = *(unsigned int *)(param_1 + 0x718);
    }
  }
  else {
    *(unsigned int *)(param_2 + 0x4f4) = *(unsigned int *)(param_1 + 0x72c);
    *(unsigned int *)(param_2 + 0x4f8) = *(unsigned int *)(param_1 + 0x5110);
    *(unsigned int *)(param_2 + 0x514) = *(unsigned int *)(param_1 + 0x5114);
  }
  *(unsigned short *)(param_2 + 0x4e8) = 0;
  *(char *)(param_2 + 0x4e4) = (char)*(unsigned int *)(param_1 + 0x708);
  *(char *)(param_2 + 0x4e5) = (char)*(unsigned int *)(param_1 + 0x794);
  *(unsigned int *)(param_2 + 0x520) = *(unsigned int *)(param_1 + 0x570c);
  *(unsigned int *)(param_2 + 0x524) = *(unsigned int *)(param_1 + 0xf84);
  *(unsigned int *)(param_2 + 0x528) = *(unsigned int *)(param_1 + 0xf88);
  *(unsigned int *)(param_2 + 0x564) = *(unsigned int *)(param_1 + 0x50d4);
  *(unsigned int *)(param_2 + 0x568) = *(unsigned int *)(param_1 + 0x3bb4);
  *(unsigned char *)(param_2 + 0x52c) = -(*(int *)(param_1 + 0x3cb0) == 7) & 4;
  *(unsigned int *)(param_2 + 0x530) = *(unsigned int *)(param_1 + 0xbc8);
  *(unsigned int *)(param_2 + 0x534) = *(unsigned int *)(param_1 + 0xbcc);
  *(unsigned int *)(param_2 + 0x538) = *(unsigned int *)(param_1 + 0xbd0);
  *(unsigned int *)(param_2 + 0x53c) = *(unsigned int *)(param_1 + 0xbd4);
  *(unsigned int *)(param_2 + 0x540) = *(unsigned int *)(param_1 + 0xbd8);
  *(unsigned int *)(param_2 + 0x544) = *(unsigned int *)(param_1 + 0xbdc);
  *(unsigned int *)(param_2 + 0x548) = *(unsigned int *)(param_1 + 0xbe0);
  *(int *)(param_2 + 0x54c) = param_1 + 0x5ef0;
  *(int *)(param_2 + 0x550) = param_1 + 0x5fb0;
  *(unsigned int *)(param_2 + 0x56c) = *(unsigned int *)(param_1 + 0x5120);
  *(unsigned int *)(param_2 + 0x570) = *(unsigned int *)(param_1 + 0xfb0);
  uVar4 = fn_82C69588(param_1);
  *(int *)(param_2 + 0x17c) = (int)uVar4;
  trapWord(6,uVar4,0);
  uVar3 = *(unsigned short *)(param_2 + 0x34) >> 1;
  *(int *)(param_2 + 0x180) = (int)(unsigned int)uVar3 / (int)uVar4;
  trapWord(5,uVar4 & ~((unsigned __int64)uVar3 * 2 - 1),0xffff);
  *(int *)(param_2 + 0x63c) = *(int *)(param_1 + 0x39f8) * *(int *)(param_1 + 0xd64);
  *(unsigned int *)(param_2 + 0x6a0) = *(unsigned int *)(param_1 + 0x3bec);
  *(unsigned int *)(param_2 + 0x6a4) = *(unsigned int *)(param_1 + 0x3bf0);
  *(unsigned int *)(param_2 + 0x6a8) = *(unsigned int *)(param_1 + 0x3bf4);
  *(unsigned int *)(param_2 + 0x6ac) = *(unsigned int *)(param_1 + 0x3bf8);
  *(unsigned int *)(param_2 + 0x57c) = *(unsigned int *)(param_1 + 0x51a4);
  *(unsigned int *)(param_2 + 0x574) = *(unsigned int *)(param_1 + 0x54c4);
  *(unsigned int *)(param_2 + 0x578) = *(unsigned int *)(param_1 + 0x54c0);
  *(unsigned int *)(param_2 + 0x618) = *(unsigned int *)(param_1 + 0xfb4);
  *(unsigned int *)(param_2 + 0x61c) = *(unsigned int *)(param_1 + 0x50f8);
  *(unsigned int *)(param_2 + 0x620) = *(unsigned int *)(param_1 + 0x50fc);
  *(unsigned int *)(param_2 + 0x624) = *(unsigned int *)(param_1 + 0x5100);
  *(unsigned int *)(param_2 + 0x628) = *(unsigned int *)(param_1 + 0x5104);
  *(unsigned int *)(param_2 + 0x62c) = *(unsigned int *)(param_1 + 0x5108);
  *(unsigned int *)(param_2 + 0x630) = *(unsigned int *)(param_1 + 0x510c);
  *(unsigned int *)(param_2 + 0x558) = *(unsigned int *)(param_1 + 0x50d0);
  *(unsigned int *)(param_2 + 0x55c) = *(unsigned int *)(param_1 + 0x54c8);
  *(unsigned int *)(param_2 + 0x634) = *(unsigned int *)(param_1 + 0x567c);
  if (*(int *)(param_1 + 0x567c) == 1) {
    *(unsigned int *)(param_2 + 0x5b0) = *(unsigned int *)(param_1 + 0x5538);
    *(unsigned int *)(param_2 + 0x5b4) = *(unsigned int *)(param_1 + 0x569c);
    *(unsigned int *)(param_2 + 0x5b8) = *(unsigned int *)(param_1 + 0x5554);
    *(unsigned int *)(param_2 + 0x5cc) = *(unsigned int *)(param_1 + 0xb2dc);
    *(unsigned int *)(param_2 + 0x5c8) = *(unsigned int *)(param_1 + 0xb2e0);
  }
  uVar16 = lbl_8329F088;
  if ((*(int *)(param_1 + 0x3cb0) == 6) && ((*(unsigned int *)(param_1 + 0xbbc) & 1) == 0)) {
    uVar16 = lbl_8329F090;
  }
  *(unsigned int *)(param_2 + 0x554) = uVar16;
  puVar6 = &lbl_820FC514;
  lVar18 = 4;
  iVar10 = *(int *)(param_1 + 0xcc);
  puVar17 = (unsigned char *)(*(int *)(param_2 + 0x54c) + 1);
  do {
    uVar7 = puVar6[-1];
    *puVar17 = 0xff;
    puVar17[-1] = (char)(uVar7 >> 8);
    *(unsigned int *)(puVar17 + 3) = (uVar7 & 0xfe) * iVar10;
    if ((uVar7 & 1) != 0) {
      *puVar17 = (char)(uVar7 >> 0x18);
      *(unsigned int *)(puVar17 + 7) = (uVar7 >> 0x10 & 0xfe) * iVar10;
    }
    uVar7 = *puVar6;
    puVar17[0xc] = 0xff;
    puVar17[0xb] = (char)(uVar7 >> 8);
    *(unsigned int *)(puVar17 + 0xf) = (uVar7 & 0xfe) * iVar10;
    if ((uVar7 & 1) != 0) {
      puVar17[0xc] = (char)(uVar7 >> 0x18);
      *(unsigned int *)(puVar17 + 0x13) = (uVar7 >> 0x10 & 0xfe) * iVar10;
    }
    uVar7 = puVar6[1];
    puVar17[0x18] = 0xff;
    puVar17[0x17] = (char)(uVar7 >> 8);
    *(unsigned int *)(puVar17 + 0x1b) = (uVar7 & 0xfe) * iVar10;
    if ((uVar7 & 1) != 0) {
      puVar17[0x18] = (char)(uVar7 >> 0x18);
      *(unsigned int *)(puVar17 + 0x1f) = (uVar7 >> 0x10 & 0xfe) * iVar10;
    }
    uVar7 = puVar6[2];
    puVar17[0x24] = 0xff;
    puVar17[0x23] = (char)(uVar7 >> 8);
    *(unsigned int *)(puVar17 + 0x27) = (uVar7 & 0xfe) * iVar10;
    if ((uVar7 & 1) != 0) {
      puVar17[0x24] = (char)(uVar7 >> 0x18);
      *(unsigned int *)(puVar17 + 0x2b) = (uVar7 >> 0x10 & 0xfe) * iVar10;
    }
    puVar6 = puVar6 + 4;
    puVar17 = puVar17 + 0x30;
    lVar18 = lVar18 + -1;
  } while (lVar18 != 0);
  iVar10 = *(int *)(param_1 + 0xd0);
  puVar6 = &lbl_820FC514;
  puVar17 = (unsigned char *)(*(int *)(param_2 + 0x550) + 1);
  lVar18 = 4;
  do {
    uVar7 = puVar6[-1];
    *puVar17 = 0xff;
    puVar17[-1] = (char)(uVar7 >> 8);
    *(unsigned int *)(puVar17 + 3) = (uVar7 & 0xfe) * iVar10;
    if ((uVar7 & 1) != 0) {
      *puVar17 = (char)(uVar7 >> 0x18);
      *(unsigned int *)(puVar17 + 7) = (uVar7 >> 0x10 & 0xfe) * iVar10;
    }
    uVar7 = *puVar6;
    puVar17[0xc] = 0xff;
    puVar17[0xb] = (char)(uVar7 >> 8);
    *(unsigned int *)(puVar17 + 0xf) = (uVar7 & 0xfe) * iVar10;
    if ((uVar7 & 1) != 0) {
      puVar17[0xc] = (char)(uVar7 >> 0x18);
      *(unsigned int *)(puVar17 + 0x13) = (uVar7 >> 0x10 & 0xfe) * iVar10;
    }
    uVar7 = puVar6[1];
    puVar17[0x18] = 0xff;
    puVar17[0x17] = (char)(uVar7 >> 8);
    *(unsigned int *)(puVar17 + 0x1b) = (uVar7 & 0xfe) * iVar10;
    if ((uVar7 & 1) != 0) {
      puVar17[0x18] = (char)(uVar7 >> 0x18);
      *(unsigned int *)(puVar17 + 0x1f) = (uVar7 >> 0x10 & 0xfe) * iVar10;
    }
    uVar7 = puVar6[2];
    puVar17[0x24] = 0xff;
    puVar17[0x23] = (char)(uVar7 >> 8);
    *(unsigned int *)(puVar17 + 0x27) = (uVar7 & 0xfe) * iVar10;
    if ((uVar7 & 1) != 0) {
      puVar17[0x24] = (char)(uVar7 >> 0x18);
      *(unsigned int *)(puVar17 + 0x2b) = (uVar7 >> 0x10 & 0xfe) * iVar10;
    }
    puVar6 = puVar6 + 4;
    puVar17 = puVar17 + 0x30;
    lVar18 = lVar18 + -1;
  } while (lVar18 != 0);
  if ((*(int *)(param_2 + 0x640) != 0) && (*(int *)(*(int *)(param_2 + 0x640) + 0xc) == 3)) {
    iVar10 = *(int *)(param_2 + 0x26c);
    iVar11 = 0;
    lVar18 = 8;
    *(int *)(param_2 + 0x644) = param_1 + 0xb1fc;
    do {
      *(unsigned char *)(iVar11 + param_1 + 0xb1fc) =
           (*(unsigned char *)(iVar11 + iVar10) & 3) << 4 | *(unsigned char *)(iVar11 + iVar10) >> 1 & 0x7e;
      bVar1 = *(unsigned char *)(iVar10 + 1 + iVar11);
      *(unsigned char *)(iVar11 + param_1 + 0xb1fd) = (bVar1 & 3) << 4 | bVar1 >> 1 & 0x7e;
      bVar1 = *(unsigned char *)(iVar11 + iVar10 + 2);
      *(unsigned char *)(param_1 + 0xb1fe + iVar11) = (bVar1 & 3) << 4 | bVar1 >> 1 & 0x7e;
      bVar1 = *(unsigned char *)(iVar10 + 3 + iVar11);
      *(unsigned char *)(param_1 + 0xb1ff + iVar11) = (bVar1 & 3) << 4 | bVar1 >> 1 & 0x7e;
      iVar11 = iVar11 + 4;
      lVar18 = lVar18 + -1;
    } while (lVar18 != 0);
    iVar10 = *(int *)(param_2 + 0x270);
    iVar11 = 0;
    lVar18 = 8;
    *(int *)(param_2 + 0x648) = param_1 + 0xb21c;
    do {
      *(unsigned char *)(iVar11 + param_1 + 0xb21c) =
           (*(unsigned char *)(iVar11 + iVar10) << 3 | *(unsigned char *)(iVar11 + iVar10) >> 2) & 0x3e;
      bVar1 = *(unsigned char *)(iVar10 + 1 + iVar11);
      *(unsigned char *)(iVar11 + param_1 + 0xb21d) = (bVar1 << 3 | bVar1 >> 2) & 0x3e;
      bVar1 = *(unsigned char *)(iVar11 + iVar10 + 2);
      *(unsigned char *)(param_1 + 0xb21e + iVar11) = (bVar1 << 3 | bVar1 >> 2) & 0x3e;
      bVar1 = *(unsigned char *)(iVar10 + 3 + iVar11);
      *(unsigned char *)(param_1 + 0xb21f + iVar11) = (bVar1 << 3 | bVar1 >> 2) & 0x3e;
      iVar11 = iVar11 + 4;
      lVar18 = lVar18 + -1;
    } while (lVar18 != 0);
    iVar10 = *(int *)(param_2 + 0x278);
    iVar11 = 0;
    lVar18 = 4;
    *(int *)(param_2 + 0x650) = param_1 + 0xb23c;
    do {
      *(unsigned char *)(iVar11 + param_1 + 0xb23c) =
           (*(unsigned char *)(iVar11 + iVar10) & 3) << 3 | *(unsigned char *)(iVar11 + iVar10) >> 1 & 0x7e;
      bVar1 = *(unsigned char *)(iVar10 + 1 + iVar11);
      *(unsigned char *)(iVar11 + param_1 + 0xb23d) = (bVar1 & 3) << 3 | bVar1 >> 1 & 0x7e;
      bVar1 = *(unsigned char *)(iVar11 + iVar10 + 2);
      *(unsigned char *)(param_1 + 0xb23e + iVar11) = (bVar1 & 3) << 3 | bVar1 >> 1 & 0x7e;
      bVar1 = *(unsigned char *)(iVar10 + 3 + iVar11);
      *(unsigned char *)(param_1 + 0xb23f + iVar11) = (bVar1 & 3) << 3 | bVar1 >> 1 & 0x7e;
      iVar11 = iVar11 + 4;
      lVar18 = lVar18 + -1;
    } while (lVar18 != 0);
    iVar10 = *(int *)(param_2 + 0x1bc);
    iVar11 = 0;
    lVar18 = 0x10;
    *(int *)(param_2 + 0x654) = param_1 + 0xb1bc;
    do {
      *(unsigned char *)(iVar11 + param_1 + 0xb1bc) =
           *(unsigned char *)(iVar11 + iVar10) >> 2 & 0xfe | (*(unsigned char *)(iVar11 + iVar10) & 7) << 4;
      bVar1 = *(unsigned char *)(iVar10 + 1 + iVar11);
      *(unsigned char *)(iVar11 + param_1 + 0xb1bd) = bVar1 >> 2 & 0xfe | (bVar1 & 7) << 4;
      bVar1 = *(unsigned char *)(iVar11 + iVar10 + 2);
      *(unsigned char *)(param_1 + 0xb1be + iVar11) = bVar1 >> 2 & 0xfe | (bVar1 & 7) << 4;
      bVar1 = *(unsigned char *)(iVar10 + 3 + iVar11);
      *(unsigned char *)(param_1 + 0xb1bf + iVar11) = bVar1 >> 2 & 0xfe | (bVar1 & 7) << 4;
      iVar11 = iVar11 + 4;
      lVar18 = lVar18 + -1;
    } while (lVar18 != 0);
  }
  return;
}

