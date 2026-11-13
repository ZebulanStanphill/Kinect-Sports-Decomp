extern int fn_82233428();
extern int fn_8223A7A8();
extern int fn_8265C9E0();
extern int fn_828E3508();
extern unsigned int lbl_821968A4;
extern unsigned int lbl_82196E48;
extern unsigned int lbl_82197924;
extern unsigned int lbl_821983B8;
extern unsigned int lbl_821983C0;
extern unsigned int lbl_82198490;
extern unsigned int lbl_82198494;


unsigned int * fn_8225A820(unsigned int *param_1)

{
  unsigned int *puVar1;
  
  fn_82233428();
  *param_1 = &lbl_821983B8;
  param_1[10] = &lbl_821968A4;
  fn_828E3508(param_1 + 0xc);
  param_1[0x1e] = 0;
  param_1[0x24] = 0;
  param_1[0xc] = &lbl_821983C0;
  puVar1 = (unsigned int *)fn_8265C9E0(8);
  if (puVar1 == (unsigned int *)0x0) {
    puVar1 = (unsigned int *)0x0;
  }
  else {
    puVar1[1] = 0;
    *puVar1 = &lbl_82197924;
  }
  fn_8223A7A8(param_1 + 0x26,puVar1);
  puVar1 = (unsigned int *)fn_8265C9E0(8);
  if (puVar1 == (unsigned int *)0x0) {
    puVar1 = (unsigned int *)0x0;
  }
  else {
    puVar1[1] = 0;
    *puVar1 = &lbl_82196E48;
  }
  fn_8223A7A8(param_1 + 0x28,puVar1);
  puVar1 = (unsigned int *)fn_8265C9E0(8);
  if (puVar1 == (unsigned int *)0x0) {
    puVar1 = (unsigned int *)0x0;
  }
  else {
    puVar1[1] = 0;
    *puVar1 = &lbl_82198494;
  }
  fn_8223A7A8(param_1 + 0x2a,puVar1);
  param_1[0xc] = &lbl_821983C0;
  *param_1 = &lbl_821983B8;
  param_1[10] = &lbl_82198490;
  return param_1;
}

