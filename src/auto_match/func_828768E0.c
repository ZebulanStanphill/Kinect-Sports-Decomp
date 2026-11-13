#define true 1


void fn_828768E0(char *param_1)

{
  char cVar1;
  
  cVar1 = *param_1;
  while( true ) {
    if (cVar1 == '\0') {
      return;
    }
    if (*param_1 == '.') break;
    param_1 = param_1 + 1;
    cVar1 = *param_1;
  }
  *param_1 = '\0';
  return;
}

