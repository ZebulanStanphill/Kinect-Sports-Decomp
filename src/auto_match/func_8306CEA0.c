extern unsigned char lbl_8322344C;
extern int fn_8306CD18(unsigned int, unsigned int, unsigned int *);

int fn_8306CEA0(unsigned int a, unsigned int b, unsigned int *out)
{
  int r;
  unsigned int tmp = 0;

  if (lbl_8322344C == 0) {
    r = 0x8000ffff;
  } else if (out == 0 || a == 0 || ((unsigned char)b != 1 && (unsigned char)b != 2 && (unsigned char)b != 0)) {
    r = 0x80070057;
  } else {
    r = fn_8306CD18(a, b, &tmp);
  }
  if (out != 0) {
    *out = tmp != 0 ? tmp + 8 : 0;
  }
  return r;
}
