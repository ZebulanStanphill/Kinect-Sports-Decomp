void fn_82ADD5B8(int param_1,unsigned int param_2,unsigned int param_3,unsigned __int64 param_4)

{
  unsigned int uVar1;
  unsigned __int64 uVar2;
  
  uVar1 = param_2 >> 2 & 0x1ffffff8;
  uVar2 = ((unsigned __int64)param_2 & 0x7fffffff) * 2 + ((unsigned __int64)param_2 & 0x7fffffe0) * -2;
  *(unsigned __int64 *)(uVar1 + *(int *)(param_1 + 0x2b4)) =
       (param_4 & 3) << (uVar2 & 0x7f) |
       *(unsigned __int64 *)(uVar1 + *(int *)(param_1 + 0x2b4)) & ~(3L << (uVar2 & 0x7f));
  *(unsigned int *)(*(int *)(param_1 + 0x2b0) + param_2 * 4) = param_3;
  return;
}

