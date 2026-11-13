extern int fn_82D626B0();
extern int fn_82D63830();
extern int fn_82D638C8();
extern int fn_82D66F00();


void fn_82D63338(unsigned int *param_1)

{
  *param_1 = fn_82D626B0;
  param_1[1] = fn_82D63830;
  param_1[2] = fn_82D638C8;
  param_1[3] = fn_82D66F00;
  *(unsigned char *)(param_1 + 4) = 1;
  *(unsigned char *)((int)param_1 + 0x11) = 0;
  return;
}

