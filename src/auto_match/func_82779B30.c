extern unsigned int *auStack_34;
extern int fn_82779AA8();
extern unsigned int uStack_28;
extern unsigned int uStack_38;
extern unsigned int uStack_3c;
extern unsigned int uStack_40;


/* WARNING: Type propagation algorithm not settling */

void fn_82779B30(unsigned char *param_1,unsigned int param_2)

{
  unsigned int uStack_40;
  struct { unsigned int first; unsigned int second; } stack_pair_3c;

  unsigned int auStack_34 [3];
  unsigned int uStack_28;
  
  uStack_40 = (unsigned int)*param_1;
  auStack_34[1] = 2;
  stack_pair_3c.first = (unsigned int)param_1[3];
  stack_pair_3c.second = (unsigned int)param_1[2];
  uStack_28 = 0x200;
  auStack_34[0] = (unsigned int)param_1[1];
  auStack_34[2] = param_2;
  fn_82779AA8(auStack_34 + 1,0xffffffff82015440,auStack_34,&stack_pair_3c.second,&stack_pair_3c.first,&uStack_40);
  return;
}

