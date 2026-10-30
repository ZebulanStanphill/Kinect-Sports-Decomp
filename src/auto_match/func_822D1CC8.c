extern void *fn_82365BD8(void *, void *);
extern void fn_822D01E8(void *, void *, void *, int, void *, void *);
extern void fn_82230300(void *, int, int);
extern void fn_822315A0(void *);
extern char lbl_821A8D8C[];
extern char lbl_821ADB98[];
extern float lbl_821CC160;

typedef struct {
  void *p;
  void *rc;
} Ref_822D1CC8;

typedef struct {
  char pad0[0x14];
  int f14;
  int f18;
  char pad1c[0x28 - 0x1c];
  char blk[0x84 - 0x28];
} Mid_822D1CC8;

typedef struct {
  void *vt;
  char pad4[0x2c];
  Mid_822D1CC8 mid;
  int fb4;
  int fb8;
  char padbc[0xc8 - 0xbc];
  int fc8;
  int fcc;
  char padd0[4];
  int fd4;
  float fd8;
} Sub_822D1CC8;

typedef struct {
  void *vt;
  int f4;
  int f8;
  int fc;
  Sub_822D1CC8 sub;
} Obj_822D1CC8;

Obj_822D1CC8 *fn_822D1CC8(Obj_822D1CC8 *self, void *a, void *b, void *c, void *d)
{
  Ref_822D1CC8 t1;
  Ref_822D1CC8 t2;
  Ref_822D1CC8 *r;
  Sub_822D1CC8 *s;
  Mid_822D1CC8 *m;

  self->f4 = 1;
  self->vt = lbl_821A8D8C;
  self->f8 = 1;
  s = &self->sub;
  if (s != 0) {
    r = (Ref_822D1CC8 *)fn_82365BD8(&t1, c);
    fn_822D01E8(s, a, b, 1, fn_82365BD8(&t2, r), d);
    m = &s->mid;
    s->vt = lbl_821ADB98;
    m->f14 = 0;
    m->f18 = 0;
    fn_82230300(m->blk, 0, 0);
    s->fb4 = 0;
    s->fb8 = 0;
    s->fc8 = 0;
    s->fcc = 0;
    s->fd8 = lbl_821CC160;
    s->fd4 = 0;
    if (r->rc != 0) fn_822315A0(r->rc);
  }
  return self;
}
