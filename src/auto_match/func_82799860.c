extern int fn_8267BE38();
extern int fn_8267C488();
extern int fn_8267C498();
extern int fn_8267C4F0();
extern int fn_82795A90();
extern int fn_827977F8();
extern unsigned int lbl_8201581C;


void fn_82799860(unsigned int *param_1)

{
  *param_1 = &lbl_8201581C;
  fn_827977F8();
  if (param_1[7] != 0) {
    fn_8267C4F0(param_1[7]);
  }
  if (param_1[6] != 0) {
    fn_8267C498(param_1[6]);
  }
  fn_82795A90(param_1[3],param_1[4]);
  fn_8267BE38(param_1[3]);
  if (param_1[2] != 0) {
    fn_8267C498(param_1[2]);
  }
  fn_8267C488(param_1);
  return;
}

