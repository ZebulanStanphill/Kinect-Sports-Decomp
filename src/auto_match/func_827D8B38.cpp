inline void *operator new(unsigned int, void *p) throw() { return p; }

struct Val_827D8B38 {
  unsigned a;
  unsigned b;
  Val_827D8B38(const Val_827D8B38 &o) : a(o.a), b(o.b) {}
};
struct Node_827D8B38 {
  unsigned a;
  unsigned b;
  Val_827D8B38 value;
};
struct Alloc_827D8B38 {
  virtual void v0();
  virtual void v1();
  virtual void v2();
  virtual Node_827D8B38 *Alloc(unsigned size, void *hint);
};
struct Sub_827D8B38 {
  Alloc_827D8B38 *a;
  int b;
};
struct Obj_827D8B38 {
  int pad0;
  int pad1;
  Sub_827D8B38 sub;
};

extern "C" void fn_827D8B38(Obj_827D8B38 *self, unsigned a, unsigned b, const Val_827D8B38 *v)
{
  Sub_827D8B38 *s = &self->sub;
  Node_827D8B38 *n = s->a->Alloc(0x10, &s->b);
  n->a = a;
  n->b = b;
  ::new ((void *)&n->value) Val_827D8B38(*v);
}
