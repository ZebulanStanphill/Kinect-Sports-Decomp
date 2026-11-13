extern int fn_82C779E0();
extern int fn_830EDBD0();
extern int fn_830EDD18();
extern int fn_830EDF70();
extern int fn_830EE0C0();
extern int fn_830EE330();
extern int fn_830EE490();
extern int fn_830EE740();
extern int fn_830EEB30();
extern unsigned int lbl_820FDD28;
extern unsigned int lbl_820FDD2C;
extern unsigned int lbl_820FDD30;
extern unsigned int lbl_820FDD34;


void fn_82C9B320(int param_1,unsigned int *param_2)

{
  unsigned short uVar1;
  unsigned short uVar2;
  int iVar3;
  unsigned __int64 uVar4;
  int iVar5;
  short sVar7;
  unsigned __int64 uVar6;
  unsigned __int64 uVar8;
  unsigned int *puVar9;
  int iVar10;
  unsigned int uVar11;
  unsigned int uVar12;
  unsigned int uVar13;
  unsigned int uVar14;
  __int64 lVar15;
  
  param_2[400] = 0;
  if (*(int *)(*(int *)(param_1 + 0x6070) + 0x2c8) == 0) {
    uVar13 = 0;
  }
  else {
    uVar13 = *(unsigned int *)(*(int *)(param_1 + 0x6070) + 0x4818);
  }
  param_2[400] = uVar13;
  param_2[1] = *(unsigned int *)(param_1 + 0x168);
  *param_2 = *(unsigned int *)(param_1 + 0x54);
  *(unsigned __int64 *)(param_2 + 0x1a) = **(unsigned __int64 **)(param_1 + 0x54);
  param_2[0x1c] = *(unsigned int *)(*(int *)(param_1 + 0x54) + 8);
  param_2[0x1d] = *(unsigned int *)(*(int *)(param_1 + 0x54) + 0xc);
  param_2[0x1e] = *(unsigned int *)(*(int *)(param_1 + 0x54) + 0x10);
  param_2[0x1f] = *(unsigned int *)(*(int *)(param_1 + 0x54) + 0x14);
  param_2[0x20] = *(unsigned int *)(*(int *)(param_1 + 0x54) + 0x18);
  param_2[0x21] = *(unsigned int *)(*(int *)(param_1 + 0x54) + 0x1c);
  param_2[0x22] = *(unsigned int *)(*(int *)(param_1 + 0x54) + 0x20);
  param_2[0x23] = *(unsigned int *)(*(int *)(param_1 + 0x54) + 0x24);
  param_2[0x24] = *(unsigned int *)(*(int *)(param_1 + 0x54) + 0x28);
  param_2[0x25] = *(unsigned int *)(*(int *)(param_1 + 0x54) + 0x2c);
  uVar13 = *(unsigned int *)(*(int *)(param_1 + 0x54) + 0x30);
  *param_2 = param_2 + 0x1a;
  param_2[0x26] = uVar13;
  param_2[0x57] = *(unsigned int *)(param_1 + 0x17c);
  param_2[0x58] = *(unsigned int *)(param_1 + 0x180);
  param_2[0x1be] = *(unsigned int *)(param_1 + 0x17c);
  param_2[0x1bf] = *(unsigned int *)(param_1 + 0x180);
  param_2[0x5e] = *(unsigned int *)(param_1 + 0xc10);
  uVar8 = (unsigned __int64)*(unsigned int *)(param_1 + 0x88) & 0x7fff;
  sVar7 = (short)(uVar8 << 1);
  *(short *)((int)param_2 + 0x32) = sVar7;
  uVar6 = (unsigned __int64)*(unsigned int *)(param_1 + 0x8c) & 0x7fff;
  *(short *)(param_2 + 0xd) = (short)(uVar6 << 1);
  *(short *)(param_2 + 10) = sVar7;
  *(unsigned short *)((int)param_2 + 0x26) = 1;
  *(unsigned short *)(param_2 + 9) = 0;
  *(short *)((int)param_2 + 0x2a) = sVar7 + 1;
  *(short *)((int)param_2 + 0x36) = (short)(uVar8 << 4);
  *(short *)((int)param_2 + 0x3a) = (short)(uVar8 << 3);
  *(short *)(param_2 + 0xe) = (short)(uVar6 << 4);
  *(short *)(param_2 + 0xf) = (short)(uVar6 << 3);
  *(short *)((int)param_2 + 0x4a) = (short)*(unsigned int *)(param_1 + 0xcc);
  uVar8 = 0;
  *(short *)(param_2 + 0x13) = (short)*(unsigned int *)(param_1 + 0xd0);
  *(short *)((int)param_2 + 0x4e) = (short)*(unsigned int *)(param_1 + 0xd4);
  *(short *)(param_2 + 0x14) = (short)*(unsigned int *)(param_1 + 0xd8);
  *(short *)((int)param_2 + 0x52) = (short)*(unsigned int *)(param_1 + 0xe4);
  *(short *)(param_2 + 0x15) = (short)*(unsigned int *)(param_1 + 0xe8);
  *(short *)((int)param_2 + 0x56) = (short)*(unsigned int *)(param_1 + 0xac);
  *(short *)(param_2 + 0x16) = (short)*(unsigned int *)(param_1 + 0xb0);
  *(unsigned short *)((int)param_2 + 0x5a) = *(unsigned short *)((int)param_2 + 0x4a);
  *(unsigned short *)(param_2 + 0x17) = *(unsigned short *)(param_2 + 0x13);
  param_2[0x123] = *(unsigned int *)(param_1 + 0x758);
  param_2[0x6b] = *(unsigned int *)(param_1 + 0x6ec);
  param_2[0x6c] = *(unsigned int *)(param_1 + 0x1d0);
  param_2[0x6d] = *(unsigned int *)(param_1 + 0x1d4);
  param_2[0x6e] = *(unsigned int *)(param_1 + 0x1d8);
  *(unsigned char *)((int)param_2 + 0x6d9) = 3;
  *(unsigned char *)(param_2 + 0x1b6) = 3;
  param_2[0x220] = param_2 + 0x1c0;
  *(unsigned char *)((int)param_2 + 0x6db) = 1;
  *(unsigned char *)((int)param_2 + 0x6da) = 2;
  param_2[0x50] = lbl_820FDD28;
  param_2[0x51] = lbl_820FDD2C;
  param_2[0x52] = lbl_820FDD30;
  param_2[0x53] = lbl_820FDD34;
  do {
    iVar5 = 0;
    iVar10 = (int)uVar8 * 5;
    do {
      lVar15 = 4;
      uVar6 = 0;
      do {
        if (iVar5 == 0) {
          iVar3 = (int)uVar6;
          if ((uVar6 & 1) + uVar8 == 0) {
            *(unsigned char *)((int)param_2 + iVar10 + iVar3 + 0x108) = 1;
          }
          else if (((iVar3 == 0) || (iVar3 == 3)) || (((int)uVar8 == 2 && (iVar3 == 1)))) {
            *(unsigned char *)((int)param_2 + iVar10 + iVar3 + 0x108) = 0xff;
          }
          else {
            *(unsigned char *)((int)param_2 + iVar10 + iVar3 + 0x108) = 1;
          }
        }
        else {
          uVar4 = ((~uVar8 & 0xffffffff) >> 0x1f) + (unsigned __int64)(1 < uVar8) & 1;
          *(char *)((int)param_2 + iVar10 + 0x10c) = (char)uVar4 + (char)(uVar4 << 1) + -1;
        }
        uVar6 = uVar6 + 1;
        lVar15 = lVar15 + -1;
      } while (lVar15 != 0);
      iVar5 = iVar5 + 1;
    } while (iVar5 < 2);
    uVar8 = uVar8 + 1;
  } while ((int)uVar8 < 3);
  if (*(int *)(param_1 + 0x567c) == 0) {
    iVar10 = (unsigned int)*(unsigned short *)(param_2 + 0xd) * 0x10000 + (unsigned int)*(unsigned short *)((int)param_2 + 0x32);
    param_2[0x4b] = iVar10 * 0x20;
    param_2[0x4f] = iVar10 * 0x10;
    iVar10 = (((unsigned int)*(unsigned short *)(param_2 + 0xd) * 0x20 + -4) * 0x800 +
             (unsigned int)*(unsigned short *)((int)param_2 + 0x32)) * 0x20 + -4;
    param_2[0x47] = iVar10;
    param_2[0x49] = iVar10;
  }
  else {
    uVar1 = *(unsigned short *)(param_2 + 0xd);
    uVar2 = *(unsigned short *)((int)param_2 + 0x32);
    iVar10 = (unsigned int)uVar1 * 0x10000 + (unsigned int)uVar2;
    param_2[0x47] = iVar10 * 0x20 + 0x330033;
    param_2[0x49] = iVar10 * 0x10 + 0x1b001b;
    param_2[0x4b] =
         (int)((((unsigned __int64)uVar1 * 0x40 - 8 & 0x1fffff) * 0x800 + (unsigned __int64)uVar2 & 0xffffffff) <<
              5) + -0xc;
    param_2[0x4f] =
         (int)((((unsigned __int64)uVar1 * 0x10 - 8 & 0xfffff) * 0x1000 + (unsigned __int64)uVar2 & 0xffffffff) <<
              4) + -0xc;
  }
  uVar13 = *(unsigned int *)(param_1 + 0x6e8);
  *(unsigned char *)(param_2 + 0x1b5) = 0;
  *(unsigned char *)((int)param_2 + 0x6d5) = 0;
  *(unsigned char *)((int)param_2 + 0x6d6) = 0;
  *(unsigned char *)((int)param_2 + 0x6d7) = 1;
  param_2[0x9a] = uVar13;
  *(unsigned char *)(param_2 + 0x28) = 0x40;
  *(unsigned char *)((int)param_2 + 0xa1) = 0x20;
  *(unsigned char *)((int)param_2 + 0xa2) = 0x20;
  *(unsigned char *)(param_2 + 0x1af) = 0;
  param_2[0x46] = 0x1c001c;
  *(unsigned char *)((int)param_2 + 0x6be) = 0x60;
  *(unsigned char *)((int)param_2 + 0x6bf) = 100;
  param_2[0x48] = 0x3c003c;
  param_2[0x4a] = 0x400040;
  param_2[0x4e] = 0x200020;
  uVar11 = 0;
  *(unsigned char *)((int)param_2 + 0x6bd) = 4;
  puVar9 = param_2 + 0x2a;
  *(unsigned char *)(param_2 + 0x1b0) = 0xc0;
  lVar15 = 0x40;
  *(unsigned char *)((int)param_2 + 0x6c1) = 0xc4;
  *(unsigned char *)(param_2 + 0xab) = 0;
  *(unsigned char *)((int)param_2 + 0x2af) = 1;
  *(unsigned char *)((int)param_2 + 0x2ae) = 1;
  *(unsigned char *)((int)param_2 + 0x2ad) = 1;
  *(unsigned char *)((int)param_2 + 0x2b2) = 2;
  *(unsigned char *)((int)param_2 + 0x2b1) = 2;
  *(unsigned char *)(param_2 + 0xac) = 2;
  *(unsigned char *)((int)param_2 + 0x2b3) = 4;
  *(unsigned char *)(param_2 + 0xad) = 0;
  *(unsigned char *)((int)param_2 + 0x2b5) = 1;
  *(unsigned char *)((int)param_2 + 0x2b6) = 2;
  *(unsigned char *)((int)param_2 + 0x2b7) = 3;
  *(unsigned char *)(param_2 + 0xae) = 1;
  *(unsigned char *)((int)param_2 + 0x2b9) = 2;
  *(unsigned char *)((int)param_2 + 0x2ba) = 3;
  *(unsigned char *)((int)param_2 + 699) = 0;
  *(unsigned char *)((int)param_2 + 0xa3) = 0;
  *(unsigned char *)(param_2 + 0x29) = 0x10;
  do {
    if ((int)uVar11 < 8) {
      *(unsigned char *)((int)puVar9 + uVar11) = 0;
    }
    else {
      *(char *)((int)puVar9 + uVar11) = (char)(1 << (uVar11 & 7));
    }
    uVar11 = uVar11 + 1;
    lVar15 = lVar15 + -1;
  } while (lVar15 != 0);
  uVar11 = 0;
  do {
    if (uVar11 == 0) {
      *(unsigned char *)puVar9 = 0;
    }
    else if ((int)uVar11 < 8) {
      *(unsigned char *)((int)puVar9 + uVar11) = 1;
    }
    else if ((uVar11 & 7) == 0) {
      *(unsigned char *)((int)puVar9 + uVar11) = 2;
    }
    else {
      *(unsigned char *)((int)puVar9 + uVar11) = 4;
    }
    uVar11 = uVar11 + 1;
  } while ((int)uVar11 < 0x40);
  uVar11 = 0;
  puVar9 = param_2 + 0x3a;
  do {
    if (uVar11 == 0) {
      *(unsigned char *)puVar9 = 0;
    }
    else if ((int)uVar11 < 4) {
      *(unsigned char *)((int)puVar9 + uVar11) = 1;
    }
    else if ((uVar11 & 3) == 0) {
      *(unsigned char *)((int)puVar9 + uVar11) = 2;
    }
    else {
      *(unsigned char *)((int)puVar9 + uVar11) = 4;
    }
    uVar11 = uVar11 + 1;
  } while ((int)uVar11 < 0x20);
  param_2[0x1b7] = 0x400040;
  param_2[0x1b9] = 0x3c003c;
  param_2[0x1b8] = 0x1c001c;
  iVar10 = (unsigned int)*(unsigned short *)(param_2 + 0xd) * 0x10000 + (unsigned int)*(unsigned short *)((int)param_2 + 0x32);
  iVar5 = iVar10 * 0x20;
  iVar10 = iVar10 * 0x10;
  param_2[0x1ba] = iVar5;
  param_2[0x1bc] = iVar5 + -0x40004;
  param_2[0x1bb] = iVar10 + -0x40004;
  param_2[0x226] = iVar10;
  param_2[0x225] = 0x200020;
  param_2[0x9f] = fn_830EDBD0;
  param_2[0xa0] = fn_830EDD18;
  param_2[0xa1] = fn_830EDF70;
  param_2[0xa2] = fn_830EE0C0;
  param_2[0xa3] = fn_830EE330;
  param_2[0xa4] = fn_830EE490;
  param_2[0xa5] = fn_830EE740;
  uVar11 = 1;
  param_2[0xa6] = fn_830EEB30;
  lVar15 = 0xf;
  do {
    uVar12 = 0;
    uVar14 = (unsigned int)((uVar11 & 8) != 0);
    if ((uVar11 & 4) != 0) {
      uVar12 = 4;
      uVar14 = uVar14 + 1;
    }
    if ((uVar11 & 2) != 0) {
      uVar14 = uVar14 + 1;
      uVar12 = uVar12 << 2 | 8;
    }
    if ((uVar11 & 1) != 0) {
      uVar14 = uVar14 + 1;
      uVar12 = uVar12 << 2 | 0xc;
    }
    uVar12 = (uVar12 >> 2) << ((4 - uVar14) * 2 & 0x3e);
    *(unsigned char *)((int)param_2 + uVar11 + 0x29c) =
         (unsigned char)((((unsigned __int64)uVar12 & 0xfffffff) << 4 | (unsigned __int64)uVar12 & 0xffffffff0000000f) << 2
               ) & 0xf0 | (unsigned char)(uVar12 >> 2) & 0xc | (unsigned char)(uVar12 >> 6) & 3;
    uVar11 = uVar11 + 1;
    lVar15 = lVar15 + -1;
  } while (lVar15 != 0);
  fn_82C779E0();
  return;
}

