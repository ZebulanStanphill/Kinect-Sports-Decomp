typedef struct { char pad[0x2a]; unsigned short fl; } Item_8278E7B0;
typedef struct { unsigned *data; unsigned pad; unsigned pad2; unsigned pad3; unsigned cap; } Tab_8278E7B0;
typedef struct { char pad[8]; unsigned *tab; char pad2[4]; unsigned cap; char pad3[8]; unsigned heap; char pad4[0x2c]; unsigned char flags; } Self_8278E7B0;
extern int fn_8267B890(unsigned, int, int);
extern int fn_8267C4C8(unsigned);
extern int fn_8278CC58(void *, void *);
extern Item_8278E7B0 *fn_8278CD58(unsigned, Item_8278E7B0 *, unsigned);
extern int fn_8278CF00(Item_8278E7B0 *);
extern int fn_8278E310(void *, void *, void *);
extern int fn_8278E4C0(void *, int);
Item_8278E7B0 *fn_8278E7B0(Self_8278E7B0 *self, Item_8278E7B0 *item)
{
  int idx;
  unsigned *ent;
  unsigned n;
  unsigned m;
  Item_8278E7B0 *r;
  Item_8278E7B0 *key;
  unsigned **tp;

  if ((unsigned char)(item->fl >> 9 & 1) == 0) {
    tp = &self->tab;
    key = item;
    idx = fn_8278CC58(tp, &key);
    if (idx >= 0) ent = (unsigned *)(idx * 0xc + (int)*tp + 0x10); else ent = 0;
    if (ent != 0) {
      fn_8267C4C8(*ent);
      return (Item_8278E7B0 *)*ent;
    }
    n = (unsigned)*tp;
    if (n != 0) n = *(unsigned *)n;
    if (n >= self->cap) fn_8278E4C0(self, 0);
  }
  m = fn_8267B890(self->heap, 0x2c, 0);
  r = m ? fn_8278CD58(m, item, self->heap) : 0;
  key = r;
  if ((self->flags & 1) != 0 && (unsigned char)(r->fl >> 0xb & 1) != 0) fn_8278CF00(r);
  if ((unsigned char)(item->fl >> 9 & 1) == 0) fn_8278E310(&self->tab, &self->tab, &key);
  return r;
}
