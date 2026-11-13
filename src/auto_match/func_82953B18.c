unsigned int fn_82953B18(unsigned int flags)
{
  unsigned int swapped = 0;

  switch (flags & 0x0f000000) {
  case 0x0000000:
    swapped = 0x1000000;
    break;
  case 0x1000000:
    swapped = 0x0000000;
    break;
  case 0x2000000:
    swapped = 0x3000000;
    break;
  case 0x3000000:
    swapped = 0x2000000;
    break;
  case 0x4000000:
    swapped = 0x5000000;
    break;
  case 0x5000000:
    swapped = 0x4000000;
    break;
  case 0x7000000:
    swapped = 0x8000000;
    break;
  case 0x8000000:
    swapped = 0x7000000;
    break;
  case 0xb000000:
    swapped = 0xc000000;
    break;
  case 0xc000000:
    swapped = 0xb000000;
    break;
  }
  return (flags & 0xf0ffffff) | swapped;
}
