extern unsigned int uStack_2c;
extern unsigned int uStack_30;


void fn_82A371C8(unsigned int *param_1,unsigned int *param_2,int param_3,unsigned __int64 param_4)

{
  __int64 lVar1;
  int iVar2;
  struct { unsigned int first; unsigned int second; } stack_pair_30;

  
  param_1[param_3 * 10 + 1] = *param_2;
  param_1[param_3 * 10 + 2] = param_2[1];
  param_1[param_3 * 10 + 8] = param_2[1] * (int)param_4;
  stack_pair_30.first = param_1[param_3 * 10 + 9];
  param_1[param_3 * 10 + 6] = 0x103;
  stack_pair_30.second = param_1[param_3 * 10 + 8];
  lVar1 = (**(int (***)())(*(int *)*param_1 + 0x10))
                    (param_2[2],param_1[param_3 * 10 + 10],0,
                     -(unsigned int)((param_1[param_3 * 10 + 10] & 1) == 0) &
                     (unsigned int)(param_1 + param_3 * 10 + 6),param_1 + param_3 * 10 + 6,
                     param_1[param_3 * 10 + 3],param_4,&stack_pair_30.first);
  iVar2 = (int)lVar1;
  if (((-1 < lVar1) && (iVar2 != 0x103)) || (iVar2 == -0x3fffffef)) {
    param_1[param_3 * 10 + 4] = param_1[param_3 * 10 + 7];
    NtClearEvent(param_1[param_3 * 10 + 10]);
  }
  param_1[param_3 * 10 + 5] = iVar2;
  return;
}

