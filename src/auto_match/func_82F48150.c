extern unsigned int *auStack_30;


__int64 fn_82F48150(int *param_1,unsigned int param_2,unsigned __int64 param_3,unsigned __int64 param_4,
                      unsigned __int64 *param_5)

{
  __int64 lVar1;
  int iVar2;
  unsigned short auStack_30;
  
  if (param_5 == (unsigned __int64 *)0x0) {
    lVar1 = -0x7ff8ffa9;
  }
  else {
    *param_5 = 0;
    if (param_2 < (unsigned int)param_1[9]) {
      auStack_30 = 0;
      lVar1 = (**(int (***)())(*(int *)param_1[5] + 0x38))((int *)param_1[5],param_3,param_4,&auStack_30)
      ;
      if (-1 < lVar1) {
        if ((unsigned __int64)auStack_30 < (unsigned __int64)*(unsigned short *)(param_1 + 6)) {
          *param_5 = (__int64)param_1[7] * (__int64)(int)param_2 + (unsigned __int64)auStack_30 * 4 &
                     0xffffffff;
          iVar2 = (**(int (***)())(*param_1 + 0x50))(param_1);
          if (iVar2 != 0) {
            *param_5 = *param_5 + 4;
          }
        }
        else {
          lVar1 = -0x7fff0001;
        }
      }
    }
    else {
      lVar1 = -0x3ff2c563;
    }
  }
  return lVar1;
}

