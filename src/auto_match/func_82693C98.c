extern int fn_8267B8F0();


void fn_82693C98(int param_1)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  __int64 lVar4;
  
  piVar2 = (int *)fn_8267B8F0(*(unsigned int *)(param_1 + 4),0x3f0,0x400,0);
  if (piVar2 != (int *)0x0) {
    iVar1 = *(int *)(param_1 + 0xc);
    *piVar2 = param_1;
    piVar3 = piVar2 + 2;
    piVar2[1] = iVar1;
    lVar4 = 0x32;
    *(int **)(param_1 + 0xc) = piVar2;
    do {
      *piVar3 = 0;
      piVar3[1] = *(int *)(param_1 + 8);
      *(int **)(param_1 + 8) = piVar3;
      piVar3 = piVar3 + 5;
      lVar4 = lVar4 + -1;
    } while (lVar4 != 0);
  }
  return;
}

