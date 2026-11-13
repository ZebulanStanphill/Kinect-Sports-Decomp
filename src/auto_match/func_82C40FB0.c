extern int fn_82C3DB38();
extern int fn_82F691F0();


unsigned __int64 fn_82C40FB0(int param_1,__int64 param_2)

{
  fn_82C3DB38(param_1,param_1 + 0x298);
  if (0 < *(short *)(param_1 + 0x244)) {
                    /* WARNING: Subroutine does not return */
    fn_82F691F0((__int64)**(short **)(param_1 + 0x248) * 0x6f0 + param_2 + 0x650,0,0xa0);
  }
  return 0;
}

