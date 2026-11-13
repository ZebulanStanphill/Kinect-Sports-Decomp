int fn_82963540(unsigned int *param_1)
{
  switch (*param_1 & 0xfff00000) {
  case 0x11100000:
  case 0x11200000:
  case 0x11300000:
  case 0x11400000:
  case 0x11500000:
  case 0x20800000:
  case 0x20900000:
  case 0x74100000:
  case 0x74200000:
  case 0x74300000:
  case 0x74400000:
  case 0x74500000:
  case 0x74600000:
  case 0x74700000:
  case 0x74a00000:
  case 0x74b00000:
    return 1;
  }
  return 0;
}
