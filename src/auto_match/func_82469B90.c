extern int fn_82279AF0();
extern int fn_82469C10();
extern int fn_82469CD8();
extern int fn_8265CA20();
extern int fn_8266F6B8();
extern unsigned int lbl_821BC360;


unsigned int * fn_82469B90(unsigned int *param_1,unsigned int param_2)

{
  int uVar1;
  
  *param_1 = &lbl_821BC360;
  uVar1 = fn_8266F6B8();
  fn_82469C10(param_1,uVar1);
  uVar1 = fn_8266F6B8();
  fn_82469CD8(param_1,uVar1);
  fn_82279AF0(param_1);
  if ((param_2 & 1) != 0) {
    fn_8265CA20(param_1);
  }
  return param_1;
}

