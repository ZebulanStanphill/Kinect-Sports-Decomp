extern int fn_826944C8();
extern int fn_826947E8();


void fn_82694BF0(unsigned int *param_1,char *param_2)

{
  char cVar1;
  unsigned int *puVar2;
  unsigned int uVar3;
  char *pcVar5;
  __int64 lVar4;
  
  pcVar5 = param_2;
  do {
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  puVar2 = (unsigned int *)*param_1;
  uVar3 = fn_826947E8(*(unsigned int *)((unsigned int)puVar2 & 0xfffffc00),*puVar2,puVar2[4],param_2,
                        pcVar5 + (-1 - (int)param_2));
  *(int *)(uVar3 + 8) = *(int *)(uVar3 + 8) + 1;
  lVar4 = (unsigned __int64)*(unsigned int *)(*param_1 + 8) - 1;
  *(int *)(*param_1 + 8) = (int)lVar4;
  if (lVar4 == 0) {
    fn_826944C8();
  }
  *param_1 = uVar3;
  return;
}

