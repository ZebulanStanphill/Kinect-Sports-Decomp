typedef struct Hdr { unsigned flags; int pad4; unsigned f8; } Hdr;
typedef struct Rec { unsigned flags; int p4, p8; Hdr *h; } Rec;
typedef struct Item { int p0, p4; unsigned flags; } Item;
typedef struct Src { char pad[0x34]; Rec *rec; } Src;
extern int fn_82AC9F80(void *, int, int);
extern int fn_82AD12C8(Src *);
extern int fn_82AD17B0(void *, Item *);
extern void fn_82AD1978(Item *, int);
extern void fn_82AD1B28(Item *);
extern Item *fn_82AF7710(void *, int, Item *, Rec *, int);
extern void fn_82AFA378(void *, Item *);
extern void fn_82AFE7E0(void *, Item *, void *, Item *);
extern float fn_82B80EE0(Hdr *, unsigned, unsigned);

void fn_82AFED98(void *ctx, Item *p2, void *p3, Item *p4, Src *p5)
{
  Rec *r = p5->rec;
  Item *it = p4;
  if ((r->h->f8 & 0x3f80) == 16000) {
    if (fn_82B80EE0(r->h, r->flags >> 5 & 3, r->flags & 0x1f) == 0.0f)
      goto done;
  }
  it = fn_82AF7710(ctx, 1, p4, r, fn_82AD17B0(ctx, p4));
  if ((r->flags & 8) != 0)
    fn_82AD1978(it, fn_82AC9F80(ctx, fn_82AD12C8(p5), 0));
  fn_82AD1B28(p4);
  p4->flags |= 0x1000000;
  fn_82AFA378(ctx, it);
done:
  if ((p2->flags & 1) != 0)
    it->flags |= 1;
  fn_82AFE7E0(ctx, p2, p3, it);
  fn_82AFA378(ctx, p4);
}
