extern int fn_83057318();
extern int fn_83058710();
extern int fn_83059900();
extern int fn_8305B020();
extern int fn_8305B1F8();
extern int fn_8305B280();
extern unsigned int lbl_8217C340;
extern unsigned int lbl_8217E630;


void fn_8305B7D8(unsigned int *param_1)

{
  unsigned int iVar1;
  
  iVar1 = param_1[2];
  *param_1 = &lbl_8217E630;
  if (iVar1 != 0) {
    fn_83059900(iVar1);
    fn_83057318(iVar1);
    fn_8305B280(param_1 + 5);
  }
  iVar1 = param_1[3];
  if (iVar1 != 0) {
    fn_83058710(iVar1);
    fn_83057318(iVar1);
    fn_8305B280(param_1 + 10);
  }
  iVar1 = param_1[4];
  if (iVar1 != 0) {
    fn_8305B020(iVar1);
    fn_83057318(iVar1);
    fn_8305B280(param_1 + 0xf);
  }
  fn_8305B1F8(param_1 + 0xf);
  fn_8305B1F8(param_1 + 10);
  fn_8305B1F8(param_1 + 5);
  *param_1 = &lbl_8217C340;
  return;
}

