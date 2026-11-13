extern unsigned int *auStack_22e;
extern unsigned int *auStack_240;
extern unsigned int *auStack_248;
extern int fn_822315A0();
extern int fn_82267750();
extern int fn_82268330();
extern int fn_822794D0();
extern int fn_82280798();
extern int fn_82284A40();
extern int fn_82286EA8();
extern int fn_82286F08();
extern int fn_822886B0();
extern int fn_822888F0();
extern int fn_822889C0();
extern int fn_82288A50();
extern int fn_82288CD8();
extern int fn_82288DD8();
extern int fn_82288FB8();
extern int fn_82289258();
extern int fn_82289580();
extern int fn_82289710();
extern int fn_822897B8();
extern int fn_8228A420();
extern int fn_8228A5F0();
extern int fn_8228B6A8();
extern int fn_8265C9E0();
extern int fn_8265CA20();
extern int fn_8266F628();
extern int fn_82F691F0();
extern unsigned int iStack_24c;
extern unsigned int lbl_820E975C;
extern unsigned int uStack_230;
extern unsigned int uStack_250;


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void fn_82287638(int param_1)

{
  int iVar1;
  int iVar2;
  unsigned __int64 uVar3;
  unsigned __int64 uVar4;
  unsigned __int64 uVar5;
  unsigned __int64 uVar6;
  unsigned __int64 uVar7;
  unsigned __int64 uVar8;
  __int64 lVar9;
  int iVar10;
  unsigned int uStack_250;
  int iStack_24c;
  unsigned char auStack_248 [8];
  unsigned char auStack_240 [16];
  unsigned short uStack_230;
  unsigned char auStack_22e [558];
  
  iVar10 = *(int *)(param_1 + 0x604);
  iVar1 = *(int *)(param_1 + 0x600);
  if (iVar10 == iVar1) {
    return;
  }
  iVar2 = *(int *)(param_1 + 0x69c);
  if (*(int *)(iVar2 + 0x44) == 0) {
    return;
  }
  if (*(int *)(iVar2 + 0x44) == 2) {
    return;
  }
  if (*(int *)(iVar2 + 0x8c) != 0) {
    return;
  }
  if (*(int *)(iVar2 + 0x6c) != 0) {
    return;
  }
  if (iVar1 < 9) {
    if (iVar1 == 8) {
      iVar10 = *(int *)(param_1 + 0x610);
      lVar9 = 0;
      if (0 < *(int *)(iVar10 + 0x478)) {
        do {
          fn_82267750(*(unsigned int *)(iVar10 + 0x5c0),lVar9);
          lVar9 = lVar9 + 1;
        } while ((int)lVar9 < *(int *)(iVar10 + 0x478));
      }
LAB_82287708:
      fn_82267750(*(unsigned int *)(iVar10 + 0x5c0),4);
    }
    else if (iVar1 == 1) {
      if ((iVar10 != 0xf) && (iVar10 != 0xe)) {
        fn_822889C0(auStack_248,param_1);
        fn_8228B6A8();
        if ((*(int *)(param_1 + 0x604) != 10) && (*(int *)(param_1 + 0x604) != 4)) {
          iVar10 = *(int *)(param_1 + 0x69c);
          iStack_24c = 0;
          uVar3 = fn_8265C9E0(0x130);
          if ((uVar3 & 0xffffffff) == 0) {
            uStack_250 = 0;
          }
          else {
            uStack_250 = fn_822794D0(uVar3,param_1 + 0x5d0,1,1,*(unsigned int *)(iVar10 + 0x7c))
            ;
          }
          fn_82280798(iVar10,&uStack_250,0,1);
          fn_822886B0(param_1);
        }
        if (*(int *)(param_1 + 0x7c4) == 0) {
LAB_822877ac:
          fn_82284A40(*(unsigned int *)(param_1 + 0x11f4),param_1 + 0xbd0,0);
        }
      }
    }
    else if (1 < iVar1) {
      if (iVar1 < 4) {
        iVar10 = *(int *)(param_1 + 0x60c);
        lVar9 = 0;
        if (0 < *(int *)(iVar10 + 0x478)) {
          do {
            fn_82267750(*(unsigned int *)(iVar10 + 0x5c0),lVar9);
            lVar9 = lVar9 + 1;
          } while ((int)lVar9 < *(int *)(iVar10 + 0x478));
        }
        goto LAB_82287708;
      }
      if (iVar1 == 7) {
        iVar10 = *(int *)(param_1 + 0x618);
        lVar9 = 0;
        do {
          fn_82267750(*(unsigned int *)(iVar10 + 0x2cc),lVar9);
          lVar9 = lVar9 + 1;
        } while ((int)lVar9 < 7);
        goto LAB_822877ac;
      }
    }
  }
  else if (iVar1 == 9) {
    iVar10 = *(int *)(param_1 + 0x614);
    if (iVar10 != 0) {
      lVar9 = 0;
      do {
        fn_82267750(*(unsigned int *)(iVar10 + 0x5c0),lVar9);
        lVar9 = lVar9 + 1;
      } while ((int)lVar9 < 3);
    }
  }
  else if (iVar1 == 10) {
    fn_822889C0(auStack_240,param_1);
    fn_8228B6A8();
    if (*(int *)(param_1 + 0x604) != 1) {
      iVar10 = *(int *)(param_1 + 0x69c);
      iStack_24c = 0;
      uVar3 = fn_8265C9E0(0x130);
      if ((uVar3 & 0xffffffff) == 0) {
        uStack_250 = 0;
      }
      else {
        uStack_250 = fn_822794D0(uVar3,param_1 + 0x5d0,1,1,*(unsigned int *)(iVar10 + 0x7c));
      }
      fn_82280798(iVar10,&uStack_250,0,1);
      fn_822886B0(param_1);
    }
  }
  else if (iVar1 == 0xe) {
    fn_8228A420(param_1);
  }
  switch(*(unsigned int *)(param_1 + 0x604)) {
  case 1:
    if (*(int *)(param_1 + 0x60c) != 0) {
      fn_82286EA8();
      *(unsigned int *)(param_1 + 0x60c) = 0;
    }
    if (*(int *)(param_1 + 0x610) != 0) {
      fn_82286EA8();
      *(unsigned int *)(param_1 + 0x610) = 0;
    }
    iVar10 = *(int *)(param_1 + 0x614);
    if (iVar10 != 0) {
      fn_82268330(iVar10);
      fn_8265CA20(iVar10);
      *(unsigned int *)(param_1 + 0x614) = 0;
    }
    if (*(int *)(param_1 + 0x618) != 0) {
      fn_82286F08();
      *(unsigned int *)(param_1 + 0x618) = 0;
    }
    fn_8228A5F0(param_1);
    fn_82288A50(param_1);
    if (*(int *)(param_1 + 0x7c4) == 0) {
      uStack_230 = lbl_820E975C;
                    /* WARNING: Subroutine does not return */
      fn_82F691F0(auStack_22e,0,0x1fe);
    }
    break;
  case 2:
    fn_82288CD8(param_1);
    break;
  case 3:
    fn_82288DD8(param_1);
    break;
  case 4:
    fn_822888F0(&uStack_250,param_1);
    fn_8266F628(uStack_250,1);
    *(unsigned int *)(param_1 + 0x7c8) = 0;
    if (iStack_24c != 0) {
      fn_822315A0();
    }
    break;
  case 5:
    uVar5 = 0xffffffff821a946c;
    uVar8 = 0xffffffff8228ae00;
    goto code_r0x82287a0c;
  case 6:
    uVar5 = 0xffffffff821a9490;
    uVar8 = 0xffffffff8228aea0;
code_r0x82287a0c:
    uVar4 = 0xffffffff821a9480;
    goto code_r0x82287a14;
  case 7:
    fn_82288FB8(param_1);
    break;
  case 8:
    fn_82289580(param_1);
    break;
  case 9:
    fn_82289710(param_1);
    break;
  case 10:
    fn_822897B8(param_1);
    break;
  case 0xb:
    uVar5 = 0xffffffff821a9580;
    uVar4 = 0xffffffff821a95a4;
    uVar8 = 0xffffffff82289930;
    goto code_r0x82287a14;
  case 0xc:
    uVar5 = 0xffffffff821a95c4;
    uVar4 = 0xffffffff821a95a4;
    uVar8 = 0xffffffff822899f0;
code_r0x82287a14:
    uVar6 = 0xffffffff821a9468;
    uVar7 = 0xffffffff821a9464;
code_r0x82287a24:
    fn_82289258(param_1,uVar4,uVar5,uVar6,uVar7,uVar8,0);
    break;
  case 0xd:
    uVar4 = 0xffffffff821a95a4;
    uVar6 = 0xffffffff82196344;
    uVar5 = 0xffffffff821a95e8;
    uVar8 = 0xffffffff82289a68;
    uVar7 = 0;
    goto code_r0x82287a24;
  case 0xe:
    fn_8228A420(param_1);
  }
  *(unsigned int *)(param_1 + 0x600) = *(unsigned int *)(param_1 + 0x604);
  return;
}

