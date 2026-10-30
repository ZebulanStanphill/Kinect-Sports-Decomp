int fn_829634B0(unsigned *param_1)
{
  switch (*param_1 & 0xfff00000) {
  case 0x70700000:
  case 0x50300000:
  case 0x70100000:
  case 0x70200000:
  case 0x70500000:
  case 0x70600000:
  case 0x70b00000:
  case 0x70c00000:
  case 0x70d00000:
  case 0x71000000:
    return 1;
  }
  return 0;
}
