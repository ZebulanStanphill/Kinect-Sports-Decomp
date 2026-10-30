struct Self_829BE9E8;
typedef struct { void *f0; void (*g)(struct Self_829BE9E8 *, void *, unsigned, int *, unsigned); } Vt_829BE9E8;
typedef struct Self_829BE9E8 {
  char pad0[0x24 - 0]; int f24; char pad1[0xdc - 0x28]; char *fdc; char pad2[0x13c - 0xe0]; int f13c;
  char pad3[0x1c8 - 0x140]; char *sub; Vt_829BE9E8 *vt;
} Self_829BE9E8;
typedef struct {
  char pad0[0xc]; char e[0x50]; int f5c; unsigned f60;
} Sub_829BE9E8;
typedef void (*Fn_829BE9E8)(Self_829BE9E8 *, char *, int *, char *);

void fn_829BE9E8(Self_829BE9E8 *s, int **src, int *p3, int unused, int *dst, unsigned *pidx, unsigned limit)
{
  Sub_829BE9E8 *c = (Sub_829BE9E8 *)s->sub;
  unsigned n;
  if (c->f5c >= s->f13c) {
    int i = 0;
    char *row = s->fdc;
    if (0 < s->f24) {
      int **sp = src - 1;
      char *e = (char *)c + 0xc;
      do {
        sp++;
        (*(Fn_829BE9E8 *)(e + 0x28))(s, row, *sp + *(int *)(e + 0x58) * *p3, e);
        i++;
        e += 4;
        row += 0x54;
      } while (i < s->f24);
    }
    c->f5c = 0;
  }
  n = s->f13c - c->f5c;
  if (n > c->f60) n = c->f60;
  if (n > limit - *pidx) n = limit - *pidx;
  s->vt->g(s, (char *)c + 0xc, c->f5c, dst + *pidx, n);
  *pidx += n;
  c->f5c += n;
  c->f60 -= n;
  if (c->f5c >= s->f13c) *p3 += 1;
}
