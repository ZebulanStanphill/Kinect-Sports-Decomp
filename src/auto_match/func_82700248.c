extern int fn_8267B890();
extern int fn_8267C498();


void fn_82700248(int param_1,int param_2)

{
  int *piVar1;
  int *piVar2;
  
  piVar1 = *(int **)(param_1 + 0x4c);
  if (piVar1 == (int *)0x0) {
    piVar1 = (int *)fn_8267B890(*(unsigned int *)(param_1 + 0x5c),0x40,0);
    if (piVar1 == (int *)0x0) {
      piVar1 = (int *)0x0;
    }
    else {
      piVar1[2] = 0;
      piVar1[3] = 0;
      piVar1[4] = 0;
      piVar1[5] = 0;
      *(unsigned short *)(piVar1 + 6) = 0;
      *(unsigned char *)((int)piVar1 + 0x1a) = 0;
      *(unsigned char *)((int)piVar1 + 0x1b) = 0xff;
      *(unsigned char *)(piVar1 + 7) = 0;
      *(unsigned char *)((int)piVar1 + 0x1d) = 0;
      *(unsigned char *)(piVar1 + 10) = 0;
      piVar1[8] = 0;
      piVar1[9] = 0;
      piVar1[0xc] = 0;
      piVar1[0xd] = 0;
      piVar1[0xe] = 0;
      *piVar1 = 0;
      piVar1[1] = 0;
      if (piVar1[3] != 0) {
        fn_8267C498();
      }
      piVar1[3] = 0;
      piVar1[0xf] = 0;
    }
    if (piVar1 == (int *)0x0) {
      return;
    }
  }
  else {
    *(int *)(param_1 + 0x4c) = *piVar1;
    *piVar1 = 0;
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + -1;
  }
  piVar2 = (int *)(param_2 * 0xc + param_1);
  if ((int *)piVar2[1] == (int *)0x0) {
    *piVar1 = *piVar2;
    *piVar2 = (int)piVar1;
  }
  else {
    *piVar1 = *(int *)piVar2[1];
    *(int **)piVar2[1] = piVar1;
  }
  piVar2[1] = (int)piVar1;
  if (*piVar1 == 0) {
    piVar2[2] = (int)piVar1;
  }
  piVar1[0xf] = *(int *)(param_1 + 0x50);
  *(int *)(param_1 + 0x48) = *(int *)(param_1 + 0x48) + 1;
  return;
}

