extern int fn_82BE5240(void *o, int code, const char *fmt, int z);
extern void fn_82BE5340(void *p);
extern void fn_82BE5350(void *p);
extern unsigned fn_82BE5378(void *p);
extern void fn_82BE5398(void *p, int a, int b);
extern void fn_830B4CB8(unsigned a, int b);

typedef struct Obj_82BEF890 {
  char pad[0x10]; int f10; char pad2[8]; char f1c[8]; int f24; unsigned f28;
  int f2c; int f30; int pad34; int f38; int f3c;
} Obj_82BEF890;

int fn_82BEF890(Obj_82BEF890 *o, unsigned id)
{
  void *l;
  if (id == 0) {
    return fn_82BE5240(o, 500, "Subscriber %s", 0);
  }
  l = o->f1c;
  fn_82BE5340(l);
  while (o->f24 != 0) {
    if (id == fn_82BE5378(l)) {
      fn_830B4CB8(id, 0);
      fn_82BE5398(l, o->f24, 1);
      if (o->f28 == 0) {
        o->f30 = 0;
        o->f2c = 0;
        o->f3c = 0;
        o->f10 = 1;
        o->f38 = 0;
      }
      break;
    }
    fn_82BE5350(l);
  }
  return 0;
}
