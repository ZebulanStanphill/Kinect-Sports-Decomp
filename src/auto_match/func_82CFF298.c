extern int fn_82CE5410();


void fn_82CFF298(unsigned int *param_1)

{
  unsigned int uVar1;
  int *piVar2;
  unsigned int uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  iVar5 = 0;
  if (0 < (int)param_1[3]) {
    iVar6 = 0;
    do {
      uVar1 = *param_1;
      uVar3 = *(unsigned int *)(param_1[2] + iVar6);
      iVar4 = fn_82CE5410();
      (**(int (***)())(**(int **)(iVar4 + 0x10) + 8))(*(int **)(iVar4 + 0x10),uVar3,uVar1);
      iVar5 = iVar5 + 1;
      iVar6 = iVar6 + 4;
    } while (iVar5 < (int)param_1[3]);
  }
  iVar5 = fn_82CE5410();
  piVar2 = *(int **)(iVar5 + 0x10);
  param_1[3] = 0;
  if ((param_1[4] & 0x80000000) == 0) {
    (**(int (***)())(*piVar2 + 0x10))(piVar2,param_1[2],param_1[4] & 0x3fffffff,4);
  }
  param_1[2] = 0;
  param_1[4] = 0x80000000;
  param_1[1] = *param_1;
  return;
}

