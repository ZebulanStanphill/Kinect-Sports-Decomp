extern unsigned int lbl_8217C940;
extern unsigned int lbl_8217D070;
extern void fn_8303EA10(void *p);

typedef struct Tail_83033978 {
  int a;
  int b;
  int c;
  int pad;
  int d;
} Tail_83033978;

typedef struct Obj_83033978 {
  void *vt;
  int pad04[6];
  void *vt1c;
  int pad20[0x25 - 8];
  Tail_83033978 tail;   /* 0x94 */
} Obj_83033978;

Obj_83033978 *fn_83033978(Obj_83033978 *o)
{
  Tail_83033978 *t;
  fn_8303EA10(o);
  o->vt = &lbl_8217D070;
  o->vt1c = &lbl_8217C940;
  t = &o->tail;
  t->a = 0;
  t->b = 0;
  t->c = 0;
  t->d = -1;
  return o;
}
