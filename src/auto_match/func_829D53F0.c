extern unsigned char fn_829D3EC8(unsigned int *, unsigned int *, unsigned int *, unsigned int *);
extern int fn_82A2B418(void *, void *);

typedef struct Hdr_829D53F0 {
  unsigned int pad;
  unsigned int count;
} Hdr_829D53F0;
typedef struct Out_829D53F0 {
  unsigned int count;
  unsigned int a;
  unsigned int b;
  unsigned int c;
  void *data;
  void *chunk;
} Out_829D53F0;

int fn_829D53F0(unsigned int base, unsigned int size, unsigned int *total, unsigned int *count, Out_829D53F0 *out)
{
  Hdr_829D53F0 *hdr;
  unsigned int *e;
  unsigned int *p;
  unsigned int a;
  unsigned int b[2];
  unsigned int c;
  unsigned int esz;
  unsigned int n;
  unsigned int nn;
  unsigned int sum;
  unsigned int i;
  unsigned int avail;
  unsigned int used;
  unsigned int need;
  unsigned char ok;
  char buf[16];

  hdr = (Hdr_829D53F0 *)(size >= 0x18 ? base : 0);
  if (size > 0x32000) {
    return 0;
  }
  avail = 0x32000 - size;
  if (hdr == 0) {
    return 0;
  }
  if (hdr->count > 0x66) {
    return 0;
  }
  if (count != 0) {
    *count = hdr->count;
  }
  sum = 0;
  e = (unsigned int *)hdr + 2;
  i = 0;
  for (i = 0; i < hdr->count; i++) {
    if ((unsigned int)e - base + 0x10 > size) {
      return 0;
    }
    if (e == 0) {
      return 0;
    }
    esz = e[0];
    if (esz == 0) {
      return 0;
    }
    n = e[1];
    if (n == 0) {
      return 0;
    }
    if (esz < (n + 5) * 8) {
      return 0;
    }
    if (esz - base + (unsigned int)e > size) {
      return 0;
    }
    ok = fn_829D3EC8(e, &a, b, &c);
    if (ok == 0) {
      return 0;
    }
    p = e + (n + 1) * 2;
    nn = p[6];
    used = (unsigned int)e + (esz - (unsigned int)p) - 0x1c;
    if (c * nn > used) {
      return 0;
    }
    sum += nn;
    if (sum > 0x66) {
      return 0;
    }
    if (out != 0) {
      out->count = nn;
      out->data = p + 7;
      out->chunk = p;
      out->b = a;
      out->c = b[0];
      out->a = c;
      out++;
    }
    avail = used + avail;
    if (fn_82A2B418((char *)p + 6, buf) == 0) {
      return 0;
    }
    e = (unsigned int *)(*e + (unsigned int)e);
  }
  if (total != 0) {
    *total = avail;
  }
  return 1;
}
