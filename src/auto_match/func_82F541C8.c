extern int fn_822315A0();
extern int fn_826744A0();
extern int fn_82F53F18();
extern unsigned int uStack_1c;
extern unsigned int uStack_20;


void fn_82F541C8(unsigned int *param_1,unsigned int *param_2)

{
  struct { unsigned int first; unsigned int second; } stack_pair_20;

  
  stack_pair_20.second = *param_2;
  stack_pair_20.first = 0xffffffff;
  fn_82F53F18((unsigned __int64)*param_1 + 0x1564,&stack_pair_20.first);
  (*(int (**)())*(unsigned int *)*param_2)(*param_2);
  fn_826744A0(param_1 + 1,param_2);
  if (param_2[1] != 0) {
    fn_822315A0(param_2[1]);
  }
  return;
}

