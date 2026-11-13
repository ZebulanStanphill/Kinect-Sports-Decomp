extern int fn_82D741B8();
extern int fn_82D5D920();
extern int fn_82D5D980();
extern int fn_82D5D990();
extern int fn_82D5D898();
extern int fn_82D5E360();
extern int fn_82D743F0();


void fn_82D5EFB8(unsigned int *param_1)

{
  *param_1 = fn_82D743F0;
  param_1[10] = 0;
  param_1[0xb] = fn_82D5E360;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = fn_82D5D898;
  param_1[7] = fn_82D5D920;
  param_1[8] = fn_82D5D980;
  param_1[9] = fn_82D5D990;
  param_1[1] = fn_82D741B8;
  *(unsigned char *)(param_1 + 0xc) = 1;
  return;
}

