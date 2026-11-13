typedef unsigned char bool;
#define true 1
#define false 0
extern unsigned int *auStack_110;
extern unsigned int *auStack_170;
extern unsigned int *auStack_1d0;
extern unsigned int *auStack_230;
extern unsigned int *auStack_290;
extern unsigned int *auStack_2f0;
extern unsigned int *auStack_b0;
extern int fn_82440568();
extern int fn_82F68CC0();


unsigned int * fn_8243F850(unsigned int *param_1,int *param_2,int *param_3)

{
  unsigned int uVar1;
  unsigned char *puVar2;
  unsigned int *puVar3;
  bool bVar4;
  unsigned int uVar5;
  int iVar6;
  int *piVar7;
  int *piVar8;
  int *piVar9;
  int *piVar10;
  int *piVar11;
  int *piVar12;
  unsigned char auStack_2f0 [96];
  unsigned char auStack_290 [96];
  unsigned char auStack_230 [96];
  unsigned char auStack_1d0 [96];
  unsigned char auStack_170 [96];
  unsigned char auStack_110 [96];
  unsigned char auStack_b0 [176];
  
  piVar12 = param_3 + -0x17;
  uVar5 = ((int)param_3 - (int)param_2) / 0x5c;
  iVar6 = ((int)piVar12 - (int)param_2) / 0x5c;
  piVar10 = param_2 + (((int)uVar5 >> 1) + (unsigned int)((int)uVar5 < 0 && (uVar5 & 1) != 0)) * 0x17;
  piVar9 = param_2;
  if (0x28 < iVar6) {
    uVar5 = iVar6 + 1;
    iVar6 = ((int)uVar5 >> 3) + (unsigned int)((int)uVar5 < 0 && (uVar5 & 7) != 0);
    fn_82440568(param_2,param_2 + iVar6 * 0x17,param_2 + iVar6 * 0x2e);
    fn_82440568(piVar10 + iVar6 * -0x17,piVar10,piVar10 + iVar6 * 0x17);
    fn_82440568(piVar12 + iVar6 * -0x2e,piVar12 + iVar6 * -0x17,piVar12);
    piVar12 = piVar12 + iVar6 * -0x17;
    piVar9 = param_2 + iVar6 * 0x17;
  }
  fn_82440568(piVar9,piVar10,piVar12);
  piVar12 = piVar10 + 0x17;
  if (param_2 < piVar10) {
    puVar3 = (unsigned int *)(piVar10 + -6);
    do {
      uVar5 = *puVar3;
      uVar1 = puVar3[0x17];
      if ((uVar1 < uVar5) || ((uVar5 == uVar1 && ((int)puVar3[-0x11] < *piVar10)))) {
        bVar4 = true;
      }
      else {
        bVar4 = false;
      }
      if (bVar4) break;
      if ((uVar5 < uVar1) || ((uVar1 == uVar5 && (*piVar10 < (int)puVar3[-0x11])))) {
        bVar4 = true;
      }
      else {
        bVar4 = false;
      }
      if (bVar4) break;
      piVar10 = piVar10 + -0x17;
      puVar3 = puVar3 + -0x17;
    } while (param_2 < piVar10);
  }
  piVar9 = piVar10;
  piVar8 = piVar12;
  if (piVar12 < param_3) {
    uVar5 = piVar10[0x11];
    while( true ) {
      uVar1 = piVar12[0x11];
      if ((uVar5 < uVar1) || ((uVar1 == uVar5 && (*piVar12 < *piVar10)))) {
        bVar4 = true;
      }
      else {
        bVar4 = false;
      }
      piVar8 = piVar12;
      if (bVar4) break;
      if ((uVar1 < uVar5) || ((uVar5 == uVar1 && (*piVar10 < *piVar12)))) {
        bVar4 = true;
      }
      else {
        bVar4 = false;
      }
      if ((bVar4) || (piVar12 = piVar12 + 0x17, piVar8 = piVar12, param_3 <= piVar12)) break;
    }
  }
LAB_8243fab8:
  do {
    piVar11 = piVar10;
    piVar7 = piVar9;
    if (param_3 <= piVar12) {
joined_r0x8243fac4:
      for (; param_2 < piVar7; piVar7 = piVar7 + -0x17) {
        piVar10 = piVar9 + -0x17;
        uVar5 = piVar9[-6];
        uVar1 = piVar11[0x11];
        if ((uVar1 < uVar5) || ((uVar5 == uVar1 && (*piVar10 < *piVar11)))) {
          bVar4 = true;
        }
        else {
          bVar4 = false;
        }
        if (!bVar4) {
          if ((uVar5 < uVar1) || ((uVar1 == uVar5 && (*piVar11 < *piVar10)))) {
            bVar4 = true;
          }
          else {
            bVar4 = false;
          }
          if (bVar4) break;
          piVar11 = piVar11 + -0x17;
          fn_82F68CC0(auStack_110,piVar11,0x5c);
          fn_82F68CC0(piVar11,piVar10,0x5c);
          fn_82F68CC0(piVar10,auStack_110,0x5c);
        }
        piVar9 = piVar10;
      }
      if (piVar7 == param_2) {
        if (piVar12 == param_3) {
          *param_1 = piVar11;
          param_1[1] = piVar8;
          return param_1;
        }
        if (piVar8 != piVar12) {
          fn_82F68CC0(auStack_1d0,piVar11,0x5c);
          fn_82F68CC0(piVar11,piVar8,0x5c);
          fn_82F68CC0(piVar8,auStack_1d0,0x5c);
        }
        piVar10 = piVar11 + 0x17;
        fn_82F68CC0(auStack_2f0,piVar11,0x5c);
        fn_82F68CC0(piVar11,piVar12,0x5c);
        puVar2 = auStack_2f0;
        piVar9 = piVar12;
        piVar8 = piVar8 + 0x17;
        piVar12 = piVar12 + 0x17;
      }
      else {
        if (piVar12 != param_3) {
          piVar9 = piVar7 + -0x17;
          fn_82F68CC0(auStack_b0,piVar12,0x5c);
          fn_82F68CC0(piVar12,piVar9,0x5c);
          puVar2 = auStack_b0;
          piVar10 = piVar11;
          piVar11 = piVar9;
          piVar7 = piVar8;
          goto LAB_8243faac;
        }
        piVar7 = piVar7 + -0x17;
        piVar10 = piVar11 + -0x17;
        if (piVar7 != piVar10) {
          fn_82F68CC0(auStack_230,piVar7,0x5c);
          fn_82F68CC0(piVar7,piVar10,0x5c);
          fn_82F68CC0(piVar10,auStack_230,0x5c);
        }
        piVar9 = piVar8 + -0x17;
        fn_82F68CC0(auStack_170,piVar10,0x5c);
        fn_82F68CC0(piVar10,piVar9,0x5c);
        puVar2 = auStack_170;
        piVar8 = piVar9;
      }
      fn_82F68CC0(piVar9,puVar2,0x5c);
      piVar9 = piVar7;
      goto LAB_8243fab8;
    }
    uVar5 = piVar10[0x11];
    uVar1 = piVar12[0x11];
    if ((uVar1 < uVar5) || ((uVar5 == uVar1 && (*piVar10 < *piVar12)))) {
      bVar4 = true;
    }
    else {
      bVar4 = false;
    }
    if (!bVar4) {
      if ((uVar5 < uVar1) || ((uVar1 == uVar5 && (*piVar12 < *piVar10)))) {
        bVar4 = true;
      }
      else {
        bVar4 = false;
      }
      if (bVar4) goto joined_r0x8243fac4;
      piVar7 = piVar8 + 0x17;
      fn_82F68CC0(auStack_290,piVar8,0x5c);
      fn_82F68CC0(piVar8,piVar12,0x5c);
      puVar2 = auStack_290;
      piVar11 = piVar12;
LAB_8243faac:
      fn_82F68CC0(piVar11,puVar2,0x5c);
      piVar8 = piVar7;
    }
    piVar12 = piVar12 + 0x17;
  } while( true );
}

