extern int fn_82648B30();
extern int fn_82648D40();
extern int fn_8265C940();


int * fn_82648C58(int param_1,int param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  unsigned int uVar3;
  int *piVar4;
  
  piVar1 = (int *)fn_8265C940(0x9c,0x64800000);
  if (piVar1 == (int *)0x0) {
LAB_82648c84:
    piVar1 = (int *)0x0;
  }
  else {
    piVar1[1] = param_2;
    *piVar1 = param_1;
    piVar1[3] = 1;
    piVar1[0x25] = 1;
    piVar1[0x26] = param_3;
    if (param_2 == 8) {
      iVar2 = *(int *)(param_1 + 0x2a9c);
      *(unsigned char *)(piVar1 + 4) = 2;
      piVar1[6] = iVar2;
      return piVar1;
    }
    if (param_2 == 9) {
      uVar3 = 0;
      if (param_3 != 0) {
        piVar4 = piVar1 + 0x16;
        do {
          iVar2 = fn_82648B30(param_1,piVar4,piVar4 + -0xf);
          if (iVar2 < 0) {
            piVar1[0x26] = uVar3;
            goto LAB_82648d18;
          }
          uVar3 = uVar3 + 1;
          piVar4 = piVar4 + 1;
        } while (uVar3 < (unsigned int)piVar1[0x26]);
      }
    }
    else {
      iVar2 = fn_82648B30(param_1,piVar1 + 0x16,piVar1 + 7);
      if (iVar2 < 0) {
LAB_82648d18:
        fn_82648D40(piVar1);
        goto LAB_82648c84;
      }
    }
    *(unsigned char *)(piVar1 + 4) = 1;
  }
  return piVar1;
}

