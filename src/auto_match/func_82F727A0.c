extern int fn_82F775F0();
extern unsigned int uStack_14;
extern unsigned int uStack_18;
extern unsigned int uStack_1c;
extern unsigned int uStack_20;


extern char lbl_82196582[];
unsigned __int64 fn_82F727A0(unsigned __int64 param_1)

{
  struct { unsigned int first; unsigned int second; } stack_pair_20;

  struct { unsigned int first; unsigned int second; } stack_pair_18;


  stack_pair_20.second = stack_pair_20.second & 0xffff;
  stack_pair_20.first = 0;
  stack_pair_18.second = stack_pair_18.second & 0xffff;
  stack_pair_18.first = 0;
  fn_82F775F0(param_1,&stack_pair_18.first,lbl_82196582,&stack_pair_20.first,1);
  return param_1;
}
