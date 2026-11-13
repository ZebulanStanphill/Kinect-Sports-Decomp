extern int fn_82692DC0();
extern int fn_82692DE8();
extern unsigned int lbl_82005520;
extern unsigned int uStack_30;
extern unsigned int uStack_38;
extern unsigned int uStack_40;


unsigned int * fn_8267B960(unsigned int *param_1,unsigned int *param_2)

{
  unsigned int *puVar1;
  unsigned __int64 uStack_40;
  unsigned __int64 uStack_38;
  unsigned __int64 uStack_30;
  
  puVar1 = param_1 + 1;
  *param_1 = &lbl_82005520;
  fn_82692DC0(puVar1);
  param_1[0x28] = param_2;
  param_1[0x2a] = 0x1000;
  param_1[0x2c] = 0;
  param_1[0x29] = param_2;
  param_1[0x2b] = 1;
  uStack_40 = 0;
  uStack_38 = 0;
  uStack_30 = 0;
  (**(int (***)())*param_2)(param_2,&uStack_40);
  if ((((unsigned __int64)(uStack_38) >> 0) & 0xFFFFFFFF) != 0) {
    fn_82692DE8(puVar1,param_2);
    param_1[0x29] = puVar1;
    param_1[0x2a] = (((unsigned __int64)(uStack_38) >> 0) & 0xFFFFFFFF);
  }
  if ((unsigned int)param_1[0x2b] < (((unsigned __int64)(uStack_40) >> 0) & 0xFFFFFFFF)) {
    param_1[0x2b] = (((unsigned __int64)(uStack_40) >> 0) & 0xFFFFFFFF);
  }
  return param_1;
}

