extern int fn_828FB358();


char * fn_828FB8D0(int param_1,char *param_2)

{
  int iVar1;
  char *pcVar2;
  
  if ((param_2 < *(char **)(param_1 + 4)) && (*param_2 == '\'')) {
    iVar1 = fn_828FB358(param_1,param_2 + 1);
    if ((iVar1 != 0) &&
       ((pcVar2 = param_2 + 1 + iVar1, pcVar2 < *(char **)(param_1 + 4) && (*pcVar2 == '\'')))) {
      return pcVar2 + (1 - (int)param_2);
    }
  }
  return (char *)0x0;
}

