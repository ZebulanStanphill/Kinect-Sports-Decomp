extern unsigned int *auStack_30;
extern int fn_82230110();
extern int fn_82230300();
extern int fn_828C3B70();


void fn_82514DA8(unsigned __int64 param_1)

{
  unsigned char auStack_30 [32];
  
  fn_82230110(auStack_30,"Main");
  fn_828C3B70(param_1,0,auStack_30);
  fn_82230300(auStack_30,1,0);
  return;
}

