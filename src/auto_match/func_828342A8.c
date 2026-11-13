typedef unsigned char bool;


void fn_828342A8(int param_1,int param_2,int param_3,unsigned int *param_4)

{
  int iVar1;
  unsigned int *puVar2;
  unsigned int uVar3;
  int iVar4;
  bool bVar5;
  
  uVar3 = param_2 - 1;
  bVar5 = (int)uVar3 < 0 && (uVar3 & 1) != 0;
  while ((iVar4 = ((int)uVar3 >> 1) + (unsigned int)bVar5, param_3 < param_2 &&
         (puVar2 = (unsigned int *)(iVar4 * 0xc + param_1), (unsigned int)puVar2[1] < (unsigned int)param_4[1]))) {
    *(unsigned int *)(param_2 * 0xc + param_1) = *puVar2;
    iVar1 = param_2 * 0xc + param_1;
    uVar3 = iVar4 - 1;
    bVar5 = (int)uVar3 < 0 && (uVar3 & 1) != 0;
    *(unsigned int *)(iVar1 + 4) = puVar2[1];
    *(unsigned int *)(iVar1 + 8) = puVar2[2];
    param_2 = iVar4;
  }
  *(unsigned int *)(param_2 * 0xc + param_1) = *param_4;
  param_1 = param_2 * 0xc + param_1;
  *(unsigned int *)(param_1 + 4) = param_4[1];
  *(unsigned int *)(param_1 + 8) = param_4[2];
  return;
}

