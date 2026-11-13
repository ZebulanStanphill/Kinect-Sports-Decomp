extern unsigned int uRam832115d0;


void fn_8285FF30(unsigned int *param_1,int *param_2,int *param_3)

{
  __int64 lVar1;
  
  if (param_1 != (unsigned int *)0x0) {
    if ((*param_1 & 0x40000000) == 0) {
      param_1 = param_1 + 7;
      lVar1 = 8;
      *param_3 = *param_3 + 1;
      do {
        if ((unsigned __int64)*(unsigned short *)param_1 != 0) {
          fn_8285FF30((unsigned __int64)*(unsigned short *)param_1 * 0x2c + (unsigned __int64)uRam832115d0,param_2,
                        param_3);
        }
        lVar1 = lVar1 + -1;
        param_1 = (unsigned int *)((int)param_1 + 2);
      } while (lVar1 != 0);
    }
    else if ((*param_1 & 0x40000000) == 0x40000000) {
      *param_2 = *param_2 + 1;
    }
  }
  return;
}

