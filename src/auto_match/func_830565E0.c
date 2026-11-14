typedef unsigned char bool;
extern int XMemSet();
extern int fn_83056488();


void fn_830565E0(int param_1,unsigned int *param_2)

{
  unsigned int uVar1;
  unsigned __int64 uVar2;
  unsigned int uVar3;
  int iVar4;
  
  fn_83056488();
  uVar1 = param_2[2];
  if (uVar1 == 0x11) {
    if (*(char *)(param_1 + 0x14) == '\0') {
      *(unsigned int *)(param_1 + 0x10) = *(unsigned int *)(param_1 + 0xc);
    }
    uVar3 = *(unsigned int *)(param_1 + 0x10);
    uVar2 = (unsigned __int64)*(unsigned short *)(param_2 + 3) - (unsigned __int64)*(unsigned short *)((int)param_2 + 0xe);
    if ((unsigned __int64)uVar3 < (uVar2 & 0xffffffff)) {
      uVar2 = (unsigned __int64)uVar3;
    }
    iVar4 = 0;
    *(unsigned int *)(param_1 + 0x10) = uVar3 - (int)uVar2;
    uVar2 = (-(*(unsigned short *)((int)param_2 + 0xe) + uVar2) & 3) + uVar2;
    for (uVar3 = param_2[1]; uVar3 != 0; uVar3 = uVar3 - 1 & uVar3) {
      iVar4 = iVar4 + 1;
    }
    if (iVar4 != 0) {
                    /* WARNING: Subroutine does not return */
      XMemSet((unsigned __int64)*(unsigned short *)((int)param_2 + 0xe) * 4 + (unsigned __int64)*param_2,0,
                        (uVar2 & 0x3fffffff) << 2);
    }
    *(short *)((int)param_2 + 0xe) = *(short *)((int)param_2 + 0xe) + (short)uVar2;
    if (*(int *)(param_1 + 0x10) != 0) {
      param_2[2] = 0x2d;
    }
  }
  *(bool *)(param_1 + 0x14) = uVar1 == 0x11;
  (**(int (***)())(**(int **)(param_1 + 8) + 4))(*(int **)(param_1 + 8),param_2);
  return;
}

