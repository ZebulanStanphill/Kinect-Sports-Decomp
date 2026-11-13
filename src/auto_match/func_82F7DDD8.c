typedef unsigned char bool;
#define true 1
#define false 0
extern unsigned int *auStack_200;
extern unsigned int *auStack_24c;
extern int fn_82F63BA0();
extern int free();
extern int fn_82F66A80();
extern int fn_82F66AA0();
extern int fn_82F66AC0();
extern int fn_82F66FA8();
extern int fn_82F68240();
extern int fn_82F6E8A0();
extern int fn_82F7BAF0();
extern int fn_82F7C468();
extern int fn_82F7DD38();
extern int fn_82F85C08();
extern int fn_82F86278();
extern unsigned int iStack0000002c;
extern unsigned int iStack_228;
extern unsigned int iStack_22c;
extern unsigned int iStack_238;
extern unsigned int iStack_260;
extern unsigned int lbl_831BBCA8;
extern unsigned int lbl_831BBF60;
extern unsigned int lbl_831BBFA8;
extern unsigned int lbl_8329F620;
extern unsigned int uStack_208;
extern unsigned int uStack_210;
extern unsigned int uStack_218;
extern unsigned int uStack_233;
extern unsigned int uStack_234;
extern unsigned int uStack_250;


/* WARNING: Type propagation algorithm not settling */

unsigned __int64 fn_82F7DDD8(unsigned int *param_1,unsigned char *param_2,unsigned __int64 param_3,int param_4)

{
  bool bVar1;
  unsigned char bVar2;
  bool bVar3;
  unsigned char **ppuVar4;
  unsigned int *puVar5;
  unsigned int uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  unsigned char *puVar12;
  unsigned __int64 uVar11;
  unsigned char *puVar14;
  unsigned char *pbVar15;
  char cVar16;
  char cVar17;
  char cVar18;
  char cVar19;
  unsigned __int64 uVar13;
  char cVar20;
  __int64 lVar21;
  int iVar22;
  unsigned char bVar24;
  unsigned char *pbVar23;
  unsigned __int64 uVar25;
  unsigned int uVar26;
  unsigned char bVar27;
  __int64 lVar28;
  __int64 *plVar29;
  unsigned char *pbVar30;
  unsigned __int64 uVar31;
  __int64 *plVar32;
  unsigned char *pbStack0000001c;
  int iStack0000002c;
  int iStack_260;
  char cStack_25c;
  unsigned char *puStack_258;
  __int64 *plStack_254;
  unsigned int uStack_250;
  unsigned short auStack_24c [2];
  int aiStack_248 [2];
  __int64 lStack_240;
  int iStack_238;
  unsigned char uStack_234;
  unsigned char uStack_233;
  unsigned char **ppuStack_230;
  int iStack_22c;
  int iStack_228;
  unsigned char **ppuStack_224;
  unsigned char abStack_220 [8];
  unsigned __int64 uStack_218;
  unsigned __int64 uStack_210;
  unsigned __int64 uStack_208;
  unsigned char auStack_200 [512];
  
  uVar25 = 0;
  puStack_258 = auStack_200;
  aiStack_248[0] = 0;
  auStack_24c[0] = 0;
  aiStack_248[1] = 0x15e;
  iStack_228 = 0;
  pbStack0000001c = param_2;
  iStack0000002c = param_4;
  if ((param_2 == (unsigned char *)0x0) || (param_1 == (unsigned int *)0x0)) {
    puVar5 = (unsigned int *)fn_82F68240();
    *puVar5 = 0x16;
    fn_82F63BA0();
    return 0xffffffffffffffff;
  }
  if ((param_1[3] & 0x40) == 0) {
    uVar6 = fn_82F7C468(param_1);
    puVar14 = &lbl_831BBF60;
    puVar12 = puVar14;
    if ((uVar6 != 0xffffffff) && (uVar6 != 0xfffffffe)) {
      puVar12 = (unsigned char *)((&lbl_8329F620)[(int)uVar6 >> 5] + (uVar6 & 0x1f) * 0x48);
    }
    if ((puVar12[0x28] & 0xfe) == 0) {
      if ((uVar6 != 0xffffffff) && (uVar6 != 0xfffffffe)) {
        puVar14 = (unsigned char *)((&lbl_8329F620)[(int)uVar6 >> 5] + (uVar6 & 0x1f) * 0x48);
      }
      if ((puVar14[0x28] & 1) == 0) goto LAB_82f7def4;
    }
    puVar5 = (unsigned int *)fn_82F68240();
    uVar25 = 0xffffffffffffffff;
LAB_82f7dee0:
    *puVar5 = 0x16;
    fn_82F63BA0();
    return uVar25;
  }
LAB_82f7def4:
  cStack_25c = '\0';
  iStack_260 = 0;
  uStack_250 = 0;
  if (*param_2 == 0) {
LAB_82f7f198:
    return (unsigned __int64)uStack_250;
  }
  ppuStack_230 = &lbl_831BBCA8;
  ppuStack_224 = &lbl_831BBFA8;
LAB_82f7df24:
  iVar7 = fn_82F66AC0();
  if (iVar7 != 0) {
    iStack_260 = iStack_260 + -1;
    do {
      uVar6 = param_1[1];
      iStack_260 = iStack_260 + 1;
      param_1[1] = (int)((unsigned __int64)uVar6 - 1);
      if ((__int64)((unsigned __int64)uVar6 - 1) < 0) {
        uVar31 = fn_82F7BAF0(param_1);
      }
      else {
        uVar31 = (unsigned __int64)*(unsigned char *)*param_1;
        *param_1 = (unsigned char *)*param_1 + 1;
      }
      pbVar30 = pbStack0000001c;
      if ((int)uVar31 == -1) goto LAB_82f7df98;
      iVar7 = fn_82F66AC0(uVar31 & 0xff);
    } while (iVar7 != 0);
    fn_82F86278(uVar31,param_1);
    pbVar30 = pbStack0000001c;
LAB_82f7df98:
    do {
      pbVar30 = pbVar30 + 1;
      iVar7 = fn_82F66AC0(*pbVar30);
      pbVar23 = pbVar30;
    } while (iVar7 != 0);
    goto LAB_82f7f0b0;
  }
  pbVar23 = pbStack0000001c;
  if (*pbStack0000001c != 0x25) {
LAB_82f7efdc:
    uVar6 = param_1[1];
    param_1[1] = (int)((unsigned __int64)uVar6 - 1);
    if ((__int64)((unsigned __int64)uVar6 - 1) < 0) {
      uVar25 = fn_82F7BAF0(param_1);
    }
    else {
      uVar25 = (unsigned __int64)*(unsigned char *)*param_1;
      *param_1 = (unsigned char *)*param_1 + 1;
    }
    pbVar30 = pbVar23 + 1;
    pbStack0000001c = pbVar30;
    if ((unsigned int)*pbVar23 == (unsigned int)uVar25) {
      iVar10 = fn_82F66FA8(uVar25 & 0xff);
      iVar7 = iStack_260 + 1;
      if (iVar10 != 0) {
        uVar6 = param_1[1];
        param_1[1] = (int)((unsigned __int64)uVar6 - 1);
        if ((__int64)((unsigned __int64)uVar6 - 1) < 0) {
          uVar31 = fn_82F7BAF0(param_1);
        }
        else {
          uVar31 = (unsigned __int64)*(unsigned char *)*param_1;
          *param_1 = (unsigned char *)*param_1 + 1;
        }
        bVar27 = *pbVar30;
        pbVar30 = pbVar23 + 2;
        pbStack0000001c = pbVar30;
        if ((unsigned int)bVar27 != (unsigned int)uVar31) {
          if ((unsigned int)uVar31 != 0xffffffff) {
            fn_82F86278(uVar31,param_1);
          }
          goto LAB_82f7f134;
        }
        iVar7 = iStack_260 + 1;
      }
      goto LAB_82f7f088;
    }
LAB_82f7f134:
    if ((int)uVar25 != -1) {
      fn_82F86278(uVar25,param_1);
    }
    goto LAB_82f7f148;
  }
  if (pbStack0000001c[1] == 0x25) {
    if (pbStack0000001c[1] == 0x25) {
      pbVar23 = pbStack0000001c + 1;
    }
    goto LAB_82f7efdc;
  }
  uVar31 = 0;
  iVar10 = 0;
  uVar6 = 0;
  iVar22 = 0;
  lVar21 = 0;
  iVar7 = 0;
  bVar27 = 0;
  bVar3 = false;
  cVar16 = '\0';
  cVar17 = '\0';
  bVar1 = false;
  cVar20 = '\0';
  cVar19 = '\0';
  cVar18 = '\x01';
  iVar9 = 0;
  pbVar30 = pbStack0000001c;
  do {
    pbVar23 = pbVar30 + 1;
    bVar24 = *pbVar23;
    iVar8 = fn_82F66A80((unsigned __int64)bVar24);
    pbVar15 = pbVar23;
    if (iVar8 == 0) {
      if (bVar24 < 0x4f) {
        if (bVar24 != 0x4e) {
          if (bVar24 == 0x2a) {
            cVar16 = cVar16 + '\x01';
          }
          else if (bVar24 != 0x46) {
            if (bVar24 == 0x49) {
              bVar24 = pbVar30[2];
              if ((bVar24 == 0x36) && (pbVar15 = pbVar30 + 3, pbVar30[3] == 0x34))
              goto LAB_82f7e07c;
              if ((((((bVar24 != 0x33) || (pbVar15 = pbVar30 + 3, pbVar30[3] != 0x32)) &&
                    (pbVar15 = pbVar23, bVar24 != 100)) && ((bVar24 != 0x69 && (bVar24 != 0x6f))))
                  && (bVar24 != 0x78)) && (bVar24 != 0x58)) goto LAB_82f7e100;
            }
            else if (bVar24 == 0x4c) {
              cVar18 = cVar18 + '\x01';
            }
            else {
LAB_82f7e100:
              cVar17 = cVar17 + '\x01';
              pbVar15 = pbVar23;
            }
          }
        }
      }
      else if (bVar24 == 0x68) {
        cVar19 = cVar20 + -1;
        cVar18 = cVar18 + -1;
        cVar20 = cVar19;
      }
      else {
        if (bVar24 == 0x6c) {
          pbVar15 = pbVar30 + 2;
          if (pbVar30[2] == 0x6c) {
LAB_82f7e07c:
            iVar9 = iVar9 + 1;
            lStack_240 = 0;
            goto LAB_82f7e140;
          }
          cVar18 = cVar18 + '\x01';
        }
        else if (bVar24 != 0x77) goto LAB_82f7e100;
        cVar19 = cVar19 + '\x01';
        cVar20 = cVar19;
        pbVar15 = pbVar23;
      }
    }
    else {
      iVar22 = iVar22 + 1;
      lVar21 = lVar21 * 10 + (unsigned __int64)bVar24 + -0x30;
    }
LAB_82f7e140:
    pbVar30 = pbVar15;
  } while (cVar17 == '\0');
  iStack_238 = (int)cVar16;
  if (cVar16 == '\0') {
    iStack_22c = iStack0000002c;
    uVar26 = iStack0000002c + 7U & 0xfffffff8;
    iStack0000002c = uVar26 + 8;
    plStack_254 = *(__int64 **)(uVar26 + 4);
  }
  else {
    plStack_254 = (__int64 *)0x0;
  }
  cVar20 = '\0';
  if ((cVar19 == '\0') && ((*pbVar30 == 0x53 || (cVar19 = -1, *pbVar30 == 0x43)))) {
    cVar19 = '\x01';
  }
  bVar24 = *pbVar30 | 0x20;
  pbStack0000001c = pbVar30;
  if (bVar24 != 0x6e) {
    if ((bVar24 == 99) || (bVar24 == 0x7b)) {
      uVar26 = param_1[1];
      iStack_260 = iStack_260 + 1;
      param_1[1] = (int)((unsigned __int64)uVar26 - 1);
      if ((__int64)((unsigned __int64)uVar26 - 1) < 0) {
        uVar25 = fn_82F7BAF0(param_1);
      }
      else {
        uVar25 = (unsigned __int64)*(unsigned char *)*param_1;
        *param_1 = (unsigned char *)*param_1 + 1;
      }
    }
    else {
      do {
        uVar26 = param_1[1];
        iStack_260 = iStack_260 + 1;
        param_1[1] = (int)((unsigned __int64)uVar26 - 1);
        if ((__int64)((unsigned __int64)uVar26 - 1) < 0) {
          uVar25 = fn_82F7BAF0(param_1);
        }
        else {
          uVar25 = (unsigned __int64)*(unsigned char *)*param_1;
          *param_1 = (unsigned char *)*param_1 + 1;
        }
      } while (((int)uVar25 != -1) && (iVar8 = fn_82F66AC0(uVar25 & 0xff), iVar8 != 0));
    }
    if ((int)uVar25 == -1) goto LAB_82f7f148;
  }
  if ((iVar22 != 0) && ((int)lVar21 == 0)) goto LAB_82f7f134;
  if ((iStack_238 == 0) && (((bVar24 == 99 || (bVar24 == 0x73)) || (bVar24 == 0x7b)))) {
    uVar26 = iStack_22c + 7U & 0xfffffff8;
    iStack_22c = uVar26 + 8;
    plStack_254 = *(__int64 **)(uVar26 + 4);
    iStack0000002c = uVar26 + 0x10;
    iVar7 = *(int *)(uVar26 + 0xc);
    if (iVar7 == 0) {
      if (cVar19 < '\x01') {
        *(unsigned char *)plStack_254 = 0;
      }
      else {
        *(unsigned short *)plStack_254 = 0;
      }
      puVar5 = (unsigned int *)fn_82F68240();
      *puVar5 = 0xc;
LAB_82f7f148:
      if (aiStack_248[0] == 1) {
        free(puStack_258);
      }
      if ((int)uVar25 == -1) {
        if (uStack_250 != 0) {
          return (unsigned __int64)uStack_250;
        }
        if (cStack_25c == '\0') {
          return 0xffffffffffffffff;
        }
        return 0;
      }
      if (iStack_228 == 1) {
        puVar5 = (unsigned int *)fn_82F68240();
        uVar25 = (unsigned __int64)uStack_250;
        goto LAB_82f7dee0;
      }
      goto LAB_82f7f198;
    }
  }
  plVar29 = plStack_254;
  uVar26 = (unsigned int)uVar25;
  switch(bVar24) {
  case 99:
    if (iVar22 == 0) {
      iVar22 = 1;
      lVar21 = lVar21 + 1;
    }
  case 0x73:
    if ('\0' < cVar19) {
      bVar1 = true;
    }
code_r0x82f7e4a0:
    iStack_260 = iStack_260 + -1;
    if (uVar26 != 0xffffffff) {
      fn_82F86278(uVar25,param_1);
    }
    ppuVar4 = ppuStack_230;
    plVar32 = plVar29;
    if (bVar24 != 99) {
      iVar7 = iVar7 + -1;
    }
    do {
      if ((iVar22 != 0) && (iVar10 = (int)lVar21, lVar21 = lVar21 + -1, iVar10 == 0))
      goto code_r0x82f7e658;
      uVar6 = param_1[1];
      iVar10 = iStack_260 + 1;
      param_1[1] = (int)((unsigned __int64)uVar6 - 1);
      if ((__int64)((unsigned __int64)uVar6 - 1) < 0) {
        uVar25 = fn_82F7BAF0(param_1);
      }
      else {
        uVar25 = (unsigned __int64)*(unsigned char *)*param_1;
        *param_1 = (unsigned char *)*param_1 + 1;
      }
      uVar6 = (unsigned int)uVar25;
      if (uVar6 == 0xffffffff) goto code_r0x82f7e63c;
      if (bVar24 != 99) {
        if (bVar24 == 0x73) {
          if ((8 < (int)uVar6) && ((int)uVar6 < 0xe)) goto code_r0x82f7e63c;
          if (uVar6 != 0x20) goto code_r0x82f7e584;
        }
        if ((bVar24 != 0x7b) ||
           ((1 << (uVar6 & 7) & (int)(char)(abStack_220[(int)uVar6 >> 3] ^ bVar27)) == 0))
        goto code_r0x82f7e63c;
      }
code_r0x82f7e584:
      if (iStack_238 == 0) {
        if (iVar7 == 0) {
          puVar5 = (unsigned int *)fn_82F68240();
          *puVar5 = 0xc;
          if (bVar1) {
            *(unsigned short *)plVar32 = 0;
          }
          else {
            *(unsigned char *)plVar32 = 0;
          }
          goto LAB_82f7f148;
        }
        if (bVar1) {
          uStack_234 = (char)uVar25;
          iVar9 = fn_82F66FA8(uVar25 & 0xff);
          if (iVar9 != 0) {
            uVar6 = param_1[1];
            iVar10 = iStack_260 + 2;
            param_1[1] = (int)((unsigned __int64)uVar6 - 1);
            if ((__int64)((unsigned __int64)uVar6 - 1) < 0) {
              uStack_233 = fn_82F7BAF0(param_1);
            }
            else {
              uStack_233 = *(unsigned char *)*param_1;
              *param_1 = (unsigned char *)*param_1 + 1;
            }
          }
          auStack_24c[0] = 0x3f;
          fn_82F85C08(auStack_24c,&uStack_234,*(unsigned int *)(*ppuVar4 + 0xac),ppuVar4);
          *(unsigned short *)plVar29 = auStack_24c[0];
          plVar29 = (__int64 *)((int)plVar29 + 2);
          iStack_260 = iVar10;
        }
        else {
          *(char *)plVar29 = (char)uVar25;
          plVar29 = (__int64 *)((int)plVar29 + 1);
          iStack_260 = iVar10;
        }
        iVar7 = iVar7 + -1;
        plStack_254 = plVar29;
      }
      else {
        plVar32 = (__int64 *)((int)plVar32 + 1);
        iStack_260 = iVar10;
      }
    } while( true );
  case 100:
  case 0x6f:
  case 0x75:
    goto code_r0x82f7e81c;
  case 0x65:
  case 0x66:
  case 0x67:
    iVar7 = 0;
    if (uVar26 == 0x2d) {
      iVar7 = 1;
      *puStack_258 = 0x2d;
code_r0x82f7eba8:
      lVar21 = lVar21 + -1;
      uVar26 = param_1[1];
      iStack_260 = iStack_260 + 1;
      param_1[1] = (int)((unsigned __int64)uVar26 - 1);
      if ((__int64)((unsigned __int64)uVar26 - 1) < 0) {
        uVar25 = fn_82F7BAF0(param_1);
      }
      else {
        uVar25 = (unsigned __int64)*(unsigned char *)*param_1;
        *param_1 = (unsigned char *)*param_1 + 1;
      }
    }
    else if (uVar26 == 0x2b) goto code_r0x82f7eba8;
    if (iVar22 == 0) {
      lVar21 = -1;
    }
    while( true ) {
      iVar10 = fn_82F66A80(uVar25 & 0xff);
      if ((iVar10 == 0) || (iVar10 = (int)lVar21, lVar21 = lVar21 + -1, iVar10 == 0)) break;
      uVar6 = uVar6 + 1;
      puStack_258[iVar7] = (char)uVar25;
      iVar7 = iVar7 + 1;
      iVar10 = fn_82F7DD38(iVar7,aiStack_248 + 1,&puStack_258,auStack_200,aiStack_248);
      if (iVar10 == 0) goto LAB_82f7f148;
      uVar26 = param_1[1];
      iStack_260 = iStack_260 + 1;
      param_1[1] = (int)((unsigned __int64)uVar26 - 1);
      if ((__int64)((unsigned __int64)uVar26 - 1) < 0) {
        uVar25 = fn_82F7BAF0(param_1);
      }
      else {
        uVar25 = (unsigned __int64)*(unsigned char *)*param_1;
        *param_1 = (unsigned char *)*param_1 + 1;
      }
    }
    cVar20 = *(char *)**(unsigned int **)(*ppuStack_230 + 0xbc);
    if ((cVar20 == (char)uVar25) && (iVar10 = (int)lVar21, lVar21 = lVar21 + -1, iVar10 != 0)) {
      uVar26 = param_1[1];
      iStack_260 = iStack_260 + 1;
      param_1[1] = (int)((unsigned __int64)uVar26 - 1);
      if ((__int64)((unsigned __int64)uVar26 - 1) < 0) {
        uVar25 = fn_82F7BAF0(param_1);
      }
      else {
        uVar25 = (unsigned __int64)*(unsigned char *)*param_1;
        *param_1 = (unsigned char *)*param_1 + 1;
      }
      puStack_258[iVar7] = cVar20;
      iVar7 = iVar7 + 1;
      iVar10 = fn_82F7DD38(iVar7,aiStack_248 + 1,&puStack_258,auStack_200,aiStack_248);
      if (iVar10 == 0) goto LAB_82f7f148;
      while( true ) {
        iVar10 = fn_82F66A80(uVar25 & 0xff);
        if ((iVar10 == 0) || (iVar10 = (int)lVar21, lVar21 = lVar21 + -1, iVar10 == 0)) break;
        uVar6 = uVar6 + 1;
        puStack_258[iVar7] = (char)uVar25;
        iVar7 = iVar7 + 1;
        iVar10 = fn_82F7DD38(iVar7,aiStack_248 + 1,&puStack_258,auStack_200,aiStack_248);
        if (iVar10 == 0) goto LAB_82f7f148;
        uVar26 = param_1[1];
        iStack_260 = iStack_260 + 1;
        param_1[1] = (int)((unsigned __int64)uVar26 - 1);
        if ((__int64)((unsigned __int64)uVar26 - 1) < 0) {
          uVar25 = fn_82F7BAF0(param_1);
        }
        else {
          uVar25 = (unsigned __int64)*(unsigned char *)*param_1;
          *param_1 = (unsigned char *)*param_1 + 1;
        }
      }
    }
    if ((uVar6 != 0) &&
       ((((int)uVar25 == 0x65 || ((int)uVar25 == 0x45)) && (lVar28 = lVar21 + -1, (int)lVar21 != 0))
       )) {
      puStack_258[iVar7] = 0x65;
      iVar22 = iVar7 + 1;
      iVar10 = fn_82F7DD38(iVar22,aiStack_248 + 1,&puStack_258,auStack_200,aiStack_248);
      if (iVar10 == 0) goto LAB_82f7f148;
      uVar26 = param_1[1];
      iStack_260 = iStack_260 + 1;
      param_1[1] = (int)((unsigned __int64)uVar26 - 1);
      if ((__int64)((unsigned __int64)uVar26 - 1) < 0) {
        uVar25 = fn_82F7BAF0(param_1);
      }
      else {
        uVar25 = (unsigned __int64)*(unsigned char *)*param_1;
        *param_1 = (unsigned char *)*param_1 + 1;
      }
      if ((int)uVar25 == 0x2d) {
        puStack_258[iVar22] = 0x2d;
        iVar22 = iVar7 + 2;
        iVar7 = fn_82F7DD38(iVar22,aiStack_248 + 1,&puStack_258,auStack_200,aiStack_248);
        if (iVar7 == 0) goto LAB_82f7f148;
code_r0x82f7ee74:
        iVar7 = (int)lVar28;
        lVar28 = lVar21 + -2;
        if (iVar7 != 0) goto code_r0x82f7eec4;
        lVar28 = 0;
        iVar7 = iVar22;
      }
      else {
        iVar7 = iVar22;
        if ((int)uVar25 == 0x2b) goto code_r0x82f7ee74;
      }
      while( true ) {
        iVar10 = fn_82F66A80(uVar25 & 0xff);
        if ((iVar10 == 0) || (iVar10 = (int)lVar28, lVar28 = lVar28 + -1, iVar10 == 0)) break;
        uVar6 = uVar6 + 1;
        puStack_258[iVar7] = (char)uVar25;
        iVar22 = iVar7 + 1;
        iVar7 = fn_82F7DD38(iVar22,aiStack_248 + 1,&puStack_258,auStack_200,aiStack_248);
        if (iVar7 == 0) goto LAB_82f7f148;
code_r0x82f7eec4:
        uVar26 = param_1[1];
        iStack_260 = iStack_260 + 1;
        param_1[1] = (int)((unsigned __int64)uVar26 - 1);
        iVar7 = iVar22;
        if ((__int64)((unsigned __int64)uVar26 - 1) < 0) {
          uVar25 = fn_82F7BAF0(param_1);
        }
        else {
          uVar25 = (unsigned __int64)*(unsigned char *)*param_1;
          *param_1 = (unsigned char *)*param_1 + 1;
        }
      }
    }
    iStack_260 = iStack_260 + -1;
    if ((int)uVar25 != -1) {
      fn_82F86278(uVar25,param_1);
    }
    if (uVar6 != 0) {
      if (iStack_238 == 0) {
        uStack_250 = uStack_250 + 1;
        puStack_258[iVar7] = 0;
        (*(int (**)())ppuStack_224[7])((__int64)cVar18 + -1,plStack_254,puStack_258,ppuStack_230);
      }
      break;
    }
    goto LAB_82f7f148;
  default:
    if (*pbStack0000001c != uVar26) {
      if (uVar26 != 0xffffffff) {
        fn_82F86278(uVar25,param_1);
      }
      iStack_228 = 1;
      goto LAB_82f7f148;
    }
    cStack_25c = cStack_25c + -1;
    if (iStack_238 == 0) {
      iStack0000002c = iStack_22c;
    }
    break;
  case 0x69:
    bVar24 = 100;
  case 0x78:
    if (uVar26 == 0x2d) {
      bVar3 = true;
code_r0x82f7e6c0:
      lVar21 = lVar21 + -1;
      if ((lVar21 == 0) && (iVar22 != 0)) {
        cVar20 = '\x01';
      }
      else {
        uVar26 = param_1[1];
        iStack_260 = iStack_260 + 1;
        param_1[1] = (int)((unsigned __int64)uVar26 - 1);
        if ((__int64)((unsigned __int64)uVar26 - 1) < 0) {
          uVar25 = fn_82F7BAF0(param_1);
        }
        else {
          uVar25 = (unsigned __int64)*(unsigned char *)*param_1;
          *param_1 = (unsigned char *)*param_1 + 1;
        }
      }
    }
    else if (uVar26 == 0x2b) goto code_r0x82f7e6c0;
    if ((int)uVar25 == 0x30) {
      uVar26 = param_1[1];
      param_1[1] = (int)((unsigned __int64)uVar26 - 1);
      if ((__int64)((unsigned __int64)uVar26 - 1) < 0) {
        uVar25 = fn_82F7BAF0(param_1);
      }
      else {
        uVar25 = (unsigned __int64)*(unsigned char *)*param_1;
        *param_1 = (unsigned char *)*param_1 + 1;
      }
      if (((char)uVar25 == 'x') || ((char)uVar25 == 'X')) {
        uVar26 = param_1[1];
        iStack_260 = iStack_260 + 2;
        param_1[1] = (int)((unsigned __int64)uVar26 - 1);
        if ((__int64)((unsigned __int64)uVar26 - 1) < 0) {
          uVar25 = fn_82F7BAF0(param_1);
        }
        else {
          uVar25 = (unsigned __int64)*(unsigned char *)*param_1;
          *param_1 = (unsigned char *)*param_1 + 1;
        }
        if ((iVar22 != 0) && (lVar21 = lVar21 + -2, (int)lVar21 < 1)) {
          cVar20 = cVar20 + '\x01';
        }
        bVar24 = 0x78;
      }
      else {
        uVar6 = 1;
        if (bVar24 == 0x78) {
          if ((int)uVar25 != -1) {
            fn_82F86278(uVar25,param_1);
          }
          uVar25 = 0x30;
        }
        else {
          if ((iVar22 != 0) && (lVar21 = lVar21 + -1, lVar21 == 0)) {
            cVar20 = cVar20 + '\x01';
          }
          bVar24 = 0x6f;
          iStack_260 = iStack_260 + 1;
        }
      }
    }
    goto code_r0x82f7e888;
  case 0x6e:
    if ((iStack_238 != 0) || (iVar7 = fn_82F6E8A0(), iVar10 = iStack_260, iVar7 == 0)) break;
    goto code_r0x82f7eb4c;
  case 0x70:
    cVar18 = '\x01';
code_r0x82f7e81c:
    if (uVar26 == 0x2d) {
      bVar3 = true;
code_r0x82f7e834:
      lVar21 = lVar21 + -1;
      if ((lVar21 == 0) && (iVar22 != 0)) {
        cVar20 = '\x01';
      }
      else {
        uVar26 = param_1[1];
        iStack_260 = iStack_260 + 1;
        param_1[1] = (int)((unsigned __int64)uVar26 - 1);
        if ((__int64)((unsigned __int64)uVar26 - 1) < 0) {
          uVar25 = fn_82F7BAF0(param_1);
        }
        else {
          uVar25 = (unsigned __int64)*(unsigned char *)*param_1;
          *param_1 = (unsigned char *)*param_1 + 1;
        }
      }
    }
    else if (uVar26 == 0x2b) goto code_r0x82f7e834;
code_r0x82f7e888:
    bVar1 = cVar20 == '\0';
    iVar7 = 0;
    if (iVar9 == 0) {
      while (iVar10 = iVar7, bVar1) {
        if ((bVar24 == 0x78) || (bVar24 == 0x70)) {
          iVar7 = fn_82F66AA0(uVar25 & 0xff);
          if (iVar7 != 0) {
            uVar31 = (uVar31 & 0xfffffff) << 4;
            iVar7 = fn_82F66A80(uVar25 & 0xff);
            if (iVar7 == 0) {
              uVar25 = (uVar25 << 0x20 | uVar25 & 0xffffffdf) - 7;
            }
            goto code_r0x82f7ea60;
          }
code_r0x82f7ea58:
          cVar20 = cVar20 + '\x01';
        }
        else {
          iVar7 = fn_82F66A80(uVar25 & 0xff);
          if (iVar7 == 0) goto code_r0x82f7ea58;
          if (bVar24 == 0x6f) {
            if (0x37 < (int)uVar25) goto code_r0x82f7ea58;
            uVar31 = (uVar31 & 0x1fffffff) << 3;
          }
          else {
            uVar31 = uVar31 * 10;
          }
        }
code_r0x82f7ea60:
        if (cVar20 == '\0') {
          uVar6 = uVar6 + 1;
          uVar31 = (uVar31 + uVar25) - 0x30;
          if ((iVar22 == 0) || (lVar21 = lVar21 + -1, lVar21 != 0)) {
            uVar26 = param_1[1];
            iStack_260 = iStack_260 + 1;
            param_1[1] = (int)((unsigned __int64)uVar26 - 1);
            if ((__int64)((unsigned __int64)uVar26 - 1) < 0) {
              uVar25 = fn_82F7BAF0(param_1);
            }
            else {
              uVar25 = (unsigned __int64)*(unsigned char *)*param_1;
              *param_1 = (unsigned char *)*param_1 + 1;
            }
          }
          else {
            cVar20 = '\x01';
          }
        }
        else {
          iStack_260 = iStack_260 + -1;
          if ((int)uVar25 != -1) {
            fn_82F86278(uVar25,param_1);
          }
        }
        bVar1 = cVar20 == '\0';
        iVar7 = (int)uVar31;
      }
      if (bVar3) {
        iVar10 = -iVar10;
      }
    }
    else {
      while (bVar1) {
        if ((bVar24 == 0x78) || (bVar24 == 0x70)) {
          iVar7 = fn_82F66AA0(uVar25 & 0xff);
          if (iVar7 != 0) {
            lStack_240 = lStack_240 << 4;
            iVar7 = fn_82F66A80(uVar25 & 0xff);
            if (iVar7 == 0) {
              uVar25 = (uVar25 << 0x20 | uVar25 & 0xffffffdf) - 7;
            }
            goto code_r0x82f7e928;
          }
code_r0x82f7e920:
          cVar20 = cVar20 + '\x01';
        }
        else {
          iVar7 = fn_82F66A80(uVar25 & 0xff);
          if (iVar7 == 0) goto code_r0x82f7e920;
          if (bVar24 == 0x6f) {
            if (0x37 < (int)uVar25) goto code_r0x82f7e920;
            lStack_240 = lStack_240 << 3;
          }
          else {
            lStack_240 = lStack_240 * 10;
          }
        }
code_r0x82f7e928:
        if (cVar20 == '\0') {
          uVar6 = uVar6 + 1;
          lStack_240 = ((int)uVar25 + -0x30) + lStack_240;
          if ((iVar22 == 0) || (lVar21 = lVar21 + -1, lVar21 != 0)) {
            uVar26 = param_1[1];
            iStack_260 = iStack_260 + 1;
            param_1[1] = (int)((unsigned __int64)uVar26 - 1);
            if ((__int64)((unsigned __int64)uVar26 - 1) < 0) {
              uVar25 = fn_82F7BAF0(param_1);
            }
            else {
              uVar25 = (unsigned __int64)*(unsigned char *)*param_1;
              *param_1 = (unsigned char *)*param_1 + 1;
            }
          }
          else {
            cVar20 = '\x01';
          }
        }
        else {
          iStack_260 = iStack_260 + -1;
          if ((int)uVar25 != -1) {
            fn_82F86278(uVar25,param_1);
          }
        }
        bVar1 = cVar20 == '\0';
      }
      if (bVar3) {
        lStack_240 = -lStack_240;
      }
    }
    if ((-(unsigned int)(bVar24 != 0x46) & uVar6) == 0) goto LAB_82f7f148;
    if (iStack_238 == 0) {
      uStack_250 = uStack_250 + 1;
code_r0x82f7eb4c:
      if (iVar9 == 0) {
        if (cVar18 == '\0') {
          *(short *)plStack_254 = (short)iVar10;
        }
        else {
          *(int *)plStack_254 = iVar10;
        }
      }
      else {
        *plStack_254 = lStack_240;
      }
    }
    break;
  case 0x7b:
    bVar1 = '\0' < cVar19;
    pbVar23 = pbStack0000001c + 1;
    bVar27 = 0;
    pbVar30 = pbVar23;
    if (*pbVar23 == 0x5e) {
      pbVar30 = pbStack0000001c + 2;
      bVar27 = 0xff;
    }
    uStack_218 = 0;
    uStack_210 = 0;
    uStack_208 = 0;
    uVar31 = 0;
    if ((bVar24 == 0x7b) && (*pbVar30 == 0x5d)) {
      uStack_218 = 0x2000000000;
      uVar31 = 0x5d;
      pbVar30 = pbVar30 + 1;
    }
    while( true ) {
      bVar2 = *pbVar30;
      uVar13 = (unsigned __int64)bVar2;
      if (uVar13 == 0x5d) break;
      if (((uVar13 == 0x2d) && (uVar31 != 0)) && (uVar11 = (unsigned __int64)pbVar30[1], uVar11 != 0x5d)) {
        uVar13 = uVar11;
        if (uVar31 < uVar11) {
          uVar13 = uVar31;
          uVar31 = uVar11;
        }
        for (; uVar13 < uVar31; uVar13 = uVar13 + 1 & 0xff) {
          iVar10 = (int)(uVar13 >> 3);
          abStack_220[iVar10] = (unsigned char)(1 << ((unsigned int)uVar13 & 7)) | abStack_220[iVar10];
        }
        iVar10 = (int)(uVar31 >> 3);
        abStack_220[iVar10] = (unsigned char)(1 << ((unsigned int)uVar31 & 7)) | abStack_220[iVar10];
        uVar31 = 0;
        pbVar30 = pbVar30 + 2;
      }
      else {
        abStack_220[bVar2 >> 3] = (unsigned char)(1 << (bVar2 & 7)) | abStack_220[bVar2 >> 3];
        uVar31 = uVar13;
        pbVar30 = pbVar30 + 1;
      }
    }
    pbStack0000001c = pbVar23;
    if (bVar24 == 0x7b) {
      pbStack0000001c = pbVar30;
    }
    goto code_r0x82f7e4a0;
  }
LAB_82f7efa0:
  cStack_25c = cStack_25c + '\x01';
  pbVar30 = pbStack0000001c + 1;
  pbStack0000001c = pbStack0000001c + 1;
  iVar7 = iStack_260;
LAB_82f7f088:
  iStack_260 = iVar7;
  pbVar23 = pbStack0000001c;
  if (((int)uVar25 == -1) &&
     ((*pbVar30 != 0x25 || (pbVar30 = pbStack0000001c, pbStack0000001c[1] != 0x6e))))
  goto LAB_82f7f148;
LAB_82f7f0b0:
  pbStack0000001c = pbVar23;
  if (*pbVar30 == 0) goto LAB_82f7f148;
  goto LAB_82f7df24;
code_r0x82f7e63c:
  if (uVar6 != 0xffffffff) {
    fn_82F86278(uVar25,param_1);
  }
code_r0x82f7e658:
  if (plVar32 == plVar29) goto LAB_82f7f148;
  if ((iStack_238 == 0) && (uStack_250 = uStack_250 + 1, bVar24 != 99)) {
    if (bVar1) {
      *(unsigned short *)plStack_254 = 0;
    }
    else {
      *(unsigned char *)plStack_254 = 0;
    }
  }
  goto LAB_82f7efa0;
}

