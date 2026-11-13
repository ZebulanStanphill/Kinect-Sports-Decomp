extern int fn_822315A0();
extern int fn_8223A7A8();
extern int fn_8265C9E0();
extern int fn_828ABF58();
extern int fn_828AC0A0();
extern int fn_828E3508();
extern unsigned int lbl_82196E94;
extern unsigned int lbl_8219735C;
extern unsigned int lbl_82198494;
extern unsigned int lbl_821B47F8;


unsigned int * fn_823A8340(unsigned int *param_1)

{
  unsigned __int64 uVar1;
  unsigned __int64 uVar2;
  unsigned int *puVar3;
  unsigned int uVar4;
  unsigned int *puVar5;
  
  fn_828E3508();
  param_1[0x12] = 0;
  param_1[0x18] = 0;
  *param_1 = &lbl_8219735C;
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
    *puVar3 = &lbl_82198494;
  }
  fn_8223A7A8(param_1 + 0x1e,puVar3);
  uVar1 = fn_8265C9E0(0x18);
  if ((uVar1 & 0xffffffff) == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = fn_828AC0A0(uVar1,1,0xffffffff80000000,0x7fffffff);
  }
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  puVar5 = (unsigned int *)fn_8265C9E0(0x10);
  puVar3 = (unsigned int *)0x0;
  if (puVar5 != (unsigned int *)0x0) {
    puVar5[3] = uVar4;
    puVar5[1] = 1;
    *puVar5 = &lbl_82196E94;
    puVar5[2] = 1;
    puVar3 = puVar5;
  }
  if (param_1[0x21] != 0) {
    fn_822315A0();
  }
  param_1[0x21] = puVar3;
  param_1[0x20] = uVar4;
  return param_1;
}

