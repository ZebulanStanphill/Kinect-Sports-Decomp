extern unsigned int *auStack_28;
extern unsigned int *auStack_30;
extern int fn_822315A0();
extern int fn_8229F208();
extern int fn_823F2E20();
extern int fn_82520158();
extern int fn_8266EC60();
extern int fn_8266EE08();
extern unsigned int iStack_24;
extern unsigned int ltcg_pool_0_0f;


unsigned int * fn_8229F148(unsigned int *param_1)

{
  unsigned int uVar1;
  unsigned __int64 uVar2;
  unsigned char auStack_30 [8];
  unsigned char auStack_28 [4];
  int iStack_24;
  
  *param_1 = 1;
  param_1[1] = 2;
  uVar1 = ltcg_pool_0_0f;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = uVar1;
  fn_82520158(0xffffffff821ab704,auStack_30,0);
  uVar2 = fn_8266EC60();
  uVar2 = fn_8266EE08(auStack_28,uVar2,auStack_30,0,2,0);
  fn_823F2E20(param_1 + 2,uVar2);
  if (iStack_24 != 0) {
    fn_822315A0();
  }
  fn_8229F208(param_1,1);
  return param_1;
}

