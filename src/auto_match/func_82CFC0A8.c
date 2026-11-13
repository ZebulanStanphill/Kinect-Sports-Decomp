void fn_82CFC0A8(unsigned char *param_1,int param_2,char *param_3)

{
  char cVar1;
  
  cVar1 = *param_3;
  if (cVar1 != '\0') {
    param_2 = param_2 - (int)param_3;
    do {
      if (param_3[param_2] != cVar1) {
        *param_1 = 0;
        return;
      }
      param_3 = param_3 + 1;
      cVar1 = *param_3;
    } while (cVar1 != '\0');
  }
  *param_1 = 1;
  return;
}

