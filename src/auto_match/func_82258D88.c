extern void fn_822315A0(void *p);
extern void fn_82233720(void *p);
extern void fn_82897D88(void *p);
extern char lbl_821970C0[];
extern char lbl_821972BC[];
extern char lbl_82198390[];
extern char lbl_821983D0[];
extern char lbl_82198460[];

typedef struct A {
  void *vtbl;
  char pad[0x54];
} A;

typedef struct C { void *buf; } C;
typedef struct B {
  char pad[0x5c];
  C c;
} B;
static void C_dtor(C *c) { if (c->buf != 0) { fn_822315A0(c->buf); } }

typedef struct Obj {
  void *vtbl;
  char pad0[0x20c - 4];
  A a20c;
  A a264;
  A a2bc;
  A a314;
  A a36c;
  A a3c4;
  A a41c;
  A a474;
  A a4cc;
  B b524;
  A a584;
  A a5dc;
  A a634;
} Obj;

static void B_dtor(B *b)
{
  C_dtor(&b->c);
  fn_82897D88(b);
}

static void A1_dtor(A *a) { a->vtbl = lbl_821970C0; fn_82897D88(a); }
static void A2_dtor(A *a) { a->vtbl = lbl_821972BC; fn_82897D88(a); }
static void A3_dtor(A *a) { a->vtbl = lbl_82198390; fn_82897D88(a); }
static void A4_dtor(A *a) { a->vtbl = lbl_821983D0; fn_82897D88(a); }

void fn_82258D88(Obj *p)
{
  p->vtbl = lbl_82198460;
  A1_dtor(&p->a634);
  A1_dtor(&p->a5dc);
  A2_dtor(&p->a584);
  B_dtor(&p->b524);
  A3_dtor(&p->a4cc);
  A1_dtor(&p->a474);
  A1_dtor(&p->a41c);
  A4_dtor(&p->a3c4);
  A4_dtor(&p->a36c);
  A4_dtor(&p->a314);
  A4_dtor(&p->a2bc);
  A1_dtor(&p->a264);
  A2_dtor(&p->a20c);
  fn_82233720(p);
}
