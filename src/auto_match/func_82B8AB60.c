extern int fn_82AA66A8();
extern int fn_82B85298();
extern int fn_82B89CA0();
extern int fn_82B8A7A0();


unsigned __int64 fn_82B8AB60(unsigned __int64 param_1,int param_2,unsigned __int64 param_3,unsigned __int64 param_4)

{
  unsigned int uVar1;
  
  uVar1 = *(unsigned int *)((int)param_3 * 0x28 + *(int *)(param_2 + 0xc)) & 7;
  if (uVar1 == 1) {
    fn_82B8A7A0(param_1,param_2,param_3);
  }
  else {
    if (uVar1 != 2) {
      if (uVar1 == 3) {
        fn_82B89CA0(param_1,param_2,param_3);
        return param_1;
      }
      if (uVar1 != 4) {
                    /* WARNING: Subroutine does not return */
        fn_82AA66A8(param_2,0x12c0);
      }
    }
    fn_82B85298(param_1,param_2,*(unsigned int *)(param_2 + 0x234),param_3,param_4);
  }
  return param_1;
}

