typedef struct Ctx_82631350 {
  char pad0[0x20];
  unsigned __int64 dirty;
  char pad28[0x27a0 - 0x28];
  unsigned int intConstsA[16];
  unsigned int intConstsB[16];
} Ctx_82631350;

void fn_82631350(Ctx_82631350 *c, unsigned int start, const int *src, int count)
{
  unsigned int *dst = &c->intConstsA[start];
  do {
    *dst++ = (((src[2] & 0xff) << 8 | (src[1] & 0xff)) << 8) | (src[0] & 0xff);
    src += 4;
    count--;
  } while (count != 0);
  c->dirty |= 0x100000000000000;
}
