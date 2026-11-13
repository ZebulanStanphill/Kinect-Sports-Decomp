typedef unsigned char bool;
#define true 1
#define false 0
extern unsigned int *auStack_4b0;
extern unsigned int *auStack_4bc;
extern unsigned int *auStack_4d8;
extern int fn_82A1F2B8();
extern int fn_82F63BA0();
extern int free();
extern int fn_82F66FA8();
extern int fn_82F68240();
extern int malloc();
extern int __iob_func();
extern int fn_82F6E8A0();
extern int fn_82F6EDE8();
extern int fn_82F70920();
extern int fn_82F794A8();
extern int fn_82F7C468();
extern int fn_82F85978();
extern unsigned int iStack_4d0;
extern unsigned int iStack_4d4;
extern unsigned int lbl_82169540;
extern unsigned int lbl_82169558;
extern unsigned int lbl_8216955C;
extern unsigned int lbl_82169560;
extern unsigned int lbl_831BBF60;
extern unsigned int lbl_831BBFC0;
extern unsigned int lbl_831BBFC8;
extern unsigned int lbl_831BBFCC;
extern unsigned int lbl_8329F620;
extern unsigned int stack0x00000000;
extern unsigned int uStack_2a1;
extern unsigned int uStack_4c4;
extern unsigned int uStack_4c8;
extern unsigned int uStack_4e0;


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

unsigned __int64 fn_82F709B8(int param_1,char *param_2,unsigned __int64 param_3,unsigned __int64 *param_4)

{
  bool bVar1;
  char cVar2;
  unsigned short uVar3;
  unsigned short *puVar4;
  int *piVar5;
  unsigned __int64 *puVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  bool bVar11;
  bool bVar12;
  bool bVar13;
  bool bVar14;
  bool bVar15;
  bool bVar16;
  unsigned int *puVar17;
  unsigned int uVar18;
  int iVar19;
  short *psVar20;
  unsigned __int64 uVar21;
  unsigned char *puVar24;
  unsigned __int64 uVar22;
  __int64 lVar23;
  unsigned char *puVar26;
  short *psVar27;
  char cVar28;
  unsigned __int64 uVar25;
  char *pcVar29;
  short *psVar30;
  unsigned __int64 uVar31;
  int iVar32;
  unsigned __int64 uVar33;
  short *psVar34;
  int iVar35;
  unsigned char *puVar36;
  unsigned int uStack_4e0;
  unsigned char *puStack_4dc;
  unsigned char auStack_4d8 [4];
  int iStack_4d4;
  int iStack_4d0;
  unsigned int uStack_4c8;
  unsigned int uStack_4c4;
  short *psStack_4c0;
  unsigned char auStack_4bc [12];
  unsigned char auStack_4b0 [16];
  short asStack_4a0 [255];
  unsigned short uStack_2a1;
  
  uStack_4c8 = 0;
  iStack_4d0 = 0;
  iStack_4d4 = 0;
  uVar33 = 0;
  bVar15 = false;
  bVar14 = false;
  bVar13 = false;
  bVar12 = false;
  bVar11 = false;
  bVar10 = false;
  bVar9 = false;
  bVar8 = false;
  bVar16 = false;
  iVar32 = 0;
  bVar7 = false;
  if (param_1 == 0) goto LAB_82f709f8;
  if ((*(unsigned int *)(param_1 + 0xc) & 0x40) == 0) {
    uVar18 = fn_82F7C468(param_1);
    puVar26 = &lbl_831BBF60;
    puVar24 = puVar26;
    if ((uVar18 != 0xffffffff) && (uVar18 != 0xfffffffe)) {
      puVar24 = (unsigned char *)((&lbl_8329F620)[(int)uVar18 >> 5] + (uVar18 & 0x1f) * 0x48);
    }
    if ((puVar24[0x28] & 0xfe) != 0) goto LAB_82f709f8;
    if ((uVar18 != 0xffffffff) && (uVar18 != 0xfffffffe)) {
      puVar26 = (unsigned char *)((&lbl_8329F620)[(int)uVar18 >> 5] + (uVar18 & 0x1f) * 0x48);
    }
    if ((puVar26[0x28] & 1) != 0) goto LAB_82f709f8;
  }
  if (param_2 != (char *)0x0) {
    iVar19 = __iob_func();
    if ((param_1 == iVar19 + 0x20) || (iVar19 = __iob_func(), param_1 == iVar19 + 0x40)) {
      uVar33 = fn_82F6EDE8(&stack0x00000000 + -0x2a0,0x200,param_2,param_4);
      if ((int)uVar33 == -1) {
        uVar33 = 0x1ff;
      }
      fn_82A1F2B8(&stack0x00000000 + -0x2a0);
      return uVar33;
    }
    cVar28 = *param_2;
    uVar31 = 0;
    uStack_4e0 = 0;
    iVar19 = (int)cVar28;
    puStack_4dc = (unsigned char *)0x0;
    uStack_4c4 = 0;
    psVar20 = (short *)0x0;
    if (iVar19 == 0) {
      return 0;
    }
    param_2 = param_2 + -1;
    psVar30 = psStack_4c0;
    psVar34 = psStack_4c0;
    do {
      pcVar29 = param_2 + 1;
      if ((int)uVar31 < 0) {
        return uVar31;
      }
      if ((iVar19 < 0x20) || (0x78 < iVar19)) {
        uVar18 = 0;
      }
      else {
        uVar18 = (unsigned char)(&lbl_82169540)[iVar19] & 0xf;
      }
      uStack_4c4 = (int)(char)(&lbl_82169560)[uVar18 * 8 + uStack_4c4] >> 4;
      if (7 < uStack_4c4) goto LAB_82f71488;
      if (uStack_4c4 == 0) {
LAB_82f70d6c:
        bVar7 = false;
        iVar19 = fn_82F66FA8(cVar28,0xffffffff831bbca8);
        if (iVar19 != 0) {
          fn_82F70920(cVar28,param_1,&stack0x00000000 + -0x4e0);
          pcVar29 = param_2 + 2;
          cVar28 = *pcVar29;
          if (cVar28 == '\0') break;
        }
        fn_82F70920(cVar28,param_1,&stack0x00000000 + -0x4e0);
        uVar31 = (unsigned __int64)uStack_4e0;
        goto LAB_82f71488;
      }
      if (uStack_4c4 == 1) {
        uVar33 = 0;
        bVar15 = false;
        bVar14 = false;
        bVar13 = false;
        bVar12 = false;
        bVar11 = false;
        bVar10 = false;
        bVar9 = false;
        bVar8 = false;
        iVar32 = -1;
        psVar30 = (short *)0x0;
        bVar16 = false;
        iStack_4d0 = 0;
        bVar7 = false;
        iStack_4d4 = 0;
        goto LAB_82f71488;
      }
      if (uStack_4c4 == 2) {
        if (iVar19 == 0x20) {
          bVar15 = true;
        }
        else if (iVar19 == 0x23) {
          bVar8 = true;
        }
        else if (iVar19 == 0x2b) {
          bVar14 = true;
        }
        else if (iVar19 == 0x2d) {
          uVar33 = uVar33 | 4;
        }
        else if (iVar19 == 0x30) {
          uVar33 = uVar33 | 8;
        }
        goto LAB_82f71488;
      }
      if (uStack_4c4 == 3) {
        if (iVar19 == 0x2a) {
          uVar18 = (int)param_4 + 7U & 0xfffffff8;
          param_4 = (unsigned __int64 *)(uVar18 + 8);
          iStack_4d0 = *(int *)(uVar18 + 4);
          if (iStack_4d0 < 0) {
            uVar33 = uVar33 | 4;
            iStack_4d0 = -iStack_4d0;
          }
        }
        else {
          iStack_4d0 = iStack_4d0 * 10 + iVar19 + -0x30;
        }
        goto LAB_82f71488;
      }
      if (uStack_4c4 == 4) {
        iVar32 = 0;
        goto LAB_82f71488;
      }
      if (uStack_4c4 == 5) {
        if (iVar19 == 0x2a) {
          uVar18 = (int)param_4 + 7U & 0xfffffff8;
          param_4 = (unsigned __int64 *)(uVar18 + 8);
          iVar32 = *(int *)(uVar18 + 4);
          if (iVar32 < 0) {
            iVar32 = -1;
          }
        }
        else {
          iVar32 = iVar32 * 10 + iVar19 + -0x30;
        }
        goto LAB_82f71488;
      }
      if (uStack_4c4 == 6) {
        if (iVar19 == 0x49) {
          cVar2 = param_2[2];
          if ((cVar2 == '6') && (param_2[3] == '4')) {
            bVar9 = true;
            pcVar29 = param_2 + 3;
          }
          else if ((cVar2 == '3') && (param_2[3] == '2')) {
            bVar9 = false;
            pcVar29 = param_2 + 3;
          }
          else if (((((cVar2 != 'd') && (cVar2 != 'i')) && (cVar2 != 'o')) &&
                   ((cVar2 != 'u' && (cVar2 != 'x')))) && (cVar2 != 'X')) {
            uStack_4c4 = 0;
            goto LAB_82f70d6c;
          }
        }
        else if (iVar19 == 0x68) {
          uVar33 = uVar33 | 0x20;
        }
        else if (iVar19 == 0x6c) {
          if (param_2[2] == 'l') {
            bVar10 = true;
            pcVar29 = param_2 + 2;
          }
          else {
            uVar33 = uVar33 | 0x10;
          }
        }
        else if (iVar19 == 0x77) {
          uVar33 = uVar33 | 0x800;
        }
        goto LAB_82f71488;
      }
      switch(iVar19) {
      case 0x41:
      case 0x45:
      case 0x47:
        cVar28 = (char)iVar19 + ' ';
        psVar30 = (short *)0x1;
      case 0x61:
      case 0x65:
      case 0x66:
      case 0x67:
        psVar27 = (short *)(&stack0x00000000 + -0x4a0);
        iVar35 = 0x200;
        iVar19 = iVar35;
        psVar34 = psVar27;
        if (iVar32 < 0) {
          iVar32 = 6;
        }
        else if (iVar32 == 0) {
          if (cVar28 == 'g') {
            iVar32 = 1;
          }
        }
        else {
          if (0x200 < iVar32) {
            iVar32 = 0x200;
          }
          if (0xa3 < iVar32) {
            iVar19 = iVar32 + 0x15d;
            psVar20 = (short *)malloc(iVar19);
            psVar34 = psVar20;
            if (psVar20 == (short *)0x0) {
              iVar32 = 0xa3;
              iVar19 = iVar35;
              psVar34 = psVar27;
            }
          }
        }
        param_4 = (unsigned __int64 *)(((int)param_4 + 7U & 0xfffffff8) + 8);
        (*(int (**)())lbl_831BBFC0)
                  (&stack0x00000000 + -0x4b0,psVar34,iVar19,cVar28,iVar32,psVar30,0xffffffff831bbca8
                  );
        if ((bVar8) && (iVar32 == 0)) {
          (*(int (**)())lbl_831BBFCC)(psVar34,0xffffffff831bbca8);
        }
        if ((cVar28 == 'g') && (!bVar8)) {
          (*(int (**)())lbl_831BBFC8)(psVar34,0xffffffff831bbca8);
        }
        if (*(char *)psVar34 == '-') {
          bVar13 = true;
          psVar34 = (short *)((int)psVar34 + 1);
        }
        bVar11 = true;
        psVar27 = psVar34;
        do {
          cVar28 = *(char *)psVar27;
          psVar27 = (short *)((int)psVar27 + 1);
        } while (cVar28 != '\0');
        iVar19 = (int)psVar27 - (int)psVar34;
code_r0x82f70ec8:
        puStack_4dc = (unsigned char *)(iVar19 + -1);
LAB_82f712b8:
        if (!bVar16) {
          if ((bVar11) && (((bVar13 || (bVar14)) || (bVar15)))) {
            iStack_4d4 = 1;
          }
          iVar35 = (iStack_4d0 - (int)puStack_4dc) - iStack_4d4;
          iVar19 = iVar35;
          if ((uVar33 & 0xc) == 0) {
            do {
              if (iVar19 < 1) break;
              iVar19 = iVar19 + -1;
              fn_82F70920(0x20,param_1,&stack0x00000000 + -0x4e0);
            } while (uStack_4e0 != 0xffffffff);
          }
          fn_82F794A8(&stack0x00000000 + -0x4d8,iStack_4d4,param_1,&stack0x00000000 + -0x4e0);
          if (((uVar33 & 8) != 0) && (iVar19 = iVar35, (uVar33 & 4) == 0)) {
            do {
              if (iVar19 < 1) break;
              iVar19 = iVar19 + -1;
              fn_82F70920(0x30,param_1,&stack0x00000000 + -0x4e0);
            } while (uStack_4e0 != 0xffffffff);
          }
          if ((bVar7) && (0 < (int)puStack_4dc)) {
            psVar27 = psVar34 + -1;
            puVar36 = puStack_4dc;
            do {
              psVar27 = psVar27 + 1;
              puVar36 = puVar36 + -1;
              iVar19 = fn_82F85978(&stack0x00000000 + -0x4c0,&stack0x00000000 + -0x4bc,6,*psVar27);
              if ((iVar19 != 0) || (psStack_4c0 == (short *)0x0)) {
                uVar31 = 0xffffffffffffffff;
                uStack_4e0 = 0xffffffff;
                goto LAB_82f71430;
              }
              fn_82F794A8(&stack0x00000000 + -0x4bc,psStack_4c0,param_1,
                              &stack0x00000000 + -0x4e0);
            } while (puVar36 != (unsigned char *)0x0);
          }
          else {
            fn_82F794A8(psVar34,puStack_4dc,param_1,&stack0x00000000 + -0x4e0);
          }
          uVar31 = (unsigned __int64)uStack_4e0;
LAB_82f71430:
          if ((-1 < (int)uVar31) && ((uVar33 & 4) != 0)) {
            do {
              if (iVar35 < 1) break;
              iVar35 = iVar35 + -1;
              fn_82F70920(0x20,param_1,&stack0x00000000 + -0x4e0);
              uVar31 = (unsigned __int64)uStack_4e0;
            } while (uStack_4e0 != 0xffffffff);
          }
        }
LAB_82f71474:
        if (psVar20 != (short *)0x0) {
          free(psVar20);
          psVar20 = (short *)0x0;
        }
LAB_82f71488:
        param_2 = pcVar29;
        cVar28 = param_2[1];
        iVar19 = (int)cVar28;
        if (iVar19 == 0) {
          return uVar31;
        }
        break;
      default:
        goto LAB_82f712b8;
      case 0x43:
        if ((uVar33 & 0x830) == 0) {
          uVar33 = uVar33 | 0x800;
        }
      case 99:
        uVar18 = (int)param_4 + 7U & 0xfffffff8;
        param_4 = (unsigned __int64 *)(uVar18 + 8);
        if ((uVar33 & 0x810) == 0) {
          puStack_4dc = (unsigned char *)0x1;
        }
        else {
          iVar19 = fn_82F85978(&stack0x00000000 + -0x4dc,&stack0x00000000 + -0x4a0,0x200,
                                *(unsigned short *)(uVar18 + 6));
          if (iVar19 != 0) {
            bVar16 = true;
          }
        }
        psVar34 = (short *)(&stack0x00000000 + -0x4a0);
        goto LAB_82f712b8;
      case 0x53:
        if ((uVar33 & 0x830) == 0) {
          uVar33 = uVar33 | 0x800;
        }
      case 0x73:
        iVar19 = iVar32;
        if (iVar32 == -1) {
          iVar19 = 0x7fffffff;
        }
        uVar18 = (int)param_4 + 7U & 0xfffffff8;
        param_4 = (unsigned __int64 *)(uVar18 + 8);
        psVar34 = *(short **)(uVar18 + 4);
        if ((uVar33 & 0x810) == 0) {
          psVar27 = psVar34;
          if (psVar34 == (short *)0x0) {
            psVar34 = lbl_82169558;
            psVar27 = lbl_82169558;
          }
          for (; (iVar19 != 0 && (iVar19 = iVar19 + -1, *(char *)psVar27 != '\0'));
              psVar27 = (short *)((int)psVar27 + 1)) {
          }
          puStack_4dc = (unsigned char *)((int)psVar27 - (int)psVar34);
        }
        else {
          if (psVar34 == (short *)0x0) {
            psVar34 = lbl_8216955C;
          }
          bVar7 = true;
          for (psVar27 = psVar34; (iVar19 != 0 && (iVar19 = iVar19 + -1, *psVar27 != 0));
              psVar27 = psVar27 + 1) {
          }
          puStack_4dc = (unsigned char *)((int)psVar27 - (int)psVar34 >> 1);
        }
        goto LAB_82f712b8;
      case 0x58:
        goto code_r0x82f71108;
      case 0x5a:
        uVar18 = (int)param_4 + 7U & 0xfffffff8;
        param_4 = (unsigned __int64 *)(uVar18 + 8);
        puVar4 = *(unsigned short **)(uVar18 + 4);
        psVar27 = lbl_82169558;
        if ((puVar4 != (unsigned short *)0x0) &&
           (psVar34 = *(short **)(puVar4 + 2), psVar34 != (short *)0x0)) {
          if ((uVar33 & 0x800) == 0) {
            puStack_4dc = (unsigned char *)(int)(short)*puVar4;
            bVar7 = false;
          }
          else {
            uVar3 = *puVar4;
            bVar7 = true;
            puStack_4dc = (unsigned char *)
                          (((int)(short)uVar3 >> 1) + (unsigned int)((short)uVar3 < 0 && (uVar3 & 1) != 0));
          }
          goto LAB_82f712b8;
        }
        do {
          cVar28 = *(char *)psVar27;
          psVar27 = (short *)((int)psVar27 + 1);
        } while (cVar28 != '\0');
        iVar19 = (int)psVar27 - (int)lbl_82169558;
        psVar34 = lbl_82169558;
        goto code_r0x82f70ec8;
      case 100:
      case 0x69:
        bVar11 = true;
      case 0x75:
        iVar19 = 10;
        goto code_r0x82f71150;
      case 0x6e:
        uVar18 = (int)param_4 + 7U & 0xfffffff8;
        param_4 = (unsigned __int64 *)(uVar18 + 8);
        piVar5 = *(int **)(uVar18 + 4);
        iVar19 = fn_82F6E8A0();
        if (iVar19 != 0) {
          if ((uVar33 & 0x20) == 0) {
            *piVar5 = (int)uVar31;
          }
          else {
            *(short *)piVar5 = (short)uVar31;
          }
          bVar16 = true;
          goto LAB_82f71474;
        }
        goto LAB_82f709f8;
      case 0x6f:
        iVar19 = 8;
        if (bVar8) {
          bVar12 = true;
        }
        goto code_r0x82f71150;
      case 0x70:
        iVar32 = 8;
        goto code_r0x82f71108;
      case 0x78:
        uStack_4c8 = 0x27;
        goto code_r0x82f71114;
      }
    } while( true );
  }
LAB_82f709f8:
  puVar17 = (unsigned int *)fn_82F68240();
  *puVar17 = 0x16;
  fn_82F63BA0();
  return 0xffffffffffffffff;
code_r0x82f71108:
  uStack_4c8 = 7;
code_r0x82f71114:
  iVar19 = 0x10;
  if (bVar8) {
    iStack_4d4 = 2;
  }
code_r0x82f71150:
  if ((bVar9) || (bVar10)) {
    puVar6 = (unsigned __int64 *)((int)param_4 + 7U & 0xfffffff8);
    param_4 = puVar6 + 1;
    uVar25 = *puVar6;
  }
  else if ((uVar33 & 0x20) == 0) {
    uVar18 = (int)param_4 + 7U & 0xfffffff8;
    param_4 = (unsigned __int64 *)(uVar18 + 8);
    if (bVar11) {
      uVar25 = (unsigned __int64)*(int *)(uVar18 + 4);
    }
    else {
      uVar25 = (unsigned __int64)*(unsigned int *)(uVar18 + 4);
    }
  }
  else {
    uVar18 = (int)param_4 + 7U & 0xfffffff8;
    param_4 = (unsigned __int64 *)(uVar18 + 8);
    uVar18 = *(unsigned int *)(uVar18 + 4);
    if (bVar11) {
      uVar25 = (unsigned __int64)(short)uVar18;
    }
    else {
      uVar25 = (unsigned __int64)uVar18 & 0xffff;
    }
  }
  if ((bVar11) && ((__int64)uVar25 < 0)) {
    uVar25 = -uVar25;
    bVar13 = true;
  }
  if ((!bVar9) && (!bVar10)) {
    uVar25 = uVar25 & 0xffffffff;
  }
  if (iVar32 < 0) {
    iVar32 = 1;
  }
  else {
    uVar33 = uVar33 & 0xfffffff7;
    if (0x200 < iVar32) {
      iVar32 = 0x200;
    }
  }
  if (uVar25 == 0) {
    iStack_4d4 = 0;
  }
  psVar27 = (short *)(&stack0x00000000 + -0x2a1);
  while ((bVar1 = 0 < iVar32, iVar32 = iVar32 + -1, bVar1 || (uVar25 != 0))) {
    uVar22 = (unsigned __int64)iVar19;
    trapDoubleWordImmediate(6,uVar22,0);
    uVar21 = uVar25 - (uVar25 / uVar22) * uVar22;
    uVar25 = uVar25 / uVar22;
    trapDoubleWordImmediate(6,uVar22,0);
    lVar23 = (uVar21 & 0xffffffff) + 0x30;
    if (0x39 < (int)lVar23) {
      lVar23 = lVar23 + (unsigned __int64)uStack_4c8;
    }
    *(char *)psVar27 = (char)lVar23;
    psVar27 = (short *)((int)psVar27 + -1);
  }
  puStack_4dc = &stack0x00000000 + (-0x2a1 - (int)psVar27);
  psVar34 = (short *)((int)psVar27 + 1);
  if ((bVar12) && ((puStack_4dc == (unsigned char *)0x0 || (*(char *)psVar34 != '0')))) {
    puStack_4dc = puStack_4dc + 1;
    *(char *)psVar27 = '0';
    psVar34 = psVar27;
  }
  goto LAB_82f712b8;
}

