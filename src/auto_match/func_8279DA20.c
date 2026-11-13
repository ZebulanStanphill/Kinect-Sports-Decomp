extern int fn_8267BE38();
extern int fn_8267C488();
extern int fn_8267C498();
extern int fn_8267C4F0();
extern int fn_8272A678();
extern int fn_82756EB8();
extern int fn_8279A190();
extern int fn_827ABBA0();
extern unsigned int lbl_82015B3C;


void fn_8279DA20(unsigned int *param_1)

{
  unsigned int *puVar1;
  
  *param_1 = &lbl_82015B3C;
  fn_8279A190();
  if (param_1[6] != 0) {
    fn_8272A678(param_1[6],1);
  }
  puVar1 = (unsigned int *)param_1[5];
  param_1[6] = 0;
  if (puVar1 != (unsigned int *)0x0) {
    fn_82756EB8(puVar1 + 7);
    fn_8267BE38(*puVar1);
    fn_8267BE38(puVar1);
  }
  if (param_1[0x4d] != 0) {
    fn_8267C4F0(param_1[0x4d]);
  }
  fn_8267C488(param_1 + 0x46);
  if (param_1[0x45] != 0) {
    fn_8267C498(param_1[0x45]);
  }
  fn_827ABBA0(param_1 + 9);
  if (param_1[4] != 0) {
    fn_8267C498(param_1[4]);
  }
  if (param_1[3] != 0) {
    fn_8267C498(param_1[3]);
  }
  if (param_1[2] != 0) {
    fn_8267C498(param_1[2]);
  }
  fn_8267C488(param_1);
  return;
}

