#define true 1


char * fn_8270C6B0(char *param_1)

{
  char cVar1;
  char *pcVar2;
  
  pcVar2 = param_1;
  do {
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  pcVar2 = pcVar2 + (-1 - (int)param_1);
  if (pcVar2 == (char *)0x0) {
    return param_1;
  }
  while( true ) {
    if ((param_1[(int)pcVar2] == '\\') || (param_1[(int)pcVar2] == '/')) break;
    pcVar2 = pcVar2 + -1;
    if (pcVar2 == (char *)0x0) {
      return param_1;
    }
  }
  return param_1 + (int)(pcVar2 + 1);
}

