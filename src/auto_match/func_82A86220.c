extern unsigned int lbl_8315FA88;
void fn_82A86220(unsigned int p)
{
  if (p < 2) {
    lbl_8315FA88 = 2;
  } else if (p > 4) {
    lbl_8315FA88 = 4;
  } else {
    lbl_8315FA88 = p;
  }
}
