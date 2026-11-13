extern int fn_8265C990();
extern int fn_82924F48();
extern int fn_8292E080();
extern unsigned int lbl_8202F0AC;


void fn_8292F568(unsigned int *param_1)

{
  *param_1 = &lbl_8202F0AC;
  fn_8292E080();
  if (param_1[0x20] != 0) {
    fn_8265C990(param_1[0x20],0x24810000);
  }
  fn_82924F48(param_1);
  return;
}

