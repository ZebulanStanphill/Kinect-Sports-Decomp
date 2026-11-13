extern double sqrt(double);
#define SQRT(x) sqrt(x)
extern unsigned int fStack_1c;
extern unsigned int fStack_20;
extern int fn_825321B0();
extern unsigned int stack0x00000020;


unsigned __int64 fn_82331D28(double param_1,int param_2)

{
  unsigned __int64 uVar1;
  struct { float first; float second; } stack_pair_20;

  
  fn_825321B0(&stack0x00000020,&stack_pair_20.first,*(unsigned int *)(param_2 + 0x74));
  stack_pair_20.second = stack_pair_20.second - *(float *)(param_2 + 0xa4);
  stack_pair_20.first = stack_pair_20.first - *(float *)(param_2 + 0xa0);
  if ((param_1 < (double)SQRT(stack_pair_20.first * stack_pair_20.first + stack_pair_20.second * stack_pair_20.second)) ||
     (uVar1 = 1, *(float *)(param_2 + 0xd0) <= *(float *)(param_2 + 0xbc))) {
    uVar1 = 0;
  }
  return uVar1;
}

