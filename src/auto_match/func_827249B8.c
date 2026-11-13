extern int fn_8267C4C8();
extern int fn_82687270();
extern int fn_82687F98();
extern int fn_826F30F0();


int * fn_827249B8(int *param_1,int param_2,int *param_3)

{
  int iVar1;
  
  iVar1 = 0;
  *param_1 = 0;
  param_1[1] = 0;
  if (*param_3 == 1) {
    if ((*(char *)(param_2 + 0x28) == '\0') || (*(unsigned int *)(param_2 + 4) <= (unsigned int)param_3[1])) {
      fn_826F30F0(param_2,param_1);
    }
    else {
      fn_82687F98(param_1,(unsigned __int64)*(unsigned int *)(param_2 + 8) +
                                ((unsigned __int64)(unsigned int)param_3[1] & 0x1fffffff) * 8);
    }
  }
  else {
    param_1[1] = param_2;
    if (*param_3 == 0) {
      iVar1 = param_3[1];
    }
    if (iVar1 != 0) {
      fn_8267C4C8(iVar1);
      if (*param_1 != 0) {
        fn_82687270();
      }
    }
    *param_1 = iVar1;
  }
  return param_1;
}

