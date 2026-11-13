extern int fn_82D5D288();
extern int fn_82D5D2D0();
extern int fn_82D5D320();
extern int fn_82D5FB30();


void fn_82D5FBB8(unsigned int *param_1)

{
  *param_1 = fn_82D5FB30;
  param_1[1] = fn_82D5D288;
  param_1[2] = fn_82D5D2D0;
  param_1[3] = &fn_82D5D320;
  *(unsigned char *)(param_1 + 4) = 0;
  *(unsigned char *)((int)param_1 + 0x11) = 1;
  return;
}

