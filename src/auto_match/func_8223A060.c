extern int fn_8223A4D8();
extern int fn_822C5B18();
extern unsigned int lbl_82196C58;
extern unsigned int lbl_82196C78;


unsigned int * fn_8223A060(unsigned int *param_1,__int64 param_2)

{
  fn_8223A4D8();
  *param_1 = &lbl_82196C58;
  fn_822C5B18(param_1 + 0xe,param_2 + 0x38);
  fn_822C5B18(param_1 + 0x14,param_2 + 0x50);
  *param_1 = &lbl_82196C78;
  return param_1;
}

