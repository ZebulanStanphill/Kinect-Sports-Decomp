extern int fn_82230300();
extern int fn_822315A0();
extern int fn_824844E0();
extern int fn_824872A8();
extern int fn_82512B70();
extern int fn_8251FA58();
extern int fn_8254B4E8();
extern int fn_825604A0();
extern int fn_8265CA20();
extern int fn_82A1DD38();
extern int fn_82F4DE00();
extern int fn_82F4DE48();
extern unsigned int lbl_821BD3D0;
extern unsigned int lbl_821BE890;
extern unsigned int lbl_821C2CCC;
extern unsigned int lbl_832766F7;
extern int (*lbl_8327677C)();


void fn_8247A428(unsigned int *param_1)

{
  int *piVar1;
  int iVar2;
  
  *param_1 = &lbl_821BD3D0;
  if (param_1[0x1d9] != 0) {
    fn_825604A0(param_1 + 0x178);
    param_1[0x1d9] = 0;
  }
  if (param_1[0x174] != 0) {
    fn_82512B70();
  }
  piVar1 = (int *)param_1[0x1dc];
  lbl_832766F7 = 0;
  if (piVar1 != (int *)0x0) {
    if (*piVar1 != 0) {
      fn_8251FA58();
      *piVar1 = 0;
    }
    fn_8265CA20(piVar1);
  }
  iVar2 = param_1[0x171];
  if (iVar2 != 0) {
    if (*(int *)(iVar2 + 4) != 0) {
      fn_822315A0();
    }
    fn_8265CA20(iVar2);
    param_1[0x171] = 0;
  }
  iVar2 = param_1[0x172];
  if (iVar2 != 0) {
    if (*(int *)(iVar2 + 4) != 0) {
      fn_822315A0();
    }
    fn_8265CA20(iVar2);
    param_1[0x172] = 0;
  }
  if (param_1[0x1da] != 0) {
    if (lbl_8327677C != (int (**)())0x0) {
      (*lbl_8327677C)(0xffffffff821bd184,0xffffffff821bd0c8,0x1c8);
    }
    param_1[0x1da] = 0;
  }
  fn_8254B4E8(*(unsigned int *)(param_1[0x173] + 0x8c8));
  fn_82A1DD38(0xffffffff8328e788,param_1 + 0x1de,0x18d8);
  fn_82F4DE00(0);
  fn_82F4DE48();
  param_1[0x822] = &lbl_821BE890;
  fn_824872A8(param_1 + 0x822);
  fn_824844E0(param_1 + 0x1de);
  *param_1 = &lbl_821C2CCC;
  fn_82230300(param_1 + 3,1,0);
  return;
}

