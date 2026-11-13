#define true 1


unsigned __int64 fn_82E04AD8(char *param_1)

{
  char cVar1;
  
  cVar1 = *param_1;
  while( true ) {
    if (cVar1 == '\0') {
      return 0;
    }
    if (((cVar1 <= ' ') || (cVar1 == '=')) || (cVar1 == ';')) break;
    param_1 = param_1 + 1;
    cVar1 = *param_1;
  }
  return 1;
}

