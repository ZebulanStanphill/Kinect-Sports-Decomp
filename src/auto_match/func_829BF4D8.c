extern int d3dx_jcopy_sample_rows();


void fn_829BF4D8(int param_1,unsigned int *param_2,unsigned __int64 param_3,unsigned __int64 param_4,
                  unsigned __int64 param_5)

{
  d3dx_jcopy_sample_rows(*param_2,param_3,param_4,0,param_5,*(unsigned int *)(param_1 + 0x70));
  return;
}
