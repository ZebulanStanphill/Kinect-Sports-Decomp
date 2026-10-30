void fn_8263AB38(unsigned int code, int *a, int *b)
{
  int v;
  switch (code) {
  case 0xb:
  case 0xc:
  case 0x28:
    *a = 2;
    *b = 1;
    return;
  case 0x27:
  case 0x2c:
    *a = 4;
    *b = 1;
    return;
  case 0x12: case 0x13: case 0x14:
  case 0x31:
  case 0x33: case 0x34: case 0x35:
  case 0x3a: case 0x3b: case 0x3c: case 0x3d:
    v = 4;
    break;
  default:
    v = 1;
    break;
  }
  *a = v;
  *b = v;
}
