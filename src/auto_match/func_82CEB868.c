extern unsigned int *auStack_30;
extern int fn_82CEB628();
extern int fn_82CFEBE0();
extern int fn_82CFEBF0();


void fn_82CEB868(int param_1,unsigned __int64 param_2)

{
  unsigned char auStack_30 [24];
  
  fn_82CFEBF0(auStack_30,0);
  while (param_1 != 0) {
    fn_82CEB628(param_1,auStack_30);
    if ((~param_2 & 1) == 0) {
      param_1 = 0;
    }
    else {
      param_1 = *(int *)(param_1 + 4);
    }
  }
  fn_82CFEBE0(auStack_30);
  return;
}

