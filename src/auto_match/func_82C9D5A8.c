void fn_82C9D5A8(int param_1,__int64 param_2,unsigned __int64 param_3,unsigned __int64 param_4,
                  __int64 param_5,int param_6,int param_7)

{
  __int64 lVar1;
  int iVar3;
  __int64 lVar2;
  __int64 lVar4;
  
  lVar1 = 8;
  lVar4 = (param_3 & 0x1fffffff) * 8 + param_2;
  iVar3 = 4;
  if (param_6 != 0) {
    lVar1 = 0xc;
    iVar3 = 0;
  }
  if (param_7 == 0) {
    (**(int (***)())(param_1 + 0x3e38))(lVar4,param_3,param_4,4);
    lVar4 = lVar4 + 4;
  }
  else {
    lVar1 = lVar1 + -4;
  }
  lVar2 = (__int64)iVar3 * (__int64)(int)param_3 + param_2 + 3;
  if (param_7 == 0) {
    param_5 = param_5 + -1;
    if (0 < param_5) {
      lVar2 = lVar2 - lVar4;
      do {
        (**(int (***)())(param_1 + 0x3e38))(lVar4,param_3,param_4,8);
        (**(int (***)())(param_1 + 0x3e3c))(lVar2 + lVar4,param_3,param_4,lVar1);
        param_5 = param_5 + -1;
        lVar4 = lVar4 + 8;
      } while (param_5 != 0);
    }
    (**(int (***)())(param_1 + 0x3e38))(lVar4,param_3,param_4,4);
  }
  else {
    param_5 = param_5 + -1;
    if (0 < param_5) {
      do {
        (**(int (***)())(param_1 + 0x3e3c))(lVar2,param_3,param_4,lVar1);
        param_5 = param_5 + -1;
        lVar2 = lVar2 + 8;
      } while (param_5 != 0);
    }
  }
  return;
}

