extern int fn_82D698D0();
extern int fn_82D69910();
extern int fn_82D69958();
extern int fn_82D699A8();
extern int fn_82D69A20();
extern int fn_82D69A68();
extern int fn_82D69B10();
extern int fn_82D69C40();


void fn_82D69FD0(unsigned int *param_1)

{
  *param_1 = fn_82D69A68;
  param_1[0xb] = fn_82D69C40;
  param_1[10] = fn_82D69B10;
  param_1[2] = fn_82D699A8;
  param_1[3] = fn_82D698D0;
  param_1[4] = fn_82D69910;
  param_1[5] = fn_82D69958;
  param_1[1] = fn_82D69A20;
  *(unsigned char *)(param_1 + 0xc) = 1;
  return;
}

