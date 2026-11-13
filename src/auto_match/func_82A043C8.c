int fn_82A043C8(unsigned int a, unsigned int b)
{
  if (b == 0) {
    switch (a) {
    case 0x15: return 0x16;
    case 0x16: return 0x15;
    case 0x19: return 0x1a;
    case 0x1a: return 0x19;
    case 0x1d: return 0x1e;
    case 0x1e: return 0x1d;
    }
  } else if (b == 1) {
    switch (a) {
    case 0x1d: return 0x1a;
    case 0x1e: return 0x19;
    }
  }
  return 0x1f;
}
