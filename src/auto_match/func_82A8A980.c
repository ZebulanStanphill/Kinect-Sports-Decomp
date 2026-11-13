extern unsigned int *auStack_10;
extern int fn_82A8A408();
extern int fn_82A8A480();
extern int fn_82A8A890();


void fn_82A8A980(unsigned __int64 param_1,unsigned __int64 param_2,unsigned __int64 param_3,unsigned int param_4)

{
  unsigned int auStack_10;
  
  if (param_4 == 6) {
    auStack_10 = 0;
    fn_82A8A890(&auStack_10,param_1,param_2,param_3,0x34);
  }
  else if (param_4 == 5) {
    auStack_10 = 0;
    fn_82A8A408(&auStack_10,param_1,param_2,param_3,0x30);
  }
  else {
    fn_82A8A480();
  }
  return;
}

