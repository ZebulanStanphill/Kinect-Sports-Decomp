extern int fn_8223A7A8();
extern int fn_8265C9E0();
extern int fn_828E3508();
extern unsigned int lbl_82196E48;
extern unsigned int lbl_82197924;
extern unsigned int lbl_82197FE4;
extern unsigned int lbl_821B7114;
extern unsigned int lbl_821B7234;
extern unsigned int lbl_821B724C;


unsigned int * fn_823F2810(unsigned int *param_1)

{
  unsigned int *puVar1;
  
  fn_828E3508();
  param_1[0x12] = 0;
  param_1[0x18] = 0;
  *param_1 = &lbl_82197FE4;
  puVar1 = (unsigned int *)fn_8265C9E0(8);
  if (puVar1 == (unsigned int *)0x0) {
    puVar1 = (unsigned int *)0x0;
  }
  else {
    puVar1[1] = 0;
    *puVar1 = &lbl_82196E48;
  }
  fn_8223A7A8(param_1 + 0x1a,puVar1);
  puVar1 = (unsigned int *)fn_8265C9E0(8);
  if (puVar1 == (unsigned int *)0x0) {
    puVar1 = (unsigned int *)0x0;
  }
  else {
    puVar1[1] = 0;
    *puVar1 = &lbl_821B7234;
  }
  fn_8223A7A8(param_1 + 0x1c,puVar1);
  puVar1 = (unsigned int *)fn_8265C9E0(8);
  if (puVar1 == (unsigned int *)0x0) {
    puVar1 = (unsigned int *)0x0;
  }
  else {
    puVar1[1] = 0;
    *puVar1 = &lbl_82197924;
  }
  fn_8223A7A8(param_1 + 0x1e,puVar1);
  puVar1 = (unsigned int *)fn_8265C9E0(8);
  if (puVar1 == (unsigned int *)0x0) {
    puVar1 = (unsigned int *)0x0;
  }
  else {
    puVar1[1] = 0;
    *puVar1 = &lbl_82197924;
  }
  fn_8223A7A8(param_1 + 0x20,puVar1);
  puVar1 = (unsigned int *)fn_8265C9E0(8);
  if (puVar1 == (unsigned int *)0x0) {
    puVar1 = (unsigned int *)0x0;
  }
  else {
    puVar1[1] = 0;
    *puVar1 = &lbl_821B7114;
  }
  fn_8223A7A8(param_1 + 0x22,puVar1);
  puVar1 = (unsigned int *)fn_8265C9E0(8);
  if (puVar1 == (unsigned int *)0x0) {
    puVar1 = (unsigned int *)0x0;
  }
  else {
    puVar1[1] = 0;
    *puVar1 = &lbl_821B724C;
  }
  fn_8223A7A8(param_1 + 0x24,puVar1);
  return param_1;
}

