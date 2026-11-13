extern int fn_824CC9E8();
extern int fn_824CD030();
extern int fn_824D7BD0();
extern unsigned int lbl_821C0C34;
extern unsigned int lbl_821C0E94;


void fn_824D74F0(unsigned int *param_1)

{
  int iVar1;
  
  *param_1 = &lbl_821C0E94;
  iVar1 = fn_824CD030();
  if (iVar1 != 0) {
    fn_824D7BD0(param_1);
  }
  *param_1 = &lbl_821C0C34;
  fn_824CC9E8(param_1);
  return;
}

