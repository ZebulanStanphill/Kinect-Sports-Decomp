extern int fn_83055F08();
extern unsigned int lbl_8217DD8C;
extern unsigned int lbl_8217DDF0;
extern unsigned int lbl_8217DE3C;
extern unsigned int lbl_8217DE6C;


unsigned int * fn_83050B90(unsigned int *param_1)

{
  fn_83055F08();
  param_1[4] = 0;
  *param_1 = &lbl_8217DDF0;
  RtlInitializeCriticalSection(param_1 + 0xe);
  param_1[0x19] = 0;
  param_1[0x1d] = param_1[0x1d] & 0xe0ffffff;
  param_1[0x1e] = &lbl_8217DD8C;
  *(unsigned __int64 *)(param_1 + 0x20) = 0;
  *param_1 = &lbl_8217DE6C;
  param_1[0x1e] = &lbl_8217DE3C;
  *(unsigned __int64 *)(param_1 + 0x22) = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  param_1[0x27] = param_1[0x27] & 0xe1ffffff;
  param_1[0x1d] = param_1[0x1d] & 0x1fffffff;
  param_1[0x1a] = 0;
  return param_1;
}

