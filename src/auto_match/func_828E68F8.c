extern void (*lbl_8315A354)(unsigned int *, unsigned int *, int);

void fn_828E68F8(unsigned int *param_1, unsigned int param_2)
{
  unsigned int *p;
  unsigned char ok;

  p = param_1 + 2;
  if (lbl_8315A354 != 0) {
    lbl_8315A354(p, p, 2);
  }
  if (param_2 != 0) {
    *p = param_2;
    ok = 1;
  } else {
    ok = 0;
  }
  if (ok) {
    *param_1 = (unsigned int)&lbl_8315A354 | 1;
  } else {
    *param_1 = 0;
  }
}
