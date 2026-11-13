extern int fn_82E627B8();


__int64 fn_82E3B888(int *param_1,unsigned __int64 param_2,int *param_3)

{
  __int64 lVar1;
  int * apiStack_40;
  __int64 lStack_38;
  __int64 alStack_30 [1];
  
  if (((param_2 & 0xffffffff) == 0) || (param_3 == (int *)0x0)) {
    lVar1 = -0x7fffbffd;
  }
  else {
    apiStack_40 = (int *)0x0;
    lStack_38 = 0;
    lVar1 = (**(int (***)())(*param_1 + 0x18))(param_1,param_2,&lStack_38);
    if (-1 < lVar1) {
      alStack_30[0] = 0;
      lVar1 = (**(int (***)())(*param_1 + 0x38))(param_1,alStack_30);
      if (-1 < lVar1) {
        lStack_38 = alStack_30[0] + lStack_38;
        lVar1 = (**(int (***)())(*param_3 + 0x10))(param_3,0xffffffff82154aa8,0,&apiStack_40);
        if (-1 < lVar1) {
          lVar1 = fn_82E627B8(apiStack_40,lStack_38);
        }
      }
    }
    if (apiStack_40 != (int *)0x0) {
      (**(int (***)())(*apiStack_40 + 8))();
    }
  }
  return lVar1;
}

