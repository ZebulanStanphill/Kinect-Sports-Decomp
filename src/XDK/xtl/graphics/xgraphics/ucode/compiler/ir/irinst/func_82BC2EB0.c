extern int lbl_820E3B00[];


int fn_82BC2EB0(int *p, int i)
{
  int a, b;
  if (i == 0) {
    a = p[0x20];
    b = lbl_820E3B00[2];
  } else {
    a = p[i + 0x20];
    b = lbl_820E3B00[0];
  }
  return a != b;
}
