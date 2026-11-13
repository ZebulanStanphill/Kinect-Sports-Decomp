extern void fn_822315A0(unsigned int);
extern unsigned int lbl_821C250C;
extern unsigned int lbl_832979FC[];

void fn_8313A768(void)
{
  if (lbl_832979FC[4] != 0) {
    fn_822315A0(lbl_832979FC[4]);
  }
  if (lbl_832979FC[2] != 0) {
    fn_822315A0(lbl_832979FC[2]);
  }
  lbl_832979FC[0] = (unsigned int)&lbl_821C250C;
}
