void fn_82A99E80(int param_1,char *param_2)

{
  char cVar1;
  char *pcVar2;
  
  pcVar2 = param_2;
  do {
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  *(char **)(param_1 + 0x10) = pcVar2 + *(int *)(param_1 + 0x10) + (-1 - (int)param_2);
  return;
}

