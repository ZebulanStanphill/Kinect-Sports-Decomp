extern int fn_82CE5410();


int * fn_82D2E8C0(int *param_1,unsigned __int64 param_2)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  unsigned __int64 uVar4;
  unsigned int *puVar5;
  
  iVar3 = fn_82CE5410();
  uVar4 = (unsigned __int64)(unsigned int)param_1[1];
  piVar1 = *(int **)(iVar3 + 0x10);
  if (0 < param_1[1]) {
    puVar5 = (unsigned int *)(*param_1 + -4);
    do {
      iVar3 = fn_82CE5410();
      piVar2 = *(int **)(iVar3 + 0x10);
      puVar5[2] = 0;
      if ((puVar5[3] & 0x80000000) == 0) {
        (**(int (***)())(*piVar2 + 0x10))(piVar2,puVar5[1],puVar5[3] & 0x3fffffff,0xc);
      }
      puVar5[1] = 0;
      uVar4 = uVar4 - 1;
      puVar5 = puVar5 + 3;
      *puVar5 = 0x80000000;
    } while (uVar4 != 0);
  }
  param_1[1] = 0;
  if ((param_1[2] & 0x80000000U) == 0) {
    (**(int (***)())(*piVar1 + 0x10))(piVar1,*param_1,param_1[2] & 0x3fffffff,0xc);
  }
  *param_1 = 0;
  param_1[2] = -0x80000000;
  if ((param_2 & 1) != 0) {
    iVar3 = fn_82CE5410();
    (**(int (***)())(**(int **)(iVar3 + 0x10) + 8))(*(int **)(iVar3 + 0x10),param_1,0x10);
  }
  return param_1;
}

