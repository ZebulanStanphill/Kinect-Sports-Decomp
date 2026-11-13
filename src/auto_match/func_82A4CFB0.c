void fn_82A4CFB0(int param_1,unsigned __int64 param_2,unsigned int *param_3,unsigned __int64 param_4,
                  unsigned int *param_5)

{
  unsigned int uVar1;
  unsigned int uVar2;
  unsigned __int64 uVar3;
  
  if (param_3[1] == 1) {
    uVar1 = *param_3;
    uVar2 = *param_5;
    uVar3 = (**(int (***)())(param_1 + 0x24))(0xffffffffffffffff,1);
    (**(int (***)())(param_1 + 0x20))
              (uVar2,uVar1,(__int64)(int)param_3[2] * (__int64)*(int *)(param_1 + 0x28));
    (**(int (***)())(param_1 + 0x24))(uVar3,1);
  }
  param_5[2] = param_3[2];
  param_5[1] = param_3[1];
  return;
}

