extern int fn_8223DBE8();
extern int fn_82F62F60();
extern unsigned int lbl_82020F30;


void fn_8223DCC8(int param_1)

{
  fn_8223DBE8(param_1 + 0x50);
  *(unsigned char ***)(param_1 + 0x50) = &lbl_82020F30;
  fn_82F62F60(param_1 + 0x50);
  return;
}

