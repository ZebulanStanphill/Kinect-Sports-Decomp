void __emit(unsigned int opcode);
#define __lwsync() __emit(0x7C2004AC)

extern void fn_82687270(void *p);
extern void *fn_8268ACE8(void *p);
extern void fn_8268C750(void *dst, void *src);
extern void fn_826D7220(void *p);
extern void *fn_826E5AE8(void *a, void *desc, void *b, int c, int d);

typedef struct { int kind; char a[4]; char b[8]; } Desc;

typedef struct {
  char pad[0x10];
  void *v10;
  void *v14;
  char s18[4];
  char s1c[4];
  char s20[4];
  void *res;
  int ready;
} Obj;

static void set_res(Obj *o, void *r)
{
  if (o->res) fn_82687270(o->res);
  o->res = r;
}

void fn_826F8890(Obj *o)
{
  Desc d1;
  Desc d2;
  if (fn_8268ACE8(o->s20)) {
    d1.kind = 3;
    fn_8268C750(d1.a, o->s20);
    fn_8268C750(d1.b, o->s18);
    set_res(o, fn_826E5AE8(o->v10, &d1, o->v14, 0, 0));
    fn_826D7220(&d1);
  }
  if ((int)o->res == 0) {
    d2.kind = 3;
    fn_8268C750(d2.a, o->s1c);
    fn_8268C750(d2.b, o->s18);
    set_res(o, fn_826E5AE8(o->v10, &d2, o->v14, 0, 0));
    fn_826D7220(&d2);
  }
  __lwsync();
  o->ready = 1;
}
