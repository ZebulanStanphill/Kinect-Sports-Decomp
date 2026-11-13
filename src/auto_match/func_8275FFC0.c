void fn_8275FFC0(int param_1,unsigned int *param_2,unsigned int *param_3,unsigned int *param_4)

{
  unsigned char bVar1;
  unsigned char *pbVar2;
  unsigned short *puVar3;
  unsigned int *puVar4;
  unsigned int uVar5;
  
  pbVar2 = *(unsigned char **)(param_1 + 4);
  bVar1 = *pbVar2;
  if (((bVar1 & 1) == 0) && ((bVar1 & 6) != 2)) {
    if ((bVar1 & 7) == 0) {
      return;
    }
    if ((bVar1 & 6) == 4) {
      puVar3 = (unsigned short *)((unsigned int)(pbVar2 + 2) & 0xfffffffe);
      *param_2 = (unsigned int)*puVar3;
      *param_3 = (unsigned int)puVar3[1];
      uVar5 = (unsigned int)puVar3[2];
    }
    else {
      puVar4 = (unsigned int *)((unsigned int)(pbVar2 + 4) & 0xfffffffc);
      *param_2 = *puVar4;
      *param_3 = puVar4[1];
      uVar5 = puVar4[2];
    }
  }
  else {
    *param_2 = (unsigned int)pbVar2[1];
    *param_3 = (unsigned int)pbVar2[2];
    uVar5 = (unsigned int)pbVar2[3];
  }
  *param_4 = uVar5;
  return;
}

