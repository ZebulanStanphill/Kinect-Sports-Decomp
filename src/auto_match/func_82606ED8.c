extern void fn_8251E370(void *p, int size, int kind);
extern void fn_82604E98(void *self);
extern char lbl_821CA904[];
extern float lbl_821914A0[];

typedef struct { float x, y; } Vec2;

typedef struct {
  void *vtbl;
  char pad4[0x9c];
  char a0[0x1c0];
  char b260[0x14];
  char b274[0x14];
  char b288[0x14];
  char b29c[0x14];
  float f2b0;
  float f2b4;
} Obj;

Obj *fn_82606ED8(Obj *self)
{
  fn_82604E98(self);
  self->vtbl = lbl_821CA904;
  fn_8251E370(self->a0, 0x560, 1);
  fn_8251E370(self->b260, 0x30, 2);
  fn_8251E370(self->b274, 0x30, 2);
  fn_8251E370(self->b288, 0x30, 2);
  fn_8251E370(self->b29c, 0x30, 4);
  {
    Vec2 v;
    v.x = lbl_821914A0[0x3f8];
    v.y = lbl_821914A0[4];
    self->f2b0 = v.x;
    self->f2b4 = v.y;
  }
  return self;
}

