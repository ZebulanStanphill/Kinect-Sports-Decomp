extern int fn_82F68CC0();


void fn_82C939D8(int param_1,__int64 param_2,unsigned __int64 param_3,__int64 param_4,unsigned __int64 param_5
                  ,unsigned int param_6,unsigned int param_7,int param_8)

{
  unsigned int uVar1;
  __int64 lVar2;
  
  uVar1 = param_6 & 3;
  param_2 = (__int64)((int)param_7 >> 2) * (__int64)(int)param_3 + (__int64)((int)param_6 >> 2) +
            param_2;
  param_7 = param_7 & 3;
  if ((uVar1 == 0) && (param_7 == 0)) {
    lVar2 = 0x10;
    do {
      fn_82F68CC0(param_4,param_2,0x10);
      lVar2 = lVar2 + -1;
      param_4 = param_4 + param_5;
      param_2 = param_2 + param_3;
    } while (lVar2 != 0);
  }
  else if (param_8 == 1) {
    (**(int (***)())(param_1 + 0xc60))
              (param_1,param_2,param_3,param_4,param_5,uVar1,param_7,
               *(unsigned int *)(param_1 + 0x1cc));
  }
  else {
    (**(int (***)())(param_1 + 0xc6c))
              (param_2,param_3,param_4,param_5,uVar1,param_7,*(unsigned int *)(param_1 + 0xf78));
    (**(int (***)())(param_1 + 0xc6c))
              (param_2 + 8,param_3,param_4 + 8,param_5,uVar1,param_7,
               *(unsigned int *)(param_1 + 0xf78));
    param_2 = (param_3 & 0x1fffffff) * 8 + param_2;
    param_4 = (param_5 & 0x1fffffff) * 8 + param_4;
    (**(int (***)())(param_1 + 0xc6c))
              (param_2,param_3,param_4,param_5,uVar1,param_7,*(unsigned int *)(param_1 + 0xf78));
    (**(int (***)())(param_1 + 0xc6c))
              (param_2 + 8,param_3,param_4 + 8,param_5,uVar1,param_7,
               *(unsigned int *)(param_1 + 0xf78));
  }
  return;
}

