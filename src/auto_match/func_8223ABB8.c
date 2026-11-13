extern unsigned int *auStack_30;
extern unsigned int *auStack_50;
extern int fn_82230110();
extern int fn_82230300();
extern int fn_82897DF8();


void fn_8223ABB8(__int64 param_1)

{
  unsigned char auStack_50 [32];
  unsigned char auStack_30 [32];
  
  fn_82230110(auStack_50,"Migration state");
  fn_82897DF8(param_1 + 0x34,param_1,auStack_50);
  fn_82230300(auStack_50,1,0);
  fn_82230110(auStack_30,"Migration new session");
  fn_82897DF8(param_1 + 0x8c,param_1,auStack_30);
  fn_82230300(auStack_30,1,0);
  return;
}

