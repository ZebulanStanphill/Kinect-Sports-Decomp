extern int fn_82FACC70();


void fn_82FA96C8(int *param_1,__int64 param_2,int *param_3,char param_4)

{
  int iVar1;
  
  if (*(char *)(param_1 + 4) == '\0') {
    if (param_4 != '\0') {
      param_1[3] = param_1[3] - *param_3;
    }
  }
  else {
    iVar1 = param_1[0x10];
    if ((iVar1 != 0) && ((*(unsigned char *)(iVar1 + 0x34) & 0x80) != 0)) {
      fn_82FACC70(iVar1,0,*param_3);
    }
    if (-1 < (__int64)((unsigned __int64)(unsigned int)param_1[2] + param_2)) {
      if ((int)((unsigned __int64)(unsigned int)param_1[2] + param_2) < *param_3) {
        (**(int (***)())(*param_1 + 0x10))(param_1,param_2);
      }
      if (param_4 != '\0') {
        param_1[3] = param_1[3] - *param_3;
      }
      iVar1 = (int)param_2;
      if ((-1 < iVar1) && (iVar1 < *param_3)) {
        *param_3 = *param_3 - iVar1;
      }
    }
  }
  return;
}

