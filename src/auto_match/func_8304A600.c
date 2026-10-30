struct Ob_8304A600;
typedef struct VT_8304A600 { void *s0; void (*f4)(struct Ob_8304A600 *self); void (*f8)(struct Ob_8304A600 *self); } VT_8304A600;
typedef struct Ob_8304A600 { VT_8304A600 *vt; } Ob_8304A600;
typedef struct { VT_8304A600 *vt; int pad[10]; Ob_8304A600 *c2c; int pad2[2]; unsigned int h38; } Obj_8304A600;
extern int fn_82FA5190(unsigned int a, unsigned int b);
extern int fn_8304A420(Obj_8304A600 *o);
extern int fn_8304D648(Obj_8304A600 *o);
extern unsigned int lbl_831BC770;

void fn_8304A600(Obj_8304A600 *o)
{
  fn_8304A420(o);
  if (o->c2c != 0) {
    o->c2c->vt->f4(o->c2c);
    o->c2c = 0;
  }
  o->vt->f8((Ob_8304A600 *)o);
  if (o->h38 != 0) {
    fn_82FA5190(lbl_831BC770, o->h38);
    o->h38 = 0;
  }
  fn_8304D648(o);
}
