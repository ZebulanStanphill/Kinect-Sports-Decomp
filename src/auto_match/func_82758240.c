extern int fn_8267BE38();
extern int fn_8267C488();
extern int fn_8269AA60();
extern int fn_82756EB8();
extern int fn_827ABBA0();
extern unsigned int lbl_820143E4;
extern unsigned int lbl_820143F0;


void fn_82758240(unsigned int *param_1)

{
  unsigned int *puVar1;
  
  puVar1 = (unsigned int *)param_1[0x55];
  *param_1 = &lbl_820143F0;
  param_1[3] = &lbl_820143E4;
  if (puVar1 != (unsigned int *)0x0) {
    fn_82756EB8(puVar1 + 7);
    fn_8267BE38(*puVar1);
    fn_8267BE38(puVar1);
  }
  fn_8267C488(param_1 + 0x4e);
  fn_827ABBA0(param_1 + 0x1b);
  fn_8269AA60(param_1);
  return;
}

