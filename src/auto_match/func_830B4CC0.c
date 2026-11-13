extern unsigned int *auStack_40;
extern unsigned int *auStack_60;
extern int fn_82230110();
extern int fn_82230300();
extern int fn_822EC698();


unsigned __int64 fn_830B4CC0(__int64 param_1,unsigned __int64 param_2)

{
  unsigned char auStack_60 [32];
  unsigned char auStack_40 [40];
  
  fn_82230110(auStack_40);
  fn_82230110(auStack_60,param_2);
  fn_822EC698(param_1 + 0xc,auStack_60);
  fn_82230300(auStack_60,1,0);
  fn_82230300(auStack_40,1,0);
  return 0;
}

