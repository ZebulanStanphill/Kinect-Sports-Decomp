void fn_82CFBE10(int param_1,char *param_2)

{
  char cVar1;
  
  param_1 = param_1 - (int)param_2;
  do {
    cVar1 = *param_2;
    param_2[param_1] = cVar1;
    param_2 = param_2 + 1;
  } while (cVar1 != '\0');
  return;
}

