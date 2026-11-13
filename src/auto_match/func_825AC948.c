extern int fn_82230300();
extern int fn_8223B728();
extern int fn_8223CFC0();
extern int fn_8223DCC8();
extern int fn_82240158();
extern int fn_822403C8();
extern int fn_82520AC8();
extern int fn_828B5B28();


unsigned __int64 fn_825AC948(unsigned __int64 param_1,int param_2,unsigned __int64 param_3)

{
  unsigned int uVar1;
  unsigned int uVar2;
  unsigned int uVar3;
  struct { unsigned char e0[32]; unsigned char c0[4]; unsigned char bc[148]; } L;
  
  fn_8223CFC0(L.c0,2,1);
  uVar2 = fn_828B5B28(L.e0,param_2 + 0x84,param_3);
  uVar1 = *(unsigned int *)(param_2 + 0x80);
  uVar3 = fn_82240158(L.c0,"ActuatorTeleportMsg - Time:");
  uVar3 = fn_82520AC8(uVar3,uVar1);
  uVar3 = fn_82240158(uVar3,", Object:");
  fn_8223B728(uVar3,uVar2);
  fn_82230300(L.e0,1,0);
  fn_822403C8(param_1,L.bc);
  fn_8223DCC8(L.c0);
  return param_1;
}

