extern int fn_82CE5410();


void fn_825FF908(int param_1,unsigned int *param_2,int *param_3)

{
  int iVar1;
  int *piVar2;
  unsigned int uVar3;
  int iVar4;
  unsigned int *puVar5;
  unsigned __int64 uVar6;
  int aiStack_30;
  
  *param_2 = *(unsigned int *)(param_1 + 0x364);
  iVar1 = *(int *)(param_1 + 0x364);
  iVar4 = fn_82CE5410();
  uVar3 = param_3[2] & 0x3fffffff;
  piVar2 = *(int **)(iVar4 + 0x10);
  if ((int)uVar3 < *(int *)(iVar1 + 0x24)) {
    if ((param_3[2] & 0x80000000U) == 0) {
      (**(int (***)())(*piVar2 + 0x10))(piVar2,*param_3,uVar3,4);
    }
    aiStack_30 = *(int *)(iVar1 + 0x24);
    iVar4 = (**(int (***)())(*piVar2 + 0xc))(piVar2,&aiStack_30,4);
    *param_3 = iVar4;
    param_3[2] = aiStack_30;
  }
  uVar3 = *(unsigned int *)(iVar1 + 0x24);
  uVar6 = (unsigned __int64)uVar3;
  puVar5 = (unsigned int *)*param_3;
  param_3[1] = uVar3;
  if (0 < (int)uVar3) {
    iVar1 = *(int *)(iVar1 + 0x20) - (int)puVar5;
    do {
      *puVar5 = *(unsigned int *)(iVar1 + (int)puVar5);
      puVar5 = puVar5 + 1;
      uVar6 = uVar6 - 1;
    } while (uVar6 != 0);
  }
  return;
}

