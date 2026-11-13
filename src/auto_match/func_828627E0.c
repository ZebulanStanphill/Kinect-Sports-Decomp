typedef struct { int w[4]; } Q16_828627E0;
typedef struct { float f; Q16_828627E0 *q; unsigned short h; } Rec_828627E0;
typedef struct { char pad[8]; unsigned short n; char pad2[0x28-0xa]; int off; } Cfg_828627E0;
typedef struct { char pad[8]; char *base; } Buf_828627E0;
void fn_828627E0(Cfg_828627E0 *c, Buf_828627E0 *a, Buf_828627E0 *b)
{
  Rec_828627E0 *s = (Rec_828627E0 *)(a->base + c->off);
  Rec_828627E0 *d = (Rec_828627E0 *)(b->base + c->off);
  int i;
  d->f = s->f;
  for (i = 0; i < c->n + 2; i++) {
    d->q[i] = s->q[i];
  }
  d->h = s->h;
}
