extern unsigned int *auStack_30;
extern int fn_82CFED40();


__int64 fn_82CFEE20(int *param_1,unsigned __int64 param_2,__int64 param_3)

{
  int *piVar1;
  char *pcVar2;
  __int64 lVar3;
  unsigned char auStack_30 [48];
  
  pcVar2 = (char *)(**(int (***)())(*param_1 + 0xc))(auStack_30,param_1);
  if (*pcVar2 == '\0') {
    lVar3 = 0;
  }
  else {
    piVar1 = (int *)param_1[2];
    lVar3 = ((__int64)(piVar1[3] + -1) * (__int64)*piVar1 + (unsigned __int64)(unsigned int)piVar1[1]) -
            (unsigned __int64)(unsigned int)param_1[3];
    if ((int)param_3 < (int)lVar3) {
      lVar3 = param_3;
    }
    fn_82CFED40(piVar1,param_2,lVar3);
    param_1[3] = param_1[3] + (int)param_3;
  }
  return lVar3;
}

