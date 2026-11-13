extern int fn_82230300();
extern int fn_8265CA20();
extern int fn_82A1E650();
extern int fn_82A1E658();
extern int fn_82A1E810();
extern int fn_82E22190();


void fn_82E22450(int param_1)

{
  fn_82A1E650(*(unsigned int *)(param_1 + 100),0xffffffff);
  *(unsigned char *)(param_1 + 0x5c) = 1;
  fn_82A1E810(*(unsigned int *)(param_1 + 0x68));
  if (*(unsigned int *)(param_1 + 0x60) != 0) {
    fn_82A1E650(*(int *)(param_1 + 0x60),0xffffffff);
    fn_82A1E658(*(unsigned int *)(param_1 + 0x60));
  }
  fn_82E22190(param_1 + 0x88);
  fn_8265CA20(*(unsigned int *)(param_1 + 0x88));
  *(unsigned int *)(param_1 + 0x88) = 0;
  fn_82230300(param_1 + 0x38,1,0);
  fn_82230300(param_1 + 0x1c,1,0);
  fn_82230300(param_1,1,0);
  return;
}

