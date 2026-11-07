extern unsigned int fn_82A368C8();

int fn_82A2B5E8(int param_1, int param_2, unsigned int *param_3, int param_4,
                unsigned int param_5)
{
  if (param_5 == 0) {
    *param_3 = 0;
  }
  else {
    switch (fn_82A368C8()) {
    case 0:
      break;
    case 1:
      return (int)0x8007000e;
    case 6:
      return (int)0x81de2001;
    case 7:
      return (int)0x81de2001;
    default:
      return (int)0x80004005;
    }
  }
  return 0;
}
