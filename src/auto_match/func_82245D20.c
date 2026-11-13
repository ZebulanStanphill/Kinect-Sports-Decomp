extern unsigned int *auStack_15c;
extern unsigned int *auStack_160;
extern unsigned int *auStack_180;
extern unsigned int *auStack_bc;
extern unsigned int *auStack_c0;
extern int fn_82230300();
extern int fn_8223B728();
extern int fn_8223CFC0();
extern int fn_8223DCC8();
extern int fn_82240158();
extern int fn_822403C8();
extern int fn_82F644D8();


unsigned __int64 fn_82245D20(unsigned __int64 param_1)

{
  unsigned __int64 uVar1;
  unsigned __int64 uVar2;
  unsigned char auStack_180 [1];
  unsigned char auStack_160 [4];
  unsigned char auStack_15c [156];
  unsigned char auStack_c0 [4];
  unsigned char auStack_bc [188];

  fn_8223CFC0(auStack_c0,2,1);
  fn_8223CFC0(auStack_160,2,1);
  uVar1 = fn_82F644D8(0xffffffff831d7094,0xffffffff8326338c);
  uVar2 = fn_82240158(auStack_160,0xffffffff821976e0);
  fn_82240158(uVar2,uVar1);
  fn_822403C8(auStack_180,auStack_15c);
  fn_8223DCC8(auStack_160);
  uVar1 = fn_82F644D8(0xffffffff831d7094,0xffffffff8326338c);
  uVar2 = fn_82240158(auStack_c0,0xffffffff821976d0);
  uVar1 = fn_82240158(uVar2,uVar1);
  uVar1 = fn_82240158(uVar1,0xffffffff821976c8);
  uVar1 = fn_8223B728(uVar1,auStack_180);
  fn_82240158(uVar1,0xffffffff82196fb0);
  fn_82230300(auStack_180,1,0);
  fn_822403C8(param_1,auStack_bc);
  fn_8223DCC8(auStack_c0);
  return param_1;
}
