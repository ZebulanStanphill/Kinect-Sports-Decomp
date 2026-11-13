extern int fn_824DCB30();
extern unsigned int uStack_18;
extern unsigned int uStack_1c;
extern unsigned int uStack_20;


unsigned int * fn_824E06E0(unsigned int *param_1)

{
  unsigned int uStack_20;
  struct { unsigned int first; unsigned int second; } stack_pair_1c;

  
  uStack_20 = 0;
  stack_pair_1c.first = 0;
  stack_pair_1c.second = (unsigned int)(((unsigned __int64)(stack_pair_1c.second) >> 16) & 0xFFFF);
  fn_824DCB30(&uStack_20,&stack_pair_1c.first,&stack_pair_1c.second);
  *param_1 = uStack_20;
  param_1[1] = stack_pair_1c.first;
  param_1[2] = stack_pair_1c.second;
  return param_1;
}

