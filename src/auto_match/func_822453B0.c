extern void fn_822315A0(void *p);
extern void fn_8288B338(void *p);
extern void fn_82897D88(void *p);
extern char lbl_82196884[];
extern char lbl_821970C0[];
extern char lbl_82197534[];
extern char lbl_82197738[];

typedef struct { void *p; } Buf;
typedef struct { void *vtbl; char pad[0x54]; } A;
typedef struct { void *vtbl; char pad[0x64]; } B;
typedef struct { void *vtbl; char pad[0x58]; Buf buf; } C;

typedef struct {
  void *vtbl;
  char pad04[0x30];
  B b34;
  B b9c;
  C c104;
  A a164;
  A a1bc;
  A a214;
  C c26c;
  B barr[15];
  A aarr[15];
} Obj;

static void A_dtor(A *a) { a->vtbl = lbl_821970C0; fn_82897D88(a); }
static void B_dtor(B *b) { b->vtbl = lbl_82197534; fn_82897D88(b); }
static void Buf_dtor(Buf *b) { if (b->p) fn_822315A0(b->p); }
static void C_dtor(C *c) { Buf_dtor(&c->buf); fn_82897D88(c); }

void fn_822453B0(Obj *o)
{
  int i;
  A *a;
  B *b;
  o->vtbl = lbl_82197738;
  a = o->aarr + 15;
  for (i = 14; i >= 0; i--) { a--; A_dtor(a); }
  b = o->barr + 15;
  for (i = 14; i >= 0; i--) { b--; B_dtor(b); }
  C_dtor(&o->c26c);
  A_dtor(&o->a214);
  A_dtor(&o->a1bc);
  A_dtor(&o->a164);
  C_dtor(&o->c104);
  B_dtor(&o->b9c);
  B_dtor(&o->b34);
  o->vtbl = lbl_82196884;
  fn_8288B338(o);
}
