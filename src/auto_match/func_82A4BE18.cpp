extern "C" {
void fn_82A40018(void *);
void fn_82A411B8(void *);
void fn_82A412D8(void *);
void fn_82A4B788(void *);
void fn_82A4BB80(void *);
extern void *lbl_82089688[];
extern void *lbl_82089D14[];
extern void *lbl_82089D24[];
extern void *lbl_82089D34[];
extern void *lbl_82089D38[];
extern void *lbl_82089D88[];
}
struct Sub {
  virtual void v0();
  virtual void v1();
  virtual void f8();
  virtual void vc();
  virtual void v10();
  virtual void f14();
};
struct Self {
  void **vt0, **vt4, **vt8, **vtc, **vt10;
  int pad[2];
  Sub sub;  /* 0x1c */
};

extern "C" void fn_82A4BE18(Self *self)
{
  self->vt0 = lbl_82089D38;
  self->vt4 = lbl_82089D88;
  self->vt8 = lbl_82089D34;
  self->vtc = lbl_82089D24;
  self->vt10 = lbl_82089D14;
  self->sub.f8();
  fn_82A4BB80(self);
  fn_82A4B788(self);
  self->sub.f14();
  self->vt0 = 0;
  fn_82A411B8((int *)self + 0x55);
  fn_82A412D8((int *)self + 0x1e);
  fn_82A40018((int *)self + 0x15);
  fn_82A40018(&self->sub);
  self->vt10 = lbl_82089688;
}
