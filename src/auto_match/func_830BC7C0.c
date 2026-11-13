typedef unsigned char bool;
extern unsigned int *auStack_3b0;
extern unsigned int *auStack_600;
extern int fn_82C8FB00();
extern int fn_82C8FD40();
extern int fn_82CC3930();
extern unsigned int iStack00000014;
extern unsigned int iStack0000003c;
extern unsigned int iStack_684;
extern unsigned int uRam8329f07c;
extern unsigned int uStack_678;
extern unsigned int uStack_67c;
extern unsigned int uStack_680;


unsigned __int64 fn_830BC7C0(int param_1,int param_2,int *param_3,int param_4,int param_5,int param_6)

{
  unsigned short uVar1;
  unsigned short uVar2;
  unsigned short uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  unsigned __int64 *puVar8;
  unsigned int uVar9;
  unsigned int uVar10;
  unsigned int uVar11;
  unsigned int uVar12;
  unsigned int uVar13;
  unsigned int uVar14;
  unsigned int uVar15;
  unsigned int uVar16;
  unsigned int uVar17;
  unsigned int uVar18;
  bool bVar19;
  __int64 lVar20;
  int iVar21;
  int iVar22;
  int iVar23;
  int iVar24;
  unsigned __int64 *puVar25;
  int *piVar26;
  unsigned __int64 uVar27;
  unsigned int uVar28;
  int *piVar29;
  int *piVar30;
  int *piVar31;
  unsigned int uVar33;
  unsigned __int64 uVar32;
  __int64 lVar34;
  __int64 lVar35;
  int iVar36;
  unsigned int uVar39;
  __int64 lVar37;
  __int64 lVar38;
  int iStack00000014;
  int iStack0000003c;
  unsigned char bStack_690;
  unsigned int *puStack_688;
  int iStack_684;
  unsigned int uStack_680;
  unsigned int uStack_67c;
  unsigned int uStack_678;
  unsigned char auStack_600 [592];
  unsigned char auStack_3b0 [848];
  
  uVar1 = *(unsigned short *)(param_2 + 0x32);
  uVar18 = (unsigned int)(*(unsigned short *)(param_2 + 0x34) >> 1);
  param_3[0xb] = (int)auStack_3b0;
  uVar1 = uVar1 >> 1;
  uVar32 = (unsigned __int64)uVar1;
  param_3[10] = (int)auStack_600;
  uVar33 = (unsigned int)uVar1;
  if (param_4 == 0) {
    param_3[7] = (*(int *)(param_2 + 0x558) + 1) * uVar18 * uVar33 * 0x300 +
                 *(int *)(param_1 + 0x56f8);
  }
  else {
    param_3[7] = *(int *)(param_4 * 0x10 + param_2 + 0x5c8);
  }
  iVar21 = *(int *)(param_2 + 0x558);
  iVar22 = *(int *)(param_1 + 0xe0);
  uVar2 = *(unsigned short *)(param_2 + 0x4a);
  iVar36 = *(int *)(param_1 + 0xec4);
  uVar3 = *(unsigned short *)(param_2 + 0x4c);
  iVar4 = *(int *)(param_1 + 0xec8);
  iVar5 = *(int *)(param_1 + 0xdc);
  iVar6 = *(int *)(param_1 + 0xec0);
  iVar7 = *(int *)(param_1 + 0x110);
  bStack_690 = *(unsigned char *)(param_2 + 0x21);
  param_3[1] = uVar33 * param_5;
  *param_3 = (unsigned int)uVar1 * 4 * param_5;
  *(short *)(param_3 + 4) = (short)param_5 << 1;
  iVar23 = (unsigned int)(uVar3 >> 1) * iVar21;
  iVar24 = (unsigned int)*(unsigned short *)(param_2 + 0x4c) * 8 * param_5;
  puStack_688 = (unsigned int *)(uVar33 * param_5 * 0x18 + iVar21 * uVar18 * uVar33 * 0x18 + iVar7);
  uStack_678 = (unsigned int)*(unsigned short *)(param_2 + 0x4a) * 0x10 * param_5 +
               (unsigned int)(uVar2 >> 1) * iVar21 + iVar6 + iVar5;
  uStack_67c = iVar24 + iVar36 + iVar22 + iVar23;
  uStack_680 = iVar24 + iVar4 + iVar22 + iVar23;
  iVar21 = (unsigned int)uVar2 * 0x10 * param_5;
  iVar22 = (unsigned int)uVar3 * 8 * param_5;
  iStack00000014 = param_1;
  iStack0000003c = param_6;
  iStack_684 = param_5;
  if (param_5 < param_6) {
    do {
      uVar28 = (unsigned int)bStack_690;
      iVar36 = 0;
      param_3[2] = iVar21;
      param_3[3] = iVar22;
      *(unsigned short *)((int)param_3 + 0x12) = 0;
      if ((int)uVar32 != 0) {
        do {
          if (((uVar28 & 4) == 0) || ((*puStack_688 & 0x800) != 0)) {
            uVar39 = 0;
          }
          else {
            uVar39 = 0;
            bStack_690 = (unsigned char)uVar28 & 0xfe;
            iVar4 = *param_3;
            *(unsigned int *)(param_3[1] * 4 + *(int *)(param_2 + 0x160)) = 0;
            *(unsigned int *)
             (((unsigned int)*(unsigned short *)(param_2 + 0x32) + iVar4 + 1) * 4 + *(int *)(param_2 + 0x15c)) = 0;
            *(unsigned int *)
             (((unsigned int)*(unsigned short *)(param_2 + 0x32) + iVar4) * 4 + *(int *)(param_2 + 0x15c)) = 0;
            *(unsigned int *)(*(int *)(param_2 + 0x15c) + iVar4 * 4 + 4) = 0;
            *(unsigned int *)(*(int *)(param_2 + 0x15c) + iVar4 * 4) = 0;
          }
          do {
            uVar17 = (int)uVar39 >> 2;
            uVar28 = param_3[7];
            lVar20 = (unsigned __int64)uVar28 - 0x80;
            uVar15 = *(unsigned int *)((uVar39 + 0x8c) * 4 + param_2);
            uVar16 = param_3[uVar17 + 2];
            param_3[7] = (int)lVar20;
            dataCacheBlockTouch((unsigned __int64)uVar28 - 0x100);
            dataCacheBlockClearToZero((unsigned __int64)(unsigned int)param_3[10]);
            fn_82CC3930(lVar20,param_3[10],
                            (unsigned __int64)*(unsigned char *)(puStack_688 + 1) * 0x40 +
                            (unsigned __int64)*(unsigned int *)(param_2 + 0x188),uRam8329f07c,
                            (unsigned __int64)uVar16 + (unsigned __int64)uVar15,
                            *(unsigned short *)((uVar17 + 0x2d) * 2 + param_2),
                            *(unsigned int *)(param_2 + 0x554));
            if ((*(unsigned char *)(param_2 + 0x21) & 1) != 0) {
              puVar8 = (unsigned __int64 *)param_3[10];
              puVar25 = (unsigned __int64 *)
                        (((int)(((uVar39 & 1) + iVar36 * 2) * 8) >> (uVar17 & 0x3f) & 0x7ffffff8U) *
                         2 + *(int *)((uVar39 + 0x92) * 4 + param_2));
              iVar4 = (unsigned int)(*(unsigned short *)(param_2 + 0x36) >> (uVar17 & 0x3f)) * 2;
              *puVar25 = *puVar8;
              puVar25[1] = puVar8[1];
              puVar25 = (unsigned __int64 *)((int)puVar25 + iVar4);
              *puVar25 = puVar8[2];
              puVar25[1] = puVar8[3];
              puVar25 = (unsigned __int64 *)((int)puVar25 + iVar4);
              *puVar25 = puVar8[4];
              puVar25[1] = puVar8[5];
              puVar25 = (unsigned __int64 *)((int)puVar25 + iVar4);
              *puVar25 = puVar8[6];
              puVar25[1] = puVar8[7];
              puVar25 = (unsigned __int64 *)((int)puVar25 + iVar4);
              *puVar25 = puVar8[8];
              puVar25[1] = puVar8[9];
              puVar25 = (unsigned __int64 *)((int)puVar25 + iVar4);
              *puVar25 = puVar8[10];
              puVar25[1] = puVar8[0xb];
              puVar25 = (unsigned __int64 *)((int)puVar25 + iVar4);
              *puVar25 = puVar8[0xc];
              puVar25[1] = puVar8[0xd];
              *(unsigned __int64 *)((int)puVar25 + iVar4) = puVar8[0xe];
              ((unsigned __int64 *)((int)puVar25 + iVar4))[1] = puVar8[0xf];
            }
            uVar39 = uVar39 + 1;
          } while ((int)uVar39 < 6);
          if ((bStack_690 & 4) != 0) {
            bStack_690 = 7;
          }
          iVar36 = iVar36 + 1;
          puStack_688 = puStack_688 + 6;
          uVar28 = (unsigned int)bStack_690;
          *param_3 = *param_3 + 2;
          param_3[1] = param_3[1] + 1;
          param_3[2] = param_3[2] + 0x10;
          param_3[3] = param_3[3] + 8;
          *(short *)((int)param_3 + 0x12) = *(short *)((int)param_3 + 0x12) + 2;
        } while (iVar36 < (int)uVar32);
      }
      *(short *)(param_3 + 4) = *(short *)(param_3 + 4) + 2;
      iVar36 = (unsigned int)*(unsigned short *)(param_2 + 0x32) + *param_3;
      *param_3 = iVar36;
      uVar27 = (unsigned __int64)*(unsigned short *)(param_2 + 0x4a);
      uVar1 = *(unsigned short *)(param_2 + 0x4c);
      iVar22 = (unsigned int)uVar1 * 8 + iVar22;
      iVar21 = (unsigned int)*(unsigned short *)(param_2 + 0x4a) * 0x10 + iVar21;
      if ((uVar28 & 1) != 0) {
        uVar2 = *(unsigned short *)(param_2 + 0x32);
        uVar28 = (unsigned int)uVar2;
        iVar36 = iVar36 + uVar28 * -2;
        iVar5 = (int)(unsigned int)uVar2 >> 1;
        lVar20 = (__int64)iVar5;
        iVar4 = *(int *)(iStack_684 * 4 + *(int *)(param_2 + 0x518));
        piVar30 = (int *)(iVar36 * 4 + *(int *)(param_2 + 0x15c));
        piVar26 = (int *)((iVar36 >> 2) * 4 + *(int *)(param_2 + 0x160));
        if (1 < (unsigned int)(uVar32 * 2)) {
          lVar37 = 0x10;
          piVar31 = piVar30 + uVar28 + 1;
          lVar34 = uVar32 * 2 + -1;
          piVar29 = piVar30;
          do {
            if ((piVar29[1] == 0x4000) && (*piVar29 == 0x4000)) {
              fn_82C8FB00((unsigned __int64)*(unsigned int *)(param_2 + 0x530) + lVar37,uVar28);
            }
            if ((*piVar31 == 0x4000) && (piVar31[-1] == 0x4000)) {
              fn_82C8FB00((unsigned __int64)*(unsigned int *)(param_2 + 0x538) + lVar37,uVar28);
            }
            lVar34 = lVar34 + -1;
            piVar31 = piVar31 + 1;
            lVar37 = lVar37 + 0x10;
            piVar29 = piVar29 + 1;
          } while (lVar34 != 0);
          uVar32 = (unsigned __int64)uVar33;
          param_1 = iStack00000014;
        }
        if (1 < (unsigned int)uVar32) {
          lVar37 = 0x10;
          lVar34 = uVar32 - 1;
          piVar29 = piVar26;
          do {
            if ((piVar29[1] == 0x4000) && (*piVar29 == 0x4000)) {
              fn_82C8FB00(lVar37 + (unsigned __int64)*(unsigned int *)(param_2 + 0x53c),uVar28);
              fn_82C8FB00(lVar37 + (unsigned __int64)*(unsigned int *)(param_2 + 0x544),uVar28);
            }
            lVar34 = lVar34 + -1;
            lVar37 = lVar37 + 0x10;
            piVar29 = piVar29 + 1;
          } while (lVar34 != 0);
          uVar32 = (unsigned __int64)uVar33;
          param_1 = iStack00000014;
        }
        if (uVar2 != 0) {
          uVar32 = (unsigned __int64)uStack_678;
          lVar37 = 0;
          lVar34 = uVar27 * 8 + uVar32;
          piVar31 = piVar30 + uVar28;
          piVar29 = piVar30 + -uVar28;
          uVar39 = uVar28;
          do {
            if ((-1 < -iStack_684 || iVar4 != 0) || (iVar36 = 1, *piVar29 != 0x4000)) {
              iVar36 = 0;
            }
            iVar6 = *piVar31;
            bVar19 = *piVar30 == 0x4000;
            if ((((iVar36 != 0) || (bVar19)) &&
                (fn_82C8FD40((unsigned __int64)*(unsigned int *)(param_2 + 0x534) + lVar37,
                                   (unsigned __int64)*(unsigned int *)(param_2 + 0x530) + lVar37,uVar28,uVar32,
                                   uVar27,iVar36,bVar19,0), bVar19)) || (iVar6 == 0x4000)) {
              fn_82C8FD40((unsigned __int64)*(unsigned int *)(param_2 + 0x530) + lVar37,
                                (unsigned __int64)*(unsigned int *)(param_2 + 0x538) + lVar37,uVar28,lVar34,uVar27,
                                bVar19,iVar6 == 0x4000,0);
            }
            uVar39 = uVar39 - 1;
            piVar29 = piVar29 + 1;
            piVar30 = piVar30 + 1;
            piVar31 = piVar31 + 1;
            uVar32 = uVar32 + 8;
            lVar34 = lVar34 + 8;
            lVar37 = lVar37 + 0x10;
          } while (uVar39 != 0);
          uVar32 = (unsigned __int64)uVar33;
          param_1 = iStack00000014;
        }
        if (iVar5 != 0) {
          uVar32 = (unsigned __int64)uStack_680;
          lVar37 = 0;
          piVar30 = piVar26 + -iVar5;
          lVar34 = uStack_67c - uVar32;
          do {
            if ((-1 < -iStack_684 || iVar4 != 0) || (iVar36 = 1, *piVar30 != 0x4000)) {
              iVar36 = 0;
            }
            bVar19 = *piVar26 == 0x4000;
            if ((iVar36 != 0) || (bVar19)) {
              fn_82C8FD40((unsigned __int64)*(unsigned int *)(param_2 + 0x540) + lVar37,
                                lVar37 + (unsigned __int64)*(unsigned int *)(param_2 + 0x53c),uVar28,
                                lVar34 + uVar32,uVar1,iVar36,bVar19,0);
              fn_82C8FD40((unsigned __int64)*(unsigned int *)(param_2 + 0x548) + lVar37,
                                lVar37 + (unsigned __int64)*(unsigned int *)(param_2 + 0x544),uVar28,uVar32,uVar1,
                                iVar36,bVar19,0);
            }
            lVar20 = lVar20 + -1;
            piVar30 = piVar30 + 1;
            piVar26 = piVar26 + 1;
            uVar32 = uVar32 + 8;
            lVar37 = lVar37 + 0x10;
          } while (lVar20 != 0);
          uVar32 = (unsigned __int64)uVar33;
          param_1 = iStack00000014;
        }
        uVar9 = *(unsigned int *)(param_2 + 0x540);
        uVar10 = *(unsigned int *)(param_2 + 0x548);
        uVar11 = *(unsigned int *)(param_2 + 0x534);
        uVar12 = *(unsigned int *)(param_2 + 0x53c);
        uVar13 = *(unsigned int *)(param_2 + 0x544);
        uVar14 = *(unsigned int *)(param_2 + 0x538);
        *(unsigned int *)(param_2 + 0x53c) = uVar9;
        uVar28 = (unsigned int)bStack_690;
        *(unsigned int *)(param_2 + 0x544) = uVar10;
        *(unsigned int *)(param_2 + 0x538) = uVar11;
        *(unsigned int *)(param_2 + 0x24c) = *(unsigned int *)(param_2 + 0x530);
        *(unsigned int *)(param_2 + 0x534) = uVar14;
        *(unsigned int *)(param_2 + 0x540) = uVar12;
        *(unsigned int *)(param_2 + 0x248) = *(unsigned int *)(param_2 + 0x530);
        *(unsigned int *)(param_2 + 0x548) = uVar13;
        *(unsigned int *)(param_2 + 0x254) = uVar11;
        *(unsigned int *)(param_2 + 600) = uVar9;
        *(unsigned int *)(param_2 + 0x250) = uVar11;
        *(unsigned int *)(param_2 + 0x25c) = uVar10;
      }
      uVar27 = (unsigned __int64)*(unsigned short *)(param_2 + 0x4c);
      uVar1 = *(unsigned short *)(param_2 + 0x4a);
      lVar20 = uVar27 * 8 + (unsigned __int64)uStack_67c;
      lVar34 = uVar27 * 8 + (unsigned __int64)uStack_680;
      uStack_67c = (unsigned int)lVar20;
      uStack_680 = (unsigned int)lVar34;
      lVar37 = (unsigned __int64)uVar1 * 0x10 + (unsigned __int64)uStack_678;
      uStack_678 = (unsigned int)lVar37;
      if ((uVar28 & (((int)((iStack_684 - uVar18) + 1) >> 0x1f) + 1U |
                    *(unsigned int *)((iStack_684 + 1) * 4 + *(int *)(param_2 + 0x518)))) != 0) {
        uVar2 = *(unsigned short *)(param_2 + 0x32);
        uVar28 = (unsigned int)uVar2;
        iVar36 = *param_3;
        iVar5 = (int)(unsigned int)uVar2 >> 1;
        lVar35 = (__int64)iVar5;
        iVar4 = *(int *)(param_2 + 0x160);
        if (uVar2 != 0) {
          lVar38 = 0;
          piVar26 = (int *)(iVar36 * 4 + *(int *)(param_2 + 0x15c) + uVar28 * -4);
          uVar39 = uVar28;
          do {
            if (*piVar26 == 0x4000) {
              fn_82C8FD40((unsigned __int64)*(unsigned int *)(param_2 + 0x534) + lVar38,
                                (unsigned __int64)*(unsigned int *)(param_2 + 0x530) + lVar38,uVar28,lVar37,
                                (unsigned __int64)uVar1,1,0,0);
            }
            uVar39 = uVar39 - 1;
            piVar26 = piVar26 + 1;
            lVar37 = lVar37 + 8;
            lVar38 = lVar38 + 0x10;
          } while (uVar39 != 0);
          uVar32 = (unsigned __int64)uVar33;
        }
        if (iVar5 != 0) {
          lVar37 = 0;
          piVar26 = (int *)((iVar36 >> 2) * 4 + iVar4 + iVar5 * -4);
          lVar20 = lVar20 - lVar34;
          do {
            if (*piVar26 == 0x4000) {
              fn_82C8FD40((unsigned __int64)*(unsigned int *)(param_2 + 0x540) + lVar37,
                                (unsigned __int64)*(unsigned int *)(param_2 + 0x53c) + lVar37,uVar28,
                                lVar34 + lVar20,uVar27,1,0,0);
              fn_82C8FD40((unsigned __int64)*(unsigned int *)(param_2 + 0x548) + lVar37,
                                (unsigned __int64)*(unsigned int *)(param_2 + 0x544) + lVar37,uVar28,lVar34,uVar27,
                                1,0,0);
            }
            lVar35 = lVar35 + -1;
            piVar26 = piVar26 + 1;
            lVar34 = lVar34 + 8;
            lVar37 = lVar37 + 0x10;
          } while (lVar35 != 0);
          uVar32 = (unsigned __int64)uVar33;
        }
        uVar9 = *(unsigned int *)(param_2 + 0x548);
        uVar10 = *(unsigned int *)(param_2 + 0x540);
        uVar11 = *(unsigned int *)(param_2 + 0x544);
        uVar12 = *(unsigned int *)(param_2 + 0x538);
        uVar13 = *(unsigned int *)(param_2 + 0x53c);
        *(unsigned int *)(param_2 + 0x538) = *(unsigned int *)(param_2 + 0x534);
        *(unsigned int *)(param_2 + 0x544) = uVar9;
        *(unsigned int *)(param_2 + 0x53c) = uVar10;
        *(unsigned int *)(param_2 + 0x24c) = *(unsigned int *)(param_2 + 0x530);
        *(unsigned int *)(param_2 + 0x534) = uVar12;
        *(unsigned int *)(param_2 + 0x540) = uVar13;
        *(unsigned int *)(param_2 + 0x248) = *(unsigned int *)(param_2 + 0x530);
        *(unsigned int *)(param_2 + 0x548) = uVar11;
        *(unsigned int *)(param_2 + 600) = uVar10;
        *(unsigned int *)(param_2 + 0x25c) = uVar9;
        *(unsigned int *)(param_2 + 0x254) = *(unsigned int *)(param_2 + 0x538);
        *(unsigned int *)(param_2 + 0x250) = *(unsigned int *)(param_2 + 0x538);
        param_1 = iStack00000014;
      }
      iStack_684 = iStack_684 + 1;
    } while (iStack_684 < iStack0000003c);
  }
  *(unsigned int *)(param_1 + 0xbbc) = (unsigned int)bStack_690;
  return 0;
}

