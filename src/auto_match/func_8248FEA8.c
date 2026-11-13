#define true 1
extern int fn_82490070();


unsigned int * fn_8248FEA8(unsigned int *param_1,int *param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  unsigned int uVar3;
  int *piVar4;
  int *piVar5;
  int *piVar6;
  int *piVar7;
  int *piVar8;
  
  uVar3 = (int)param_3 - (int)param_2 >> 2;
  piVar5 = param_2 + ((int)param_3 - (int)param_2 >> 3) + (unsigned int)((int)uVar3 < 0 && (uVar3 & 1) != 0)
  ;
  fn_82490070(param_2,piVar5,param_3 + -1);
  piVar4 = piVar5 + 1;
  while (piVar8 = piVar5, param_2 < piVar8) {
    if ((piVar8[-1] < *piVar8) || (piVar5 = piVar8 + -1, *piVar8 < piVar8[-1])) break;
  }
  piVar6 = piVar8;
  piVar5 = piVar4;
  if (piVar4 < param_3) {
    do {
      piVar5 = piVar4;
      if ((*piVar4 < *piVar8) || (*piVar8 < *piVar4)) break;
      piVar4 = piVar4 + 1;
      piVar5 = piVar4;
    } while (piVar4 < param_3);
  }
LAB_8248ff7c:
  do {
    piVar7 = piVar6;
    if (piVar4 < param_3) {
      iVar2 = *piVar4;
      if (iVar2 <= *piVar8) {
        if (iVar2 < *piVar8) goto joined_r0x8248ff88;
        iVar1 = *piVar5;
        *piVar5 = iVar2;
        *piVar4 = iVar1;
        goto LAB_8248ff74;
      }
    }
    else {
joined_r0x8248ff88:
      while (piVar6 = piVar7, param_2 < piVar6) {
        piVar7 = piVar6 + -1;
        if (*piVar8 <= piVar6[-1]) {
          if (*piVar8 < piVar6[-1]) break;
          piVar8 = piVar8 + -1;
          iVar2 = *piVar8;
          *piVar8 = *piVar7;
          *piVar7 = iVar2;
        }
      }
      if (piVar6 == param_2) {
        if (piVar4 == param_3) {
          *param_1 = piVar8;
          param_1[1] = piVar5;
          return param_1;
        }
        if (piVar5 != piVar4) {
          iVar2 = *piVar8;
          *piVar8 = *piVar5;
          *piVar5 = iVar2;
        }
        iVar2 = *piVar8;
        *piVar8 = *piVar4;
        *piVar4 = iVar2;
        piVar8 = piVar8 + 1;
LAB_8248ff74:
        piVar5 = piVar5 + 1;
      }
      else {
        piVar6 = piVar6 + -1;
        if (piVar4 == param_3) {
          piVar8 = piVar8 + -1;
          if (piVar6 != piVar8) {
            iVar2 = *piVar6;
            *piVar6 = *piVar8;
            *piVar8 = iVar2;
          }
          piVar5 = piVar5 + -1;
          iVar2 = *piVar8;
          *piVar8 = *piVar5;
          *piVar5 = iVar2;
          goto LAB_8248ff7c;
        }
        iVar2 = *piVar4;
        *piVar4 = *piVar6;
        *piVar6 = iVar2;
      }
    }
    piVar4 = piVar4 + 1;
  } while( true );
}

