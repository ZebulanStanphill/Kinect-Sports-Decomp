extern int fn_82D654F8();
extern int fn_82D65F60();
extern int fn_82D662B8();
extern int fn_82D66F00();


void fn_82D65D30(unsigned int *param_1)

{
  *param_1 = fn_82D654F8;
  param_1[1] = fn_82D65F60;
  param_1[2] = fn_82D662B8;
  param_1[3] = fn_82D66F00;
  *(unsigned char *)(param_1 + 4) = 1;
  *(unsigned char *)((int)param_1 + 0x11) = 0;
  return;
}

