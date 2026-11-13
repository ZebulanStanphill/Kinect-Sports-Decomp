extern int fn_83084210();


char * fn_83085130(char *param_1,__int64 param_2,int *param_3,unsigned __int64 param_4,
                    unsigned __int64 param_5,unsigned __int64 param_6)

{
  int iVar1;
  char cVar2;
  char acStack_40;
  
  *param_1 = '\0';
  if (0 < (int)param_2) {
    do {
      iVar1 = *param_3;
      if ((iVar1 != 0) && (*(int *)(iVar1 + 4) != 0)) {
        fn_83084210(&acStack_40,iVar1,param_4,param_5,param_6);
        if ((*param_1 != '\0') || (cVar2 = '\0', acStack_40 != '\0')) {
          cVar2 = '\x01';
        }
        *param_1 = cVar2;
      }
      param_2 = param_2 + -1;
      param_3 = param_3 + 1;
    } while (param_2 != 0);
  }
  return param_1;
}

