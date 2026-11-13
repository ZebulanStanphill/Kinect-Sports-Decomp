extern int fn_82D741B8();
extern int fn_82D741C8();
extern int fn_82D74228();
extern int fn_82D74238();
extern int fn_82D74248();
extern int fn_82D742B0();
extern int fn_82D743F0();


void fn_82D74440(unsigned int *param_1)

{
  *param_1 = fn_82D743F0;
  param_1[10] = 0;
  param_1[0xb] = fn_82D742B0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = fn_82D74248;
  param_1[7] = fn_82D741C8;
  param_1[8] = fn_82D74228;
  param_1[9] = fn_82D74238;
  param_1[1] = fn_82D741B8;
  *(unsigned char *)(param_1 + 0xc) = 1;
  return;
}

