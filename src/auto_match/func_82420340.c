extern unsigned int *auStack_30;
extern int fn_82230110();
extern int fn_82230300();
extern int fn_822B1BE8();
extern int fn_8236DA90();


void fn_82420340(__int64 param_1)

{
  unsigned char auStack_30 [32];
  
  fn_8236DA90();
  fn_82230110(auStack_30,"BowlingController");
  fn_822B1BE8(param_1 + 0xe4,param_1,auStack_30,1);
  fn_82230300(auStack_30,1,0);
  return;
}

