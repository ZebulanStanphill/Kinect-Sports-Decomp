typedef struct {
  int a;
  int b;
  double num;
} Value_8229A000;

typedef struct {
  void *movie;
  int pad4;
  unsigned int count;
  char padC[0x120C - 0xC];
  int state;
  char pad1210[0x1220 - 0x1210];
  int ready;
  int hidden;
} Obj_8229A000;

extern void fn_82273C88(Value_8229A000 *);
extern void fn_82273CD8(Value_8229A000 *, int);
extern void fn_8229A230(Obj_8229A000 *);
extern void fn_82672C20(void *, const char *, Value_8229A000 *, int);

void fn_8229A000(Obj_8229A000 *o)
{
  if (o->hidden == 0 && o->ready != 0) {
    Value_8229A000 v;
    double d;
    v.a = 0;
    v.b = 0;
    d = (double)o->count;
    fn_82273CD8(&v, 3);
    v.num = d;
    fn_82672C20(o->movie, "_root.mainCtrl.hide", &v, 1);
    o->hidden = 1;
    fn_82273C88(&v);
  } else if (o->state == 1) {
    fn_8229A230(o);
  }
}
