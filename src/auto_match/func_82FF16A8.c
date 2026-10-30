typedef struct Obj68_82FF16A8 Obj68_82FF16A8;
typedef struct Obj70_82FF16A8 Obj70_82FF16A8;
typedef struct Obj38_82FF16A8 Obj38_82FF16A8;

typedef struct {
  void (*f0)(Obj70_82FF16A8 *, int);
} VT70_82FF16A8;
struct Obj70_82FF16A8 {
  VT70_82FF16A8 *vt;
  char pad4[0x58];
  int rc;
};

typedef struct {
  void (*f0)(Obj38_82FF16A8 *, int);
} VT38_82FF16A8;
struct Obj38_82FF16A8 {
  VT38_82FF16A8 *vt;
};

typedef struct {
  char pad0[8];
  void (*f8)(Obj68_82FF16A8 *);
  char padc[0x78 - 0xc];
  void (*f78)(Obj68_82FF16A8 *, Obj70_82FF16A8 *, int, int);
} VT68_82FF16A8;
struct Obj68_82FF16A8 {
  VT68_82FF16A8 *vt;
};

typedef struct {
  char pad0[0x1c];
  unsigned int a : 30;
  unsigned int b : 1;
  unsigned int c : 1;
} Obj17c_82FF16A8;

typedef struct {
  char pad0[0x18];
  unsigned int f18;
  unsigned int f1c;
  int f20;
  int f24;
  char pad28[0x10];
  Obj38_82FF16A8 *f38;
  char pad3c[0x14];
  unsigned int f50;
  char pad54[4];
  unsigned int f58;
  unsigned int f5c;
  char pad60[8];
  Obj68_82FF16A8 *f68;
  int f6c;
  Obj70_82FF16A8 *f70;
  char pad74[0x65];
  unsigned char fd9;
  unsigned char fda;
  char padda[0x138 - 0xdb];
  unsigned int f138;
  char pad13c[0x178 - 0x13c];
  unsigned int f178;
  Obj17c_82FF16A8 *f17c;
  int f180;
} Obj_82FF16A8;

extern char lbl_83264558[];
extern int lbl_832642F4;
extern int lbl_832642F8;
extern int lbl_83264304;
extern int lbl_831BC768;
extern void RtlEnterCriticalSection(void *);
extern void RtlLeaveCriticalSection(void *);
extern void fn_82FEFB40(Obj_82FF16A8 *);
extern void fn_82FEFA98(Obj_82FF16A8 *);
extern int *fn_83000878(Obj68_82FF16A8 *);
extern void fn_8301B970(int, Obj17c_82FF16A8 *, Obj_82FF16A8 *);
extern void fn_82FF5750(int, unsigned int, void *);
extern void fn_82FF5088(int, unsigned int, void *);
extern void fn_82FA5190(int, void *);
extern void fn_82FF25A8(void *, Obj_82FF16A8 *);
extern void fn_830085A8(int);
extern void fn_82FFBCA8(unsigned int, int);
extern void fn_83027F30(unsigned int);

void fn_82FF16A8(Obj_82FF16A8 *self)
{
  Obj70_82FF16A8 *p70;
  Obj38_82FF16A8 *p38;
  int *t;
  int a;

  RtlEnterCriticalSection(lbl_83264558);
  if ((self->fda & 8) == 0) {
    self->fda = self->fda | 8;
    self->f68->vt->f78(self->f68, self->f70, 3, 0);
  }
  fn_82FEFB40(self);
  fn_82FEFA98(self);
  if (self->f17c != 0) {
    if ((unsigned char)self->f17c->b != 0) {
      t = fn_83000878(self->f68);
      t[1] = 0;
      t[0] = 0;
    }
    fn_8301B970(lbl_832642F8, self->f17c, self);
    self->f17c = 0;
    self->f180 = 0;
  }
  if (self->f58 != 0) {
    fn_82FF5750(lbl_832642F4, self->f58, (char *)self + 0xc);
  }
  if (self->f5c != 0) {
    fn_82FF5750(lbl_832642F4, self->f5c, (char *)self + 0xc);
  }
  if ((self->fd9 & 0x20) != 0) {
    self->fd9 = self->fd9 & 0xdf;
  }
  if (self->f50 != 0) {
    fn_82FF5088(lbl_83264304, self->f50, (char *)self + 4);
  }
  p70 = self->f70;
  if (p70 != 0) {
    if (--p70->rc <= 0) {
      a = lbl_831BC768;
      p70->vt->f0(p70, 0);
      fn_82FA5190(a, p70);
    }
  }
  p38 = self->f38;
  if (p38 != 0) {
    a = lbl_831BC768;
    p38->vt->f0(p38, 0);
    fn_82FA5190(a, p38);
    self->f38 = 0;
  }
  if (self->f1c != 0) {
    self->f20 = self->f1c;
    fn_82FA5190(lbl_831BC768, (void *)self->f1c);
    self->f1c = 0;
    self->f20 = 0;
    self->f24 = 0;
  }
  fn_82FF25A8((char *)self->f68 + 0x7c, self);
  if (self->f138 != 0) {
    fn_830085A8(self->f6c);
  }
  if (self->f18 != 0) {
    fn_82FFBCA8(self->f18, 0);
    self->f18 = 0;
  }
  self->f68->vt->f8(self->f68);
  if (self->f178 != 0) {
    fn_83027F30(self->f178);
    self->f178 = 0;
  }
  RtlLeaveCriticalSection(lbl_83264558);
}
