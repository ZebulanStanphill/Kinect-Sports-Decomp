extern int fn_82A2A518();
extern int fn_82E4FE40();


void fn_82E4A008(unsigned int *param_1)

{
  unsigned int *piVar1;
  int iVar2;
  int *piVar3;
  
  while (*param_1 != 0) {
    piVar1 = (int *)param_1[1];
    *param_1 = *param_1 + -1;
    iVar2 = *piVar1;
    piVar3 = (int *)piVar1[1];
    *piVar3 = iVar2;
    *(int **)(iVar2 + 4) = piVar3;
    if (piVar1[3] != 0) {
      fn_82A2A518(piVar1[3],0,0x8000);
    }
    fn_82E4FE40(piVar1);
  }
  return;
}

