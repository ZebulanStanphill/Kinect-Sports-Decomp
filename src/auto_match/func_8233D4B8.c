extern unsigned int *auStack_70;
extern int fn_82230110();
extern int fn_82230300();
extern int fn_8223B688();
extern int fn_822C70F0();
extern unsigned int lbl_821AD588;
extern unsigned int lbl_821AE80C;


unsigned int *
fn_8233D4B8(unsigned int *param_1,unsigned __int64 param_2,unsigned __int64 param_3,int param_4,
             unsigned __int64 param_5,unsigned __int64 param_6)

{
  unsigned int *puVar1;
  unsigned char auStack_70 [112];
  
  param_1[1] = 1;
  *param_1 = &lbl_821AD588;
  param_1[2] = 1;
  puVar1 = param_1 + 3;
  if (puVar1 != (unsigned int *)0x0) {
    fn_82230110(auStack_70,param_6);
    fn_822C70F0(puVar1,param_2,param_3);
    param_1[0x18] = param_4;
    param_1[0x19] = param_4 + 0x24;
    *puVar1 = &lbl_821AE80C;
    fn_8223B688(param_1 + 0x1a,param_5);
    fn_8223B688(param_1 + 0x21,auStack_70);
    param_1[0x28] = 0;
    param_1[0x29] = 0;
    param_1[0x17] = 1;
    fn_82230300(auStack_70,1,0);
  }
  return param_1;
}

