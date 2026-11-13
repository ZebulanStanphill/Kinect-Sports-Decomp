extern int fn_8267CB38();
extern int fn_8267DBD0();
extern int fn_8267DC50();
extern int fn_8267DD08();
extern int fn_82A1E338();
extern int fn_82A1E508();
extern unsigned int lbl_831E7E6C;


int fn_8267DEF8(int param_1)

{
  int uVar1;
  
  if (*(int *)(param_1 + 0x24) != -1) {
    fn_82A1E508(-2,*(int *)(param_1 + 0x24));
  }
  uVar1 = fn_8267CB38(*(unsigned int *)(param_1 + 0x28));
  fn_82A1E338(0xfffffffffffffffe,uVar1);
  uVar1 = fn_8267DC50(param_1);
  fn_8267DBD0(param_1);
  fn_8267DD08(lbl_831E7E6C,param_1);
  return uVar1;
}

