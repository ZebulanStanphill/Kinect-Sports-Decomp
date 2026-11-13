extern int fn_82521DC8();
extern int fn_82A1EFC0();
extern int iRam832660bc;
extern int iRam832660d0;
extern int iRam832821fc;
extern unsigned int uRam832660c0;
extern unsigned int uRam832660c4;
extern unsigned int uRam832660c8;
extern unsigned int uRam83281158;


void fn_8259C2A0(int param_1,int param_2,unsigned int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  
  iVar3 = 0;
  piVar5 = (int *)0x83281164;
  do {
    if (*piVar5 == param_1) {
      iVar2 = 0;
      do {
        iVar1 = (iVar3 * 0x85 + iVar2) * 4;
        if (*(int *)(iVar1 + -0x7cd7ee94) == 0) {
          *(int (***)())(iVar1 + -0x7cd7ee94) = fn_82521DC8;
          *(unsigned int *)(iVar1 + -0x7cd7ed94) = param_3;
          return;
        }
        iVar2 = iVar2 + 1;
      } while (iVar2 < 0x40);
      return;
    }
    piVar5 = piVar5 + 0x85;
    iVar3 = iVar3 + 1;
  } while ((int)piVar5 < -0x7cd7ddfc);
  iVar3 = 0;
  piVar5 = (int *)0x8328115c;
  while (*piVar5 != 0) {
    piVar5 = piVar5 + 0x85;
    iVar3 = iVar3 + 1;
    if (-0x7cd7de05 < (int)piVar5) {
      return;
    }
  }
  iVar2 = iVar3 * 0x214;
  *(unsigned int *)(iVar2 + -0x7cd7eea4) = 1;
  if (iVar3 < 0) {
    return;
  }
  *(unsigned int *)(iVar2 + -0x7cd7ec94) = 0;
  *(int *)(iVar2 + -0x7cd7ee9c) = param_1;
  *(int *)(iVar2 + -0x7cd7ee98) = param_2;
  iVar1 = 0;
  do {
    iVar4 = (iVar3 * 0x85 + iVar1) * 4;
    if (*(int *)(iVar4 + -0x7cd7ee94) == 0) {
      *(int (***)())(iVar4 + -0x7cd7ee94) = fn_82521DC8;
      *(unsigned int *)(iVar4 + -0x7cd7ed94) = param_3;
      break;
    }
    iVar1 = iVar1 + 1;
  } while (iVar1 < 0x40);
  if (iRam832821fc != 0) {
    return;
  }
  uRam832660c4 = 0;
  *(unsigned int *)(iVar2 + -0x7cd7eea0) = 1;
  if (param_2 != 0) {
    uRam832660c4 = 0x200;
  }
  iRam832821fc = 1;
  uRam83281158 = 0;
  uRam832660c0 = 1;
  uRam832660c8 = 0;
  iRam832660bc = param_1;
  iRam832660d0 = iVar2 + -0x7cd7ec94;
                    /* WARNING: Subroutine does not return */
  fn_82A1EFC0(0xffffffff832660a0,0,0x1c);
}

