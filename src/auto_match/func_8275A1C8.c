extern int fn_8268CC00();
extern int fn_82759838();


unsigned char * fn_8275A1C8(unsigned char *param_1,unsigned __int64 param_2)

{
  *(unsigned int *)(param_1 + 8) = 0;
  *(unsigned int *)(param_1 + 0xc) = 0;
  fn_8268CC00(param_1 + 0x10);
  *param_1 = 0;
  fn_82759838(param_1,param_2);
  return param_1;
}

