extern unsigned int *auStack_4c;
extern int _blkmov();
extern unsigned int uStack_50;
extern unsigned int uStack_58;
extern unsigned int uStack_5c;
extern unsigned int uStack_60;


void RaiseException(unsigned int param_1,unsigned int param_2,unsigned int param_3,unsigned __int64 param_4)

{
  struct { unsigned int first; unsigned int second; } stack_pair_60;

  unsigned int uStack_58;
  int (**pcStack_54)();
  unsigned int uStack_50;
  unsigned char auStack_4c [60];
  
  stack_pair_60.second = param_2 & 1;
  uStack_58 = 0;
  pcStack_54 = RaiseException;
  stack_pair_60.first = param_1;
  if ((int)param_4 == 0) {
    uStack_50 = 0;
  }
  else {
    if (0xf < param_3) {
      param_3 = 0xf;
    }
    uStack_50 = param_3;
    if (param_3 != 0) {
      _blkmov(auStack_4c,param_4,param_3 << 2);
    }
  }
  RtlRaiseException(&stack_pair_60.first);
  return;
}

