extern int fn_8267C838();
extern int fn_8267CA08();
extern int fn_8267D840();
extern int fn_82774430();
extern unsigned int stack0x0000001c;
extern unsigned int uStack0000001c;


void fn_8267DD08(int *param_1,unsigned int param_2)

{
  unsigned int uStack0000001c;
  
  uStack0000001c = param_2;
  fn_8267C838(param_1[5]);
  fn_82774430(param_1,&stack0x0000001c);
  if (((int *)*param_1 == (int *)0x0) || (*(int *)*param_1 == 0)) {
    fn_8267CA08(param_1[6]);
  }
  fn_8267D840(param_1[5],param_1 + 1);
  return;
}

