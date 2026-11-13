extern int fn_8223CFC0();
extern int fn_8223DCC8();
extern unsigned int fn_82240158();
extern int fn_822403C8();
extern unsigned int fn_82520AC8();


unsigned __int64 fn_825209B0(unsigned __int64 param_1,int param_2)

{
  unsigned int uVar1;
  unsigned int uVar2;
  struct { unsigned int first; unsigned char rest[148]; } buf;
  
  fn_8223CFC0(&buf,2,1);
  uVar1 = *(unsigned int *)(param_2 + 0x7d8);
  uVar2 = fn_82240158(&buf,"Live::Player::XAvatarMetadataNetVar - compressed size {");
  uVar2 = fn_82520AC8(uVar2,uVar1);
  fn_82240158(uVar2,"}");
  fn_822403C8(param_1,buf.rest);
  fn_8223DCC8(&buf);
  return param_1;
}

