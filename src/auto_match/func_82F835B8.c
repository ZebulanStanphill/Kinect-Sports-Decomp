extern int fn_82F71CD0();
extern int fn_82F82E90();
extern int fn_82F8362C();
extern unsigned int lbl_832636DC;


void fn_82F835B8(void)

{
  if (lbl_832636DC == 0) {
    fn_82F71CD0(6);
    if (lbl_832636DC == 0) {
      fn_82F82E90();
      lbl_832636DC = lbl_832636DC + 1;
    }
    fn_82F8362C();
  }
  return;
}

