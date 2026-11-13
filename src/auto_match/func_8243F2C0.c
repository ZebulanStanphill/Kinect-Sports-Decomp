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
extern int fn_824402C0();
extern int fn_82F68CC0();


unsigned int * fn_8243F2C0(unsigned int *param_1,int *param_2,int *param_3)

{
  int iVar1;
  unsigned char *puVar2;
  int *piVar3;
  bool bVar4;
  unsigned int uVar5;
  int iVar6;
  int *piVar7;
  int *piVar8;
  int *piVar9;
  int *piVar10;
  int *piVar11;
  unsigned char auStack_2f0 [96];
  unsigned char auStack_290 [96];
  unsigned char auStack_230 [96];
  unsigned char auStack_1d0 [96];
  unsigned char auStack_170 [96];
  unsigned char auStack_110 [96];
  unsigned char auStack_b0 [176];
  
  piVar11 = param_3 + -0x17;
  uVar5 = ((int)param_3 - (int)param_2) / 0x5c;
  iVar6 = ((int)piVar11 - (int)param_2) / 0x5c;
  piVar9 = param_2 + (((int)uVar5 >> 1) + (unsigned int)((int)uVar5 < 0 && (uVar5 & 1) != 0)) * 0x17;
  piVar3 = param_2;
  if (0x28 < iVar6) {
    uVar5 = iVar6 + 1;
    iVar6 = ((int)uVar5 >> 3) + (unsigned int)((int)uVar5 < 0 && (uVar5 & 7) != 0);
    fn_824402C0(param_2,param_2 + iVar6 * 0x17,param_2 + iVar6 * 0x2e);
    fn_824402C0(piVar9 + iVar6 * -0x17,piVar9,piVar9 + iVar6 * 0x17);
    fn_824402C0(piVar11 + iVar6 * -0x2e,piVar11 + iVar6 * -0x17,piVar11);
    piVar11 = piVar11 + iVar6 * -0x17;
    piVar3 = param_2 + iVar6 * 0x17;
  }
  fn_824402C0(piVar3,piVar9,piVar11);
  piVar11 = piVar9 + 0x17;
  if (param_2 < piVar9) {
    piVar3 = piVar9 + -5;
    do {
      iVar6 = *piVar3;
      iVar1 = piVar3[0x17];
      if ((iVar1 < iVar6) || ((iVar6 == iVar1 && (piVar3[-0x12] < *piVar9)))) {
        bVar4 = true;
      }
      else {
        bVar4 = false;
      }
      if (bVar4) break;
      if ((iVar6 < iVar1) || ((iVar1 == iVar6 && (*piVar9 < piVar3[-0x12])))) {
        bVar4 = true;
      }
      else {
        bVar4 = false;
      }
      if (bVar4) break;
      piVar9 = piVar9 + -0x17;
      piVar3 = piVar3 + -0x17;
    } while (param_2 < piVar9);
  }
  piVar3 = piVar9;
  piVar8 = piVar11;
  if (piVar11 < param_3) {
    iVar6 = piVar9[0x12];
    while( true ) {
      iVar1 = piVar11[0x12];
      if ((iVar6 < iVar1) || ((iVar1 == iVar6 && (*piVar11 < *piVar9)))) {
        bVar4 = true;
      }
      else {
        bVar4 = false;
      }
      piVar8 = piVar11;
      if (bVar4) break;
      if ((iVar1 < iVar6) || ((iVar6 == iVar1 && (*piVar9 < *piVar11)))) {
        bVar4 = true;
      }
      else {
        bVar4 = false;
      }
      if ((bVar4) || (piVar11 = piVar11 + 0x17, piVar8 = piVar11, param_3 <= piVar11)) break;
    }
  }
LAB_8243f528:
  do {
    piVar10 = piVar9;
    piVar7 = piVar3;
    if (param_3 <= piVar11) {
joined_r0x8243f534:
      for (; param_2 < piVar7; piVar7 = piVar7 + -0x17) {
        piVar9 = piVar3 + -0x17;
        iVar6 = piVar3[-5];
        iVar1 = piVar10[0x12];
        if ((iVar1 < iVar6) || ((iVar6 == iVar1 && (*piVar9 < *piVar10)))) {
          bVar4 = true;
        }
        else {
          bVar4 = false;
        }
        if (!bVar4) {
          if ((iVar6 < iVar1) || ((iVar1 == iVar6 && (*piVar10 < *piVar9)))) {
            bVar4 = true;
          }
          else {
            bVar4 = false;
          }
          if (bVar4) break;
          piVar10 = piVar10 + -0x17;
          fn_82F68CC0(auStack_110,piVar10,0x5c);
          fn_82F68CC0(piVar10,piVar9,0x5c);
          fn_82F68CC0(piVar9,auStack_110,0x5c);
        }
        piVar3 = piVar9;
      }
      if (piVar7 == param_2) {
        if (piVar11 == param_3) {
          *param_1 = piVar10;
          param_1[1] = piVar8;
          return param_1;
        }
        if (piVar8 != piVar11) {
          fn_82F68CC0(auStack_1d0,piVar10,0x5c);
          fn_82F68CC0(piVar10,piVar8,0x5c);
          fn_82F68CC0(piVar8,auStack_1d0,0x5c);
        }
        piVar9 = piVar10 + 0x17;
        fn_82F68CC0(auStack_2f0,piVar10,0x5c);
        fn_82F68CC0(piVar10,piVar11,0x5c);
        puVar2 = auStack_2f0;
        piVar3 = piVar11;
        piVar8 = piVar8 + 0x17;
        piVar11 = piVar11 + 0x17;
      }
      else {
        if (piVar11 != param_3) {
          piVar3 = piVar7 + -0x17;
          fn_82F68CC0(auStack_b0,piVar11,0x5c);
          fn_82F68CC0(piVar11,piVar3,0x5c);
          puVar2 = auStack_b0;
          piVar9 = piVar10;
          piVar10 = piVar3;
          piVar7 = piVar8;
          goto LAB_8243f51c;
        }
        piVar7 = piVar7 + -0x17;
        piVar9 = piVar10 + -0x17;
        if (piVar7 != piVar9) {
          fn_82F68CC0(auStack_230,piVar7,0x5c);
          fn_82F68CC0(piVar7,piVar9,0x5c);
          fn_82F68CC0(piVar9,auStack_230,0x5c);
        }
        piVar3 = piVar8 + -0x17;
        fn_82F68CC0(auStack_170,piVar9,0x5c);
        fn_82F68CC0(piVar9,piVar3,0x5c);
        puVar2 = auStack_170;
        piVar8 = piVar3;
      }
      fn_82F68CC0(piVar3,puVar2,0x5c);
      piVar3 = piVar7;
      goto LAB_8243f528;
    }
    iVar6 = piVar11[0x12];
    iVar1 = piVar9[0x12];
    if ((iVar6 < iVar1) || ((iVar1 == iVar6 && (*piVar9 < *piVar11)))) {
      bVar4 = true;
    }
    else {
      bVar4 = false;
    }
    if (!bVar4) {
      if ((iVar1 < iVar6) || ((iVar6 == iVar1 && (*piVar11 < *piVar9)))) {
        bVar4 = true;
      }
      else {
        bVar4 = false;
      }
      if (bVar4) goto joined_r0x8243f534;
      piVar7 = piVar8 + 0x17;
      fn_82F68CC0(auStack_290,piVar8,0x5c);
      fn_82F68CC0(piVar8,piVar11,0x5c);
      puVar2 = auStack_290;
      piVar10 = piVar11;
LAB_8243f51c:
      fn_82F68CC0(piVar10,puVar2,0x5c);
      piVar8 = piVar7;
    }
    piVar11 = piVar11 + 0x17;
  } while( true );
}

