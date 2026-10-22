typedef unsigned int uint;

struct list {
  char pad[0x7c];
};

struct obj {
  struct list a;
  struct list b;
  uint tag;
  void *buf;
};

extern void fn_8265C990(void *p, uint tag);
extern void *fn_82A40C90(struct list *l);
extern void fn_82A41248(struct list *l);
extern void fn_82A4F4E0(void *p);

void fn_82A41AE8(struct obj *o)
{
  void *p;

  while ((p = fn_82A40C90(&o->a)) != 0) {
    if (p != 0) {
      fn_82A4F4E0(p);
    }
  }
  while ((p = fn_82A40C90(&o->b)) != 0) {
    if (p != 0) {
      fn_82A4F4E0(p);
    }
  }
  if (o->buf != 0) {
    fn_8265C990(o->buf, o->tag);
  }
  fn_82A41248(&o->b);
  fn_82A41248(&o->a);
}
