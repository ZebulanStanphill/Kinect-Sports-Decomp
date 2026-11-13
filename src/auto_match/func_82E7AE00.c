extern int fn_82EEB658();
extern int fn_82E798F8();


unsigned __int64 fn_82E7AE00(__int64 param_1,int param_2)

{
  unsigned __int64 uVar1;
  int aiStack_50 [16];

  if (param_2 == 0) {
    uVar1 = 0xffffffff80070057;
  }
  else {
    aiStack_50[0] = 0;
    fn_82EEB658(param_1 + 0x1e4,aiStack_50);
    if (aiStack_50[0] != 0) {
                    /* WARNING: Subroutine does not return */
      fn_82E798F8(aiStack_50[0],0,0x148);
    }
    uVar1 = 0xffffffff8007000e;
  }
  return uVar1;
}
