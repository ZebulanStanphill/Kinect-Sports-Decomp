extern int fn_822315A0();
extern int fn_8223A7A8();
extern int fn_8265C9E0();
extern int fn_828ABF58();
extern int fn_828E3508();
extern unsigned int lbl_82196E48;
extern unsigned int lbl_82196E94;
extern unsigned int lbl_82197F94;
extern unsigned int lbl_821B47F8;
extern unsigned int lbl_821B71D4;
extern unsigned int lbl_821B71EC;


unsigned int * fn_823F1608(unsigned int *param_1)

{
  unsigned __int64 uVar1;
  unsigned __int64 uVar2;
  unsigned int *puVar3;
  unsigned int *puVar4;
  unsigned int *puVar5;
  
  fn_828E3508();
  param_1[0x12] = 0;
  param_1[0x18] = 0;
  *param_1 = &lbl_82197F94;
  uVar1 = fn_8265C9E0(0x18);
  if ((uVar1 & 0xffffffff) == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = fn_828ABF58(uVar1,1,0,0xffffffffffffffff);
  }
  fn_8223A7A8(param_1 + 0x1a,uVar2);
  puVar3 = (unsigned int *)fn_8265C9E0(8);
  if (puVar3 == (unsigned int *)0x0) {
    puVar3 = (unsigned int *)0x0;
  }
  else {
    puVar3[1] = 0;
    *puVar3 = &lbl_821B47F8;
  }
  fn_8223A7A8(param_1 + 0x1c,puVar3);
  puVar3 = (unsigned int *)fn_8265C9E0(8);
  if (puVar3 == (unsigned int *)0x0) {
    puVar3 = (unsigned int *)0x0;
  }
  else {
    puVar3[1] = 0;
    *puVar3 = &lbl_82196E48;
  }
  fn_8223A7A8(param_1 + 0x1e,puVar3);
  puVar3 = (unsigned int *)fn_8265C9E0(8);
  if (puVar3 == (unsigned int *)0x0) {
    puVar3 = (unsigned int *)0x0;
  }
  else {
    puVar3[1] = 0;
    *puVar3 = &lbl_821B71D4;
  }
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  puVar4 = (unsigned int *)fn_8265C9E0(0x10);
  if (puVar4 == (unsigned int *)0x0) {
    puVar4 = (unsigned int *)0x0;
  }
  else {
    puVar4[3] = puVar3;
    puVar4[1] = 1;
    puVar4[2] = 1;
    *puVar4 = &lbl_82196E94;
  }
  if (param_1[0x21] != 0) {
    fn_822315A0();
  }
  param_1[0x21] = puVar4;
  param_1[0x20] = puVar3;
  puVar3 = (unsigned int *)fn_8265C9E0(8);
  if (puVar3 == (unsigned int *)0x0) {
    puVar3 = (unsigned int *)0x0;
  }
  else {
    puVar3[1] = 0;
    *puVar3 = &lbl_821B71EC;
  }
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  puVar5 = (unsigned int *)fn_8265C9E0(0x10);
  puVar4 = (unsigned int *)0x0;
  if (puVar5 != (unsigned int *)0x0) {
    puVar5[3] = puVar3;
    puVar5[1] = 1;
    puVar5[2] = 1;
    *puVar5 = &lbl_82196E94;
    puVar4 = puVar5;
  }
  if (param_1[0x23] != 0) {
    fn_822315A0();
  }
  param_1[0x23] = puVar4;
  param_1[0x22] = puVar3;
  return param_1;
}

