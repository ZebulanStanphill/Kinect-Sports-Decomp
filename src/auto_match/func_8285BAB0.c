typedef unsigned char bool;
#define true 1
#define false 0
extern unsigned int *auStack_140;
extern unsigned int *auStack_170;
extern unsigned int *auStack_180;
extern unsigned int *auStack_190;
extern unsigned int *auStack_1b0;
extern unsigned int *auStack_1c0;
extern unsigned int fStack_194;
extern unsigned int fStack_198;
extern unsigned int fStack_19c;
extern unsigned int fStack_1a0;
extern int fn_8265C9E0();
extern int fn_8265CA20();
extern int fn_828116B8();
extern int fn_8285B008();
extern int fn_8305C3F8();
extern int fn_8305D038();
extern int fn_8305D7B8();
extern int fn_8305D7C0();
extern int fn_8305E0F8();
extern int fn_8305EC98();
extern int fn_8305ED48();
extern int fn_8305F320();
extern int fn_8305F818();
extern int fn_8305F820();
extern int fn_83060380();
extern int fn_830603C0();
extern int fn_830603D0();
extern int fn_83060CB0();
extern int fn_83060CD0();
extern int fn_83061508();
extern int fn_83061548();
extern int fn_83061F30();
extern int fn_83065E50();
extern int fn_83066690();
extern int fn_83066810();


void fn_8285BAB0(int *param_1,int param_2,int param_3,int param_4,int param_5,unsigned int *param_6,
                  __int64 param_7)

{
  unsigned int uVar1;
  int iVar2;
  bool bVar3;
  bool bVar4;
  int iVar8;
  unsigned __int64 uVar5;
  int iVar9;
  char cVar10;
  unsigned __int64 uVar6;
  unsigned __int64 uVar7;
  unsigned __int64 uVar11;
  __int64 lVar12;
  unsigned int *puVar13;
  int iVar14;
  int iVar15;
  __int64 lVar16;
  unsigned char *puVar17;
  unsigned char *puVar18;
  int iVar19;
  __int64 lVar20;
  float *pfVar21;
  double dVar22;
  char acStack_1d0 [16];
  unsigned char auStack_1c0 [16];
  unsigned char auStack_1b0 [16];
  float fStack_1a0;
  float fStack_19c;
  float fStack_198;
  float fStack_194;
  unsigned char auStack_190 [16];
  unsigned char auStack_180 [16];
  unsigned char auStack_170 [48];
  unsigned char auStack_140 [320];
  
  iVar14 = 0;
  if (param_4 == 0) {
    dVar22 = (double)*(float *)(param_2 + 0x74);
    if (((param_5 != 0) && (param_6 != (unsigned int *)0x0)) &&
       (lVar12 = param_7, puVar13 = param_6, 0 < (int)param_7)) {
      do {
        lVar16 = (unsigned __int64)*(unsigned int *)*puVar13 * 0x30 + (unsigned __int64)*(unsigned int *)(param_5 + 4);
        iVar8 = fn_8265C9E0(0x30);
        if (iVar8 == 0) {
          uVar5 = 0;
        }
        else {
          uVar5 = fn_83061508();
        }
        fn_8305F818(lVar16,uVar5);
        puVar17 = auStack_140;
        pfVar21 = (float *)(puVar13 + 0x14);
        lVar20 = 6;
        do {
          fStack_1a0 = *pfVar21;
          fStack_19c = pfVar21[1];
          fStack_198 = pfVar21[2];
          fStack_194 = pfVar21[3];
          fn_83066690(-(double)fStack_1a0,-(double)fStack_19c,-(double)fStack_198,
                       (double)fStack_194,puVar17);
          lVar20 = lVar20 + -1;
          pfVar21 = pfVar21 + 4;
          puVar17 = puVar17 + 0x1c;
        } while (lVar20 != 0);
        fn_83060380(auStack_1b0,lVar16);
        fn_83060CB0(auStack_1b0);
        while (cVar10 = fn_830603C0(auStack_1b0), cVar10 == '\0') {
          uVar6 = fn_830603D0(auStack_1b0);
          acStack_1d0[0] = '\0';
          acStack_1d0[1] = 0;
          acStack_1d0[2] = 0;
          bVar4 = false;
          acStack_1d0[3] = 0;
          bVar3 = false;
          acStack_1d0[4] = 0;
          iVar8 = 0;
          acStack_1d0[5] = 0;
          puVar17 = auStack_140;
          do {
            iVar9 = fn_83066810((double)*(float *)(param_2 + 0x74),puVar17,uVar6);
            if (iVar9 == 3) {
              bVar4 = true;
              acStack_1d0[iVar8] = '\x01';
            }
            else if (iVar9 == 1) {
              bVar3 = true;
              break;
            }
            iVar8 = iVar8 + 1;
            puVar17 = puVar17 + 0x1c;
          } while (iVar8 < 6);
          if (bVar3) {
            uVar11 = 2;
LAB_8285bd08:
            fn_8305D7B8(uVar6,uVar11);
          }
          else {
            if (!bVar4) {
              uVar11 = 1;
              goto LAB_8285bd08;
            }
            fn_8305D7B8(uVar6,3);
            uVar11 = fn_83065E50();
            fn_8305E0F8(uVar11,uVar5);
            fn_8305EC98(uVar11,uVar6);
            fn_8305D7B8(uVar11,1);
            iVar8 = 0;
            puVar17 = auStack_140;
            do {
              if (acStack_1d0[iVar8] != '\0') {
                uVar6 = fn_83065E50();
                fn_8305E0F8(uVar6,uVar5);
                fn_8305EC98(uVar6,uVar11);
                fn_8305D7B8(uVar6,2);
                fn_8305F320(dVar22,uVar11,puVar17,uVar6,uVar11);
              }
              iVar8 = iVar8 + 1;
              puVar17 = puVar17 + 0x1c;
            } while (iVar8 < 6);
          }
          fn_83060CD0(auStack_1b0);
        }
        fn_83061508(auStack_170);
        fn_8305C3F8(param_2 + 0x6c,auStack_180,auStack_190);
        iVar8 = 0;
        puVar17 = auStack_140;
        do {
          uVar6 = fn_83065E50();
          fn_8305E0F8(uVar6,auStack_170);
          fn_8305ED48(uVar6,puVar17,auStack_180,auStack_190);
          iVar9 = 0;
          puVar18 = auStack_140;
          do {
            if (iVar9 != iVar8) {
              fn_8305F320(dVar22,uVar6,puVar18,0,uVar6);
            }
            iVar9 = iVar9 + 1;
            puVar18 = puVar18 + 0x1c;
          } while (iVar9 < 6);
          iVar8 = iVar8 + 1;
          puVar17 = puVar17 + 0x1c;
        } while (iVar8 < 6);
        fn_8305D038(param_2 + 0x6c,(unsigned __int64)*(unsigned int *)*puVar13 + 1,auStack_170);
        fn_83060380(auStack_1c0,auStack_170);
        fn_83060CB0(auStack_1c0);
        while (cVar10 = fn_830603C0(auStack_1c0), cVar10 == '\0') {
          uVar6 = fn_83065E50();
          fn_8305E0F8(uVar6,uVar5);
          uVar11 = fn_830603D0(auStack_1c0);
          fn_8305EC98(uVar6,uVar11);
          fn_8305D7B8(uVar6,1);
          fn_83060CD0(auStack_1c0);
        }
        fn_83061548(auStack_170,0);
        fn_83061F30(auStack_170);
        lVar12 = lVar12 + -1;
        puVar13 = puVar13 + 0x36;
      } while (lVar12 != 0);
    }
    iVar15 = 0;
    iVar8 = *(int *)(param_2 + 0x68);
    iVar9 = *(int *)(param_3 + 8);
    if (*(short *)(param_2 + 0x44) != 0) {
      lVar12 = 0;
      iVar19 = 0;
      do {
        iVar2 = *(int *)(*(int *)(param_2 + 0x40) + iVar19);
        uVar7 = fn_828116B8(*(unsigned int *)
                              (*(int *)(param_3 + 8) + *(int *)(param_2 + 0x68) + 0x2c),
                             *(unsigned int *)(iVar2 + 0x4c));
        if (param_5 == 0) {
          if (iVar2 == *(int *)(iVar9 + iVar8)) {
            uVar5 = 0x82;
            uVar11 = 0xff;
            uVar6 = 0x82;
          }
          else {
            uVar5 = 0;
            if ((-uVar7 & ~uVar7 & 0xffffffff) >> 0x1f == 0) {
              uVar11 = 0;
              uVar6 = 0xd2;
            }
            else {
              uVar11 = 0xb4;
              uVar6 = 0;
            }
          }
          (**(int (***)())*param_1)(param_1,uVar6,uVar11,uVar5,0xff);
          (**(int (***)())(*param_1 + 4))(param_1,iVar2 + 4,iVar2 + 0x10);
        }
        else {
          lVar16 = (unsigned __int64)*(unsigned int *)(param_5 + 4) + lVar12;
          uVar7 = fn_8305F820(lVar16);
          fn_8285B008(param_1,lVar16);
          if ((uVar7 & 0xffffffff) != 0) {
            fn_8285B008(param_1,uVar7);
          }
        }
        iVar15 = iVar15 + 1;
        iVar19 = iVar19 + 4;
        lVar12 = lVar12 + 0x30;
      } while (iVar15 < (int)(unsigned int)*(unsigned short *)(param_2 + 0x44));
    }
    if (((param_5 != 0) && (param_6 != (unsigned int *)0x0)) && (0 < (int)param_7)) {
      do {
        lVar12 = (unsigned __int64)*(unsigned int *)*param_6 * 0x30 + (unsigned __int64)*(unsigned int *)(param_5 + 4);
        fn_83060380(auStack_1c0,lVar12);
        fn_83060CB0(auStack_1c0);
        while (cVar10 = fn_830603C0(auStack_1c0), cVar10 == '\0') {
          uVar5 = fn_830603D0(auStack_1c0);
          fn_8305D7C0();
          fn_8305D7B8(uVar5,0);
          fn_83060CD0(auStack_1c0);
        }
        uVar7 = fn_8305F820(lVar12);
        fn_83061548(uVar7,0);
        if ((uVar7 & 0xffffffff) != 0) {
          fn_83061F30(uVar7);
          fn_8265CA20(uVar7);
        }
        fn_8305F818(lVar12,0);
        param_7 = param_7 + -1;
        param_6 = param_6 + 0x36;
      } while (param_7 != 0);
    }
  }
  iVar8 = 0;
  if (*(unsigned short *)(param_2 + 0x38) != 0) {
    do {
      iVar8 = iVar8 + 1;
    } while (iVar8 < (int)(unsigned int)*(unsigned short *)(param_2 + 0x38));
  }
  (**(int (***)())(*param_1 + 8))(param_1);
  if (*(short *)(param_2 + 0x38) != 0) {
    iVar8 = 0;
    do {
      iVar9 = *(int *)(*(int *)(param_2 + 0x34) + iVar8);
      (**(int (***)())*param_1)(param_1,0,200,200,0x41);
      if (*(int *)(param_2 + 0x2c) == 1) {
        iVar15 = 2;
        uVar1 = *(unsigned int *)(iVar9 + 0x14);
        if (2 < *(unsigned short *)(iVar9 + 0x18)) {
          lVar12 = (unsigned __int64)uVar1 + 0x18;
          do {
            (**(int (***)())(*param_1 + 0x10))(param_1,(unsigned __int64)uVar1,lVar12 + -0xc,lVar12);
            iVar15 = iVar15 + 1;
            lVar12 = lVar12 + 0xc;
          } while (iVar15 < (int)(unsigned int)*(unsigned short *)(iVar9 + 0x18));
        }
      }
      else if (*(int *)(param_2 + 0x2c) == 3) {
        iVar15 = 2;
        uVar1 = *(unsigned int *)(iVar9 + 0x14);
        if (2 < *(unsigned short *)(iVar9 + 0x18)) {
          lVar12 = (unsigned __int64)uVar1 + 0x20;
          do {
            (**(int (***)())(*param_1 + 0x10))(param_1,(unsigned __int64)uVar1,lVar12 + -0x10,lVar12);
            iVar15 = iVar15 + 1;
            lVar12 = lVar12 + 0x10;
          } while (iVar15 < (int)(unsigned int)*(unsigned short *)(iVar9 + 0x18));
        }
      }
      iVar14 = iVar14 + 1;
      iVar8 = iVar8 + 4;
    } while (iVar14 < (int)(unsigned int)*(unsigned short *)(param_2 + 0x38));
  }
  (**(int (***)())(*param_1 + 0xc))(param_1);
  return;
}

