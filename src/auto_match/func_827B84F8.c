extern void fn_8267BE38(void *);
extern void fn_8267C498(void *);
extern void fn_827B5EA8(void *);
extern void fn_827B7040(void *);
extern void fn_827B8018(void *);
extern void fn_827B8478(void *);
extern char lbl_82005BB4[];

typedef struct Str { char d[0x10]; } Str;
typedef struct Inner { void *vtbl; char d[0xc]; } Inner;
typedef struct Elem { int a; Inner b; } Elem;
typedef struct SubA { char p0[8]; void *x8; char pc[8]; Str s14; void *x24; char p28[8]; void *x30; } SubA;
typedef struct SubB { char p0[8]; Str s8; Str s18; } SubB;

typedef struct Obj {
  char p0[0x1c];
  Str s1c;
  void *x2c;
  char p30[8];
  Elem arr[32];
  void *x2b8;
  char p2bc[0x14];
  void *x2d0;
  void *x2d4;
  char p2d8[8];
  void *x2e0;
  char p2e4[8];
  SubB b;
  char p314[0x20];
  SubA a;
  char p368[0x6a0 - 0x368];
  char o6a0[0x70];
  char o710[0x10];
} Obj;

static void Elem_vec_dtor(Elem *arr, int n)
{
  Elem *p = arr + n;
  while (n-- != 0) {
    --p;
    p->b.vtbl = lbl_82005BB4;
  }
}

static void SubA_dtor(SubA *a)
{
  fn_8267BE38(a->x30);
  fn_8267BE38(a->x24);
  fn_827B5EA8(&a->s14);
  fn_8267BE38(a->x8);
}

static void SubB_dtor(SubB *b)
{
  fn_827B5EA8(&b->s18);
  fn_827B5EA8(&b->s8);
}

void fn_827B84F8(Obj *o)
{
  fn_827B8018(o);
  fn_827B8478(o->o710);
  fn_827B7040(o->o6a0);
  SubA_dtor(&o->a);
  SubB_dtor(&o->b);
  fn_8267BE38(o->x2e0);
  fn_8267BE38(o->x2d4);
  if (o->x2d0 != 0) {
    fn_8267C498(o->x2d0);
  }
  if (o->x2b8 != 0) {
    fn_8267C498(o->x2b8);
  }
  Elem_vec_dtor(o->arr, 32);
  fn_8267BE38(o->x2c);
  fn_827B5EA8(&o->s1c);
}
