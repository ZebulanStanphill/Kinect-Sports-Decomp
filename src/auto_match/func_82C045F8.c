unsigned __int64 fn_82C045F8(int *param_1,int param_2,int *param_3)

{
  __int64 lVar1;
  
  lVar1 = (**(int (***)())(*param_1 + 0x74))();
  if (*(__int64 *)(param_1 + 0x4a) == 0) {
    *(__int64 *)(param_1 + 0x4a) = lVar1;
  }
  *(__int64 *)(param_1 + 0x48) =
       (__int64)
       ((float)(lVar1 - *(__int64 *)(param_1 + 0x4a)) * (float)param_1[0x55] +
       (float)*(__int64 *)(param_1 + 0x48));
  *(__int64 *)(param_1 + 0x4a) = lVar1;
  param_2 = param_2 - (int)*(unsigned __int64 *)(param_1 + 0x48);
  *param_3 = param_2;
  param_1[0x4e] = param_2;
  return 0;
}

