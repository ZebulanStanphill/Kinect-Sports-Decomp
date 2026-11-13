extern int fn_82BA02A8();
extern int fn_82BE6268();
extern int fn_82BE6328();
extern unsigned int stack0x0000001c;


void fn_82BE6840(unsigned __int64 param_1,unsigned __int64 param_2,int param_3)

{
  double dVar1;
  float in_stack_0000001c;
  
  dVar1 = (double)fn_82BA02A8();
  in_stack_0000001c = (float)dVar1;
  if (param_3 == 0) {
    fn_82BE6268(param_1,&stack0x0000001c,4);
  }
  else {
    fn_82BE6328();
  }
  return;
}

