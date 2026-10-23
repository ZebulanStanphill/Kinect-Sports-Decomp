typedef int (*code)();
extern int fn_8267DBD0();
extern int fn_8267DD08();
extern int fn_82F6A5A8();
extern int lbl_831E7E6C;


void fn_8267E078(int *param_1,int param_2)

{
  (*(code *)(*param_1 + 0x10))(param_1);
  fn_8267DBD0(param_1);
  fn_8267DD08(lbl_831E7E6C,param_1);
  fn_82F6A5A8(param_2);
}
