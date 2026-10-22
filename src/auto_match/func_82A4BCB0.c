extern void fn_82A4B938(void *, void *);
extern void fn_82A4F4E0(void);
extern void fn_82A5A770(void *, int);
extern void fn_82A5C9E0(void *, void *);

typedef struct Obj Obj;
typedef struct {
  void (*f0)(Obj *);
  void (*f4)(Obj *, int);
  void (*f8)(Obj *);
  void (*fc)(Obj *);
  void (*f10)(Obj *);
  void (*f14)(Obj *);
  void (*f18)(Obj *);
  void (*f1c)(Obj *);
  void (*f20)(Obj *);
  int (*f24)(Obj *);
  int (*f28)(Obj *);
} VT;
struct Obj {
  VT *vt;
};

typedef struct {
  char pad[0x40];
  Obj lock;
} Inner;

typedef struct {
  char pad[0x1c];
  Obj lock;          /* 0x1c */
  char pad2[0x48 - 0x20];
  Inner *inner;      /* 0x48 */
  void *f4c;         /* 0x4c */
  char pad3[0x180 - 0x50];
  int f180;
} Self;

typedef struct {
  int f0;
  Obj obj;
} Arg;

void fn_82A4BCB0(Self *self, Arg *arg)
{
  Obj *lock;
  Obj *o;

  self->inner->lock.vt->f8(&self->inner->lock);
  lock = &self->lock;
  lock->vt->f8(lock);
  o = &arg->obj;
  fn_82A5C9E0(self->f4c, o);
  fn_82A4B938(self, o);
  fn_82A5A770(self->inner, o->vt->f28(o));
  if (o->vt->f24(o) == 2) {
    self->f180 = 0;
  }
  o->vt->f4(o, 0);
  fn_82A4F4E0();
  lock->vt->f14(lock);
  self->inner->lock.vt->f14(&self->inner->lock);
}
