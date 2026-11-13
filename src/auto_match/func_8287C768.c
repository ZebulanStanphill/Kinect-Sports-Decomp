extern int fn_82A1E968();
extern float __u64tod();


double fn_8287C768(void)

{
  float dVar1;
  __int64 alStack_10;
  
  fn_82A1E968(&alStack_10);
  dVar1 = (double)__u64tod((unsigned __int64)(alStack_10 * 0x4e2) / 0xf38b);
  return (double)(float)(dVar1 * 1e-06);
}

