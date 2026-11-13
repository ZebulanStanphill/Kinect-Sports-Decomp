extern int fn_82F49100();


unsigned __int64
fn_82F40E88(unsigned __int64 param_1,unsigned __int64 param_2,int *param_3,short param_4,int *param_5,
             unsigned int param_6)

{
  unsigned int uVar1;
  unsigned __int64 uVar2;
  int * apiStack_30;
  
  if (param_5 == (int *)0x0) {
    return 0xffffffff8000ffff;
  }
  apiStack_30 = (int *)0x0;
  uVar2 = fn_82F49100(param_2,0,&apiStack_30);
  if ((int)uVar2 < 0) {
    return uVar2;
  }
  if ((int)uVar2 != 0) {
    return uVar2;
  }
  uVar1 = apiStack_30[5];
  if ((uVar1 & param_6) == 0) {
    if ((param_4 == 0) || ((uVar1 & 0x2000) == 0)) {
      *param_5 = apiStack_30[1];
      if (param_3 == (int *)0x0) {
        return uVar2;
      }
      if (*apiStack_30 != 0) {
        *param_3 = *apiStack_30;
        return uVar2;
      }
      return uVar2;
    }
  }
  else if ((((uVar1 & 0x80) != 0) && ((param_6 & 0x80) != 0)) ||
          (((uVar1 & 0x100) != 0 && ((param_6 & 0x100) != 0)))) {
    return 0xffffffffc00d3e8f;
  }
  return 1;
}

