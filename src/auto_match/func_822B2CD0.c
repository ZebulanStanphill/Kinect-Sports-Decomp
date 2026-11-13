extern void fn_822B2D28(void *);
extern void fn_8265CA20(void *);
extern char lbl_821AC97C[];

typedef struct Obj_822B2CD0 {
  void *vt;
  void *a;
  void *b;
} Obj_822B2CD0;

void fn_822B2CD0(Obj_822B2CD0 *o)
{
  o->vt = lbl_821AC97C;
  if (o->a != 0) {
    fn_8265CA20(o->a);
  }
  if (o->b != 0) {
    fn_822B2D28(o->b);
  }
}
