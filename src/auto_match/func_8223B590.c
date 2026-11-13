extern int fn_8223AC40();
extern int fn_8223B068();
extern int fn_8288B300();
extern unsigned int lbl_82197028;
extern unsigned int lbl_82197038;
extern unsigned int lbl_82197058;


unsigned int * fn_8223B590(unsigned int *param_1)

{
  fn_8288B300(param_1,0);
  *param_1 = &lbl_82197058;
  fn_8223AC40(param_1 + 0xd,1);
  param_1[0xd] = &lbl_82197038;
  fn_8223B068(param_1 + 0x23,1);
  param_1[0x23] = &lbl_82197028;
  return param_1;
}

