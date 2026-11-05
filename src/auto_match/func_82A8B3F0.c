typedef struct {
  int pad0[2];
  unsigned f08;
  void *f0c;
  unsigned f10;
  unsigned pad14;
  unsigned f18;
  unsigned f1c;
} Obj_82A8B3F0;
extern unsigned char fn_82A8B288(Obj_82A8B3F0 *);
extern void *memcpy(void *, const void *, unsigned);
unsigned char fn_82A8B3F0(Obj_82A8B3F0 *o, char *buf, unsigned n, unsigned *outn)
{
  unsigned rem;
  *outn = 0;
  if (o->f0c == 0) return 0;
  rem = n;
  while (rem != 0) {
    unsigned chunk;
    unsigned avail;
    if (fn_82A8B288(o) == 0) return 0;
    avail = o->f1c - o->f10 + o->f18;
    chunk = rem < avail ? rem : avail;
    memcpy(buf + *outn, (char *)(o->f08 - o->f18 + o->f10), chunk);
    o->f10 += chunk;
    *outn += chunk;
    rem -= chunk;
  }
  return *outn == n;
}
