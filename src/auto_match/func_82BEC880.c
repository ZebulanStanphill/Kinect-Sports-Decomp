typedef struct {
  void *vt;
  int x4;
  void *x8;
  char xc[0x20];
  char x2c[0x14];
  unsigned int x40;
  int x44;
  int x48;
  char *x4c;
  int x50;
} Obj;
extern void fn_82BE8CE0(Obj *o);
extern void fn_82BE8D28(void *p);
extern void fn_82BEC770(void *p);
extern void *fn_82BEC810(char *s);
extern void fn_82BF7250(void *p, int n);
extern char lbl_820EB0C8[];

Obj *fn_82BEC880(Obj *o, char *name, unsigned int size, char *ref)
{
  fn_82BE8CE0(o);
  o->x8 = 0;
  o->vt = lbl_820EB0C8;
  fn_82BF7250(o->xc, 10);
  fn_82BEC770(o->x2c);
  o->x40 = 0;
  o->x44 = 0;
  o->x48 = 0;
  o->x4c = ref;
  o->x50 = 0;
  if (name == 0 || *name == 0 || (o->x8 = fn_82BEC810(name)) == 0) {
    o->x50 = 2;
  }
  if (size <= 0x1000) {
    o->x40 = size << 20;
  } else {
    o->x50 = 2;
  }
  if (o->x4c != 0) {
    fn_82BE8D28(o->x4c + 4 + ((int *)*(int *)(o->x4c + 4))[1]);
  } else {
    o->x50 = 2;
  }
  return o;
}
