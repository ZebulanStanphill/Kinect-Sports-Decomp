extern int fn_82BA02A8();
extern int fn_82BE6268();
extern int fn_82BE6328();
extern unsigned int stack0x00000018;


void fn_82BE67E0(unsigned __int64 param_1,unsigned __int64 param_2,int param_3)

{
  unsigned __int64 in_stack_00000018;
  
  in_stack_00000018 = fn_82BA02A8(param_2);
  if (param_3 == 0) {
    fn_82BE6268(param_1,&stack0x00000018,8);
  }
  else {
    fn_82BE6328();
  }
  return;
}

