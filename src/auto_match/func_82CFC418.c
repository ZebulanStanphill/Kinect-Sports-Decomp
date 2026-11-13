void fn_82CFC418(unsigned char *param_1,int *param_2,char *param_3)

{
  int iVar1;
  
  iVar1 = 0;
  if (*param_3 != '\0') {
    do {
      if ((iVar1 >= param_2[1] - 1) || (*(char *)(*param_2 + iVar1) != param_3[iVar1])) {
        *param_1 = 0;
        return;
      }
      iVar1 = iVar1 + 1;
    } while (param_3[iVar1] != '\0');
  }
  *param_1 = 1;
  return;
}

