typedef struct { unsigned int code; int value; } Map_82F681D0;
extern Map_82F681D0 lbl_831BB4E0[];

int fn_82F681D0(unsigned int param_1)
{
  unsigned int i;

  for (i = 0; i < 0x2d; i++) {
    if (param_1 == lbl_831BB4E0[i].code) {
      return lbl_831BB4E0[i].value;
    }
  }
  if (param_1 >= 0x13 && param_1 <= 0x24) {
    return 0xd;
  }
  if (param_1 >= 0xbc && param_1 <= 0xca) {
    return 8;
  }
  return 0x16;
}
