typedef struct { const char *name; int kind; } Msg_823A0D98;
typedef struct {
  unsigned int flags;
  int f4;
  int f8;
  int fc;
  int f10;
} State_823A0D98;
typedef struct { int vt; } Iface_823A0D98;
typedef struct Iface2_823A0D98 Iface2_823A0D98;
struct Iface2_823A0D98 {
  struct {
    char pad[0x3c];
    int (*f3c)(Iface2_823A0D98 *self);
  } *vt;
};
typedef struct {
  char pad0[0x1f8];
  struct { char pad[0x24]; int f24; } *p1f8;
  char pad1[0x2e0 - 0x1fc];
  Iface2_823A0D98 *p2e0;
} Ctx_823A0D98;

extern char lbl_821B5308[];
extern void fn_824BF8A8(void *dst, Msg_823A0D98 *m);

void fn_823A0D98(State_823A0D98 *s, Ctx_823A0D98 *c, void *dst)
{
  Msg_823A0D98 m;
  int b;
  unsigned int v;

  if ((s->flags & 0x1000) != 0) {
    m.kind = 7;
    m.name = "showvideo";
    fn_824BF8A8(dst, &m);
  }
  if ((s->flags & 4) != 0) {
    m.name = "getready";
    s->f10 = 1;
    m.kind = 7;
    fn_824BF8A8(dst, &m);
  }
  if ((s->flags & 1) != 0) {
    m.name = "serve";
    m.kind = 4;
    fn_824BF8A8(dst, &m);
  }
  if ((s->flags & 0x20) != 0 && s->f10 != 0) {
    s->f10 = 0;
    m.kind = 9;
    m.name = "direction";
    fn_824BF8A8(dst, &m);
    m.name = "direction";
    m.kind = 7;
    fn_824BF8A8(dst, &m);
  }
  if (s->fc == 0 && (s->flags & 0x20) != 0) {
    s->fc = 1;
    m.kind = 9;
    m.name = "firstserve";
    fn_824BF8A8(dst, &m);
    m.name = "firstserve";
    m.kind = 7;
    fn_824BF8A8(dst, &m);
  }
  if ((s->flags & 8) != 0) {
    m.name = "pickuppaddle";
    m.kind = 7;
    fn_824BF8A8(dst, &m);
  }
  if ((s->flags & 0x10) != 0) {
    m.name = "pickuppaddle";
    m.kind = 8;
    fn_824BF8A8(dst, &m);
    m.name = "getready";
    m.kind = 6;
    fn_824BF8A8(dst, &m);
  }
  if ((s->flags & 2) != 0) {
    m.name = "serve";
    m.kind = 5;
    fn_824BF8A8(dst, &m);
  }
  if (c->p1f8 == 0 || c->p1f8->f24 == 0) {
    b = 0;
  } else {
    b = 1;
  }
  if ((s->flags & 0x20) != 0 && b) {
    m.name = "serve";
    m.kind = 7;
    fn_824BF8A8(dst, &m);
  }
  if ((s->flags & 0x40) != 0 && b) {
    m.name = "serve";
    m.kind = 8;
    fn_824BF8A8(dst, &m);
  }
  if (c->p2e0 != 0) {
    v = c->p2e0->vt->f3c(c->p2e0);
  } else {
    v = 0;
  }
  if (s->f8 != 0) {
    s->f8 = 0;
    s->f4 = 0;
  }
  if ((s->flags & 0x80) != 0 && (s->flags & 0x800) != 0 && (v == 1 || v == 2)) {
    m.name = lbl_821B5308;
    m.kind = 8;
    fn_824BF8A8(dst, &m);
  }
  if ((s->flags & 0x200) != 0) {
    m.name = lbl_821B5308;
    s->f4 = 1;
    m.kind = 9;
    fn_824BF8A8(dst, &m);
  }
  if (s->f4 != 0 && (s->flags & 0x400) != 0) {
    m.name = lbl_821B5308;
    s->f8 = 1;
    m.kind = 7;
    fn_824BF8A8(dst, &m);
  }
  s->flags = 0;
}
