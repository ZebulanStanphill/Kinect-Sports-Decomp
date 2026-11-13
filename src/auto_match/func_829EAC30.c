extern int fn_829E8B70();
extern int fn_829E9CB0();
extern int fn_829EA0E0();
extern int fn_829EAA68();
extern int fn_82A2AEC0();


void fn_829EAC30(unsigned int *param_1)

{
  unsigned int *puVar1;
  
  *param_1 = 0;
  param_1[1] = 0;
  fn_82A2AEC0(param_1 + 2);
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  fn_829EAA68(param_1 + 10);
  fn_829EAA68(param_1 + 0x2b);
  puVar1 = (unsigned int *)param_1[0x53];
  if (puVar1 != (unsigned int *)0x0) {
    (*(int (**)())*puVar1)(puVar1,1);
  }
  param_1[0x53] = 0;
  fn_829E9CB0(param_1 + 0x54);
  fn_829EA0E0(param_1 + 0x58);
  fn_829E9CB0(param_1 + 0x5c);
  fn_829E8B70(param_1 + 0x60);
  fn_829E8B70(param_1 + 0x6d);
  param_1[9] = 1;
  return;
}

