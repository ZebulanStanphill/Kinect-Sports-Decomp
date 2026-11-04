typedef struct { unsigned char b[8]; } B8_828D3770;
typedef struct {
  unsigned int f8;
  unsigned int fc;
  float f10;
  char pad14[0x38 - 0x14];
  B8_828D3770 b38;
  char pad40[0x50 - 0x40];
} Rest_828D3770;
typedef struct {
  unsigned int px;
  unsigned int rep;
  Rest_828D3770 rest;
} E_828D3770;

extern void fn_822315A0(unsigned int rep);
extern unsigned char fn_8223AAC0(unsigned int rep);
extern void *memcpy(void *d, const void *s, unsigned int n);

E_828D3770 *fn_828D3770(E_828D3770 *first, E_828D3770 *last, E_828D3770 *dst)
{
  int diff;
  E_828D3770 *s;
  unsigned int rep;
  unsigned int px;
  unsigned int npx;
  unsigned int nrep;
  unsigned int old;

  if (first != last) {
    diff = (int)first - (int)dst;
    s = first;
    do {
      rep = s->rep;
      px = *(unsigned int *)(diff + (int)dst);
      npx = 0;
      nrep = 0;
      if (rep != 0 && fn_8223AAC0(rep) != 0) {
        nrep = rep;
        npx = px;
      }
      old = dst->rep;
      dst->rep = nrep;
      dst->px = npx;
      if (old != 0) fn_822315A0(old);
      dst->rest.f8 = s->rest.f8;
      dst->rest.fc = s->rest.fc;
      dst->rest.f10 = s->rest.f10;
      memcpy((unsigned char *)&dst->rest + 0xc, (unsigned char *)&s->rest + 0xc, 0x24);
      dst->rest.b38 = s->rest.b38;
      memcpy((unsigned char *)&dst->rest + 0x38, (unsigned char *)&s->rest + 0x38, 0x10);
      dst++;
      s++;
    } while ((unsigned)(diff + (int)dst) != (unsigned)last);
  }
  return dst;
}
