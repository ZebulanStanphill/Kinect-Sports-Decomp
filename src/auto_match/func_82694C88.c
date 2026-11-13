extern int fn_826947E8();


int * fn_82694C88(int *param_1,unsigned int *param_2,char *param_3)

{
  char cVar1;
  unsigned int *puVar2;
  int iVar3;
  char *pcVar4;
  
  pcVar4 = param_3;
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  puVar2 = (unsigned int *)*param_2;
  iVar3 = fn_826947E8(*(unsigned int *)((unsigned int)puVar2 & 0xfffffc00),*puVar2,puVar2[4],param_3,
                        pcVar4 + (-1 - (int)param_3));
  *param_1 = iVar3;
  *(int *)(iVar3 + 8) = *(int *)(iVar3 + 8) + 1;
  return param_1;
}

