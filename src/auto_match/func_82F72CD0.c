unsigned char * fn_82F72CD0(int param_1,unsigned char *param_2,int param_3)

{
  int iVar1;
  unsigned char *puVar2;
  unsigned int iVar3;
  int iVar4;
  
  iVar1 = *(int *)(param_1 + 4);
  iVar3 = *(int *)(param_1 + 8);
  if (*(int *)(param_1 + 8) > param_3 - (int)param_2) {
    iVar3 = param_3 - (int)param_2;
  }
  if (iVar3 != 0) {
    puVar2 = param_2;
    iVar4 = iVar3;
    do {
      *puVar2 = puVar2[iVar1 - (int)param_2];
      puVar2 = puVar2 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  return param_2 + iVar3;
}

