extern int RaiseException();
extern int memcpy();
extern unsigned int uStack_28;
extern unsigned int uStack_2c;
extern unsigned int uStack_30;
extern unsigned int uStack_3c;
extern unsigned int uStack_40;


void _CxxThrowException(unsigned int param_1,unsigned int *param_2)

{
  unsigned int uStack_40;
  unsigned int uStack_3c;
  unsigned int uStack_30;
  struct { unsigned int first; unsigned int second; } stack_pair_2c;

  unsigned int *puStack_24;
  
  memcpy(&uStack_40,0xffffffff8216836c,0x20);
  if ((param_2 != (unsigned int *)0x0) && ((*param_2 & 8) != 0)) {
    stack_pair_2c.first = 0x1994000;
  }
  stack_pair_2c.second = param_1;
  puStack_24 = param_2;
  RaiseException(uStack_40,uStack_3c,uStack_30,&stack_pair_2c.first);
  return;
}

