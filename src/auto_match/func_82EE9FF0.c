typedef struct Obj_82EE9FF0 {
  char pad0[0x40];
  void *a40;
  void *a44;
  int pad48;
  int a4c;
} Obj_82EE9FF0;
extern int fn_82A1E658(void *);
extern int fn_82A29A38(void *);

void fn_82EE9FF0(Obj_82EE9FF0 *p)
{
  if (p->a4c != 0) {
    fn_82A29A38(p);
  } else {
    if (p->a40 != 0) {
      fn_82A1E658(p->a40);
      p->a40 = 0;
    }
    if (p->a44 != 0) {
      fn_82A1E658(p->a44);
      p->a44 = 0;
    }
    p->a4c = 1;
  }
}
