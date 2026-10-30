typedef struct { char pad[0x20]; unsigned __int64 dirty; char pad2[0x2758]; unsigned bits[1]; } Ctx_82631290;
void fn_82631290(Ctx_82631290 *c, unsigned idx, unsigned *src, int n)
{
  do {
    unsigned *w = &c->bits[idx >> 5];
    unsigned b = idx & 31;
    unsigned v = *src++;
    *w = (*w & ~(1 << b)) | ((v & 1) << b);
    idx++;
    n--;
  } while (n != 0);
  c->dirty |= 0x100000000000000;
}
