extern int fn_82F691F0();


void fn_82EE9D60(int param_1,unsigned int param_2)

{
  *(unsigned int *)(param_1 + 0x81c) = 0;
  *(unsigned __int64 *)(param_1 + 0x820) = 0;
  *(unsigned int *)(param_1 + 0x828) = 0;
  *(unsigned int *)(param_1 + 0x82c) = 0;
  *(unsigned int *)(param_1 + 0x830) = 0;
  *(unsigned __int64 *)(param_1 + 0x1008) = 1;
  *(unsigned int *)(param_1 + 0x1010) = param_2;
  RtlInitializeCriticalSection();
                    /* WARNING: Subroutine does not return */
  fn_82F691F0(param_1 + 0x1c,0,0x800);
}

