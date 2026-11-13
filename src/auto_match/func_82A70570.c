extern int fn_82A81528();
extern int fn_82A81780();


unsigned __int64
fn_82A70570(int param_1,__int64 param_2,unsigned __int64 param_3,unsigned __int64 param_4,unsigned __int64 param_5)

{
  fn_82A81780(param_3,param_5,*(unsigned short *)(param_1 + 0xae));
  if (*(int *)(param_1 + 0xa4) == 1) {
    fn_82A81528(param_1,param_3,param_2 + 0x650,param_4,param_2 + 0x5b0,param_5,
                      *(unsigned short *)(param_1 + 0xa8));
  }
  return 1;
}

