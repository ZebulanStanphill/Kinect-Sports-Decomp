extern int fn_8265C9E0();
extern int fn_828DF3D0();
extern int fn_828E7140();
extern unsigned int lbl_82027474;


unsigned __int64 fn_828E7B20(unsigned __int64 param_1,unsigned __int64 param_2,unsigned __int64 param_3)

{
  unsigned int *puVar1;
  
  puVar1 = (unsigned int *)fn_8265C9E0(0x18);
  if (puVar1 == (unsigned int *)0x0) {
    fn_828E7140(param_1,0);
  }
  else {
    fn_828DF3D0(puVar1,0xffffffff8315a35c,param_2,param_3);
    puVar1[4] = 0;
    puVar1[5] = 0;
    *puVar1 = &lbl_82027474;
    fn_828E7140(param_1,puVar1);
  }
  return param_1;
}

