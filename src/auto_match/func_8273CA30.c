extern int fn_82F68B64();


unsigned __int64 fn_8273CA30(unsigned __int64 param_1,unsigned __int64 param_2,unsigned int *param_3)

{
  char cVar1;
  char cVar2;
  unsigned __int64 uVar3;
  char *pcVar4;
  char *pcVar5;
  
  pcVar4 = "data";
  pcVar5 = *(char **)*param_3;
  do {
    cVar1 = *pcVar5;
    cVar2 = *pcVar4;
    if (cVar1 == '\0') break;
    pcVar5 = pcVar5 + 1;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 == cVar2);
  if (cVar1 == cVar2) {
    return 1;
  }
  uVar3 = fn_82F68B64();
  return uVar3;
}

