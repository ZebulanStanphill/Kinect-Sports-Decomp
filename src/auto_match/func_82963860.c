int fn_82963860(unsigned *p)
{
  switch (*p & 0xfff00000) {
  case 0x10d00000:
  case 0x10e00000:
  case 0x60000000:
  case 0x60200000:
  case 0x60300000:
  case 0x60500000:
  case 0x60700000:
  case 0x60800000:
  case 0x60a00000:
  case 0x60c00000:
  case 0x60d00000:
  case 0x60f00000:
  case 0x61100000:
  case 0x61200000:
    return 1;
  }
  return 0;
}
