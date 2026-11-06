struct Elem_823968D8 { char pad[0x20]; float v; };
struct Tab_823968D8 { Elem_823968D8 **items; int pad[3]; int idx; };
struct VObj_823968D8 {
  virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3();
  virtual void v4(); virtual void v5(); virtual void v6(); virtual void v7();
  virtual void v8(); virtual void v9(); virtual void v10(); virtual void v11();
  virtual void v12(); virtual void v13(); virtual void v14(); virtual void v15();
  virtual void v16();
  virtual float get();
};
struct Obj_823968D8 {
  int pad0[2];
  Tab_823968D8 ***src;
  char pad1[0x2e0 - 0xc];
  VObj_823968D8 *vobj;
  char pad2[0xbc4 - 0x2e4];
  float f_bc4;
  char pad3[0xbd8 - 0xbc8];
  int count;
  float a[4];
  float b[4];
};
extern "C" {
extern void fn_822AE9D8(void *);
extern void fn_82398250(void *, int);
extern void fn_823985A8(void *);
extern float lbl_821CC160;

void fn_823968D8(Obj_823968D8 *self)
{
  fn_822AE9D8(self->src);
  self->f_bc4 = lbl_821CC160;
  fn_823985A8(self);
  fn_82398250(self, 1);
  Tab_823968D8 *t = **self->src;
  float x = t->items[t->idx]->v;
  float y = self->vobj->get();
  self->b[self->count] = y;
  self->a[self->count] = (float)(int)x;
  self->count++;
}
}
