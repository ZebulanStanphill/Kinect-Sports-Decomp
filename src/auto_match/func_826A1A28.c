extern int fn_82F65B18();


unsigned __int64 fn_826A1A28(unsigned int *param_1)

{
  unsigned __int64 uVar1;
  char *pcVar2;
  char cVar3;
  
  pcVar2 = *(char **)*param_1;
  cVar3 = *pcVar2;
  while (((cVar3 != '\0' && ('/' < cVar3)) && (cVar3 < ':'))) {
    pcVar2 = pcVar2 + 1;
    cVar3 = *pcVar2;
  }
  if (cVar3 != '\0') {
    return 0xffffffffffffffff;
  }
  uVar1 = fn_82F65B18();
  return uVar1;
}

