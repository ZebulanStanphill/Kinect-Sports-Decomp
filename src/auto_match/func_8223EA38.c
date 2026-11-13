extern unsigned int *auStack_80;
extern unsigned int *auStack_90;
extern int fn_8223F810();
extern int fn_8223FA88();
extern int fn_82F64020();


unsigned __int64
fn_8223EA38(unsigned __int64 param_1,unsigned __int64 param_2,unsigned __int64 param_3,int param_4,
             unsigned __int64 param_5,unsigned __int64 param_6)

{
  unsigned int uVar1;
  unsigned char auStack_90 [16];
  unsigned char auStack_80 [64];
  
  uVar1 = fn_82F64020(auStack_80,0x40,fn_8223FA88(param_2,auStack_90,"Lu",*(unsigned int *)(param_4 + 0x14)),param_6);
  fn_8223F810(param_1,param_2,param_3,param_4,param_5,auStack_80,uVar1);
  return param_1;
}

