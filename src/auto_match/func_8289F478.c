extern unsigned int *auStack_1c;
extern int fn_8289E800();
extern int fn_8289F1E8();
extern unsigned int uStack_20;


void fn_8289F478(__int64 param_1,unsigned int param_2)

{
  unsigned int uStack_20;
  unsigned int auStack_1c;
  
  uStack_20 = param_2;
  fn_8289F1E8(&auStack_1c,param_1 + 0x54,&uStack_20);
  fn_8289E800(&uStack_20,param_1 + 0x54,auStack_1c);
  return;
}

