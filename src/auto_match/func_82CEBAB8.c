extern unsigned int *auStack_20;


__int64 fn_82CEBAB8(int *param_1,__int64 param_2)

{
  char *pcVar1;
  __int64 lVar2;
  unsigned char auStack_20 [8];
  
  pcVar1 = (char *)(**(int (***)())(*param_1 + 0xc))(auStack_20,param_1);
  if (*pcVar1 == '\0') {
    lVar2 = 0;
  }
  else {
    lVar2 = (unsigned __int64)(unsigned int)param_1[4] - (unsigned __int64)(unsigned int)param_1[3];
    if ((int)param_2 < (int)lVar2) {
      lVar2 = param_2;
    }
    param_1[3] = param_1[3] + (int)lVar2;
    if (((int)lVar2 == 0) && ((int)param_2 != 0)) {
      param_1[3] = param_1[4] + 1;
    }
  }
  return lVar2;
}

