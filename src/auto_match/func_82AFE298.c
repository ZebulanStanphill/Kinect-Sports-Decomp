struct Item_82AFE298;
typedef struct Flags_82AFE298 {
  unsigned int pad0 : 7;
  unsigned int b1 : 1;
  unsigned int b2 : 1;
  unsigned int pad1 : 9;
  unsigned int kind : 7;
  unsigned int low : 7;
} Flags_82AFE298;

typedef struct Cont_82AFE298 {
  struct Item_82AFE298 *l1;
  struct Item_82AFE298 *l2;
  Flags_82AFE298 f8;
  unsigned int fc;
  unsigned int w10;
} Cont_82AFE298;

typedef struct Item_82AFE298 {
  unsigned int flags;
  struct Item_82AFE298 *n1;
  struct Item_82AFE298 *n2;
  Cont_82AFE298 *o2;
  Cont_82AFE298 *o1;
} Item_82AFE298;

typedef struct Chunk_82AFE298 {
  unsigned int f0;
  unsigned int f4;
  unsigned int count;
  unsigned int cap;
  unsigned int items[1];
} Chunk_82AFE298;

typedef struct Pool_82AFE298 {
  unsigned int f0;
  unsigned int f4;
} Pool_82AFE298;

typedef struct Ctx_82AFE298 {
  char pad[0x294];
  Pool_82AFE298 *pool;
  char pad2[0x2c4 - 0x298];
  Cont_82AFE298 **tab;
} Ctx_82AFE298;

extern void fn_82AD1B28(Cont_82AFE298 *);
extern Chunk_82AFE298 *fn_82AD6090(Pool_82AFE298 *, int);
extern unsigned short fn_82ADD120(Cont_82AFE298 *);
extern void fn_82B0FC78(Ctx_82AFE298 *, Cont_82AFE298 *);
extern void fn_82B8AC10(Ctx_82AFE298 *, Cont_82AFE298 *, int, int);

void fn_82AFE298(Ctx_82AFE298 *ctx, Cont_82AFE298 *a, Cont_82AFE298 *b, unsigned int p4, int p5)
{
  Item_82AFE298 **pp;
  Item_82AFE298 **q;
  Item_82AFE298 *e;
  Item_82AFE298 *x;
  unsigned int w;
  int ok;

  pp = &a->l1;
  for (;;) {
    e = *pp;
    if (e != 0) ok = 1; else ok = 0;
    if (!ok) break;
    if ((e->flags & 0xe000000) == 0) {
      q = &e->o1->l1;
      for (x = *q; x != e; x = *q) {
        q = &x->n1;
      }
      *q = e->n1;
      e->n1 = b->l1;
      b->l1 = e;
      e->o1 = b;
    }
    if (*pp == e) {
      pp = &e->n1;
    }
  }
  pp = &a->l2;
  for (;;) {
    e = *pp;
    if (e != 0) ok = 1; else ok = 0;
    if (!ok) break;
    if (e->o1 != 0) {
      if (p4 != 0xe4 && (e->flags & 0xe000000) != 0) {
        w = e->flags;
        e->flags = ((((p4 >> (w >> 10 & 6) & 3) << 2 | p4 >> (w >> 8 & 6) & 3) << 2
                     | p4 >> (w >> 6 & 6) & 3) << 2 | p4 >> (w >> 4 & 6) & 3) << 5
                   | (w & 0xffffe01f);
      }
      q = &e->o2->l2;
      for (x = *q; x != e; x = *q) {
        q = &x->n2;
      }
      *q = e->n2;
      e->n2 = b->l2;
      b->l2 = e;
      e->o2 = b;
    }
    if (*pp == e) {
      pp = &e->n2;
    }
  }
  if ((*(unsigned int *)&b->f8 & 0x3f80) == 0x3700) {
    fn_82B0FC78(ctx, b);
  } else {
    fn_82AD1B28(b);
  }
  b->f8.b1 = 1;
  if ((unsigned char)b->f8.b2 == 0 && (unsigned char)a->f8.b2 != 0) {
    b->f8.b2 = 1;
    if ((*(unsigned short *)&a->w10 & 7) != 0) {
      unsigned int i;
      *(unsigned short *)((char *)b + 0x12) = (unsigned short)a->w10;
      b->w10 = (a->w10 & 0x70000) | (b->w10 & 0xfff8ffff);
      i = *(unsigned short *)((char *)a + 0x12);
      for (; i < (a->w10 >> 16 & 7) + (a->w10 & 0xffff); i++) {
        unsigned int off = i * 4;
        if (*(Cont_82AFE298 **)(off + (int)ctx->tab) == a) {
          *(Cont_82AFE298 **)(off + (int)ctx->tab) = b;
        }
      }
    } else {
      Pool_82AFE298 *pl;
      Chunk_82AFE298 *ch;
      unsigned int n;
      *(unsigned short *)((char *)b + 0x12) = fn_82ADD120(a);
      pl = ctx->pool;
      if ((pl->f4 & 1) == 0) {
        ch = (Chunk_82AFE298 *)((pl->f0 & 0xfffffffe) - 4);
        if (ch != 0 && ch->count + 1 <= ch->cap) goto ok;
      }
      ch = fn_82AD6090(pl, 1);
    ok:
      {
        unsigned int *slot = &ch->items[ch->count++];
        *slot = (unsigned int)b;
      }
    }
  }
  fn_82B8AC10(ctx, a, p5, 1);
}
