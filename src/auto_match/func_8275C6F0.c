typedef unsigned char bool;
extern unsigned int *auStack_110;
extern unsigned int *auStack_114;
extern unsigned int *auStack_120;
extern unsigned int *auStack_70;
extern unsigned int *auStack_80;
extern unsigned int *auStack_90;
extern unsigned int *auStack_a0;
extern int fn_8267B890();
extern int fn_8267BE38();
extern int fn_8267C4F0();
extern int fn_82681728();
extern int fn_826824B0();
extern int fn_826826A8();
extern int fn_826828D8();
extern int fn_82683270();
extern int fn_82687270();
extern int fn_8268B330();
extern int fn_8268C510();
extern int fn_8268C750();
extern int fn_826944C8();
extern int fn_82695608();
extern int fn_826957D0();
extern int fn_82696330();
extern int fn_82696B20();
extern int fn_82696D38();
extern int fn_826A7398();
extern int fn_826ADE60();
extern int fn_826C52C8();
extern int fn_826C53D0();
extern int fn_826D06C8();
extern int fn_826D7220();
extern int fn_826F35B0();
extern int fn_826F5070();
extern int fn_826F7480();
extern int fn_8274A8E0();
extern int fn_8275BB38();
extern int fn_8275C268();
extern unsigned int iStack_124;
extern unsigned int iStack_12c;
extern unsigned int iStack_134;
extern unsigned int iStack_13c;
extern unsigned int iStack_b0;
extern unsigned int iStack_b8;
extern unsigned int iStack_c8;
extern unsigned int iStack_e0;
extern unsigned int iStack_e8;
extern unsigned int iStack_f8;
extern unsigned int lbl_8200579C;
extern unsigned int lbl_831E7E64;
extern unsigned int uStack_118;
extern unsigned int uStack_14c;
extern unsigned int uStack_150;
extern unsigned int uStack_b4;
extern unsigned int uStack_bc;
extern unsigned int uStack_c0;
extern unsigned int uStack_c4;
extern unsigned int uStack_e4;
extern unsigned int uStack_ec;
extern unsigned int uStack_f0;
extern unsigned int uStack_f4;
extern unsigned __int64 storeWordConditionalIndexed();


void fn_8275C6F0(int param_1)

{
  bool bVar1;
  unsigned int uVar2;
  unsigned char *puVar3;
  int iVar7;
  int *piVar8;
  __int64 lVar4;
  unsigned __int64 uVar5;
  unsigned __int64 uVar6;
  char cVar9;
  __int64 lVar10;
  unsigned int *puVar11;
  unsigned __int64 uVar12;
  unsigned int uVar13;
  unsigned __int64 uVar14;
  int iVar15;
  char in_RESERVE;
  unsigned char bVar16;
  unsigned int uStack_150;
  unsigned int uStack_14c;
  unsigned int *apuStack_148 [2];
  int *piStack_140;
  int iStack_13c;
  unsigned char bStack_138;
  int iStack_134;
  int *piStack_130;
  int iStack_12c;
  unsigned char bStack_128;
  int iStack_124;
  unsigned int auStack_120 [2];
  unsigned int uStack_118;
  unsigned char auStack_114 [4];
  unsigned char auStack_110 [16];
  unsigned char **ppuStack_100;
  unsigned char *puStack_fc;
  int iStack_f8;
  unsigned int uStack_f4;
  unsigned int uStack_f0;
  unsigned char uStack_ec;
  int iStack_e8;
  unsigned int uStack_e4;
  int iStack_e0;
  unsigned char **ppuStack_d0;
  unsigned char *puStack_cc;
  int iStack_c8;
  unsigned int uStack_c4;
  unsigned int uStack_c0;
  unsigned char uStack_bc;
  int iStack_b8;
  unsigned int uStack_b4;
  int iStack_b0;
  unsigned char auStack_a0 [16];
  unsigned char auStack_90 [16];
  unsigned char auStack_80 [16];
  unsigned char auStack_70 [112];
  
  iVar7 = fn_826A7398(*(unsigned int *)(param_1 + 0x18));
  if ((iVar7 != 0) && (piVar8 = (int *)fn_8274A8E0(iVar7 + 8), piVar8 != (int *)0x0)) {
    iVar15 = *(int *)(param_1 + 8) + -0x10;
    if (*(int *)(param_1 + 8) == 0) {
      iVar15 = 0;
    }
    lVar4 = fn_8275BB38(iVar15);
    if (lVar4 != 0) {
      if (*(int *)(param_1 + 0x1c) < 1) {
        fn_826ADE60(*(unsigned int *)(param_1 + 0x18),0xffffffff8201477c);
      }
      else {
        uVar2 = *(unsigned int *)(param_1 + 0x18);
        uVar5 = fn_826957D0(param_1,0);
        fn_82696D38(apuStack_148,uVar5,uVar2,0xffffffffffffffff,0);
        uVar14 = 0;
        if (1 < *(int *)(param_1 + 0x1c)) {
          uVar2 = *(unsigned int *)(param_1 + 0x18);
          uVar5 = fn_826957D0(param_1,1);
          uVar14 = fn_82695608(uVar5,uVar2);
        }
        uVar6 = fn_8267B890(lbl_831E7E64,0x54,0);
        bVar1 = (uVar6 & 0xffffffff) == 0;
        bVar16 = bVar1 << 1;
        if (bVar1) {
          uVar6 = 0;
        }
        else {
          lVar10 = (unsigned __int64)*(unsigned int *)(iVar7 + 0x100) + 8;
          if ((unsigned __int64)*(unsigned int *)(iVar7 + 0x100) == 0) {
            lVar10 = 0;
          }
          uVar6 = fn_826F5070(uVar6,*(unsigned int *)(*(int *)(iVar7 + 0x6c) + 0x14),lVar10,0);
        }
        fn_8268B330(&uStack_150);
        fn_826F7480(iVar7,&uStack_150);
        uVar5 = fn_8268C510(auStack_120,*apuStack_148[0]);
        uStack_118 = 0;
        fn_8268C750(auStack_114,uVar5);
        fn_8268C750(auStack_110,&uStack_150);
        lVar10 = ((unsigned __int64)auStack_120[0] & 0xfffffffc) + 4;
        do {
          puVar11 = (unsigned int *)lVar10;
          uVar12 = (unsigned __int64)*puVar11;
          if (in_RESERVE != '\0') {
            uVar13 = storeWordConditionalIndexed(uVar12 - 1,0,lVar10);
            *puVar11 = uVar13;
            bVar16 = 2;
          }
        } while (!(bool)(bVar16 >> 1 & 1));
        if (uVar12 == 1) {
          fn_8267BE38();
        }
        fn_8268B330(&uStack_14c);
        fn_826F35B0(uVar6,&uStack_14c,&uStack_118);
        uVar12 = (**(int (***)())(*piVar8 + 8))(piVar8,((unsigned __int64)uStack_14c & 0xfffffffc) + 8,uVar14);
        bVar16 = (uVar12 == 0) << 1;
        if (uVar12 == 0) {
          auStack_a0[0] = 0;
          fn_82681728(&iStack_134,
                            (unsigned __int64)*(unsigned int *)(*(int *)(param_1 + 0x18) + 0x78) + 0x254,
                            0xffffffff8200ebf0);
          cVar9 = (**(int (***)())(*(int *)(iVar15 + 0x10) + 0x2c))
                            (iVar15 + 0x10,(unsigned __int64)*(unsigned int *)(param_1 + 0x18) + 0x78,&iStack_134,
                             auStack_a0);
          lVar4 = (unsigned __int64)*(unsigned int *)(iStack_134 + 8) - 1;
          *(int *)(iStack_134 + 8) = (int)lVar4;
          if (lVar4 == 0) {
            fn_826944C8(iStack_134);
          }
          bVar16 = (cVar9 == '\0') << 1;
          if (cVar9 != '\0') {
            fn_82696B20(&piStack_130,auStack_a0,*(unsigned int *)(param_1 + 0x18));
            iVar7 = *(int *)(param_1 + 0x18);
            auStack_70[0] = 0;
            puVar11 = (unsigned int *)(iVar7 + 8);
            uVar13 = *(int *)(iVar7 + 8) + 0x10;
            *puVar11 = uVar13;
            if (*(unsigned int *)(iVar7 + 0x10) <= uVar13) {
              fn_826826A8(puVar11);
            }
            puVar3 = (unsigned char *)*puVar11;
            if (puVar3 != (unsigned char *)0x0) {
              puVar3[4] = 0;
              *puVar3 = 2;
            }
            iStack_b8 = *(int *)(param_1 + 0x18);
            puStack_cc = auStack_70;
            ppuStack_d0 = &lbl_8200579C;
            uStack_bc = 0;
            uStack_c4 = 0;
            uStack_c0 = 0;
            iStack_b0 = (*(int *)(iStack_b8 + 8) - *(int *)(iStack_b8 + 0xc) >> 4) +
                        *(int *)(iStack_b8 + 0x1c) * 0x20 + -0x20;
            uStack_b4 = 1;
            iStack_c8 = iVar15 + 0x10;
            (**(int (***)())(*piStack_130 + 0x28))(piStack_130,&ppuStack_d0,iStack_12c,0);
            fn_826828D8(&ppuStack_d0);
            fn_82683270((unsigned __int64)*(unsigned int *)(param_1 + 0x18) + 8,1);
            fn_82696330(auStack_70);
            if (((bStack_128 & 2) == 0) && (piStack_130 != (int *)0x0)) {
              fn_826824B0();
            }
            piStack_130 = (int *)0x0;
            bVar1 = (bStack_128 & 1) == 0;
            bVar16 = bVar1 << 1;
            if ((bVar1) && (iStack_12c != 0)) {
              fn_826824B0();
            }
            iStack_12c = 0;
          }
          fn_82696330(auStack_a0);
          lVar4 = ((unsigned __int64)uStack_14c & 0xfffffffc) + 4;
          do {
            puVar11 = (unsigned int *)lVar4;
            uVar14 = (unsigned __int64)*puVar11;
            if (in_RESERVE != '\0') {
              uVar13 = storeWordConditionalIndexed(uVar14 - 1,0,lVar4);
              *puVar11 = uVar13;
              bVar16 = 2;
            }
          } while (!(bool)(bVar16 >> 1 & 1));
          bVar16 = (uVar14 == 1) << 1;
          if (uVar14 == 1) {
            fn_8267BE38();
          }
          fn_826D7220(&uStack_118);
          lVar4 = ((unsigned __int64)uStack_150 & 0xfffffffc) + 4;
          do {
            puVar11 = (unsigned int *)lVar4;
            uVar14 = (unsigned __int64)*puVar11;
            if (in_RESERVE != '\0') {
              uVar13 = storeWordConditionalIndexed(uVar14 - 1,0,lVar4);
              *puVar11 = uVar13;
              bVar16 = 2;
            }
          } while (!(bool)(bVar16 >> 1 & 1));
        }
        else {
          if (*(int *)(iVar15 + 0x34) != 0) {
            fn_82687270();
          }
          *(unsigned int *)(iVar15 + 0x34) = 0;
          do {
            puVar11 = (unsigned int *)(uVar12 + 4);
            if (in_RESERVE != '\0') {
              uVar13 = storeWordConditionalIndexed((unsigned __int64)*puVar11 + 1,0,uVar12 + 4);
              *puVar11 = uVar13;
              bVar16 = 2;
            }
          } while (!(bool)(bVar16 >> 1 & 1));
          if (*(int *)(iVar15 + 0x30) != 0) {
            fn_8275C268();
          }
          *(int *)(iVar15 + 0x30) = (int)uVar12;
          if (((uVar14 & 0xff) != 0) &&
             (piVar8 = (int *)(**(int (***)())(*piVar8 + 0x14))(piVar8,uVar12 & 0xffffffff,1),
             piVar8 != (int *)0x0)) {
            iVar7 = *piVar8;
            fn_826C52C8(lVar4);
            (**(int (***)())(iVar7 + 0x28))(piVar8);
            iVar7 = *piVar8;
            fn_826C53D0(lVar4);
            (**(int (***)())(iVar7 + 0x30))(piVar8);
            (**(int (***)())(*piVar8 + 0x10))(piVar8,0);
            fn_826D06C8(lVar4,piVar8,iVar15,*(unsigned int *)(iVar15 + 0x34));
            fn_8267C4F0(piVar8);
          }
          auStack_90[0] = 0;
          fn_82681728(&iStack_124,
                            (unsigned __int64)*(unsigned int *)(*(int *)(param_1 + 0x18) + 0x78) + 0x254,
                            0xffffffff8200ebf0);
          cVar9 = (**(int (***)())(*(int *)(iVar15 + 0x10) + 0x2c))
                            (iVar15 + 0x10,(unsigned __int64)*(unsigned int *)(param_1 + 0x18) + 0x78,&iStack_124,
                             auStack_90);
          lVar4 = (unsigned __int64)*(unsigned int *)(iStack_124 + 8) - 1;
          *(int *)(iStack_124 + 8) = (int)lVar4;
          if (lVar4 == 0) {
            fn_826944C8(iStack_124);
          }
          bVar16 = (cVar9 == '\0') << 1;
          if (cVar9 != '\0') {
            fn_82696B20(&piStack_140,auStack_90,*(unsigned int *)(param_1 + 0x18));
            auStack_80[0] = 0;
            iVar7 = *(int *)(param_1 + 0x18);
            puVar11 = (unsigned int *)(iVar7 + 8);
            uVar13 = *(int *)(iVar7 + 8) + 0x10;
            *puVar11 = uVar13;
            if (*(unsigned int *)(iVar7 + 0x10) <= uVar13) {
              fn_826826A8(puVar11);
            }
            puVar3 = (unsigned char *)*puVar11;
            if (puVar3 != (unsigned char *)0x0) {
              puVar3[4] = 1;
              *puVar3 = 2;
            }
            iStack_e8 = *(int *)(param_1 + 0x18);
            puStack_fc = auStack_80;
            ppuStack_100 = &lbl_8200579C;
            uStack_f4 = 0;
            uStack_f0 = 0;
            uStack_ec = 0;
            iStack_e0 = (*(int *)(iStack_e8 + 8) - *(int *)(iStack_e8 + 0xc) >> 4) +
                        *(int *)(iStack_e8 + 0x1c) * 0x20 + -0x20;
            uStack_e4 = 1;
            iStack_f8 = iVar15 + 0x10;
            (**(int (***)())(*piStack_140 + 0x28))(piStack_140,&ppuStack_100,iStack_13c,0);
            fn_826828D8(&ppuStack_100);
            fn_82683270((unsigned __int64)*(unsigned int *)(param_1 + 0x18) + 8,1);
            fn_82696330(auStack_80);
            if (((bStack_138 & 2) == 0) && (piStack_140 != (int *)0x0)) {
              fn_826824B0();
            }
            piStack_140 = (int *)0x0;
            bVar1 = (bStack_138 & 1) == 0;
            bVar16 = bVar1 << 1;
            if ((bVar1) && (iStack_13c != 0)) {
              fn_826824B0();
            }
            iStack_13c = 0;
          }
          fn_82683270((unsigned __int64)*(unsigned int *)(param_1 + 0x18) + 8,1);
          fn_82696330(auStack_90);
          fn_8275C268(uVar12);
          lVar4 = ((unsigned __int64)uStack_14c & 0xfffffffc) + 4;
          do {
            puVar11 = (unsigned int *)lVar4;
            uVar14 = (unsigned __int64)*puVar11;
            if (in_RESERVE != '\0') {
              uVar13 = storeWordConditionalIndexed(uVar14 - 1,0,lVar4);
              *puVar11 = uVar13;
              bVar16 = 2;
            }
          } while (!(bool)(bVar16 >> 1 & 1));
          bVar16 = (uVar14 == 1) << 1;
          if (uVar14 == 1) {
            fn_8267BE38();
          }
          fn_826D7220(&uStack_118);
          lVar4 = ((unsigned __int64)uStack_150 & 0xfffffffc) + 4;
          do {
            puVar11 = (unsigned int *)lVar4;
            uVar14 = (unsigned __int64)*puVar11;
            if (in_RESERVE != '\0') {
              uVar13 = storeWordConditionalIndexed(uVar14 - 1,0,lVar4);
              *puVar11 = uVar13;
              bVar16 = 2;
            }
          } while (!(bool)(bVar16 >> 1 & 1));
        }
        if (uVar14 == 1) {
          fn_8267BE38();
        }
        if ((uVar6 & 0xffffffff) != 0) {
          fn_8267C4F0(uVar6);
        }
        uVar13 = apuStack_148[0][2];
        apuStack_148[0][2] = (int)((unsigned __int64)uVar13 - 1);
        if ((unsigned __int64)uVar13 - 1 == 0) {
          fn_826944C8(apuStack_148[0]);
        }
      }
    }
  }
  return;
}

