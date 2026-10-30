typedef struct Sub_83034C50 { unsigned int *vt; void *ptr; short len; } Sub_83034C50;
typedef struct Obj_83034C50 {
  unsigned int *vt;
  void *p4;
  Sub_83034C50 sub;
  char pad[0x34 - 0x14];
  void *first;
  void *last;
  void *cap;
} Obj_83034C50;
extern void fn_83034B08(Obj_83034C50 *o);
extern void fn_82FF8410(void *p);
extern void fn_82FA5190(void *alloc, void *p);
extern void *lbl_831BC768;
extern unsigned int lbl_8217BB44;
extern unsigned int lbl_8217D040;
extern unsigned int lbl_8217D1DC;

void fn_83034C50(Obj_83034C50 *o)
{
  Sub_83034C50 *s;
  o->vt = &lbl_8217D1DC;
  fn_83034B08(o);
  if (o->p4 != 0) {
    fn_82FF8410(o->p4);
    fn_82FA5190(lbl_831BC768, o->p4);
    o->p4 = 0;
  }
  if (o->first != 0) {
    o->last = o->first;
    fn_82FA5190(lbl_831BC768, o->first);
    o->first = 0;
    o->last = 0;
    o->cap = 0;
  }
  s = &o->sub;
  s->vt = &lbl_8217BB44;
  if (s->ptr != 0) {
    fn_82FA5190(lbl_831BC768, s->ptr);
    s->ptr = 0;
    s->len = 0;
  }
  o->vt = &lbl_8217D040;
}
