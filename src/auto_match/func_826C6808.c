typedef struct Iface_826C6808 Iface_826C6808;
typedef struct IVT_826C6808 {
  void *f0, *f4, *f8;
  void (*fc)(Iface_826C6808 *);
  void *f10, *f14;
  void (*f18)(Iface_826C6808 *);
} IVT_826C6808;
struct Iface_826C6808 { IVT_826C6808 *vt; };

typedef struct Rc_826C6808 {
  char pad[0xc];
  Iface_826C6808 *f0c;
  char pad10[0x1c - 0x10];
  int cnt;
} Rc_826C6808;

typedef struct Obj_826C6808 {
  int *vt;
  int f4;
  int f8;
  int fc;
  Rc_826C6808 *f10;
} Obj_826C6808;

extern void fn_8267C488(void *);
extern void fn_8267C4F0(int);
extern void fn_82687270(Rc_826C6808 *);
extern int lbl_8200BD9C[];

void fn_826C6808(Obj_826C6808 *self)
{
  Rc_826C6808 *rc;
  self->vt = lbl_8200BD9C;
  if (self->f8 != 0)
    ((Iface_826C6808 *)self->f8)->vt->fc((Iface_826C6808 *)self->f8);
  rc = self->f10;
  if (rc != 0) {
    rc->cnt = rc->cnt - 1;
    if (self->f10->cnt <= 0)
      self->f10->f0c->vt->f18(self->f10->f0c);
    fn_82687270(self->f10);
  }
  if ((unsigned)self->f8 != 0)
    fn_8267C4F0(self->f8);
  fn_8267C488(self);
}
