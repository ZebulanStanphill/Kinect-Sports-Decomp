typedef struct SubB94 {
  int f0;
  int a;
  int b;
  int c;
  __int64 d;
  int e;
} SubB94;

typedef struct SubCE0 {
  int a;
  int b;
  int c;
  int timeout;
  int enabled;
} SubCE0;

typedef struct S {
  char pad0[0x10c]; int f10c; int f110; int f114;
  char pad118[0x18c - 0x118]; int f18c; int f190; int f194;
  char pad198[0x1b4 - 0x198]; int f1b4; int f1b8; int f1bc; int f1c0; int pad1c4; int f1c8;
  char pad1cc[0x704 - 0x1cc]; int f704;
  char pad708[0x768 - 0x708]; int f768[6];
  char pad780[0xb90 - 0x780]; SubB94 sb94;
  char padbb0[0xd34 - 0xbb0]; int fd34; int fd38; int fd3c;
  char padd40[0xe30 - 0xd40]; __int64 fe30; __int64 fe38; __int64 pad_e40; __int64 fe48; __int64 fe50;
  char pade58[0xe68 - 0xe58]; int fe68; int pade6c[2]; int fe74;
  char pade78[0xe88 - 0xe78]; int fe88; int fe8c; int fe90; int fe94; int fe98;
  char pade9c[0xf64 - 0xe9c]; int ff64; int ff68; int ff6c; int ff70; int ff74;
  char padf78[0xfa4 - 0xf78]; int ffa4;
  char padfa8[0x3cd0 - 0xfa8]; int f3cd0; int f3cd4; int f3cd8; int f3cdc; SubCE0 sce0;
  char pad3cf4[0x3cfc - 0x3cf4]; int f3cfc;
  char pad3d00[0x3dd8 - 0x3d00]; int f3dd8;
  char pad3ddc[0x5610 - 0x3ddc]; int f5610; int f5614; int f5618;
  char pad561c[0x56e4 - 0x561c]; int f56e4;
  char pad56e8[0x56f4 - 0x56e8]; int f56f4;
} S;

extern int fn_82C75408();

static void SubB94_Reset(SubB94 *s)
{
  s->a = 0;
  s->b = 0;
  s->c = 0;
  s->d = 0;
  s->e = 0;
}

static void SubCE0_Reset(SubCE0 *s)
{
  s->a = 0;
  s->b = 0;
  s->c = 0;
  s->timeout = 1000;
  s->enabled = 1;
}

void fn_82C50660(S *p)
{
  int r;

  p->fe30 = 0;
  p->fe38 = 0;
  p->fe48 = 0;
  p->fe50 = 0;
  p->fe68 = 0;
  p->f1c8 = 0;
  p->f190 = 0;
  p->f18c = 0;
  p->f194 = 0;
  p->ff68 = 0;
  p->ff6c = 0;
  p->ff70 = 0;
  p->f1b8 = 0;
  p->f1b4 = 0;
  p->f1bc = 0;
  p->ff64 = 0;
  p->ffa4 = 0;
  p->f1c0 = 0;
  p->ff74 = 0;
  p->f3cd4 = 0;
  p->f3cd8 = 0;
  p->fe88 = 0;
  p->fe8c = 0;
  p->fe90 = 0;
  p->fe94 = 1;
  p->fe98 = 0;
  p->f10c = 0;
  p->f3dd8 = 0;
  p->f768[0] = 0;
  p->f768[1] = 0;
  p->f768[2] = 0;
  p->f768[3] = 0;
  p->f768[4] = 0;
  p->f768[5] = 0;
  p->f110 = 0;
  p->f114 = 0;
  p->f3cfc = 0;
  p->f3cdc = 0;
  p->fe74 = -1;
  SubB94_Reset(&p->sb94);
  p->f704 = 0;
  SubCE0_Reset(&p->sce0);
  p->fd34 = 0;
  p->fd38 = 0;
  p->f56e4 = 0;
  r = fn_82C75408(0xe, 0x72, 0);
  p->f56e4 = r;
  if (r == 0 || r == -1)
    p->f56e4 = 0;
  else
    p->f56e4 = 1;
  p->f3cd0 = 0;
  p->fd3c = 0;
  p->f56f4 = 2;
  p->f5610 = 0;
  p->f5614 = 0;
  p->f5618 = 0;
}
