extern int fn_825E2048();


unsigned __int64
fn_825E2000(unsigned __int64 param_1,unsigned __int64 param_2,unsigned __int64 param_3,unsigned __int64 param_4)

{
  fn_825E2048(*(unsigned int *)((int)param_1 + 0x30),param_1,param_2,param_4,param_1);
  if (*(int *)((int)param_1 + 0x78) == 0) {
    *(unsigned int *)((int)param_1 + 0x78) = 1;
  }
  return 1;
}

