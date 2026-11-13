extern unsigned int *auStack_34;
extern unsigned int *auStack_50;
extern unsigned int *auStack_70;
extern unsigned int *auStack_90;
extern int fn_82230110();
extern int fn_82230218();
extern int fn_82230300();
extern int fn_8223B688();


unsigned __int64 fn_8286DA40(unsigned __int64 param_1,unsigned __int64 param_2,__int64 param_3)

{
  unsigned char auStack_90 [32];
  unsigned char auStack_70 [32];
  unsigned char auStack_50 [28];
  unsigned char auStack_34 [28];
  
  fn_82230110(auStack_70,0xffffffff820215ac);
  fn_82230110(auStack_90,0xffffffff820215ad);
  fn_8223B688(auStack_50,auStack_90);
  fn_8223B688(auStack_34,auStack_70);
  fn_82230218(param_3,auStack_50,0,0xffffffffffffffff);
  fn_82230218(param_3 + 0x1c,auStack_34,0,0xffffffffffffffff);
  fn_82230300(auStack_34,1,0);
  fn_82230300(auStack_50,1,0);
  fn_82230300(auStack_90,1,0);
  fn_82230300(auStack_70,1,0);
  return 0x200b0000;
}

