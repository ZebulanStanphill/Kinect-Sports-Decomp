extern int fn_82F691F0();


unsigned __int64 fn_82A6C808(int param_1,__int64 param_2)

{
  *(unsigned int *)(param_1 + 0x2cc) = 0;
  *(unsigned int *)(param_1 + 0x288) = 1;
  if (0 < *(short *)(param_1 + 0x244)) {
                    /* WARNING: Subroutine does not return */
    fn_82F691F0((__int64)**(short **)(param_1 + 0x248) * 0x6f0 + param_2 + 0x650,0,0xa0);
  }
  return 0;
}

