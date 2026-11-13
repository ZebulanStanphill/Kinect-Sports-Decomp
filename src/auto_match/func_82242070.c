extern int fn_82239CB0();
extern int fn_8223A060();
extern int fn_8223A0D0();
extern int fn_82242198();
extern int fn_822422B0();
extern int fn_822423C8();
extern int fn_822424F8();
extern unsigned int lbl_821968A4;
extern unsigned int lbl_82197334;
extern unsigned int lbl_8219735C;
extern unsigned int lbl_8219736C;
extern unsigned int lbl_82197408;
extern unsigned int lbl_82197410;


unsigned int * fn_82242070(unsigned int *param_1,__int64 param_2)

{
  fn_82239CB0();
  *param_1 = &lbl_82197408;
  param_1[10] = &lbl_821968A4;
  fn_8223A0D0(param_1 + 0xc,param_2 + 0x30);
  param_1[0xc] = &lbl_82197334;
  fn_82242198(param_1 + 0x16,param_2 + 0x58);
  fn_822422B0(param_1 + 0x32,param_2 + 200);
  fn_822423C8(param_1 + 0x4e,param_2 + 0x138);
  param_1[0x4e] = &lbl_8219735C;
  fn_8223A060(param_1 + 0x70,param_2 + 0x1c0);
  fn_822424F8(param_1 + 0x8a,param_2 + 0x228);
  param_1[0x8a] = &lbl_8219736C;
  fn_8223A060(param_1 + 0xaa,param_2 + 0x2a8);
  *param_1 = &lbl_82197408;
  param_1[10] = &lbl_82197410;
  return param_1;
}

