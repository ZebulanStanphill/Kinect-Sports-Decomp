extern void fn_82FA5190(void *heap, void *p);
extern void fn_82FB6790(void *p);
extern unsigned int lbl_8216D428;
extern unsigned int lbl_8216D430;
extern unsigned int lbl_8217C940;
extern void *lbl_831BC768;

typedef struct Obj_82FB2648 {
  void *vt0;
  char pad1[0x18];
  void *vt1c;
  char pad2[0x8c];
  void *vtac;
  char pad3[8];
  void *begin;
  void *end;
  void *cap;
} Obj_82FB2648;

void fn_82FB2648(Obj_82FB2648 *o)
{
  void **p0 = &o->vt0;
  void **p1 = &o->vt1c;
  void **p2 = &o->vtac;
  *p0 = &lbl_8216D430;
  *p1 = &lbl_8217C940;
  *p2 = &lbl_8216D428;
  if (o->begin != 0) {
    o->end = o->begin;
    fn_82FA5190(lbl_831BC768, o->begin);
    o->begin = 0;
    o->end = 0;
    o->cap = 0;
  }
  fn_82FB6790(o);
}
