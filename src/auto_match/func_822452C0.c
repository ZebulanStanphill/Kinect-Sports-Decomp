extern int fn_8223B8C8();
extern int fn_8223B930();
extern int fn_82240688();
extern int fn_82240DB8();
extern int fn_8288B300();
extern unsigned int lbl_821970C0;
extern unsigned int lbl_82197738;
extern unsigned int lbl_82197740;
extern unsigned int lbl_82197750;


unsigned int * fn_822452C0(unsigned int *param_1)

{
  unsigned int *puVar1;
  int lVar2;
  
  fn_8288B300(param_1,1);
  *param_1 = &lbl_82197738;
  fn_8223B930(param_1 + 0xd);
  fn_8223B8C8(param_1 + 0x27);
  fn_82240DB8(param_1 + 0x41,1);
  puVar1 = param_1 + 0x57;
  puVar1[0] = 0;
  puVar1[1] = 0;
  param_1[0x41] = &lbl_82197740;
  fn_82240688(param_1 + 0x59);
  fn_82240688(param_1 + 0x6f);
  fn_82240DB8(param_1 + 0x85,2);
  param_1[0x87] = 0;
  *(unsigned char *)(param_1 + 0x88) = 0;
  param_1[0x85] = &lbl_821970C0;
  fn_82240DB8(param_1 + 0x9b,1);
  param_1[0xb1] = 0;
  puVar1 = param_1 + 0xb3;
  param_1[0xb2] = 0;
  lVar2 = 0xe;
  param_1[0x9b] = &lbl_82197750;
  do {
    fn_8223B930(puVar1);
    puVar1 = puVar1 + 0x1a;
  } while (--lVar2 >= 0);
  puVar1 = param_1 + 0x239;
  lVar2 = 0xe;
  do {
    fn_82240688(puVar1);
    puVar1 = puVar1 + 0x16;
  } while (--lVar2 >= 0);
  return param_1;
}

