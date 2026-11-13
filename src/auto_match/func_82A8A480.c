extern unsigned int *auStack_10;
extern int fn_82A898C8();
extern int fn_82A89940();
extern int fn_82A89F80();


void fn_82A8A480(unsigned __int64 param_1,unsigned __int64 param_2,unsigned __int64 param_3,unsigned int param_4)

{
  unsigned int auStack_10;
  
  if (param_4 == 4) {
    auStack_10 = 0;
    fn_82A89F80(&auStack_10,param_1,param_2,param_3,0x2c);
  }
  else if (param_4 == 3) {
    auStack_10 = 0;
    fn_82A898C8(&auStack_10,param_1,param_2,param_3,0x28);
  }
  else {
    fn_82A89940();
  }
  return;
}

