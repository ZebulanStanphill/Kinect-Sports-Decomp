extern unsigned int *auStack_30;
extern int fn_82CFC050();


__int64 fn_82CEBA10(int *param_1,unsigned __int64 param_2,__int64 param_3)

{
  char *pcVar1;
  __int64 lVar2;
  unsigned char auStack_30 [48];
  
  pcVar1 = (char *)(**(int (***)())(*param_1 + 0xc))(auStack_30,param_1);
  if (*pcVar1 == '\0') {
    lVar2 = 0;
  }
  else {
    lVar2 = (unsigned __int64)(unsigned int)param_1[4] - (unsigned __int64)(unsigned int)param_1[3];
    if ((int)param_3 < (int)lVar2) {
      lVar2 = param_3;
    }
    fn_82CFC050(param_2,(unsigned __int64)(unsigned int)param_1[2] + (unsigned __int64)(unsigned int)param_1[3],lVar2);
    param_1[3] = param_1[3] + (int)lVar2;
    if (((int)lVar2 == 0) && ((int)param_3 != 0)) {
      param_1[3] = param_1[4] + 1;
    }
  }
  return lVar2;
}

