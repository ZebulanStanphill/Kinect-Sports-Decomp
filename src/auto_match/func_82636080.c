typedef struct { unsigned a; unsigned bits; } Ent_82636080;
typedef struct { char pad[0x4db4]; unsigned flags; } Dev_82636080;
typedef struct { int idx; int pad4[3]; Dev_82636080 *dev; char pad14[0x7c-0x14]; Ent_82636080 *ents; unsigned n; int pad84; int f88; } Ctx_82636080;
int fn_82636080(int *param_1)
{
  Ctx_82636080 *c = (Ctx_82636080 *)((char *)param_1 + *param_1 * 0x26d0);
  unsigned char fl = (unsigned char)((~c->dev->flags >> 4) & 1);
  if (fl) {
    unsigned n = c->n;
    if (n != 0) {
      Ent_82636080 *e = c->ents + n - 1;
      if (e != 0 && ((1u << ((e->bits >> 12) & 0xf)) & 0x607eu) != 0) c->f88 = 1;
    }
  }
  return c->n;
}
