typedef unsigned char bool;
#define true 1
#define false 0
extern unsigned int *auStack_98;
extern unsigned int *auStack_a8;
extern unsigned int *auStack_b0;
extern unsigned int *auStack_b8;
extern unsigned int *auStack_c0;
extern unsigned int *auStack_c8;
extern int fn_82AA66A8();
extern int fn_82ABDD90();
extern int fn_82AD1270();
extern int fn_82AD17B0();
extern int fn_82AD1978();
extern int fn_82AE7110();
extern int fn_82AE7308();
extern int fn_82B24700();
extern int fn_82B465E0();
extern int fn_82B47660();
extern int fn_82B49CC0();
extern int fn_82B49D90();
extern int fn_82B4B1D8();
extern int fn_82B4BAA8();
extern int fn_82B4C7C0();
extern int fn_82B4C8A0();
extern int fn_82B4D090();
extern int fn_82B4DA98();
extern int fn_82B4DC88();
extern int fn_82B50AA8();
extern int fn_82B50B00();
extern int fn_82B81A98();
extern int fn_82B841E8();
extern int fn_82B866A0();
extern int fn_82B8A350();
extern unsigned int iStack_90;
extern unsigned int iStack_94;
extern unsigned int iStack_a0;
extern unsigned int iStack_a4;
extern unsigned int lbl_82002AE0;
extern unsigned int lbl_82005710;
extern unsigned int lbl_821AAD20;
extern unsigned int uStack_d0;
extern unsigned int uStack_e8;
extern unsigned int uStack_f0;
extern unsigned int uStack_f8;


void fn_82B53638(int param_1,unsigned __int64 param_2,unsigned __int64 param_3,unsigned __int64 param_4)

{
  bool bVar1;
  unsigned int uVar2;
  unsigned short uVar3;
  unsigned __int64 uVar4;
  unsigned int uVar5;
  int iVar6;
  unsigned int *puVar11;
  unsigned __int64 uVar7;
  unsigned int *puVar12;
  char cVar18;
  unsigned int *puVar13;
  unsigned __int64 uVar8;
  unsigned __int64 uVar9;
  unsigned __int64 uVar10;
  unsigned int uVar15;
  unsigned int uVar16;
  unsigned int *puVar17;
  int iVar19;
  unsigned short uVar20;
  unsigned __int64 uVar21;
  unsigned int *puVar22;
  unsigned __int64 uVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  double dStack_100;
  unsigned __int64 uStack_f8;
  unsigned __int64 uStack_f0;
  unsigned __int64 uStack_e8;
  double dStack_e0;
  double dStack_d8;
  unsigned __int64 uStack_d0;
  unsigned char auStack_c8 [8];
  unsigned char auStack_c0 [8];
  unsigned char auStack_b8 [8];
  unsigned char auStack_b0 [8];
  unsigned char auStack_a8 [4];
  int iStack_a4;
  int iStack_a0;
  unsigned char auStack_98 [4];
  int iStack_94;
  int iStack_90;
  unsigned char *puVar14;
  
  puVar11 = (unsigned int *)fn_82AE7110(param_1,param_2,0,0);
  uVar21 = 0;
  if ((param_4 & 0xffffffff) != 0) {
    dVar25 = (double)lbl_82002AE0;
    dVar27 = (double)lbl_821AAD20;
    dVar26 = lbl_82005710;
    do {
      uVar7 = fn_82B50B00(puVar11);
      if ((uVar7 & 0xffffffff) == 0) {
        fn_82B24700(auStack_98,param_3);
        fn_82B4B1D8(auStack_98,param_4);
        iVar6 = iStack_90;
        iVar19 = iStack_94;
        fn_82B47660(auStack_98,uVar21);
        puVar12 = (unsigned int *)((iStack_90 + 2) * 8 + iStack_94);
        iStack_94 = iVar19;
        iStack_90 = iVar6;
        cVar18 = fn_82B465E0(param_1,puVar12,&dStack_d8);
        if (cVar18 == '\0') {
          uVar8 = fn_82B4BAA8(param_1,puVar12);
          fn_82AD1270(uVar8,2);
          fn_82B866A0(dVar27,dVar27,dVar27,dVar27,&uStack_d0,param_1,1);
          uVar16 = fn_82B4D090(param_1,uVar8,uStack_d0);
          *puVar12 = uVar16;
          uVar15 = puVar12[1] & 0x10000 | 1;
        }
        else {
          dVar24 = dVar27;
          if (dStack_d8 != dVar26) {
            dVar24 = dVar25;
          }
          if (dStack_d8 == dVar24) goto LAB_82b53d34;
          puVar17 = (unsigned int *)
                    fn_82B866A0(dVar24,dVar27,dVar27,dVar27,auStack_b0,param_1,1);
          *puVar12 = *puVar17;
          uVar15 = puVar17[1];
        }
        puVar12[1] = uVar15;
      }
      else {
        if (0xd < (uVar7 & 0xffffffff)) {
                    /* WARNING: Subroutine does not return */
          fn_82AA66A8(param_1,0x12c1);
        }
        fn_82B24700(auStack_a8,param_3);
        fn_82B4B1D8(auStack_a8,param_4);
        iVar6 = iStack_a0;
        iVar19 = iStack_a4;
        fn_82B47660(auStack_a8,uVar21);
        uVar20 = 0;
        uVar23 = 0;
        puVar22 = (unsigned int *)((iStack_a0 + 2) * 8 + iStack_a4);
        uVar15 = puVar22[1];
        iStack_a4 = iVar19;
        iStack_a0 = iVar6;
        if ((uVar15 & 3) == 0) {
          uVar2 = uVar15 >> 0x11;
          uVar15 = uVar15 >> 2;
LAB_82b5379c:
          uVar15 = uVar15 & 0x3fff;
          iVar19 = (uVar2 & 0x7fff) * 0x28;
          puVar13 = (unsigned int *)(*(int *)(param_1 + 0xc) + iVar19);
          if ((*puVar13 & 7) == 1) {
            if (puVar13[7] == 0) {
              fn_82AE7308(param_1);
            }
            uVar15 = *(unsigned int *)(*(int *)(*(int *)(param_1 + 0xc) + iVar19 + 0x1c) + uVar15 * 8) >>
                     0x12;
LAB_82b53760:
            iVar19 = (uVar15 & 3) - 2;
            uVar20 = -(((uVar15 & 3) < 2) - 1);
LAB_82b538a8:
            uVar23 = (unsigned __int64)(iVar19 == 0);
          }
          else {
            puVar12 = (unsigned int *)fn_82AE7110(param_1,puVar13[5],0,0);
            do {
              iVar19 = fn_82B50B00(puVar12);
              bVar1 = uVar15 != 0;
              uVar15 = uVar15 - 1;
            } while (bVar1);
            *puVar12 = *(unsigned int *)(param_1 + 0x3ec);
            *(unsigned int **)(param_1 + 0x3ec) = puVar12;
            if ((iVar19 < 1) || (uVar20 = 1, 9 < iVar19)) {
              uVar20 = 0;
            }
            if ((iVar19 < 2) || (5 < iVar19)) {
              uVar23 = 0;
            }
            else {
              uVar23 = 1;
            }
          }
        }
        else if ((uVar15 & 3) == 1) {
          uVar2 = *puVar22;
          uVar5 = *(unsigned int *)(uVar2 + 8) >> 7 & 0x7f;
          if (uVar5 == 0x7c) {
            uVar15 = *(unsigned int *)(uVar2 + 8);
            iVar19 = fn_82ABDD90(param_1,uVar15 >> 7 & 0x7f,uVar15 >> 0x13 & 7,uVar15 >> 0xe & 7);
            uVar15 = *(unsigned int *)(iVar19 + (uVar2 - 8)) >> 0x1d;
            goto LAB_82b53760;
          }
          if (uVar5 == 0x70) {
            iVar19 = fn_82ABDD90(param_1,0x70,0,1);
            uVar2 = *(unsigned int *)(iVar19 + (uVar2 - 8));
            uVar15 = uVar2 >> 0xf;
            goto LAB_82b5379c;
          }
          if (uVar5 != 0x7d) {
            uVar3 = *(unsigned short *)(uVar2 + 0xe) >> (uVar15 & 0x3c);
            uVar20 = uVar3 >> 2 & 1;
            uVar23 = (~(unsigned __int64)uVar3 & 0xffffffff) >> 1 & 1;
            goto LAB_82b538cc;
          }
          if (((~(unsigned __int64)*(unsigned int *)(*(int *)(*(int *)(uVar2 & 0xfffff000) + 0x94) + 0x28) &
               0xffffffff) >> 0xe & 1) == 0) {
            uVar15 = 0;
          }
          else {
            uVar15 = (*(unsigned int *)(uVar2 + 0x14) >> 2 & 0xff) >> (uVar15 >> 1 & 0x3e) & 3;
          }
          iVar19 = uVar15 - 1;
          uVar20 = (unsigned short)(uVar15 != 0);
          goto LAB_82b538a8;
        }
LAB_82b538cc:
        uVar4 = ((~uVar7 & 0xffffffff) >> 0x1f) + (unsigned __int64)(5 < uVar7) & 1;
        if ((((~uVar7 & 0xffffffff) >> 0x1f) + (unsigned __int64)(9 < uVar7) & 1) == 0) {
          cVar18 = fn_82B465E0(param_1,puVar22,&dStack_e0);
          if ((cVar18 == '\0') || ((double)(float)dStack_e0 != dStack_e0)) {
            if ((uVar20 & 0xff) != 0) {
              uVar15 = fn_82B841E8(param_1,(unsigned __int64)*(unsigned int *)(param_1 + 0x234),
                                         (unsigned __int64)*(unsigned int *)(param_1 + 0x234) + 0x18,0x67,1,1);
              iVar19 = fn_82ABDD90(param_1,0x67,*(unsigned int *)(uVar15 + 8) >> 0x13 & 7,0);
              *(unsigned int *)(iVar19 + (uVar15 - 4)) = (unsigned int)(uVar23 == 0);
              uVar8 = fn_82B4BAA8(param_1,puVar22);
              uVar16 = fn_82AD1978(uVar15,uVar8);
              goto LAB_82b53bdc;
            }
          }
          else {
            puVar13 = (unsigned int *)fn_82B866A0((double)(float)dStack_e0,dVar27,dVar27,dVar27,
                                                auStack_b8,param_1,1);
LAB_82b53b58:
            *puVar22 = *puVar13;
            puVar22[1] = puVar13[1];
          }
        }
        else {
          if ((uVar20 & 0xff) == 0) {
            cVar18 = fn_82B465E0(param_1,puVar22,&dStack_100);
            if (cVar18 != '\0') {
              if (uVar4 == 0) {
                uStack_e8 = (__int64)dStack_100;
                puVar14 = auStack_c0;
                iVar19 = (((unsigned __int64)(uStack_e8) >> 32) & 0xFFFFFFFF);
              }
              else {
                uStack_e8 = (__int64)(int)dStack_100;
                puVar14 = auStack_c8;
                iVar19 = (int)dStack_100;
              }
              puVar13 = (unsigned int *)fn_82B8A350(puVar14,param_1,iVar19,uVar4 != 0);
              goto LAB_82b53b58;
            }
            fn_82B8A350(&uStack_f0,param_1,0,uVar4);
            fn_82B8A350(&uStack_f8,param_1,1,uVar4);
            uVar8 = fn_82B4DC88(param_1,puVar22,uStack_f0,uStack_f8);
            iVar19 = fn_82B4C8A0(param_1,puVar22);
            uVar9 = fn_82B81A98(param_1,iVar19,*(unsigned int *)(iVar19 + 8) >> 0xe & 7,4,0xe4);
            uVar9 = fn_82B4C7C0(param_1,puVar22,uVar9);
            uVar10 = fn_82B81A98(param_1,iVar19,*(unsigned int *)(iVar19 + 8) >> 0xe & 7,4,0xe4);
            uVar10 = fn_82B4DA98(param_1,uVar10,uStack_f0,uStack_f8);
            uVar8 = fn_82B49D90(param_1,uVar8,uVar10);
            uVar8 = fn_82B49CC0(param_1,uVar9,uVar8);
            uVar15 = fn_82B841E8(param_1,(unsigned __int64)*(unsigned int *)(param_1 + 0x234),
                                       (unsigned __int64)*(unsigned int *)(param_1 + 0x234) + 0x18,0x67,1,1);
            iVar19 = fn_82ABDD90(param_1,0x67,*(unsigned int *)(uVar15 + 8) >> 0x13 & 7,0);
            *(unsigned int *)(iVar19 + (uVar15 - 4)) = ((unsigned int)LZCOUNT((int)uVar4) >> 5) + 4;
            uVar8 = fn_82AD17B0(param_1,uVar8);
          }
          else {
            if (uVar4 == uVar23) goto LAB_82b53d34;
            uVar15 = fn_82B841E8(param_1,(unsigned __int64)*(unsigned int *)(param_1 + 0x234),
                                       (unsigned __int64)*(unsigned int *)(param_1 + 0x234) + 0x18,0x67,1,1);
            iVar19 = fn_82ABDD90(param_1,0x67,*(unsigned int *)(uVar15 + 8) >> 0x13 & 7,0);
            *(unsigned int *)(iVar19 + (uVar15 - 4)) = ((unsigned int)LZCOUNT((int)uVar4) >> 5 ^ 1) + 2;
            uVar8 = fn_82B4BAA8(param_1,puVar22);
          }
          uVar16 = fn_82AD1978(uVar15,uVar8);
          uVar23 = uVar4;
LAB_82b53bdc:
          *(unsigned int *)(uVar15 + 0x2c) = uVar16;
          uVar2 = *(unsigned int *)(uVar15 + 0xc);
          if (uVar23 == 0) {
            if ((uVar2 & 0x6666) != 0x6666) {
              uVar20 = (unsigned short)uVar2 | 0x6666;
              goto LAB_82b53c0c;
            }
          }
          else if ((uVar2 & 0x4444) != 0x4444) {
            uVar20 = (unsigned short)uVar2 | 0x4444;
LAB_82b53c0c:
            *(unsigned short *)(uVar15 + 0xe) = uVar20;
          }
          *puVar22 = uVar15;
          puVar22[1] = puVar22[1] & 0x10000 | 1;
          *(unsigned int *)(param_1 + 0x2c) = *(unsigned int *)(param_1 + 0x2c) | 0x400;
        }
      }
LAB_82b53d34:
      uVar21 = uVar21 + 1;
    } while ((uVar21 & 0xffffffff) < (param_4 & 0xffffffff));
  }
  if (puVar11[1] == 0) {
    cVar18 = fn_82B50AA8(puVar11);
    bVar1 = true;
    if (cVar18 == '\0') goto LAB_82b53d64;
  }
  bVar1 = false;
LAB_82b53d64:
  if (bVar1) {
    *puVar11 = *(unsigned int *)(param_1 + 0x3ec);
    *(unsigned int **)(param_1 + 0x3ec) = puVar11;
    return;
  }
                    /* WARNING: Subroutine does not return */
  fn_82AA66A8(param_1,0x12c1);
}

