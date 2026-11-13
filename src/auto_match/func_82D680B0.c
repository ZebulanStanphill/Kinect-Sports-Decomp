extern int fn_82D67D58();
extern int fn_82D67DE0();
extern int fn_82D67E28();
extern int fn_82D67E30();
extern int fn_82D67E70();
extern int fn_82D67EF0();
extern int fn_82D67EF8();


void fn_82D680B0(unsigned int *param_1)

{
  param_1[10] = 0;
  *param_1 = fn_82D67E30;
  param_1[0xb] = fn_82D67EF8;
  param_1[2] = fn_82D67E70;
  param_1[3] = fn_82D67D58;
  param_1[4] = fn_82D67DE0;
  param_1[5] = fn_82D67E28;
  param_1[6] = 0;
  param_1[1] = fn_82D67EF0;
  *(unsigned char *)(param_1 + 0xc) = 0;
  return;
}

