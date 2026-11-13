extern int fn_824B4280();
extern int fn_82F54688();
extern unsigned int lbl_82165CA0;


void fn_82F54778(unsigned int *param_1)

{
  *param_1 = &lbl_82165CA0;
  fn_82F54688(param_1 + 0x10);
  fn_824B4280(param_1[0x10]);
  param_1[0x10] = 0;
  return;
}
