typedef struct Ent_824FAC80 { int a; int b; unsigned int id; } Ent_824FAC80;
typedef struct Hdr_824FAC80 { unsigned short size; unsigned short pad[5]; unsigned short kind; } Hdr_824FAC80;
typedef struct Vt_824FAC80 { unsigned int *w; } Vt_824FAC80;
typedef struct Sub_824FAC80 { char pad[0x44]; int idx; } Sub_824FAC80;
typedef struct Self_824FAC80 { char pad[0x30]; Sub_824FAC80 *sub; } Self_824FAC80;
typedef struct Ctx_824FAC80 {
  unsigned int **tab;
  void *h;
  void *owner;
  Hdr_824FAC80 *list;
} Ctx_824FAC80;
extern Ent_824FAC80 lbl_8218E688[];
extern void fn_824FAD78(void *);
extern void fn_827EF828(void *);
extern void fn_827EFFE8(void *);
extern void fn_827F0180(void *, unsigned int, int, int, int);
extern void fn_82563688(void *, int, void *, void (*)(void *), int);
extern int fn_8255FA88(void *);

int fn_824FAC80(Self_824FAC80 *self, int unused, Ctx_824FAC80 *c)
{
  Hdr_824FAC80 *p;
  int r;
  fn_827EF828(c->h);
  fn_827EFFE8(c->h);
  fn_827F0180(c->h, *c->tab[self->sub->idx + 0x20], 1, 0, 0);
  p = c->list;
  if (p != 0) {
    void *owner = c->owner;
    if (fn_824FAD78 != 0) {
      while (p->kind != 0) {
        if (p->kind >= 0x32 || lbl_8218E688[p->kind].id == p->size) {
          fn_82563688(owner, 0, p, fn_824FAD78, 0);
        }
        p = (Hdr_824FAC80 *)((char *)p + p->size);
      }
    }
  }
  if (c->owner != 0) {
    r = fn_8255FA88(c->owner);
  } else {
    r = 1;
  }
  return r;
}
