extern int fn_82D74E60();
extern int fn_82D75010();
extern int fn_82D75830();
extern int fn_82D75FD0();


void fn_82D758E8(unsigned int *param_1)

{
  *param_1 = fn_82D75830;
  param_1[1] = fn_82D74E60;
  param_1[2] = fn_82D75010;
  param_1[3] = fn_82D75FD0;
  *(unsigned char *)(param_1 + 4) = 0;
  *(unsigned char *)((int)param_1 + 0x11) = 0;
  return;
}

