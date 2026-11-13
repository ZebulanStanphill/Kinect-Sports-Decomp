extern int fn_82526AF8();


__int64 fn_82593540(char *param_1)

{
  char cVar1;
  __int64 lVar2;
  char *pcVar3;
  
  pcVar3 = param_1;
  do {
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  if (((int)pcVar3 - (int)param_1 == 1) ||
     (lVar2 = fn_82526AF8(0x9d,0xffffffff831c08ec), (int)lVar2 == -1)) {
    lVar2 = 0;
  }
  else {
    lVar2 = lVar2 + 1;
  }
  return lVar2;
}

