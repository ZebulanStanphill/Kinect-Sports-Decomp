extern unsigned int *auStack_30;
extern int fn_82230110();
extern int fn_82230300();
extern int fn_822CAA28();
extern int fn_82897DF8();


void fn_822E80B8(__int64 param_1)

{
  unsigned char auStack_30 [32];
  
  fn_822CAA28();
  fn_82230110(auStack_30,"Bat Hand selection");
  fn_82897DF8(param_1 + 0x20c,param_1,auStack_30);
  fn_82230300(auStack_30,1,0);
  return;
}

