extern int fn_82FF84F8();
extern int fn_8300EC58();
extern unsigned int lbl_8217BCF8;
extern unsigned int lbl_832645A0;


unsigned int * fn_82FFA070(unsigned int *param_1)

{
  *param_1 = &lbl_8217BCF8;
  fn_82FF84F8(param_1 + 1);
  *(unsigned char *)(param_1 + 0xc) = 0;
  RtlInitializeCriticalSection(param_1 + 0xd);
  RtlInitializeCriticalSection(param_1 + 0x14);
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  param_1[0x22] = 0xffffffff;
  *(unsigned char *)(param_1 + 0x23) = 0;
  param_1[0x24] = 0xffffffff;
  param_1[0xe6] = 0;
  param_1[0x106] = 0;
  param_1[0x107] = 0xffffffff;
  param_1[0x127] = 0;
  *(unsigned char *)(param_1 + 0x128) = 0;
  fn_8300EC58(param_1 + 0x129);
  param_1[0xb] = 0;
  lbl_832645A0 = 0;
  return param_1;
}

