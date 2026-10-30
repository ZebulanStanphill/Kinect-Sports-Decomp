struct Self_829BBC60;
typedef struct { void *(*alloc)(struct Self_829BBC60 *, int, unsigned int); } Mem_829BBC60;
typedef struct { short s0, s2, s4, s6; short s8, sa, sc, se; short s10, s12; short pad[6]; short s20; } Hdr_829BBC60;
typedef struct { int f0; int v[5]; } Src_829BBC60;
typedef struct { char pad[0x4c]; Hdr_829BBC60 *h; char pad2[0x54 - 0x50]; } Item_829BBC60;
typedef struct { char pad[0x70]; char *out; } Out_829BBC60;
typedef struct Self_829BBC60 {
  char pad0[4]; Mem_829BBC60 *mem; char pad1[0x24 - 8]; int n;
  char pad2[0xa4 - 0x28]; char *src; char pad3[0xdc - 0xa8]; char *items; int fe0;
  char pad4[0x1b0 - 0xe4]; Out_829BBC60 *fb0;
} Self_829BBC60;

int fn_829BBC60(Self_829BBC60 *s)
{
  Out_829BBC60 *r = s->fb0;
  int res = 0;
  int i;
  int off;
  int k;
  int o;
  Hdr_829BBC60 *h;
  Src_829BBC60 *p;
  Item_829BBC60 *it;
  if (s->fe0 == 0 || s->src == 0)
    return 0;
  if (r->out == 0)
    r->out = (char *)s->mem->alloc(s, 1, (s->n + s->n * 2) << 3);
  i = 0;
  o = (int)r->out;
  it = (Item_829BBC60 *)s->items;
  if (0 < s->n) {
    off = 0;
    do {
      h = it->h;
      if (h == 0 || h->s0 == 0 || h->s2 == 0 || h->s10 == 0 || h->s20 == 0 || h->s12 == 0 || h->s4 == 0)
        return 0;
      p = (Src_829BBC60 *)(s->src + off);
      if (p->f0 < 0)
        return 0;
      for (k = 1; k < 6; k++) {
        *(int *)(o + k * 4) = p->v[k - 1];
        if (p->v[k - 1] != 0) res = 1;
      }
      i++;
      o += 0x18;
      off += 0x100;
      it++;
    } while (i < s->n);
  }
  return res;
}
