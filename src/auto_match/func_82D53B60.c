extern int fn_82D741B8();
extern int fn_82D53540();
extern int fn_82D535A0();
extern int fn_82D535B0();
extern int fn_82D534D8();
extern int fn_82D539F8();
extern int fn_82D743F0();


void fn_82D53B60(unsigned int *param_1)

{
  *param_1 = fn_82D743F0;
  param_1[10] = 0;
  param_1[0xb] = fn_82D539F8;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = fn_82D534D8;
  param_1[7] = fn_82D53540;
  param_1[8] = fn_82D535A0;
  param_1[9] = fn_82D535B0;
  param_1[1] = fn_82D741B8;
  *(unsigned char *)(param_1 + 0xc) = 1;
  return;
}

