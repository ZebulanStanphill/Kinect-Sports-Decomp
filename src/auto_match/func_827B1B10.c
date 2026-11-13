extern unsigned int *auStack_20;
extern int fn_827B19D8();


void fn_827B1B10(unsigned int *param_1,unsigned int param_2)

{
  unsigned char auStack_20 [8];
  
  auStack_20[0] = (unsigned char)param_2;
  fn_827B19D8(*param_1,auStack_20);
  auStack_20[0] = (unsigned char)((int)param_2 >> 8);
  fn_827B19D8(*param_1,auStack_20);
  return;
}

