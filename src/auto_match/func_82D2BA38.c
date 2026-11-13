extern int fn_82CE5410();


void fn_82D2BA38(int *param_1)

{
  unsigned int uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = 0;
  if (0 < param_1[1]) {
    iVar4 = 0;
    do {
      uVar1 = ((unsigned int *)*param_1)[iVar3];
      iVar2 = fn_82CE5410();
      (*(int (**)())(**(int **)(iVar2 + 0x10) + 8))(*(int **)(iVar2 + 0x10),uVar1,0x288);
      iVar3 = iVar3 + 1;
      iVar4 = iVar4 + 4;
    } while (iVar3 < param_1[1]);
  }
  param_1[1] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  return;
}

