extern int fn_82A49B60();


unsigned __int64 fn_82A5D348(int param_1,unsigned __int64 param_2,int param_3)

{
  if (param_3 == 1) {
    fn_82A49B60(*(unsigned int *)(param_1 + 0x14),*(unsigned int *)(param_1 + 0x18),
                      *(unsigned int *)(param_1 + 0x10));
  }
  *(unsigned int *)(param_1 + 0x3c) = 0;
  KeSetEvent(*(unsigned int *)(param_1 + 0x28),1,0);
  return 0;
}

