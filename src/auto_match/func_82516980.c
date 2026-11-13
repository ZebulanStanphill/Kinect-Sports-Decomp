extern unsigned int *auStack_30;
extern int fn_82230110();
extern int fn_82230300();
extern int fn_82897DF8();


void fn_82516980(__int64 param_1)

{
  unsigned char auStack_30 [32];
  
  fn_82230110(auStack_30,"ContextAndPropertiesVar");
  fn_82897DF8(param_1 + 0x34,param_1,auStack_30);
  fn_82230300(auStack_30,1,0);
  return;
}

