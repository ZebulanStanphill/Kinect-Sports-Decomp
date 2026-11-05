extern int lbl_8328E788[];

void fn_8247B788(int param_1, unsigned int param_2)
{
  int *p;
  int i;

  p = lbl_8328E788 + 0x20e;
  for (i = 0; i < 4; i++) {
    if ((p[0] == 0 || p[0] == 1) && (unsigned int)p[1] == param_2) {
      p[0] = 4;
    }
    p += 0x108;
  }
}
