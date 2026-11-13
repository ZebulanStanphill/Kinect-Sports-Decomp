typedef unsigned char bool;
extern int fn_82A3BAA8();
extern int fn_82A3BD78();


bool fn_82A396F0(int param_1,unsigned __int64 param_2,int param_3,int param_4,unsigned __int64 param_5,
                  unsigned __int64 param_6,int *param_7)

{
  unsigned __int64 uVar1;
  __int64 lVar2;
  
  *(int *)(param_1 + 0x2b0c) = (int)param_5;
  *(int *)(param_1 + 0x2b04) = param_3;
  *(int *)(param_1 + 0x2b08) = param_3 + param_4 + 4;
  uVar1 = MmQueryAddressProtect(param_5);
  *(char *)(param_1 + 0x2fe4) = -(((uVar1 & 0x600) == 0) + -1);
  fn_82A3BD78(param_1);
  lVar2 = fn_82A3BAA8(param_1,param_2);
  *(int *)(param_1 + 0x2ec4) = *(int *)(param_1 + 0x2ec4) + 1;
  if (-1 < lVar2) {
    *param_7 = (int)lVar2;
    *(int *)(param_1 + 0x2b10) = *(int *)(param_1 + 0x2b10) + (int)lVar2;
  }
  else {
    *param_7 = 0;
  }
  return -1 >= lVar2;
}

