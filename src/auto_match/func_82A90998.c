extern int fn_82A8FDF8();


void fn_82A90998(int param_1,unsigned int *param_2,unsigned __int64 param_3,__int64 param_4,__int64 param_5)

{
  unsigned __int64 uVar1;
  
  uVar1 = (unsigned __int64)*(unsigned int *)(param_1 + 8);
  if ((unsigned __int64)*param_2 <= (unsigned __int64)*(unsigned int *)(param_1 + 8)) {
    uVar1 = (unsigned __int64)*param_2;
  }
  for (; uVar1 != 0; uVar1 = uVar1 - 1) {
    fn_82A8FDF8(param_1,param_2 + 2,param_3,param_4,param_5);
    param_5 = param_5 + 0x20;
    param_4 = (unsigned __int64)param_2[0xc] + (unsigned __int64)param_2[0xd] + (unsigned __int64)param_2[0xe] +
              (unsigned __int64)param_2[0x19] + (unsigned __int64)param_2[0x1b] + param_4 +
              (unsigned __int64)param_2[0x1a];
    param_2 = param_2 + 0x1a;
  }
  return;
}

