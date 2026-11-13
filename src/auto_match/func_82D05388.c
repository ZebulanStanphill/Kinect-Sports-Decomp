extern int fn_82CE5410();


unsigned int * fn_82D05388(unsigned int *param_1,int *param_2)

{
  int *piVar1;
  unsigned int uVar2;
  int iVar3;
  unsigned int uVar4;
  unsigned __int64 uVar5;
  unsigned char *puVar6;
  int aiStack_30;
  
  *param_1 = param_1 + 3;
  param_1[1] = 0;
  param_1[2] = 0x80000020;
  iVar3 = fn_82CE5410();
  uVar2 = param_1[2] & 0x3fffffff;
  piVar1 = *(int **)(iVar3 + 0xc);
  if ((int)uVar2 < param_2[1]) {
    if ((param_1[2] & 0x80000000) == 0) {
      (**(int (***)())(*piVar1 + 0x10))(piVar1,*param_1,uVar2,1);
    }
    aiStack_30 = param_2[1];
    uVar4 = (**(int (***)())(*piVar1 + 0xc))(piVar1,&aiStack_30,1);
    *param_1 = uVar4;
    param_1[2] = aiStack_30;
  }
  uVar2 = param_2[1];
  uVar5 = (unsigned __int64)uVar2;
  puVar6 = (unsigned char *)*param_1;
  param_1[1] = uVar2;
  if (0 < (int)uVar2) {
    iVar3 = *param_2 - (int)puVar6;
    do {
      *puVar6 = puVar6[iVar3];
      puVar6 = puVar6 + 1;
      uVar5 = uVar5 - 1;
    } while (uVar5 != 0);
  }
  return param_1;
}

