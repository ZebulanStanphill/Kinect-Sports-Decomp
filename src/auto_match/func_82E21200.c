extern int fn_82A2A288();
extern int fn_82E21160();
extern int fn_82E211B0();
extern int fn_82F66368();


unsigned __int64 fn_82E21200(char *param_1,char *param_2)

{
  char cVar1;
  unsigned __int64 uVar2;
  char *pcVar3;
  
  pcVar3 = param_2;
  do {
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  pcVar3 = pcVar3 + (-1 - (int)param_2);
  if (pcVar3 == (char *)0x0) {
    uVar2 = 0;
  }
  else {
    if (*param_1 == '\0') {
      uVar2 = fn_82E211B0(param_1,pcVar3);
      fn_82F66368(uVar2,(unsigned __int64)*(unsigned int *)(param_1 + 8) - (unsigned __int64)*(unsigned int *)(param_1 + 4),
                        param_2,pcVar3);
    }
    else {
      uVar2 = fn_82E21160();
      fn_82A2A288(0,0,param_2,pcVar3,uVar2,pcVar3);
    }
    uVar2 = 1;
    *(char **)(param_1 + 4) = pcVar3 + *(int *)(param_1 + 4);
  }
  return uVar2;
}

