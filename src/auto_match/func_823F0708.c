extern int fn_822315A0();
extern int fn_8223A7A8();
extern int fn_8265C9E0();
extern int fn_828E3508();
extern unsigned int lbl_82196E48;
extern unsigned int lbl_82196E94;
extern unsigned int lbl_82197EF4;
extern unsigned int lbl_821B47F8;
extern unsigned int lbl_821B709C;


unsigned int * fn_823F0708(unsigned int *param_1)

{
  unsigned int *puVar1;
  unsigned int *puVar2;
  unsigned int *puVar3;
  
  fn_828E3508();
  param_1[0x12] = 0;
  param_1[0x18] = 0;
  *param_1 = &lbl_82197EF4;
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
  puVar1 = (unsigned int *)fn_8265C9E0(8);
  if (puVar1 == (unsigned int *)0x0) {
    puVar1 = (unsigned int *)0x0;
  }
  else {
    puVar1[1] = 0;
    *puVar1 = &lbl_821B709C;
  }
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  puVar2 = (unsigned int *)fn_8265C9E0(0x10);
  puVar3 = (unsigned int *)0x0;
  if (puVar2 != (unsigned int *)0x0) {
    puVar2[3] = puVar1;
    puVar2[1] = 1;
    *puVar2 = &lbl_82196E94;
    puVar2[2] = 1;
    puVar3 = puVar2;
  }
  if (param_1[0x1f] != 0) {
    fn_822315A0();
  }
  param_1[0x1f] = puVar3;
  param_1[0x1e] = puVar1;
  return param_1;
}

