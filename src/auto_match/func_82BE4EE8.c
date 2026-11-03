typedef struct O_82BE4EE8 { void *vt; void *f4; int f8; } O_82BE4EE8;
extern char lbl_820E9238[];
extern void (*lbl_831751CC)(void *);
extern void *fn_82BE1A10(void);
extern void *fn_82BE1FF0(void);
extern void fn_82BEA398(void *, O_82BE4EE8 *);
extern void fn_82BEF890(void *, O_82BE4EE8 *);
void fn_82BE4EE8(O_82BE4EE8 *o)
{
  o->vt = lbl_820E9238;
  if (o->f8 != 0) {
    fn_82BEF890((void *)o->f8, o);
  } else {
    if (fn_82BE1A10() != 0) {
      fn_82BE1A10();
      if (fn_82BE1FF0() != 0) {
        fn_82BE1A10();
        fn_82BEA398(fn_82BE1FF0(), o);
      }
    }
  }
  if (o->f4 != 0) {
    lbl_831751CC(o->f4);
    o->f4 = 0;
  }
}
