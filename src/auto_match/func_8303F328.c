extern int fn_82FA5190(unsigned int, unsigned int);
extern int fn_8302BA30();
extern unsigned int lbl_8217D914;
extern unsigned int lbl_831BC768;


typedef struct Obj_8303F328 { void *vt; int pad[6]; unsigned first; unsigned last; unsigned end; } Obj_8303F328;
extern void fn_8265CA20(void *);

Obj_8303F328 *fn_8303F328(Obj_8303F328 *o, unsigned int flags)
{
  unsigned f;
  { Obj_8303F328 **sub = &o; (*sub)->vt = &lbl_8217D914; }
  f = o->first;
  if (f != 0) {
    o->last = f;
    fn_82FA5190(lbl_831BC768, f);
    o->first = 0;
    o->last = 0;
    o->end = 0;
  }
  fn_8302BA30(o);
  if ((flags & 1) != 0) {
    fn_8265CA20(o);
  }
  return o;
}
