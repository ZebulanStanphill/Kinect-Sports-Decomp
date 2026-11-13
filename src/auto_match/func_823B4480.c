extern int fn_8223CFC0();
extern int fn_8223DCC8();
extern int fn_82240158();
extern int fn_822403C8();


unsigned __int64 fn_823B4480(unsigned __int64 param_1)

{
  struct { unsigned char a [4]; unsigned char b [156]; } s;
  
  fn_8223CFC0(s.a,2,1);
  fn_82240158(s.a,"SpectatorNetworkFrameMsg - ");
  fn_822403C8(param_1,s.b);
  fn_8223DCC8(s.a);
  return param_1;
}

