typedef unsigned char bool;
#define true 1
#define false 0
#define CONCAT14(h,l) ((unsigned __int64)((((unsigned char)(h)) << 32) | ((unsigned int)(l))))
#define CONCAT24(h,l) ((unsigned __int64)((((unsigned short)(h)) << 32) | ((unsigned int)(l))))
#define CONCAT44(h,l) ((unsigned __int64)((((unsigned int)(h)) << 32) | ((unsigned int)(l))))
extern unsigned int *auStack_2e0;
extern int fn_8267C498();
extern int fn_8267C4C8();
extern int fn_8267C4F0();
extern int fn_8268ACE8();
extern int fn_8268AFB0();
extern int fn_8268AFD8();
extern int fn_8268B120();
extern int fn_8268B1F0();
extern int fn_8268C818();
extern int fn_8269DCE8();
extern int fn_8278B238();
extern int fn_8278B458();
extern int fn_8278B928();
extern int fn_8278C028();
extern int fn_8278FD18();
extern int fn_82791CF0();
extern int fn_82791DF0();
extern int fn_82793058();
extern int fn_827930C8();
extern int fn_82793130();
extern int fn_827931A0();
extern int fn_82793210();
extern unsigned int iStack0000001c;
extern unsigned int iStack_1f4;
extern unsigned int iStack_1fc;
extern unsigned int iStack_200;
extern unsigned int iStack_204;
extern unsigned int iStack_244;
extern unsigned int iStack_274;
extern unsigned int iStack_280;
extern unsigned int lbl_82005718;
extern unsigned int lbl_82005C40;
extern unsigned int lbl_82005C48;
extern unsigned int lbl_82005C50;
extern unsigned int lbl_82005C58;
extern unsigned int lbl_82005C60;
extern unsigned int lbl_82010000;
extern unsigned int lbl_8201562C;
extern unsigned int lbl_820156B0;
extern unsigned int lbl_820156C0;
extern unsigned int lbl_820156C4;
extern unsigned int lbl_820156C8;
extern unsigned int lbl_820156F8;
extern unsigned int lbl_82015728;
extern unsigned int lbl_82015734;
extern unsigned int lbl_8201573C;
extern unsigned int lbl_8201574C;
extern unsigned int lbl_82015760;
extern unsigned int lbl_82015778;
extern unsigned int lbl_82015784;
extern unsigned int lbl_82015790;
extern unsigned int lbl_820157BC;
extern unsigned int lbl_820157EC;
extern unsigned int lbl_820157F0;
extern unsigned int lbl_820157F4;
extern unsigned int lbl_820157F8;
extern unsigned int lbl_8201580C;
extern unsigned int lbl_82015814;
extern unsigned int lbl_831E7E64;
extern unsigned int uStack00000014;
extern unsigned int uStack_100;
extern unsigned int uStack_110;
extern unsigned int uStack_120;
extern unsigned int uStack_130;
extern unsigned int uStack_140;
extern unsigned int uStack_150;
extern unsigned int uStack_160;
extern unsigned int uStack_170;
extern unsigned int uStack_180;
extern unsigned int uStack_190;
extern unsigned int uStack_1a0;
extern unsigned int uStack_1b0;
extern unsigned int uStack_1c0;
extern unsigned int uStack_1d0;
extern unsigned int uStack_1e0;
extern unsigned int uStack_1f0;
extern unsigned int uStack_1f8;
extern unsigned int uStack_208;
extern unsigned int uStack_20c;
extern unsigned int uStack_210;
extern unsigned int uStack_2e8;
extern unsigned int uStack_b8;
extern unsigned int uStack_c8;
extern unsigned int uStack_e0;
extern unsigned int uStack_f0;


unsigned int fn_827939C8(unsigned int param_1,int param_2)

{
  unsigned char bVar1;
  short sVar2;
  int iVar3;
  unsigned int *puVar4;
  bool bVar5;
  bool bVar6;
  unsigned short uVar7;
  unsigned int uVar8;
  char cVar14;
  __int64 lVar9;
  int *piVar11;
  int iVar12;
  int iVar13;
  unsigned __int64 uVar10;
  char *pcVar15;
  unsigned char *puVar16;
  unsigned __int64 uVar17;
  bool bVar18;
  int iVar19;
  unsigned int uVar20;
  unsigned char **ppuVar21;
  double dVar22;
  unsigned int uStack00000014;
  int iStack0000001c;
  unsigned char abStack_2f0 [8];
  unsigned __int64 uStack_2e8;
  unsigned char auStack_2e0 [24];
  char *pcStack_2c8;
  unsigned char *puStack_2c4;
  unsigned char *puStack_2c0;
  unsigned char **ppuStack_2bc;
  unsigned char *puStack_2b8;
  char *pcStack_2b4;
  unsigned char *puStack_2b0;
  unsigned char *puStack_2ac;
  unsigned char *puStack_2a8;
  char *pcStack_2a4;
  unsigned char *puStack_2a0;
  unsigned char *puStack_29c;
  unsigned char *puStack_298;
  char *pcStack_294;
  unsigned char *puStack_290;
  char *pcStack_28c;
  char *pcStack_288;
  unsigned char *puStack_284;
  int iStack_280;
  unsigned char *puStack_27c;
  int iStack_274;
  char *pcStack_270;
  unsigned char *puStack_26c;
  unsigned char *puStack_268;
  unsigned char *puStack_264;
  unsigned char *puStack_260;
  unsigned char *puStack_25c;
  unsigned char *puStack_258;
  unsigned char *puStack_254;
  char *pcStack_250;
  unsigned char *puStack_24c;
  unsigned char *puStack_248;
  int iStack_244;
  char *pcStack_240;
  unsigned char *puStack_23c;
  char *pcStack_238;
  char *pcStack_234;
  unsigned char *puStack_230;
  unsigned char *puStack_22c;
  unsigned char *puStack_228;
  char *pcStack_224;
  unsigned char *puStack_220;
  char *pcStack_21c;
  char *pcStack_218;
  char *pcStack_214;
  unsigned int uStack_210;
  unsigned int uStack_20c;
  unsigned int uStack_208;
  int iStack_204;
  int iStack_200;
  int iStack_1fc;
  unsigned int uStack_1f8;
  int iStack_1f4;
  unsigned int uStack_1f0;
  __int64 lStack_1e8;
  unsigned int uStack_1e0;
  unsigned char *puStack_1dc;
  unsigned int uStack_1d0;
  unsigned char *puStack_1cc;
  unsigned int uStack_1c0;
  unsigned char *puStack_1bc;
  unsigned int uStack_1b0;
  unsigned char *puStack_1ac;
  unsigned int uStack_1a0;
  unsigned char *puStack_19c;
  unsigned int uStack_190;
  unsigned char *puStack_18c;
  unsigned int uStack_180;
  unsigned char *puStack_17c;
  unsigned int uStack_170;
  unsigned char *puStack_16c;
  unsigned int uStack_160;
  unsigned char *puStack_15c;
  unsigned int uStack_150;
  unsigned char *puStack_14c;
  unsigned int uStack_140;
  unsigned char *puStack_13c;
  unsigned int uStack_130;
  unsigned char *puStack_12c;
  unsigned int uStack_120;
  unsigned char *puStack_11c;
  unsigned int uStack_110;
  unsigned char *puStack_10c;
  unsigned int uStack_100;
  unsigned char *puStack_fc;
  unsigned int uStack_f0;
  unsigned char *puStack_ec;
  unsigned int uStack_e0;
  unsigned char *puStack_dc;
  __int64 lStack_d0;
  unsigned int uStack_c8;
  unsigned char *puStack_c4;
  unsigned int uStack_b8;
  unsigned char *puStack_b4;
  
  uStack00000014 = param_1;
  iStack0000001c = param_2;
  fn_8268AFB0(auStack_2e0,lbl_831E7E64);
  iStack_274 = 0;
  uStack_2e8 = CONCAT44(0x82000000,(((unsigned __int64)(uStack_2e8) >> 32) & 0xFFFFFFFF));
  pcStack_288 = "></TEXTFORMAT>";
  iStack_244 = *(int *)(param_2 + 0x10);
  ppuStack_2bc = &lbl_82010000;
  puStack_290 = &lbl_820157F8;
  puStack_2a8 = &lbl_82015814;
  puStack_2a0 = &lbl_8201580C;
  puStack_258 = &lbl_82005C50;
  puStack_268 = &lbl_82005C58;
  puStack_298 = &lbl_8201574C;
  puStack_2ac = &lbl_82015734;
  puStack_260 = &lbl_82005C60;
  dVar22 = (double)lbl_82005718;
  puStack_23c = &lbl_82015784;
  puStack_264 = &lbl_82015778;
  puStack_25c = &lbl_82015790;
  puStack_27c = &lbl_82015728;
  puStack_22c = &lbl_8201573C;
  puStack_284 = &lbl_820156F8;
  puStack_228 = &lbl_82005C48;
  pcStack_218 = " LETTERSPACING=\"{0}\"";
  pcStack_234 = "LEFT";
  pcStack_28c = "RIGHT";
  puStack_26c = &lbl_82005C40;
  puStack_254 = &lbl_820157BC;
  pcStack_214 = "<FONT";
  puStack_2b8 = &lbl_82015760;
  pcStack_21c = "baseline";
  pcStack_224 = "left";
  pcStack_270 = "right";
  pcStack_240 = "JUSTIFY";
  pcStack_294 = "CENTER";
  puStack_2c4 = &lbl_820156C8;
  puStack_220 = &lbl_820157F4;
  puStack_24c = &lbl_820157F0;
  puStack_230 = &lbl_820157EC;
  puStack_2c0 = &lbl_820156C4;
  puStack_248 = &lbl_820156C0;
  puStack_29c = &lbl_820156B0;
  pcStack_238 = " LEFTMARGIN=\"{0}\"";
  pcStack_2b4 = " BLOCKINDENT=\"{0}\"";
  pcStack_250 = " LEADING=\"{0}\"";
  pcStack_2a4 = " RIGHTMARGIN=\"{0}\"";
  pcStack_2c8 = " INDENT=\"{0}\"";
  puStack_2b0 = &lbl_8201562C;
  iVar12 = 0;
  do {
    uVar8 = uStack00000014;
    if (((iStack0000001c == -0xc) || (iStack_274 < 0)) ||
       (bVar18 = false, *(int *)(iStack0000001c + 0x10) <= iStack_274)) {
      bVar18 = true;
    }
    if (bVar18) {
      fn_8268C818(uStack00000014,auStack_2e0);
      fn_8268AFD8(auStack_2e0);
      return uVar8;
    }
    iStack_280 = iVar12 + 1;
    iVar12 = *(int *)(iStack_274 * 4 + *(int *)(iStack0000001c + 0xc));
    if (iStack_280 == iStack_244) {
      uVar17 = (unsigned __int64)*(unsigned int *)(iVar12 + 4);
      if (uVar17 != 0) {
        cVar14 = fn_8278FD18(iVar12);
        if (cVar14 != '\0') {
          uVar17 = uVar17 - 1;
        }
        if ((uVar17 & 0xffffffff) != 0) goto LAB_82793d1c;
      }
    }
    else {
LAB_82793d1c:
      fn_8268B1F0(auStack_2e0,puStack_2b0,0xffffffffffffffff);
      iVar3 = *(int *)(iVar12 + 0xc);
      if ((*(unsigned short *)(iVar3 + 0x16) >> 2 & 1) != 0) {
        puStack_b4 = auStack_2e0;
        uStack_b8 = 1;
        uStack_2e8 = CONCAT44((int)*(short *)(iVar3 + 0xe),(((unsigned __int64)(uStack_2e8) >> 32) & 0xFFFFFFFF));
        fn_8269DCE8(&uStack_b8,pcStack_2c8,&uStack_2e8);
      }
      if ((*(unsigned short *)(iVar3 + 0x16) >> 1 & 1) != 0) {
        puStack_13c = auStack_2e0;
        uStack_140 = 1;
        uStack_2e8 = (unsigned __int64)CONCAT24(*(unsigned short *)(iVar3 + 0xc),(((unsigned __int64)(uStack_2e8) >> 32) & 0xFFFFFFFF));
        fn_82793058(&uStack_140,pcStack_2b4,&uStack_2e8);
      }
      if ((*(unsigned short *)(iVar3 + 0x16) >> 4 & 1) != 0) {
        puStack_1bc = auStack_2e0;
        uStack_1c0 = 1;
        uStack_2e8 = (unsigned __int64)CONCAT24(*(unsigned short *)(iVar3 + 0x12),(((unsigned __int64)(uStack_2e8) >> 32) & 0xFFFFFFFF));
        fn_82793058(&uStack_1c0,pcStack_238,&uStack_2e8);
      }
      if ((*(unsigned short *)(iVar3 + 0x16) >> 5 & 1) != 0) {
        puStack_c4 = auStack_2e0;
        uStack_c8 = 1;
        uStack_2e8 = (unsigned __int64)CONCAT24(*(unsigned short *)(iVar3 + 0x14),(((unsigned __int64)(uStack_2e8) >> 32) & 0xFFFFFFFF));
        fn_82793058(&uStack_c8,pcStack_2a4,&uStack_2e8);
      }
      if ((*(unsigned short *)(iVar3 + 0x16) >> 3 & 1) != 0) {
        puStack_19c = auStack_2e0;
        uStack_1a0 = 1;
        uStack_2e8 = CONCAT44((int)*(short *)(iVar3 + 0x10),(((unsigned __int64)(uStack_2e8) >> 32) & 0xFFFFFFFF));
        fn_8269DCE8(&uStack_1a0,pcStack_250,&uStack_2e8);
      }
      if ((*(unsigned short *)(iVar3 + 0x16) >> 6 & 1) != 0) {
        fn_8268B1F0(auStack_2e0,0xffffffff82015694,0xffffffffffffffff);
        lVar9 = fn_8278B238(iVar3,&ppuStack_2bc);
        ppuVar21 = (unsigned char **)0x0;
        if (ppuStack_2bc != (unsigned char **)0x0) {
          do {
            uStack_120 = 1;
            puStack_11c = auStack_2e0;
            abStack_2f0[0] = 1 - (ppuVar21 == (unsigned char **)0x0);
            fn_827930C8(&uStack_120,puStack_29c,abStack_2f0,lVar9);
            ppuVar21 = (unsigned char **)((int)ppuVar21 + 1);
            lVar9 = lVar9 + 4;
          } while (ppuVar21 < ppuStack_2bc);
        }
        fn_8268B1F0(auStack_2e0,0xffffffff8200c4f8,0xffffffffffffffff);
      }
      fn_8268B1F0(auStack_2e0,puStack_248,0xffffffffffffffff);
      if (((*(unsigned short *)(iVar3 + 0x16) >> 7 & 1) == 0) ||
         (bVar18 = true, (*(unsigned short *)(iVar3 + 0x16) & 0x8000) == 0)) {
        bVar18 = false;
      }
      puVar16 = puStack_2c0;
      if (bVar18) {
        puVar16 = puStack_2c4;
      }
      fn_8268B1F0(auStack_2e0,puVar16,0xffffffffffffffff);
      fn_8268B1F0(auStack_2e0,0xffffffff820156a0,0xffffffffffffffff);
      uVar7 = *(unsigned short *)(iVar3 + 0x16) >> 9 & 3;
      pcVar15 = pcStack_234;
      if (((uVar7 == 0) || (pcVar15 = pcStack_28c, uVar7 == 1)) ||
         ((pcVar15 = pcStack_240, uVar7 < 3 || (pcVar15 = pcStack_294, uVar7 == 3)))) {
        fn_8268B1F0(auStack_2e0,pcVar15,0xffffffffffffffff);
      }
      fn_8268B1F0(auStack_2e0,0xffffffff820156ac,0xffffffffffffffff);
      bVar18 = false;
      iStack_200 = iVar12 + 0x10;
      uStack_210 = 0;
      iVar19 = 0;
      uStack_20c = 0;
      uStack_208 = 0;
      iStack_204 = 0;
      uStack_1f8 = 0;
      uStack_1f0 = 0;
      iStack_1fc = iStack_200;
      iStack_1f4 = iVar12;
      if (*(int *)(iVar12 + 4) != 0) {
        do {
          piVar11 = (int *)fn_82791CF0(&uStack_210);
          bVar6 = false;
          if (piVar11[3] != 0) {
            iVar12 = fn_8278B458();
            if (iVar12 == 0) {
              if (((bVar18) && (iVar19 != 0)) &&
                 (cVar14 = fn_8278B928(iVar19,piVar11[3]), cVar14 == '\0')) {
                fn_8268B1F0(auStack_2e0,0xffffffff82015768,0xffffffffffffffff);
                bVar18 = false;
              }
              if (!bVar18) {
                fn_8268B1F0(auStack_2e0,pcStack_214,0xffffffffffffffff);
                if ((*(unsigned short *)(piVar11[3] + 0x2a) >> 2 & 1) != 0) {
                  puStack_1ac = auStack_2e0;
                  uStack_1b0 = 1;
                  uVar10 = fn_8278C028(piVar11[3]);
                  fn_82793130(&uStack_1b0,puStack_264,uVar10);
                }
                if ((*(unsigned short *)(piVar11[3] + 0x2a) >> 3 & 1) != 0) {
                  puStack_18c = auStack_2e0;
                  uStack_190 = 1;
                  lStack_1e8 = (__int64)(int)(unsigned int)*(unsigned short *)(piVar11[3] + 0x26);
                  uStack_2e8 = ((((unsigned __int64)(uStack_2e8)) & (~(((unsigned __int64)0xFFFFFFFF) << 32))) | ((((unsigned __int64)((unsigned int)(__int64)((double)lStack_1e8 * dVar22))) & ((unsigned __int64)0xFFFFFFFF)) << 32));
                  uStack_2e8 = CONCAT44((((unsigned __int64)(uStack_2e8) >> 32) & 0xFFFFFFFF),(((unsigned __int64)(uStack_2e8) >> 32) & 0xFFFFFFFF));
                  fn_82793058(&uStack_190,puStack_23c,&uStack_2e8);
                }
                if ((*(unsigned short *)(piVar11[3] + 0x2a) & 1) != 0) {
                  puStack_16c = auStack_2e0;
                  uStack_170 = 1;
                  uStack_2e8 = CONCAT44(*(unsigned int *)(piVar11[3] + 0x20),(((unsigned __int64)(uStack_2e8) >> 32) & 0xFFFFFFFF)) &
                               0xffffffffffffff;
                  fn_82793058(&uStack_170,puStack_25c,&uStack_2e8);
                }
                if ((*(unsigned short *)(piVar11[3] + 0x2a) >> 1 & 1) != 0) {
                  lStack_d0 = (__int64)*(short *)(piVar11[3] + 0x24);
                  puStack_14c = auStack_2e0;
                  uStack_150 = 1;
                  uStack_2e8 = CONCAT44((float)((double)lStack_d0 * dVar22),(((unsigned __int64)(uStack_2e8) >> 32) & 0xFFFFFFFF));
                  fn_827931A0(&uStack_150,pcStack_218,&uStack_2e8);
                }
                if ((*(unsigned short *)(piVar11[3] + 0x2a) >> 10 & 1) != 0) {
                  puStack_12c = auStack_2e0;
                  uStack_130 = 1;
                  uStack_2e8 = (unsigned __int64)
                               CONCAT14(*(unsigned char *)(piVar11[3] + 0x20),(((unsigned __int64)(uStack_2e8) >> 32) & 0xFFFFFFFF));
                  fn_82793058(&uStack_130,puStack_254,&uStack_2e8);
                }
                puStack_10c = auStack_2e0;
                uStack_110 = 1;
                abStack_2f0[0] = *(unsigned char *)(piVar11[3] + 0x28) >> 3 & 1;
                fn_82793210(&uStack_110,0xffffffff820157d0,abStack_2f0);
                fn_8268B1F0(auStack_2e0,0xffffffff820157e8,0xffffffffffffffff);
                bVar18 = true;
              }
              if ((*(unsigned short *)(piVar11[3] + 0x2a) & 0x100) == 0) {
LAB_82794418:
                bVar5 = false;
              }
              else {
                iVar13 = fn_8268ACE8(piVar11[3] + 0x10);
                bVar5 = true;
                if (iVar13 == 0) goto LAB_82794418;
              }
              if (bVar5) {
                puStack_ec = auStack_2e0;
                uStack_f0 = 1;
                fn_82793130(&uStack_f0,0xffffffff820156dc,(unsigned __int64)(unsigned int)piVar11[3] + 0x10);
              }
              if ((*(unsigned char *)(piVar11[3] + 0x28) & 1) != 0) {
                fn_8268B1F0(auStack_2e0,puStack_230,0xffffffffffffffff);
              }
              if ((*(unsigned char *)(piVar11[3] + 0x28) & 2) != 0) {
                fn_8268B1F0(auStack_2e0,puStack_24c,0xffffffffffffffff);
              }
              if ((*(unsigned char *)(piVar11[3] + 0x28) & 4) != 0) {
                fn_8268B1F0(auStack_2e0,puStack_220,0xffffffffffffffff);
              }
              if (piVar11[3] != 0) {
                fn_8267C4C8();
              }
              if (iVar19 != 0) {
                fn_8267C4F0(iVar19);
              }
              iVar19 = piVar11[3];
            }
            else {
              bVar6 = true;
              *(int *)(iVar12 + 4) = *(int *)(iVar12 + 4) + 1;
              if ((*(unsigned short *)(piVar11[3] + 0x2a) & 0x100) == 0) {
LAB_82794010:
                bVar5 = false;
              }
              else {
                iVar13 = fn_8268ACE8(piVar11[3] + 0x10);
                bVar5 = true;
                if (iVar13 == 0) goto LAB_82794010;
              }
              if (bVar5) {
                uStack_180 = 1;
                puStack_17c = auStack_2e0;
                fn_82793130(&uStack_180,0xffffffff820156dc,(unsigned __int64)(unsigned int)piVar11[3] + 0x10);
              }
              fn_8268B1F0(auStack_2e0,0xffffffff820156ec,0xffffffffffffffff);
              puVar4 = (unsigned int *)(*(unsigned int *)(iVar12 + 0x38) & 0xfffffffc);
              fn_8268B1F0(auStack_2e0,puVar4 + 2,*puVar4 & 0x7fffffff);
              fn_8268B1F0(auStack_2e0,0xffffffff8200c4f8,0xffffffffffffffff);
              if (*(unsigned int *)(iVar12 + 0x18) != 0) {
                uStack_e0 = 1;
                puStack_dc = auStack_2e0;
                uStack_2e8 = CONCAT44(*(unsigned int *)(iVar12 + 0x18) / 0x14,(((unsigned __int64)(uStack_2e8) >> 32) & 0xFFFFFFFF));
                fn_82793058(&uStack_e0,puStack_284,&uStack_2e8);
              }
              if (*(unsigned int *)(iVar12 + 0x1c) != 0) {
                uStack_160 = 1;
                puStack_15c = auStack_2e0;
                uStack_2e8 = CONCAT44(*(unsigned int *)(iVar12 + 0x1c) / 0x14,(((unsigned __int64)(uStack_2e8) >> 32) & 0xFFFFFFFF));
                fn_82793058(&uStack_160,puStack_22c,&uStack_2e8);
              }
              if (*(int *)(iVar12 + 0x40) != 0) {
                uStack_100 = 1;
                puStack_fc = auStack_2e0;
                uStack_2e8 = CONCAT44(*(int *)(iVar12 + 0x40) / 0x14,(((unsigned __int64)(uStack_2e8) >> 32) & 0xFFFFFFFF));
                fn_8269DCE8(&uStack_100,0xffffffff82015718,&uStack_2e8);
              }
              if (*(int *)(iVar12 + 0x44) != 0) {
                uStack_1e0 = 1;
                puStack_1dc = auStack_2e0;
                uStack_2e8 = CONCAT44(*(int *)(iVar12 + 0x44) / 0x14,(((unsigned __int64)(uStack_2e8) >> 32) & 0xFFFFFFFF));
                fn_8269DCE8(&uStack_1e0,0xffffffff82015708,&uStack_2e8);
              }
              if ((*(unsigned int *)(*(unsigned int *)(iVar12 + 0x3c) & 0xfffffffc) & 0x7fffffff) != 0) {
                puStack_1cc = auStack_2e0;
                uStack_1d0 = 1;
                fn_82793130(&uStack_1d0,puStack_27c,iVar12 + 0x3c);
              }
              fn_8268B1F0(auStack_2e0,0xffffffff820156a0,0xffffffffffffffff);
              bVar1 = *(unsigned char *)(iVar12 + 0x4c);
              pcVar15 = pcStack_21c;
              if (((bVar1 == 0) || (pcVar15 = pcStack_270, bVar1 == 1)) ||
                 (pcVar15 = pcStack_224, bVar1 < 3)) {
                fn_8268B1F0(auStack_2e0,pcVar15,0xffffffffffffffff);
              }
              fn_8268B1F0(auStack_2e0,0xffffffff820156ac,0xffffffffffffffff);
              if ((*(unsigned short *)(piVar11[3] + 0x2a) & 0x100) == 0) {
LAB_827941f4:
                bVar5 = false;
              }
              else {
                iVar13 = fn_8268ACE8(piVar11[3] + 0x10);
                bVar5 = true;
                if (iVar13 == 0) goto LAB_827941f4;
              }
              if (bVar5) {
                fn_8268B1F0(auStack_2e0,puStack_2b8,0xffffffffffffffff);
              }
            }
            if (iVar12 != 0) {
              fn_8267C498(iVar12);
            }
          }
          if (!bVar6) {
            uVar20 = 0;
            if (piVar11[2] != 0) {
              iVar12 = 0;
              do {
                sVar2 = *(short *)(iVar12 + *piVar11);
                if ((sVar2 != (unsigned short)((-(unsigned short)((*(unsigned char *)(iStack0000001c + 0x20) & 2) != 0) & 3)
                                      + 10)) && (sVar2 != 0)) {
                  puVar16 = puStack_258;
                  if ((sVar2 == 0x22) ||
                     ((((puVar16 = puStack_260, sVar2 == 0x26 ||
                        (puVar16 = puStack_268, sVar2 == 0x27)) ||
                       (puVar16 = puStack_26c, sVar2 == 0x3c)) ||
                      ((puVar16 = puStack_228, sVar2 == 0x3e ||
                       (puVar16 = puStack_2ac, sVar2 == 0xa0)))))) {
                    fn_8268B1F0(auStack_2e0,puVar16,0xffffffffffffffff);
                  }
                  else {
                    fn_8268B120();
                  }
                }
                uVar20 = uVar20 + 1;
                iVar12 = iVar12 + 2;
              } while (uVar20 < (unsigned int)piVar11[2]);
            }
            if (piVar11[3] != 0) {
              if ((*(unsigned char *)(piVar11[3] + 0x28) & 4) != 0) {
                fn_8268B1F0(auStack_2e0,puStack_2a8,0xffffffffffffffff);
              }
              if ((*(unsigned char *)(piVar11[3] + 0x28) & 2) != 0) {
                fn_8268B1F0(auStack_2e0,puStack_2a0,0xffffffffffffffff);
              }
              if ((*(unsigned char *)(piVar11[3] + 0x28) & 1) != 0) {
                fn_8268B1F0(auStack_2e0,puStack_298,0xffffffffffffffff);
              }
              if ((*(unsigned short *)(piVar11[3] + 0x2a) & 0x100) == 0) {
LAB_8279463c:
                bVar6 = false;
              }
              else {
                iVar12 = fn_8268ACE8(piVar11[3] + 0x10);
                bVar6 = true;
                if (iVar12 == 0) goto LAB_8279463c;
              }
              if (bVar6) {
                fn_8268B1F0(auStack_2e0,puStack_2b8,0xffffffffffffffff);
              }
            }
          }
          fn_82791DF0(&uStack_210);
        } while (uStack_1f0 < *(unsigned int *)(iStack_1f4 + 4));
      }
      if (bVar18) {
        fn_8268B1F0(auStack_2e0,0xffffffff82015768,0xffffffffffffffff);
      }
      fn_8268B1F0(auStack_2e0,puStack_290,0xffffffffffffffff);
      if (((*(unsigned short *)(iVar3 + 0x16) >> 7 & 1) == 0) ||
         (bVar18 = true, (*(unsigned short *)(iVar3 + 0x16) & 0x8000) == 0)) {
        bVar18 = false;
      }
      puVar16 = puStack_2c0;
      if (bVar18) {
        puVar16 = puStack_2c4;
      }
      fn_8268B1F0(auStack_2e0,puVar16,0xffffffffffffffff);
      fn_8268B1F0(auStack_2e0,pcStack_288,0xffffffffffffffff);
      if (iVar19 != 0) {
        fn_8267C4F0(iVar19);
      }
      if (iStack_204 != 0) {
        fn_8267C4F0();
      }
    }
    iVar12 = iStack_280;
    if (iStack_274 < *(int *)(iStack0000001c + 0x10)) {
      iStack_274 = iStack_274 + 1;
    }
  } while( true );
}

