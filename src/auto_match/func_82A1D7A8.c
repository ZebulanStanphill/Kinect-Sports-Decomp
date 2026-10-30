extern int ExGetXConfigSetting(int, int, void *, int, unsigned short *);
extern unsigned int XGetGameRegion();

unsigned char fn_82A1D7A8(void)
{
  struct { unsigned char buf[2]; unsigned short outlen; } l;
  unsigned int r;
  unsigned int reg;
  unsigned int hi;
  l.outlen = 0;
  if (ExGetXConfigSetting(3, 0xe, l.buf, 1, &l.outlen) < 0) {
    r = 0;
  } else {
    if (l.buf[0] > 0x6e) r = 0; else
    switch (l.buf[0]) {
    case 0x6:
      r = 0x1;
      break;
    case 0x5:
      r = 0x2;
      break;
    case 0x8:
      r = 0x3;
      break;
    case 0xd:
      r = 0x4;
      break;
    case 0x10:
      r = 0x5;
      break;
    case 0x13:
      r = 0x6;
      break;
    case 0x14:
      r = 0x7;
      break;
    case 0x15:
      r = 0x8;
      break;
    case 0x17:
      r = 0x9;
      break;
    case 0x19:
      r = 0xa;
      break;
    case 0x20:
      r = 0xb;
      break;
    case 0x22:
      r = 0xc;
      break;
    case 0x18:
      r = 0xd;
      break;
    case 0x25:
      r = 0xe;
      break;
    case 0x27:
      r = 0xf;
      break;
    case 0x2a:
      r = 0x10;
      break;
    case 0x2e:
      r = 0x11;
      break;
    case 0x2c:
      r = 0x12;
      break;
    case 0x32:
      r = 0x13;
      break;
    case 0x35:
      r = 0x14;
      break;
    case 0x38:
      r = 0x15;
      break;
    case 0x47:
      r = 0x16;
      break;
    case 0x4a:
      r = 0x17;
      break;
    case 0x4c:
      r = 0x18;
      break;
    case 0x4b:
      r = 0x19;
      break;
    case 0x52:
      r = 0x1a;
      break;
    case 0x54:
      r = 0x1b;
      break;
    case 0x58:
      r = 0x25;
      break;
    case 0x5b:
      r = 0x1c;
      break;
    case 0x5d:
      r = 0x1d;
      break;
    case 0x6d:
      r = 0x1e;
      break;
    case 0x1f:
      r = 0x1f;
      break;
    case 0x5a:
      r = 0x20;
      break;
    case 0x12:
      r = 0x21;
      break;
    case 0x65:
      r = 0x22;
      break;
    case 0x23:
      r = 0x23;
      break;
    case 0x67:
      r = 0x24;
      break;
    default:
      r = 0;
      break;
    }
  }
  if ((unsigned char)r == 0 || (unsigned char)r > 0x25) {
    reg = XGetGameRegion();
    hi = (reg >> 8) & 0xff;
    if (hi == 1)
      r = ((reg == 0x101) ^ 1) + 0x14;
    else
      r = ((hi == 2) ^ 1) + 0x23;
  }
  return (unsigned char)r;
}
