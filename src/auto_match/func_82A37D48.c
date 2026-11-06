typedef struct Rec_82A37D48 { void *key; unsigned short words; short pad; char data[1]; } Rec_82A37D48;
typedef struct Ring_82A37D48 {
  int f0;
  char *begin;
  char *end;
  unsigned int cap;
  char cs[0x1c];
} Ring_82A37D48;
typedef struct Desc_82A37D48 { int f0; int f4; int f8; unsigned int fmt; } Desc_82A37D48;
extern unsigned int fn_82A37C50(Ring_82A37D48 *r, void *key, void *out);
extern void fn_82A37B80(Ring_82A37D48 *r);
extern void RtlLeaveCriticalSection(void *cs);
extern void *memmove(void *, const void *, unsigned int);
extern void *memcpy(void *, const void *, unsigned int);

void fn_82A37D48(Ring_82A37D48 *r, void *key, Desc_82A37D48 *d)
{
  char tmp[4];
  if (r->cap > 0 && fn_82A37C50(r, key, tmp) == 0) {
    unsigned int used;
    unsigned int size;
    unsigned int total;
    fn_82A37B80(r);
    used = r->end - r->begin;
    size = (((((d->fmt & 0xc00000) != 0 ? 0x20 : 0x14) * ((d->fmt >> 6) & 0xffff) + 0x1f) >> 5) + 4) * 4;
    total = size + 8;
    if (total <= r->cap) {
      char *p = r->begin;
      while (r->cap - used < total) {
        unsigned int n = ((Rec_82A37D48 *)p)->words * 4;
        used -= n;
        p += n;
      }
      if (p != r->begin) {
        if (p != r->end) {
          memmove(r->begin, p, used);
          r->end = r->begin + used;
        } else {
          r->end = r->begin;
        }
      }
      ((Rec_82A37D48 *)r->end)->key = key;
      ((Rec_82A37D48 *)r->end)->words = (unsigned short)(total >> 2);
      memcpy(r->end + 8, d, size);
      r->end += total;
    }
    RtlLeaveCriticalSection(r->cs);
  }
}
