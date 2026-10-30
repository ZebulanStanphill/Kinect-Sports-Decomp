extern int fn_823B78E0();
extern int fn_82529320();
extern int fn_8265CA20();
extern int fn_82D89B48(int, void *);
extern unsigned int lbl_821B5BEC;
extern unsigned int lbl_821B8584;

typedef struct Vt_824205C8 { void *s[3]; void (*f)(void *, int); } Vt_824205C8;
typedef struct Ch_824205C8 { Vt_824205C8 *vt; } Ch_824205C8;
typedef struct Dev_824205C8 { char pad[0x7c0]; int f7c0; } Dev_824205C8;
typedef struct Obj_824205C8 {
  void *vt;
  void *f4;
  char pad8[8];
  Dev_824205C8 *dev;
  char pad14[0x3c];
  Ch_824205C8 *child;
} Obj_824205C8;

Obj_824205C8 *fn_824205C8(Obj_824205C8 *p, unsigned int flags)
{
  p->vt = &lbl_821B8584;
  if (p->child != 0) {
    Ch_824205C8 *c;
    fn_82D89B48(*(int *)((char *)p->dev + 0x7c0), p->child);
    c = p->child;
    if (c != 0) {
      c->vt->f(c, 1);
    }
    p->child = 0;
  }
  fn_82529320(p->dev, 0);
  p->dev = 0;
  p->vt = &lbl_821B5BEC;
  if (p->f4 != 0) {
    fn_823B78E0(p->f4, p);
  }
  if ((flags & 1) != 0) {
    fn_8265CA20(p);
  }
  return p;
}
