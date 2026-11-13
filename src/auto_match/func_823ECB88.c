extern int fn_8223A7A8();
extern int fn_8265C9E0();
extern int fn_828E3508();
extern unsigned int lbl_82196E48;
extern unsigned int lbl_82197F04;
extern unsigned int lbl_82197F14;
extern unsigned int lbl_821B47F8;


unsigned int * fn_823ECB88(unsigned int *param_1)

{
  unsigned int *puVar1;
  
  fn_828E3508();
  param_1[0x12] = 0;
  param_1[0x18] = 0;
  *param_1 = &lbl_82197F14;
  puVar1 = (unsigned int *)fn_8265C9E0(8);
  if (puVar1 == (unsigned int *)0x0) {
    puVar1 = (unsigned int *)0x0;
  }
  else {
    puVar1[1] = 0;
    *puVar1 = &lbl_821B47F8;
  }
  fn_8223A7A8(param_1 + 0x1a,puVar1);
  puVar1 = (unsigned int *)fn_8265C9E0(8);
  if (puVar1 == (unsigned int *)0x0) {
    puVar1 = (unsigned int *)0x0;
  }
  else {
    puVar1[1] = 0;
    *puVar1 = &lbl_82196E48;
  }
  fn_8223A7A8(param_1 + 0x1c,puVar1);
  *param_1 = &lbl_82197F04;
  return param_1;
}

