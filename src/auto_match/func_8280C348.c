extern unsigned int *auStack_20;
extern unsigned int *auStack_30;
extern unsigned int *auStack_40;
extern unsigned int fStack_48;
extern unsigned int fStack_4c;
extern unsigned int fStack_50;
extern int fn_82810280();
extern int fn_828105C8();


void fn_8280C348(float *param_1,float *param_2)

{
  double dVar1;
  struct { float first; float second; } stack_pair_50;

  float fStack_48;
  unsigned char auStack_40 [16];
  unsigned char auStack_30 [16];
  unsigned char auStack_20 [16];
  
  stack_pair_50.first = param_1[0xc];
  stack_pair_50.second = param_1[0xd];
  fStack_48 = param_1[0xe];
  *param_2 = *param_1;
  param_2[4] = param_1[1];
  param_2[8] = param_1[2];
  param_2[1] = param_1[4];
  param_2[5] = param_1[5];
  param_2[9] = param_1[6];
  param_2[2] = param_1[8];
  param_2[6] = param_1[9];
  param_2[10] = param_1[10];
  fn_828105C8((double)*param_2,(double)param_2[4],(double)param_2[8],auStack_40);
  fn_828105C8((double)param_2[1],(double)param_2[5],(double)param_2[9],auStack_30);
  fn_828105C8((double)param_2[2],(double)param_2[6],(double)param_2[10],auStack_20);
  dVar1 = (double)fn_82810280(&stack_pair_50.first,auStack_40);
  param_2[0xc] = (float)-dVar1;
  dVar1 = (double)fn_82810280(&stack_pair_50.first,auStack_30);
  param_2[0xd] = (float)-dVar1;
  dVar1 = (double)fn_82810280(&stack_pair_50.first,auStack_20);
  param_2[0xe] = (float)-dVar1;
  return;
}

