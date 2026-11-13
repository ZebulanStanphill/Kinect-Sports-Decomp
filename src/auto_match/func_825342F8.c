extern unsigned int *auStack_30;
extern int fn_82230110();
extern int fn_82230300();
extern int fn_822402F8();


unsigned __int64 fn_825342F8(unsigned __int64 param_1,unsigned __int64 param_2)

{
  unsigned int uVar1;
  unsigned char auStack_30 [32];
  
  uVar1 = fn_82230110(auStack_30,"Listener Callback");
  fn_822402F8(param_2,uVar1);
  fn_82230300(auStack_30,1,0);
  return 0;
}

