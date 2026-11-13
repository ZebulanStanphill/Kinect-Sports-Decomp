#define CONCAT44(h,l) ((unsigned __int64)((((unsigned int)(h)) << 32) | ((unsigned int)(l))))
#define _iStack_20 ((*(unsigned __int64*)&iStack_20))
extern unsigned int fStack_1c;
extern int fn_824BF8A8();
extern unsigned int iStack_20;


void fn_824DC918(double param_1,int *param_2)

{
  float fVar1;
  struct { int first; float second; } stack_pair_20;

  
  _iStack_20 = CONCAT44(param_2[7],(float)param_1);
  fn_824BF8A8(param_2,&stack_pair_20.first);
  fVar1 = (float)param_2[4];
  param_2[4] = (int)(float)((double)fVar1 + param_1);
  param_2[5] = (int)((float)((double)fVar1 + param_1) / (float)(unsigned int)(param_2[1] - *param_2 >> 3));
  return;
}

