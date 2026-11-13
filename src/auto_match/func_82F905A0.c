extern int fn_8223B688();
extern int fn_827D8810();
extern unsigned int lbl_821AD03C;
extern unsigned int uStack0000001c;


unsigned int * fn_82F905A0(unsigned int *param_1,unsigned int param_2)

{
  unsigned int *puStack00000014;
  unsigned int uStack0000001c;
  
  puStack00000014 = param_1;
  uStack0000001c = param_2;
  fn_827D8810(param_1);
  *puStack00000014 = &lbl_821AD03C;
  fn_8223B688(puStack00000014 + 3,uStack0000001c);
  return puStack00000014;
}

