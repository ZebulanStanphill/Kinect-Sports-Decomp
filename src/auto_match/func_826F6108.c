typedef struct Rc { int pad[2]; int count; } Rc;
typedef struct Ctx { char pad[0x78]; int m78; } Ctx;
typedef struct Iface { struct IfaceVt *vt; } Iface;
struct IfaceVt { void *f[23]; Ctx *(*f5c)(Iface *); };
typedef struct { char pad[0x68]; Iface *m68; } Self;
extern void fn_82682D30(Self *, Ctx *, char *, unsigned);
extern void fn_826944C8(Rc *);
extern Rc *fn_82694700(int, int);
extern void fn_82696330(char *);
extern unsigned char fn_826B44A0(Ctx *, Rc **, char *, int, int, int, int);

int fn_826F6108(Self *self, unsigned n, int key)
{
  Ctx *c;
  Rc *rc;
  char buf[16];
  if (self->m68 != 0 && n != 0) {
    c = self->m68->vt->f5c(self->m68);
    rc = fn_82694700(c->m78 + 0x254, key);
    rc->count = rc->count + 1;
    buf[0] = 0;
    if (fn_826B44A0(c, &rc, buf, 0, 0, 0, 0) != 0) {
      fn_82682D30(self, c, buf, n);
      fn_82696330(buf);
      { Rc *r = rc; if (--r->count == 0) fn_826944C8(r); }
      return 1;
    }
    fn_82696330(buf);
    { Rc *r = rc; if (--r->count == 0) fn_826944C8(r); }
  }
  return 0;
}
